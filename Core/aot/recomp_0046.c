/* Generated ELF translation shard 46: 234 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_004329C0
 * Original: 0x004329C0 - 0x00432A50 (144 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004329C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004329C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004329CEu); RECOMP_ABI_CALL(0x00432A50u, sub_00432A50); /* call 0x00432A50 */

loc_004329CE: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xDFCC2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xDFCC2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004329DB; /* je: equal / zero */

loc_004329D9: ;
    goto loc_00432A4B;

loc_004329DB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004329E0u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_004329E0: ;
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;
    eax = 0xDFCC04;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004329F3u); RECOMP_ABI_CALL(0x004320E0u, sub_004320E0); /* call 0x004320E0 */

loc_004329F3: ;
    eax = 0xDFCBF4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432A01u); RECOMP_ABI_CALL(0x00432610u, sub_00432610); /* call 0x00432610 */

loc_00432A01: ;
    eax = MEM32(0xDFCC24);
    ecx = MEM32(0xDFCC28);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00432A11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00432A11: ;
    eax = 0xDFCC04;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432A1Fu); RECOMP_ABI_CALL(0x004320E0u, sub_004320E0); /* call 0x004320E0 */

loc_00432A1F: ;
    eax = 0xDFCC14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432A2Du); RECOMP_ABI_CALL(0x00432610u, sub_00432610); /* call 0x00432610 */

loc_00432A2D: ;
    eax = 0xDFCC04;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432A3Bu); RECOMP_ABI_CALL(0x004320E0u, sub_004320E0); /* call 0x004320E0 */

loc_00432A3B: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432A46u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00432A46: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;

loc_00432A4B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432A50
 * Original: 0x00432A50 - 0x00432A60 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432A50(void)
{
    uint32_t ebp = g_ebp;

loc_00432A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432A5Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_00432A5B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432A60
 * Original: 0x00432A60 - 0x00432AD7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432A60(void)
{
    uint32_t ebp = g_ebp;

loc_00432A60: ;
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
    PUSH32(esp, 0x00432AD2u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00432AD2: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432AE0
 * Original: 0x00432AE0 - 0x00432B6B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432AE0(void)
{
    uint32_t ebp = g_ebp;

loc_00432AE0: ;
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
    PUSH32(esp, 0x00432B63u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00432B63: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432B70
 * Original: 0x00432B70 - 0x00432B78 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432B70(void)
{
    uint32_t ebp = g_ebp;

loc_00432B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432B80
 * Original: 0x00432B80 - 0x00432BC0 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432B80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432B80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;

loc_00432B86: ;
    eax = MEM32(0xDFCC30);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00432BBB; /* je: equal / zero */

loc_00432B93: ;
    eax = MEM32(ebp + -4);
    edx = 0xDFCC30;
    ecx = edx;
    ecx = ecx + 4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432BB9u); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_00432BB9: ;
    goto loc_00432B86;

loc_00432BBB: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432BC0
 * Original: 0x00432BC0 - 0x00432BD9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432BC0(void)
{
    uint32_t ebp = g_ebp;

loc_00432BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0xDFCC30;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432BD4u); RECOMP_ABI_CALL(0x00432BE0u, sub_00432BE0); /* call 0x00432BE0 */

loc_00432BD4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432BE0
 * Original: 0x00432BE0 - 0x00432BF1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432BE0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432BE0: ;
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
 * sub_00432C00
 * Original: 0x00432C00 - 0x00432C4E (78 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432C00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0xDFCC30;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432C1Cu); RECOMP_ABI_CALL(0x00432C50u, sub_00432C50); /* call 0x00432C50 */

loc_00432C1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00432C49; /* jne: not equal / not zero */

loc_00432C21: ;
    eax = MEM32(0xDFCC34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00432C49; /* je: equal / zero */

loc_00432C2B: ;
    eax = 0xDFCC30;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432C49u); RECOMP_ABI_CALL(0x00432C70u, sub_00432C70); /* call 0x00432C70 */

loc_00432C49: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432C50
 * Original: 0x00432C50 - 0x00432C6B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432C50(void)
{
    uint32_t ebp = g_ebp;

loc_00432C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    { uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), eax);
      eax = _old; }  /* lock xadd */
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432C70
 * Original: 0x00432C70 - 0x00432D41 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432C70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432C70: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_00432C8F; /* je: equal / zero */

loc_00432C88: ;
    MEM32(ebp + 0x10) = 0x80;

loc_00432C8F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00432C9C; /* jge: greater or equal (signed >=) */

loc_00432C95: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_00432C9C: ;
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
    PUSH32(esp, 0x00432CE3u); RECOMP_ABI_CALL(0x00432D50u, sub_00432D50); /* call 0x00432D50 */

loc_00432CE3: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00432D36; /* jne: not equal / not zero */

loc_00432CEF: ;
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
    PUSH32(esp, 0x00432D2Du); RECOMP_ABI_CALL(0x00432D50u, sub_00432D50); /* call 0x00432D50 */

loc_00432D2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_00432D36: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432D50
 * Original: 0x00432D50 - 0x00432DEB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432D50(void)
{
    uint32_t ebp = g_ebp;

loc_00432D50: ;
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
    PUSH32(esp, 0x00432DE3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00432DE3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432DF0
 * Original: 0x00432DF0 - 0x00432F2C (316 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432DF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -152) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -160) = eax;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0x88800;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432E4Au); RECOMP_ABI_CALL(0x00432F30u, sub_00432F30); /* call 0x00432F30 */

loc_00432E4A: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432E52u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00432E52: ;
    MEM32(ebp + -156) = eax;
    _fa = (uint32_t)(MEM32(ebp + -156)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -156), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00432E6D; /* jge: greater or equal (signed >=) */

loc_00432E61: ;
    MEM32(ebp + -4) = 0;
    goto loc_00432F21;

loc_00432E6D: ;
    ecx = MEM32(ebp + -156);
    eax = ebp + -148;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432E85u); RECOMP_ABI_CALL(0x00415EB0u, sub_00415EB0); /* call 0x00415EB0 */

loc_00432E85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00432ED0; /* jne: not equal / not zero */

loc_00432E8A: ;
    ecx = MEM32(ebp + -104);
    edx = MEM32(ebp + -156);
    eax = esp;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0xC) = 1;
    MEM32(eax + 8) = 1;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432EC2u); RECOMP_ABI_CALL(0x0040F7B0u, sub_0040F7B0); /* call 0x0040F7B0 */

loc_00432EC2: ;
    MEM32(ebp + -152) = eax;
    ecx = MEM32(ebp + -104);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_00432ED0: ;
    ecx = MEM32(ebp + -156);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x39;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432EF5u); RECOMP_ABI_CALL(0x00432FD0u, sub_00432FD0); /* call 0x00432FD0 */

loc_00432EF5: ;
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -152)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -152), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00432F0C; /* jne: not equal / not zero */

loc_00432F02: ;
    eax = 0; /* xor self */
    MEM32(ebp + -164) = eax;
    goto loc_00432F18;

loc_00432F0C: ;
    eax = MEM32(ebp + -152);
    MEM32(ebp + -164) = eax;

loc_00432F18: ;
    eax = MEM32(ebp + -164);
    MEM32(ebp + -4) = eax;

loc_00432F21: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0xC8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432F30
 * Original: 0x00432F30 - 0x00432FCB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432F30(void)
{
    uint32_t ebp = g_ebp;

loc_00432F30: ;
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
    PUSH32(esp, 0x00432FC3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00432FC3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432FD0
 * Original: 0x00432FD0 - 0x0043304F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432FD0(void)
{
    uint32_t ebp = g_ebp;

loc_00432FD0: ;
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
    PUSH32(esp, 0x00433048u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00433048: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433050
 * Original: 0x00433050 - 0x00433086 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433050(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax * 4 + 0x508D38);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043307E; /* je: equal / zero */

loc_0043306D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043307E; /* jl: less (signed <) */

loc_00433073: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x15180;
    MEM32(ebp + -4) = eax;

loc_0043307E: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433090
 * Original: 0x00433090 - 0x0043340F (895 bytes, 279 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433090(void)
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00433090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x64));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x64)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xFF0EBD80u));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xFF0EBD80u)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (CMP_L((uint32_t)eax + (uint32_t)0xFF0EBD80u, (uint32_t)0xFF0EBD80u)) goto loc_004330C1; /* jl: less (signed <) */

loc_004330AA: ;
    goto loc_004330AC;

loc_004330AC: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0xFE1D7B01u));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0xFE1D7B01u)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    {
      _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF1427F) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      eax = _sbb_result;
    } /* sbb */
    if ((_sbb_sf != _sbb_of)) goto loc_004330CD; /* jl: less (signed <) */

loc_004330BF: ;
    goto loc_004330C1;

loc_004330C1: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_00433406;

loc_004330CD: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC743A280u)) >> 32) & 1);
    ecx = ecx + 0xC743A280u;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + -24);
    edx = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x15180;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433102u); RECOMP_ABI_CALL(0x0043CFF0u, sub_0043CFF0); /* call 0x0043CFF0 */

loc_00433102: ;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -24);
    edx = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x15180;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433128u); RECOMP_ABI_CALL(0x0043D050u, sub_0043D050); /* call 0x0043D050 */

loc_00433128: ;
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00433149; /* jge: greater or equal (signed >=) */

loc_00433131: ;
    eax = MEM32(ebp + -40);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x15180)) >> 32) & 1);
    eax = eax + 0x15180;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -12)) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -12) = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -16) = eax;

loc_00433149: ;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(3)) >> 32) & 1);
    edx = edx + 3;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    eax = esp;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 7;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043316Fu); RECOMP_ABI_CALL(0x0043D050u, sub_0043D050); /* call 0x0043D050 */

loc_0043316F: ;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -64), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00433181; /* jge: greater or equal (signed >=) */

loc_00433178: ;
    eax = MEM32(ebp + -64);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    MEM32(ebp + -64) = eax;

loc_00433181: ;
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x23AB1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004331A1u); RECOMP_ABI_CALL(0x0043CFF0u, sub_0043CFF0); /* call 0x0043CFF0 */

loc_004331A1: ;
    MEM32(ebp + -48) = eax;
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x23AB1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004331C4u); RECOMP_ABI_CALL(0x0043D050u, sub_0043D050); /* call 0x0043D050 */

loc_004331C4: ;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004331E1; /* jge: greater or equal (signed >=) */

loc_004331CD: ;
    eax = MEM32(ebp + -36);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x23AB1)) >> 32) & 1);
    eax = eax + 0x23AB1;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -48);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -48) = eax;

loc_004331E1: ;
    eax = MEM32(ebp + -36);
    ecx = 0x8EAC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 4 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004331FE; /* jne: not equal / not zero */

loc_004331F5: ;
    eax = MEM32(ebp + -52);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -52) = eax;

loc_004331FE: ;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -52) * (int32_t)0x8EAC);
    eax = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    ecx = 0x5B5;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x19 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043322A; /* jne: not equal / not zero */

loc_00433221: ;
    eax = MEM32(ebp + -56);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -56) = eax;

loc_0043322A: ;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -56) * (int32_t)0x5B5);
    eax = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    ecx = 0x16D;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -44) = eax;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 4 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433256; /* jne: not equal / not zero */

loc_0043324D: ;
    eax = MEM32(ebp + -44);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -44) = eax;

loc_00433256: ;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -44) * (int32_t)0x16D);
    eax = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -36) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -73) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0043328D; /* jne: not equal / not zero */

loc_00433270: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -74) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00433287; /* jne: not equal / not zero */

loc_0043327B: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -74) = LO8(eax);

loc_00433287: ;
    SET_LO8(eax, MEM8(ebp + -74));
    MEM8(ebp + -73) = LO8(eax);

loc_0043328D: ;
    SET_LO8(eax, MEM8(ebp + -73));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -36);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1F)) >> 32) & 1);
    eax = eax + 0x1F;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1C)) >> 32) & 1);
    eax = eax + 0x1C;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -72))) >> 32) & 1);
    eax = eax + MEM32(ebp + -72);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + -68);
    ecx = MEM32(ebp + -72);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x16D)) >> 32) & 1);
    ecx = ecx + 0x16D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004332C8; /* jl: less (signed <) */

loc_004332B7: ;
    ecx = MEM32(ebp + -72);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x16D)) >> 32) & 1);
    ecx = ecx + 0x16D;
    eax = MEM32(ebp + -68);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -68) = eax;

loc_004332C8: ;
    eax = MEM32(ebp + -44);
    ecx = MEM32(ebp + -56);
    ecx = eax + ecx * 4;
    eax = MEM32(ebp + -52);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -48);
    edx = 0x190;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = eax;
    eax = MEM32(ebp + -80);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -60) = 0;

loc_00433301: ;
    eax = MEM32(ebp + -60);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x508D68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0043332F; /* jg: greater (signed >) */

loc_00433311: ;
    eax = MEM32(ebp + -60);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x508D68);
    eax = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -60);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -60) = eax;
    goto loc_00433301;

loc_0043332F: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0xA (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0043334B; /* jl: less (signed <) */

loc_00433335: ;
    eax = MEM32(ebp + -60);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF4u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF4u;
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -32);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -28)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -28) = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -32) = eax;

loc_0043334B: ;
    esi = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x64)) >> 32) & 1);
    esi = esi + 0x64;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edx = 0x7FFFFFFF;
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
    if ((_sbb_sf != _sbb_of)) goto loc_00433384; /* jl: less (signed <) */

loc_00433364: ;
    goto loc_00433366;

loc_00433366: ;
    edx = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x64)) >> 32) & 1);
    edx = edx + 0x64;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    eax = 0x7FFFFFFF;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = 0xFFFFFFFFu;
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
    if ((_sbb_sf != _sbb_of)) goto loc_0043338D; /* jl: less (signed <) */

loc_00433382: ;
    goto loc_00433384;

loc_00433384: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_00433406;

loc_0043338D: ;
    ecx = MEM32(ebp + -32);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x64)) >> 32) & 1);
    ecx = ecx + 0x64;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -60);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -36);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + -64);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -68);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(ebp + -40);
    ecx = 0xE10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -40);
    ecx = 0x3C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0x3C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 4) = edx;
    eax = MEM32(ebp + -40);
    ecx = 0x3C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edx;
    MEM32(ebp + -8) = 0;

loc_00433406: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x64)) >> 32) & 1);
    esp = esp + 0x64;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433410
 * Original: 0x00433410 - 0x00433552 (322 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433410(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00433410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    esp = esp - 0x34;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00433440; /* jge: greater or equal (signed >=) */

loc_0043343A: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0043348C; /* jge: greater or equal (signed >=) */

loc_00433440: ;
    eax = MEM32(ebp + -20);
    ecx = 0xC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -20);
    ecx = 0xC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -20) = edx;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00433474; /* jge: greater or equal (signed >=) */

loc_00433462: ;
    eax = MEM32(ebp + -24);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    MEM32(ebp + -20) = eax;

loc_00433474: ;
    esi = MEM32(ebp + -24);
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;

loc_0043348C: ;
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    eax = esp;
    esi = ebp + -8;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004334A4u); RECOMP_ABI_CALL(0x00434BB0u, sub_00434BB0); /* call 0x00434BB0 */

loc_004334A4: ;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + -20);
    edx = MEM32(ebp + -8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004334BCu); RECOMP_ABI_CALL(0x00433050u, sub_00433050); /* call 0x00433050 */

loc_004334BC: ;
    edx = eax;
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    eax = MEM32(ebp + -32);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -28)) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -28) = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    eax--;
    ecx = 0x15180;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = eax;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = 0xE10;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = eax;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    ecx = 0x3C;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = eax;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax);
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433560
 * Original: 0x00433560 - 0x0043385A (762 bytes, 242 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433560(void)
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00433560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = 0xDFCC48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043358Bu); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_0043358B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433590u); RECOMP_ABI_CALL(0x00433E70u, sub_00433E70); /* call 0x00433E70 */

loc_00433590: ;
    _fa = (uint32_t)(MEM32(0xDFCC4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC4C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433641; /* je: equal / zero */

loc_0043359D: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    eax = esp;
    edi = ebp + -12;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004335BBu); RECOMP_ABI_CALL(0x00433860u, sub_00433860); /* call 0x00433860 */

loc_004335BB: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043363F; /* je: equal / zero */

loc_004335C4: ;
    eax = MEM32(0xDFCC50);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -16) * (int32_t)6);
    ecx = ZX8(MEM8(eax + ecx + 4));
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    eax = MEM32(0xDFCC50);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -16) * (int32_t)6);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004335EAu); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_004335EA: ;
    ecx = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(0xDFCC54);
    eax = MEM32(0xDFCC50);
    edx = (uint32_t)((int32_t)MEM32(ebp + -16) * (int32_t)6);
    eax = ZX8(MEM8(eax + edx + 5));
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043362C; /* je: equal / zero */

loc_00433612: ;
    eax = MEM32(0xDFCC50);
    ecx = (uint32_t)((int32_t)MEM32(ebp + -12) * (int32_t)6);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433625u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00433625: ;
    ecx = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = ecx;

loc_0043362C: ;
    eax = 0xDFCC48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043363Au); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_0043363A: ;
    goto loc_00433853;

loc_0043363F: ;
    goto loc_00433641;

loc_00433641: ;
    _fa = (uint32_t)(MEM32(0xDFCC3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC3C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043364F; /* jne: not equal / not zero */

loc_0043364A: ;
    goto loc_004337CD;

loc_0043364F: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x1E18558;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043366Fu); RECOMP_ABI_CALL(0x0043CFF0u, sub_0043CFF0); /* call 0x0043CFF0 */

loc_0043366F: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x46)) >> 32) & 1);
    eax = eax + 0x46;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = edx;

loc_0043367B: ;
    ecx = MEM32(ebp + -24);
    edx = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433694u); RECOMP_ABI_CALL(0x00434BB0u, sub_00434BB0); /* call 0x00434BB0 */

loc_00433694: ;
    esi = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
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
    if (!(_sbb_sf != _sbb_of)) goto loc_004336B3; /* jge: greater or equal (signed >=) */

loc_004336A2: ;
    goto loc_004336A4;

loc_004336A4: ;
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(MEM32(ebp + -24)) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 0xFFFFFFFFu;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -20) = eax;
    goto loc_0043367B;

loc_004336B3: ;
    goto loc_004336B5;

loc_004336B5: ;
    ecx = MEM32(ebp + -24);
    edx = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004336D4u); RECOMP_ABI_CALL(0x00434BB0u, sub_00434BB0); /* call 0x00434BB0 */

loc_004336D4: ;
    ecx = eax;
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    {
      _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      edx = _sbb_result;
    } /* sbb */
    if (!(_sbb_sf != _sbb_of)) goto loc_004336F3; /* jge: greater or equal (signed >=) */

loc_004336E2: ;
    goto loc_004336E4;

loc_004336E4: ;
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(MEM32(ebp + -24)) + (uint64_t)(1)) >> 32) & 1);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 1;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -20) = eax;
    goto loc_004336B5;

loc_004336F3: ;
    ecx = MEM32(ebp + -24);
    eax = esp;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0xDFCC58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433706u); RECOMP_ABI_CALL(0x00433C20u, sub_00433C20); /* call 0x00433C20 */

loc_00433706: ;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + -24);
    eax = esp;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0xDFCC6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043371Fu); RECOMP_ABI_CALL(0x00433C20u, sub_00433C20); /* call 0x00433C20 */

loc_0043371F: ;
    MEM32(ebp + -36) = edx;
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433761; /* jne: not equal / not zero */

loc_0043372B: ;
    esi = MEM32(0xDFCC38);
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = eax;
    esi = MEM32(0xDFCC80);
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -36);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = eax;

loc_00433761: ;
    edx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    esi = MEM32(ebp + -40);
    ecx = MEM32(ebp + -36);
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
    if (!(_sbb_sf != _sbb_of)) goto loc_004337A1; /* jge: greater or equal (signed >=) */

loc_00433773: ;
    goto loc_00433775;

loc_00433775: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
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
    if ((_sbb_sf != _sbb_of)) goto loc_0043379F; /* jl: less (signed <) */

loc_00433787: ;
    goto loc_00433789;

loc_00433789: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -40);
    ecx = MEM32(ebp + -36);
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
    if (!(_sbb_sf != _sbb_of)) goto loc_0043379F; /* jge: greater or equal (signed >=) */

loc_0043379B: ;
    goto loc_0043379D;

loc_0043379D: ;
    goto loc_00433811;

loc_0043379F: ;
    goto loc_004337CD;

loc_004337A1: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -40);
    ecx = MEM32(ebp + -36);
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
    if ((_sbb_sf != _sbb_of)) goto loc_004337CB; /* jl: less (signed <) */

loc_004337B3: ;
    goto loc_004337B5;

loc_004337B5: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
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
    if (!(_sbb_sf != _sbb_of)) goto loc_004337CB; /* jge: greater or equal (signed >=) */

loc_004337C7: ;
    goto loc_004337C9;

loc_004337C9: ;
    goto loc_004337CD;

loc_004337CB: ;
    goto loc_00433811;

loc_004337CD: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 0;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(0xDFCC38)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(0xDFCC38))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004337F6; /* je: equal / zero */

loc_004337E9: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(0xDFCC80)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(0xDFCC80))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = ecx;

loc_004337F6: ;
    ecx = MEM32(0xDFCC40);
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = ecx;
    eax = 0xDFCC48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043380Fu); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_0043380F: ;
    goto loc_00433853;

loc_00433811: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 1;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(0xDFCC80)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(0xDFCC80))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043383A; /* je: equal / zero */

loc_0043382D: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(0xDFCC38)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(0xDFCC38))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0x1C);
    MEM32(eax) = ecx;

loc_0043383A: ;
    ecx = MEM32(0xDFCC44);
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = ecx;
    eax = 0xDFCC48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433853u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00433853: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433860
 * Original: 0x00433860 - 0x00433BD5 (885 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433860(void)
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00433860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x44)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(0xDFCC8C);
    ecx = MEM32(0xDFCC4C);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x2C)) >> 32) & 1);
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = 3;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -28) = 0;
    MEM32(ebp + -32) = 0;
    eax = MEM32(0xDFCC90);
    ecx = MEM32(0xDFCC8C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = MEM32(ebp + -12);
    eax = RECOMP_SAR(eax, LO8(ecx), 32, &_cf);
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004338D9; /* jne: not equal / not zero */

loc_004338BE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004338CD; /* je: equal / zero */

loc_004338C4: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 0;

loc_004338CD: ;
    MEM32(ebp + -8) = 0;
    goto loc_00433BCC;

loc_004338D9: ;
    goto loc_004338DB;

loc_004338DB: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 1 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_004339C3; /* jbe: below or equal (unsigned <=) */

loc_004338E5: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 1, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(ebp + -40) = eax;
    eax = MEM32(0xDFCC8C);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -40);
    SET_LO8(ecx, MEM8(ebp + -12));
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + -52);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433910u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00433910: ;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 3 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043394D; /* jne: not equal / not zero */

loc_00433920: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -56) = eax;
    eax = MEM32(0xDFCC8C);
    edx = MEM32(ebp + -40);
    SET_LO8(ecx, MEM8(ebp + -12));
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    ecx = eax + ecx + 4;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433942u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00433942: ;
    ecx = MEM32(ebp + -56);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = eax;
    goto loc_00433956;

loc_0043394D: ;
    eax = MEM32(ebp + -24);
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -20) = eax;

loc_00433956: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433981; /* je: equal / zero */

loc_0043395C: ;
    eax = MEM32(0xDFCC50);
    ecx = MEM32(0xDFCC90);
    edx = MEM32(ebp + -40);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    ecx = ZX8(MEM8(ecx + edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043397Eu); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_0043397E: ;
    MEM32(ebp + -28) = eax;

loc_00433981: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -28);
    ecx = esi;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
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
    esi = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
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
    if (!(_sbb_sf != _sbb_of)) goto loc_004339AB; /* jge: greater or equal (signed >=) */

loc_0043399F: ;
    goto loc_004339A1;

loc_004339A1: ;
    eax = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -36) = eax;
    goto loc_004339BE;

loc_004339AB: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 1, &_cf, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -36) = eax;

loc_004339BE: ;
    goto loc_004338DB;

loc_004339C3: ;
    eax = MEM32(0xDFCC90);
    ecx = MEM32(0xDFCC8C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = MEM32(ebp + -12);
    eax = RECOMP_SAR(eax, LO8(ecx), 32, &_cf);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004339F1; /* jne: not equal / not zero */

loc_004339E5: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_00433BCC;

loc_004339F1: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433AED; /* jne: not equal / not zero */

loc_004339FB: ;
    ecx = MEM32(0xDFCC8C);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433A0Au); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00433A0A: ;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 3 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433A3D; /* jne: not equal / not zero */

loc_00433A1A: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -60) = eax;
    ecx = MEM32(0xDFCC8C);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433A32u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00433A32: ;
    ecx = MEM32(ebp + -60);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = eax;
    goto loc_00433A46;

loc_00433A3D: ;
    eax = MEM32(ebp + -24);
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -20) = eax;

loc_00433A46: ;
    MEM32(ebp + -44) = 0;
    eax = MEM32(0xDFCC54);
    ecx = MEM32(0xDFCC50);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -48) = eax;

loc_00433A5D: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433A8B; /* je: equal / zero */

loc_00433A63: ;
    eax = MEM32(0xDFCC50);
    ecx = MEM32(ebp + -48);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(6));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(6)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(MEM8(eax + ecx + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx + 4), 0 (8-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433A7E; /* jne: not equal / not zero */

loc_00433A75: ;
    eax = MEM32(ebp + -48);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(6));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(6)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -44) = eax;

loc_00433A7E: ;
    goto loc_00433A80;

loc_00433A80: ;
    eax = MEM32(ebp + -48);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(6));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(6)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -48) = eax;
    goto loc_00433A5D;

loc_00433A8B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433AA4; /* je: equal / zero */

loc_00433A91: ;
    eax = MEM32(0xDFCC50);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -44))) >> 32) & 1);
    eax = eax + MEM32(ebp + -44);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433AA1u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00433AA1: ;
    MEM32(ebp + -28) = eax;

loc_00433AA4: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -28);
    ecx = esi;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
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
    esi = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
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
    if (!(_sbb_sf != _sbb_of)) goto loc_00433AEB; /* jge: greater or equal (signed >=) */

loc_00433AC2: ;
    goto loc_00433AC4;

loc_00433AC4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433AD7; /* je: equal / zero */

loc_00433ACA: ;
    eax = MEM32(0xDFCC90);
    ecx = ZX8(MEM8(eax));
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;

loc_00433AD7: ;
    eax = MEM32(ebp + -44);
    ecx = 6;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -8) = eax;
    goto loc_00433BCC;

loc_00433AEB: ;
    goto loc_00433AED;

loc_00433AED: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433BBD; /* je: equal / zero */

loc_00433AF7: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433B4F; /* je: equal / zero */

loc_00433AFD: ;
    eax = MEM32(0xDFCC50);
    ecx = MEM32(0xDFCC90);
    edx = MEM32(ebp + -32);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    ecx = ZX8(MEM8(ecx + edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6);
    eax = ZX8(MEM8(eax + ecx + 4));
    ecx = MEM32(0xDFCC50);
    edx = MEM32(0xDFCC90);
    esi = MEM32(ebp + -32);
    edx = ZX8(MEM8(edx + esi));
    edx = (uint32_t)((int32_t)edx * (int32_t)6);
    ecx = ZX8(MEM8(ecx + edx + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433B4F; /* je: equal / zero */

loc_00433B39: ;
    eax = MEM32(0xDFCC90);
    ecx = MEM32(ebp + -32);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    ecx = ZX8(MEM8(eax + ecx));
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    goto loc_00433BBB;

loc_00433B4F: ;
    eax = MEM32(ebp + -32);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00433BA8; /* jae: above or equal (unsigned >=) */

loc_00433B5A: ;
    eax = MEM32(0xDFCC50);
    ecx = MEM32(0xDFCC90);
    edx = MEM32(ebp + -32);
    ecx = ZX8(MEM8(ecx + edx + 1));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6);
    eax = ZX8(MEM8(eax + ecx + 4));
    ecx = MEM32(0xDFCC50);
    edx = MEM32(0xDFCC90);
    esi = MEM32(ebp + -32);
    edx = ZX8(MEM8(edx + esi));
    edx = (uint32_t)((int32_t)edx * (int32_t)6);
    ecx = ZX8(MEM8(ecx + edx + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433BA8; /* je: equal / zero */

loc_00433B94: ;
    eax = MEM32(0xDFCC90);
    ecx = MEM32(ebp + -32);
    ecx = ZX8(MEM8(eax + ecx + 1));
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    goto loc_00433BB9;

loc_00433BA8: ;
    eax = MEM32(0xDFCC90);
    ecx = MEM32(ebp + -32);
    ecx = ZX8(MEM8(eax + ecx));
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;

loc_00433BB9: ;
    goto loc_00433BBB;

loc_00433BBB: ;
    goto loc_00433BBD;

loc_00433BBD: ;
    eax = MEM32(0xDFCC90);
    ecx = MEM32(ebp + -32);
    eax = ZX8(MEM8(eax + ecx));
    MEM32(ebp + -8) = eax;

loc_00433BCC: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433BE0
 * Original: 0x00433BE0 - 0x00433C12 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433BE0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00433BE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    _shift_result = RECOMP_SHIFT(eax, 0x18, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx + 1));
    _shift_result = RECOMP_SHIFT(ecx, 0x10, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    ecx = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx + 2));
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    ecx = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx + 3));
    eax = eax | ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433C20
 * Original: 0x00433C20 - 0x00433DAE (398 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433C20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00433C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    eax = esp;
    esi = ebp + -8;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433C47u); RECOMP_ABI_CALL(0x00434BB0u, sub_00434BB0); /* call 0x00434BB0 */

loc_00433C47: ;
    MEM32(ebp + -12) = edx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x4D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00433C9E; /* je: equal / zero */

loc_00433C55: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x4A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433C7B; /* jne: not equal / not zero */

loc_00433C66: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x3C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00433C72; /* jl: less (signed <) */

loc_00433C6C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433C7B; /* jne: not equal / not zero */

loc_00433C72: ;
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -20) = eax;

loc_00433C7B: ;
    eax = MEM32(ebp + -20);
    esi = (uint32_t)((int32_t)eax * (int32_t)0x15180);
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    goto loc_00433D87;

loc_00433C9E: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + -24);
    ecx--;
    edx = MEM32(ebp + -8);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433CCCu); RECOMP_ABI_CALL(0x00433050u, sub_00433050); /* call 0x00433050 */

loc_00433CCC: ;
    edx = eax;
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -12)) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -12) = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -16) = eax;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x54600)) >> 32) & 1);
    edx = edx + 0x54600;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    eax = esp;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x93A80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433D07u); RECOMP_ABI_CALL(0x0043D050u, sub_0043D050); /* call 0x0043D050 */

loc_00433D07: ;
    ecx = 0x15180;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -32);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -36)));
    eax = eax - MEM32(ebp + -36);
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00433D2A; /* jge: greater or equal (signed >=) */

loc_00433D21: ;
    eax = MEM32(ebp + -40);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    MEM32(ebp + -40) = eax;

loc_00433D2A: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433D5B; /* jne: not equal / not zero */

loc_00433D30: ;
    eax = MEM32(ebp + -40);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1C)) >> 32) & 1);
    eax = eax + 0x1C;
    MEM32(ebp + -44) = eax;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433D4Bu); RECOMP_ABI_CALL(0x00434B70u, sub_00434B70); /* call 0x00434B70 */

loc_00433D4B: ;
    ecx = eax;
    eax = MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00433D5B; /* jl: less (signed <) */

loc_00433D54: ;
    MEM32(ebp + -28) = 4;

loc_00433D5B: ;
    eax = MEM32(ebp + -40);
    ecx = MEM32(ebp + -28);
    eax = eax + ecx * 8;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    esi = (uint32_t)((int32_t)eax * (int32_t)0x15180);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFF6C580u)) >> 32) & 1);
    esi = esi + 0xFFF6C580u;
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;

loc_00433D87: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x10);
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433DB0
 * Original: 0x00433DB0 - 0x00433DDC (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433DB0(void)
{
    uint32_t ebp = g_ebp;

loc_00433DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0xDFCC48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433DC4u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00433DC4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433DC9u); RECOMP_ABI_CALL(0x00433E70u, sub_00433E70); /* call 0x00433E70 */

loc_00433DC9: ;
    eax = 0xDFCC48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433DD7u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00433DD7: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433DE0
 * Original: 0x00433DE0 - 0x00433E6B (139 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433DE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x28);
    MEM32(ebp + -4) = eax;
    eax = 0xDFCC48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433E00u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00433E00: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433E05u); RECOMP_ABI_CALL(0x00433E70u, sub_00433E70); /* call 0x00433E70 */

loc_00433E05: ;
    eax = 0x508D74;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433E55; /* je: equal / zero */

loc_00433E10: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xDFCC40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xDFCC40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433E55; /* je: equal / zero */

loc_00433E1B: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xDFCC44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xDFCC44) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433E55; /* je: equal / zero */

loc_00433E26: ;
    _fa = (uint32_t)(MEM32(0xDFCC4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC4C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433E4C; /* je: equal / zero */

loc_00433E2F: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(0xDFCC54);
    eax = eax - ecx;
    ecx = MEM32(0xDFCC84);
    edx = MEM32(0xDFCC54);
    ecx = ecx - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00433E55; /* jb: below (unsigned <) */

loc_00433E4C: ;
    eax = 0x452F3B;
    MEM32(ebp + -4) = eax;

loc_00433E55: ;
    eax = 0xDFCC48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433E63u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00433E63: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00433E70
 * Original: 0x00433E70 - 0x004347BE (2382 bytes, 513 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433E70(void)
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
loc_00433E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x178)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = ebp + -280;
    eax = eax + 0x18;
    MEM32(ebp + -284) = eax;
    MEM32(ebp + -300) = 0;
    eax = 0x447564;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433EA0u); RECOMP_ABI_CALL(0x003DC4D0u, sub_003DC4D0); /* call 0x003DC4D0 */

loc_00433EA0: ;
    MEM32(ebp + -292) = eax;
    _fa = (uint32_t)(MEM32(ebp + -292)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -292), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00433EBB; /* jne: not equal / not zero */

loc_00433EAF: ;
    eax = 0x4890D4;
    MEM32(ebp + -292) = eax;

loc_00433EBB: ;
    eax = MEM32(ebp + -292);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00433ED2; /* jne: not equal / not zero */

loc_00433EC6: ;
    eax = 0x508D74;
    MEM32(ebp + -292) = eax;

loc_00433ED2: ;
    _fa = (uint32_t)(MEM32(0x838F78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838F78), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00433EFC; /* je: equal / zero */

loc_00433EDB: ;
    ecx = MEM32(ebp + -292);
    eax = MEM32(0x838F78);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433EF2u); RECOMP_ABI_CALL(0x00429B30u, sub_00429B30); /* call 0x00429B30 */

loc_00433EF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00433EFC; /* jne: not equal / not zero */

loc_00433EF7: ;
    goto loc_004347B6;

loc_00433EFC: ;
    MEM32(ebp + -304) = 0;

loc_00433F06: ;
    _fa = (uint32_t)(MEM32(ebp + -304)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -304), 5 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_00433F42; /* jae: above or equal (unsigned >=) */

loc_00433F0F: ;
    eax = MEM32(ebp + -304);
    MEM32(eax * 4 + 0xDFCC6C) = 0;
    eax = MEM32(ebp + -304);
    MEM32(eax * 4 + 0xDFCC58) = 0;
    eax = MEM32(ebp + -304);
    eax = eax + 1;
    MEM32(ebp + -304) = eax;
    goto loc_00433F06;

loc_00433F42: ;
    _fa = (uint32_t)(MEM32(0xDFCC4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC4C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00433F62; /* je: equal / zero */

loc_00433F4B: ;
    ecx = MEM32(0xDFCC4C);
    eax = MEM32(0xDFCC88);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433F62u); RECOMP_ABI_CALL(0x0040FEF0u, sub_0040FEF0); /* call 0x0040FEF0 */

loc_00433F62: ;
    eax = MEM32(ebp + -292);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433F70u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_00433F70: ;
    MEM32(ebp + -304) = eax;
    _fa = (uint32_t)(MEM32(ebp + -304)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -304), 0x1001 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_00433F98; /* jbe: below or equal (unsigned <=) */

loc_00433F82: ;
    eax = 0x508D74;
    MEM32(ebp + -292) = eax;
    MEM32(ebp + -304) = 3;

loc_00433F98: ;
    eax = MEM32(ebp + -304);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x838F7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x838F7C) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_00433FF6; /* jb: below (unsigned <) */

loc_00433FA6: ;
    eax = MEM32(0x838F7C);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(0x838F7C) = eax;
    eax = MEM32(ebp + -304);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x838F7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x838F7C) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_00433FCE; /* jb: below (unsigned <) */

loc_00433FC0: ;
    eax = MEM32(ebp + -304);
    eax = eax + 1;
    MEM32(0x838F7C) = eax;

loc_00433FCE: ;
    _fa = (uint32_t)(MEM32(0x838F7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1002) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838F7C), 0x1002 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_00433FE4; /* jbe: below or equal (unsigned <=) */

loc_00433FDA: ;
    MEM32(0x838F7C) = 0x1002;

loc_00433FE4: ;
    eax = MEM32(0x838F7C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433FF1u); RECOMP_ABI_CALL(0x003E6490u, sub_003E6490); /* call 0x003E6490 */

loc_00433FF1: ;
    MEM32(0x838F78) = eax;

loc_00433FF6: ;
    _fa = (uint32_t)(MEM32(0x838F78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x838F78), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434024; /* je: equal / zero */

loc_00433FFF: ;
    edx = MEM32(0x838F78);
    ecx = MEM32(ebp + -292);
    eax = MEM32(ebp + -304);
    eax = eax + 1;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434024u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00434024: ;
    MEM32(ebp + -308) = 0;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434109; /* je: equal / zero */

loc_00434040: ;
    eax = MEM32(ebp + -292);
    MEM32(ebp + -296) = eax;
    ecx = ebp + -315;
    eax = ebp + -296;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434064u); RECOMP_ABI_CALL(0x004347C0u, sub_004347C0); /* call 0x004347C0 */

loc_00434064: ;
    eax = MEM32(ebp + -296);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -292)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -292) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434107; /* je: equal / zero */

loc_00434076: ;
    eax = MEM32(ebp + -296);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004340FD; /* je: equal / zero */

loc_00434084: ;
    eax = MEM32(ebp + -296);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004340FD; /* je: equal / zero */

loc_00434092: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0043409A; /* jne: not equal / not zero */

loc_00434098: ;
    goto loc_004340B2;

loc_0043409A: ;
    eax = MEM32(ebp + -296);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004340ABu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_004340AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004340FD; /* jne: not equal / not zero */

loc_004340B0: ;
    goto loc_004340C3;

loc_004340B2: ;
    eax = MEM32(ebp + -296);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_004340FD; /* jb: below (unsigned <) */

loc_004340C3: ;
    ecx = ebp + -315;
    eax = 0x477CB0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004340DBu); RECOMP_ABI_CALL(0x00429B30u, sub_00429B30); /* call 0x00429B30 */

loc_004340DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004340FD; /* je: equal / zero */

loc_004340E0: ;
    ecx = ebp + -315;
    eax = 0x46F3B6;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004340F8u); RECOMP_ABI_CALL(0x00429B30u, sub_00429B30); /* call 0x00429B30 */

loc_004340F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00434107; /* jne: not equal / not zero */

loc_004340FD: ;
    MEM32(ebp + -308) = 1;

loc_00434107: ;
    goto loc_00434109;

loc_00434109: ;
    _fa = (uint32_t)(MEM32(ebp + -308)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -308), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004342EE; /* jne: not equal / not zero */

loc_00434116: ;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00434133; /* jne: not equal / not zero */

loc_00434124: ;
    eax = MEM32(ebp + -292);
    eax = eax + 1;
    MEM32(ebp + -292) = eax;

loc_00434133: ;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0043414F; /* je: equal / zero */

loc_00434141: ;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00434198; /* jne: not equal / not zero */

loc_0043414F: ;
    _fa = (uint32_t)(MEM8(0xDFBFF6)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xDFBFF6), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434175; /* je: equal / zero */

loc_00434158: ;
    ecx = MEM32(ebp + -292);
    eax = 0x4890D4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434170u); RECOMP_ABI_CALL(0x00429B30u, sub_00429B30); /* call 0x00429B30 */

loc_00434170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00434193; /* jne: not equal / not zero */

loc_00434175: ;
    ecx = MEM32(ebp + -292);
    eax = 0xDFCC88;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043418Du); RECOMP_ABI_CALL(0x00432DF0u, sub_00432DF0); /* call 0x00432DF0 */

loc_0043418D: ;
    MEM32(ebp + -300) = eax;

loc_00434193: ;
    goto loc_004342D7;

loc_00434198: ;
    eax = MEM32(ebp + -292);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004341A6u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_004341A6: ;
    MEM32(ebp + -320) = eax;
    _fa = (uint32_t)(MEM32(ebp + -320)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -320), 0xFF (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_A(_fa, _fb)) goto loc_004342D5; /* ja: above (unsigned >) */

loc_004341BC: ;
    eax = MEM32(ebp + -292);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x2E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004341D2u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_004341D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004342D5; /* jne: not equal / not zero */

loc_004341DB: ;
    edx = MEM32(ebp + -284);
    ecx = MEM32(ebp + -292);
    eax = MEM32(ebp + -320);
    eax = eax + 1;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434200u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00434200: ;
    eax = MEM32(ebp + -284);
    ecx = MEM32(ebp + -320);
    MEM8(eax + ecx) = 0;
    eax = 0x508D7C;
    MEM32(ebp + -288) = eax;

loc_0043421C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -300)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -300), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -341) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00434242; /* jne: not equal / not zero */

loc_0043422D: ;
    eax = MEM32(ebp + -288);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -341) = LO8(eax);

loc_00434242: ;
    SET_LO8(eax, MEM8(ebp + -341));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_00434251; /* jne: not equal / not zero */

loc_0043424C: ;
    goto loc_004342D3;

loc_00434251: ;
    eax = MEM32(ebp + -288);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043425Fu); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_0043425F: ;
    MEM32(ebp + -320) = eax;
    edx = MEM32(ebp + -284);
    eax = 0; /* xor self */
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -320))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    edx = edx + eax;
    ecx = MEM32(ebp + -288);
    eax = MEM32(ebp + -320);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434291u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00434291: ;
    ecx = MEM32(ebp + -284);
    eax = 0; /* xor self */
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -320))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = ecx + eax;
    eax = 0xDFCC88;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004342B3u); RECOMP_ABI_CALL(0x00432DF0u, sub_00432DF0); /* call 0x00432DF0 */

loc_004342B3: ;
    MEM32(ebp + -300) = eax;
    eax = MEM32(ebp + -320);
    eax = eax + 1;
    eax = eax + MEM32(ebp + -288);
    MEM32(ebp + -288) = eax;
    goto loc_0043421C;

loc_004342D3: ;
    goto loc_004342D5;

loc_004342D5: ;
    goto loc_004342D7;

loc_004342D7: ;
    _fa = (uint32_t)(MEM32(ebp + -300)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -300), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004342EC; /* jne: not equal / not zero */

loc_004342E0: ;
    eax = 0x508D74;
    MEM32(ebp + -292) = eax;

loc_004342EC: ;
    goto loc_004342EE;

loc_004342EE: ;
    _fa = (uint32_t)(MEM32(ebp + -300)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -300), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434352; /* je: equal / zero */

loc_004342F7: ;
    _fa = (uint32_t)(MEM32(0xDFCC88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC88), 0x2C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_00434325; /* jb: below (unsigned <) */

loc_00434300: ;
    ecx = MEM32(ebp + -300);
    eax = 0x48E8EB;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434320u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_00434320: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434352; /* je: equal / zero */

loc_00434325: ;
    ecx = MEM32(ebp + -300);
    eax = MEM32(0xDFCC88);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043433Cu); RECOMP_ABI_CALL(0x0040FEF0u, sub_0040FEF0); /* call 0x0040FEF0 */

loc_0043433C: ;
    MEM32(ebp + -300) = 0;
    eax = 0x508D74;
    MEM32(ebp + -292) = eax;

loc_00434352: ;
    eax = MEM32(ebp + -300);
    MEM32(0xDFCC4C) = eax;
    _fa = (uint32_t)(MEM32(ebp + -300)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -300), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434664; /* je: equal / zero */

loc_0043436A: ;
    MEM32(ebp + -324) = 2;
    eax = MEM32(ebp + -300);
    eax = ZX8(MEM8(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004343FD; /* je: equal / zero */

loc_00434383: ;
    ecx = MEM32(0xDFCC4C);
    ecx = ecx + 0x14;
    MEM8(ebp + -334) = 1;
    MEM8(ebp + -333) = 1;
    MEM8(ebp + -332) = 8;
    MEM8(ebp + -331) = 5;
    MEM8(ebp + -330) = 6;
    MEM8(ebp + -329) = 1;
    eax = ebp + -334;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004343D0u); RECOMP_ABI_CALL(0x004348F0u, sub_004348F0); /* call 0x004348F0 */

loc_004343D0: ;
    MEM32(ebp + -328) = eax;
    eax = MEM32(0xDFCC4C);
    eax = eax + MEM32(ebp + -328);
    eax = eax + 0x2C;
    eax = eax + 0x2C;
    MEM32(0xDFCC8C) = eax;
    eax = MEM32(ebp + -324);
    eax = eax + 1;
    MEM32(ebp + -324) = eax;
    goto loc_0043440A;

loc_004343FD: ;
    eax = MEM32(0xDFCC4C);
    eax = eax + 0x2C;
    MEM32(0xDFCC8C) = eax;

loc_0043440A: ;
    eax = MEM32(0xDFCC8C);
    MEM32(ebp + -360) = eax;
    eax = MEM32(0xDFCC8C);
    eax = eax + 0xFFFFFFF4u;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434425u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00434425: ;
    edx = eax;
    eax = MEM32(ebp + -360);
    ecx = MEM32(ebp + -324);
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax + ecx;
    MEM32(0xDFCC90) = eax;
    eax = MEM32(0xDFCC90);
    MEM32(ebp + -356) = eax;
    eax = MEM32(0xDFCC8C);
    eax = eax + 0xFFFFFFF4u;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434459u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00434459: ;
    ecx = eax;
    eax = MEM32(ebp + -356);
    eax = eax + ecx;
    MEM32(0xDFCC50) = eax;
    eax = MEM32(0xDFCC50);
    MEM32(ebp + -352) = eax;
    eax = MEM32(0xDFCC8C);
    eax = eax + 0xFFFFFFF8u;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434483u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00434483: ;
    ecx = eax;
    eax = MEM32(ebp + -352);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)6);
    eax = eax + ecx;
    MEM32(0xDFCC54) = eax;
    eax = MEM32(0xDFCC54);
    MEM32(ebp + -348) = eax;
    eax = MEM32(0xDFCC8C);
    eax = eax + 0xFFFFFFFCu;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004344B0u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_004344B0: ;
    ecx = eax;
    eax = MEM32(ebp + -348);
    eax = eax + ecx;
    MEM32(0xDFCC84) = eax;
    eax = MEM32(0xDFCC4C);
    ecx = MEM32(0xDFCC88);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = ZX8(MEM8(eax + ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0043451F; /* jne: not equal / not zero */

loc_004344D6: ;
    eax = MEM32(0xDFCC4C);
    eax = eax + MEM32(0xDFCC88);
    eax = eax + 0xFFFFFFFEu;
    MEM32(ebp + -292) = eax;

loc_004344EA: ;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0043450B; /* je: equal / zero */

loc_004344F8: ;
    goto loc_004344FA;

loc_004344FA: ;
    eax = MEM32(ebp + -292);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -292) = eax;
    goto loc_004344EA;

loc_0043450B: ;
    eax = MEM32(ebp + -292);
    eax = eax + 1;
    MEM32(ebp + -292) = eax;
    goto loc_00434662;

loc_0043451F: ;
    MEM32(0xDFCC44) = 0;
    MEM32(0xDFCC40) = 0;
    MEM32(0xDFCC80) = 0;
    MEM32(0xDFCC38) = 0;
    MEM32(0xDFCC3C) = 0;
    eax = MEM32(0xDFCC50);
    MEM32(ebp + -340) = eax;

loc_0043455C: ;
    eax = MEM32(ebp + -340);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xDFCC54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xDFCC54) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_00434619; /* jae: above or equal (unsigned >=) */

loc_0043456E: ;
    eax = MEM32(ebp + -340);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004345B2; /* jne: not equal / not zero */

loc_0043457A: ;
    _fa = (uint32_t)(MEM32(0xDFCC40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC40), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004345B2; /* jne: not equal / not zero */

loc_00434583: ;
    eax = MEM32(0xDFCC54);
    ecx = MEM32(ebp + -340);
    ecx = ZX8(MEM8(ecx + 5));
    eax = eax + ecx;
    MEM32(0xDFCC40) = eax;
    eax = MEM32(ebp + -340);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004345A7u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_004345A7: ;
    ecx = eax;
    eax = 0; /* xor self */
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(0xDFCC38) = eax;

loc_004345B2: ;
    eax = MEM32(ebp + -340);
    eax = ZX8(MEM8(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434603; /* je: equal / zero */

loc_004345C1: ;
    _fa = (uint32_t)(MEM32(0xDFCC44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC44), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00434603; /* jne: not equal / not zero */

loc_004345CA: ;
    eax = MEM32(0xDFCC54);
    ecx = MEM32(ebp + -340);
    ecx = ZX8(MEM8(ecx + 5));
    eax = eax + ecx;
    MEM32(0xDFCC44) = eax;
    eax = MEM32(ebp + -340);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004345EEu); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_004345EE: ;
    ecx = eax;
    eax = 0; /* xor self */
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(0xDFCC80) = eax;
    MEM32(0xDFCC3C) = 1;

loc_00434603: ;
    goto loc_00434605;

loc_00434605: ;
    eax = MEM32(ebp + -340);
    eax = eax + 6;
    MEM32(ebp + -340) = eax;
    goto loc_0043455C;

loc_00434619: ;
    _fa = (uint32_t)(MEM32(0xDFCC40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC40), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0043462C; /* jne: not equal / not zero */

loc_00434622: ;
    eax = MEM32(0xDFCC44);
    MEM32(0xDFCC40) = eax;

loc_0043462C: ;
    _fa = (uint32_t)(MEM32(0xDFCC40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC40), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00434640; /* jne: not equal / not zero */

loc_00434635: ;
    eax = 0x508D74;
    MEM32(0xDFCC40) = eax;

loc_00434640: ;
    _fa = (uint32_t)(MEM32(0xDFCC3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCC3C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0043465D; /* jne: not equal / not zero */

loc_00434649: ;
    eax = MEM32(0xDFCC40);
    MEM32(0xDFCC44) = eax;
    eax = MEM32(0xDFCC38);
    MEM32(0xDFCC80) = eax;

loc_0043465D: ;
    goto loc_004347B6;

loc_00434662: ;
    goto loc_00434664;

loc_00434664: ;
    _fa = (uint32_t)(MEM32(ebp + -292)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -292), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00434679; /* jne: not equal / not zero */

loc_0043466D: ;
    eax = 0x508D74;
    MEM32(ebp + -292) = eax;

loc_00434679: ;
    ecx = 0xDFCC94;
    eax = ebp + -292;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434691u); RECOMP_ABI_CALL(0x004347C0u, sub_004347C0); /* call 0x004347C0 */

loc_00434691: ;
    eax = 0xDFCC94;
    MEM32(0xDFCC40) = eax;
    eax = ebp + -292;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004346AAu); RECOMP_ABI_CALL(0x00434960u, sub_00434960); /* call 0x00434960 */

loc_004346AA: ;
    MEM32(0xDFCC38) = eax;
    ecx = 0xDFCC9B;
    eax = ebp + -292;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004346C7u); RECOMP_ABI_CALL(0x004347C0u, sub_004347C0); /* call 0x004347C0 */

loc_004346C7: ;
    eax = 0xDFCC9B;
    MEM32(0xDFCC44) = eax;
    _fa = (uint32_t)(MEM8(0xDFCC9B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xDFCC9B), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434738; /* je: equal / zero */

loc_004346DB: ;
    MEM32(0xDFCC3C) = 1;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434712; /* je: equal / zero */

loc_004346F3: ;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00434712; /* je: equal / zero */

loc_00434701: ;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_00434727; /* jae: above or equal (unsigned >=) */

loc_00434712: ;
    eax = ebp + -292;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434720u); RECOMP_ABI_CALL(0x00434960u, sub_00434960); /* call 0x00434960 */

loc_00434720: ;
    MEM32(0xDFCC80) = eax;
    goto loc_00434736;

loc_00434727: ;
    eax = MEM32(0xDFCC38);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xE10)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(0xDFCC80) = eax;

loc_00434736: ;
    goto loc_0043474C;

loc_00434738: ;
    MEM32(0xDFCC3C) = 0;
    eax = MEM32(0xDFCC38);
    MEM32(0xDFCC80) = eax;

loc_0043474C: ;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00434781; /* jne: not equal / not zero */

loc_0043475A: ;
    eax = MEM32(ebp + -292);
    eax = eax + 1;
    MEM32(ebp + -292) = eax;
    ecx = ebp + -292;
    eax = 0xDFCC58;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434781u); RECOMP_ABI_CALL(0x00434A30u, sub_00434A30); /* call 0x00434A30 */

loc_00434781: ;
    eax = MEM32(ebp + -292);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004347B6; /* jne: not equal / not zero */

loc_0043478F: ;
    eax = MEM32(ebp + -292);
    eax = eax + 1;
    MEM32(ebp + -292) = eax;
    ecx = ebp + -292;
    eax = 0xDFCC6C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004347B6u); RECOMP_ABI_CALL(0x00434A30u, sub_00434A30); /* call 0x00434A30 */

loc_004347B6: ;
    esp = esp + 0x178;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004347C0
 * Original: 0x004347C0 - 0x004348E1 (289 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004347C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004347C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00434863; /* jne: not equal / not zero */

loc_004347DD: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_004347EE: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00434819; /* je: equal / zero */

loc_00434804: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_00434819: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00434822; /* jne: not equal / not zero */

loc_00434820: ;
    goto loc_00434849;

loc_00434822: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043483C; /* jge: greater or equal (signed >=) */

loc_00434828: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -4);
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM8(eax + ecx) = LO8(edx);

loc_0043483C: ;
    goto loc_0043483E;

loc_0043483E: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_004347EE;

loc_00434849: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00434861; /* je: equal / zero */

loc_00434857: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;

loc_00434861: ;
    goto loc_004348AA;

loc_00434863: ;
    MEM32(ebp + -4) = 0;

loc_0043486A: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    eax = eax | 0x20;
    eax = eax - 0x61;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004348A8; /* jae: above or equal (unsigned >=) */

loc_00434881: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043489B; /* jge: greater or equal (signed >=) */

loc_00434887: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(ebp + -4);
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM8(eax + ecx) = LO8(edx);

loc_0043489B: ;
    goto loc_0043489D;

loc_0043489D: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_0043486A;

loc_004348A8: ;
    goto loc_004348AA;

loc_004348AA: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    ecx = ecx + MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004348C8; /* jge: greater or equal (signed >=) */

loc_004348C0: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    goto loc_004348D2;

loc_004348C8: ;
    eax = 6;
    MEM32(ebp + -16) = eax;
    goto loc_004348D2;

loc_004348D2: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    MEM8(eax + ecx) = 0;
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004348F0
 * Original: 0x004348F0 - 0x00434951 (97 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004348F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004348F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_00434906: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00434949; /* je: equal / zero */

loc_0043490C: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434917u); RECOMP_ABI_CALL(0x00433BE0u, sub_00433BE0); /* call 0x00433BE0 */

loc_00434917: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + MEM32(ebp + -4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 1;
    MEM32(ebp + 0xC) = eax;
    goto loc_00434906;

loc_00434949: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434960
 * Original: 0x00434960 - 0x00434A30 (208 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434960(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00434960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00434990; /* jne: not equal / not zero */

loc_0043497D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 1;
    goto loc_004349A9;

loc_00434990: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004349A7; /* jne: not equal / not zero */

loc_0043499D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;

loc_004349A7: ;
    goto loc_004349A9;

loc_004349A9: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004349B4u); RECOMP_ABI_CALL(0x00434B20u, sub_00434B20); /* call 0x00434B20 */

loc_004349B4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE10);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00434A12; /* jne: not equal / not zero */

loc_004349CA: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004349DFu); RECOMP_ABI_CALL(0x00434B20u, sub_00434B20); /* call 0x00434B20 */

loc_004349DF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00434A10; /* jne: not equal / not zero */

loc_004349F5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434A0Au); RECOMP_ABI_CALL(0x00434B20u, sub_00434B20); /* call 0x00434B20 */

loc_00434A0A: ;
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;

loc_00434A10: ;
    goto loc_00434A12;

loc_00434A12: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00434A22; /* je: equal / zero */

loc_00434A18: ;
    eax = 0; /* xor self */
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -8))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -12) = eax;
    goto loc_00434A28;

loc_00434A22: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -12) = eax;

loc_00434A28: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434A30
 * Original: 0x00434A30 - 0x00434B14 (228 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434A30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x4D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00434A82; /* je: equal / zero */

loc_00434A52: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x4A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00434A64; /* jne: not equal / not zero */

loc_00434A58: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    goto loc_00434A6D;

loc_00434A64: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0;

loc_00434A6D: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434A78u); RECOMP_ABI_CALL(0x00434B20u, sub_00434B20); /* call 0x00434B20 */

loc_00434A78: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 4) = ecx;
    goto loc_00434AD9;

loc_00434A82: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434A97u); RECOMP_ABI_CALL(0x00434B20u, sub_00434B20); /* call 0x00434B20 */

loc_00434A97: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434AB4u); RECOMP_ABI_CALL(0x00434B20u, sub_00434B20); /* call 0x00434B20 */

loc_00434AB4: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434AD1u); RECOMP_ABI_CALL(0x00434B20u, sub_00434B20); /* call 0x00434B20 */

loc_00434AD1: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0xC) = ecx;

loc_00434AD9: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00434B05; /* jne: not equal / not zero */

loc_00434AE6: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434AFBu); RECOMP_ABI_CALL(0x00434960u, sub_00434960); /* call 0x00434960 */

loc_00434AFB: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    goto loc_00434B0F;

loc_00434B05: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = 0x1C20;

loc_00434B0F: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434B20
 * Original: 0x00434B20 - 0x00434B66 (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434B20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_00434B2E: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00434B5E; /* jae: above or equal (unsigned >=) */

loc_00434B3E: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    eax = eax - 0x30;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -4) * (int32_t)0xA);
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx + 1;
    MEM32(eax) = ecx;
    goto loc_00434B2E;

loc_00434B5E: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434B70
 * Original: 0x00434B70 - 0x00434BA9 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434B70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00434B8B; /* jne: not equal / not zero */

loc_00434B80: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 0x1C;
    MEM32(ebp + -4) = eax;
    goto loc_00434BA1;

loc_00434B8B: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx - 1;
    eax = 0xAD5;
    eax = RECOMP_SAR(eax, LO8(ecx), 32, NULL);
    eax = eax & 1;
    eax = eax + 0x1E;
    MEM32(ebp + -4) = eax;

loc_00434BA1: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434BB0
 * Original: 0x00434BB0 - 0x00434DEF (575 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434BB0(void)
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00434BB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x44)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    esi = esi + 0xFFFFFFFEu;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edx = 0x88;
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
    if (_cf) goto loc_00434C4F; /* jb: below (unsigned <) */

loc_00434BD9: ;
    goto loc_00434BDB;

loc_00434BDB: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x44));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x44)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = RECOMP_SAR(eax, 2, 32, &_cf);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -16);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x44));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x44)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00434C15; /* jne: not equal / not zero */

loc_00434BFB: ;
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00434C13; /* je: equal / zero */

loc_00434C0A: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;

loc_00434C13: ;
    goto loc_00434C26;

loc_00434C15: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00434C24; /* je: equal / zero */

loc_00434C1B: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;

loc_00434C24: ;
    goto loc_00434C26;

loc_00434C26: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E13380);
    ecx = MEM32(ebp + -20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x15180);
    ecx = eax + ecx + 0x7C6BEB00;
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -8) = eax;
    goto loc_00434DE3;

loc_00434C4F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00434C5B; /* jne: not equal / not zero */

loc_00434C55: ;
    eax = ebp + -40;
    MEM32(ebp + 0x10) = eax;

loc_00434C5B: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFF9Cu)) >> 32) & 1);
    edx = edx + 0xFFFFFF9Cu;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    eax = esp;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x190;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434C81u); RECOMP_ABI_CALL(0x0043CFF0u, sub_0043CFF0); /* call 0x0043CFF0 */

loc_00434C81: ;
    MEM32(ebp + -24) = eax;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFF9Cu)) >> 32) & 1);
    edx = edx + 0xFFFFFF9Cu;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    eax = esp;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x190;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434CAAu); RECOMP_ABI_CALL(0x0043D050u, sub_0043D050); /* call 0x0043D050 */

loc_00434CAA: ;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00434CC7; /* jge: greater or equal (signed >=) */

loc_00434CB3: ;
    eax = MEM32(ebp + -24);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -36);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x190)) >> 32) & 1);
    eax = eax + 0x190;
    MEM32(ebp + -36) = eax;

loc_00434CC7: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00434CE9; /* jne: not equal / not zero */

loc_00434CCD: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    MEM32(ebp + -28) = 0;
    MEM32(ebp + -32) = 0;
    goto loc_00434D83;

loc_00434CE9: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0xC8 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00434D23; /* jl: less (signed <) */

loc_00434CF2: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0x12C (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00434D0F; /* jl: less (signed <) */

loc_00434CFB: ;
    MEM32(ebp + -28) = 3;
    eax = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x12C));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x12C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -36) = eax;
    goto loc_00434D21;

loc_00434D0F: ;
    MEM32(ebp + -28) = 2;
    eax = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC8));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xC8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -36) = eax;

loc_00434D21: ;
    goto loc_00434D44;

loc_00434D23: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0x64 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00434D3B; /* jl: less (signed <) */

loc_00434D29: ;
    MEM32(ebp + -28) = 1;
    eax = MEM32(ebp + -36);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x64));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x64)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -36) = eax;
    goto loc_00434D42;

loc_00434D3B: ;
    MEM32(ebp + -28) = 0;

loc_00434D42: ;
    goto loc_00434D44;

loc_00434D44: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00434D5C; /* jne: not equal / not zero */

loc_00434D4A: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    MEM32(ebp + -32) = 0;
    goto loc_00434D81;

loc_00434D5C: ;
    eax = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -36);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;

loc_00434D81: ;
    goto loc_00434D83;

loc_00434D83: ;
    eax = MEM32(ebp + -24);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x61);
    ecx = MEM32(ebp + -28);
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + -32);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -48) = ecx;
    ecx = 0x1E13380;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(ebp + -48);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E13380);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    MEM32(ebp + -44) = edx;
    eax = MEM32(ebp + -32);
    edx = 0x15180;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = eax;
    eax = MEM32(ebp + -44);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7C767700)) >> 32) & 1);
    ecx = ecx + 0x7C767700;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -8) = eax;

loc_00434DE3: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434DF0
 * Original: 0x00434DF0 - 0x00434E13 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434DF0(void)
{
    uint32_t ebp = g_ebp;

loc_00434DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = 0xDFCCC2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434E0Eu); RECOMP_ABI_CALL(0x00434E20u, sub_00434E20); /* call 0x00434E20 */

loc_00434E0E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434E20
 * Original: 0x00434E20 - 0x00434EF5 (213 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434E20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    ecx = ecx + 0x20000;
    eax = 0x4DE8D8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434E53u); RECOMP_ABI_CALL(0x003E4220u, sub_003E4220); /* call 0x003E4220 */

loc_00434E53: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    ecx = ecx + 0x2000E;
    eax = 0x4DE8D8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434E74u); RECOMP_ABI_CALL(0x003E4220u, sub_003E4220); /* call 0x003E4220 */

loc_00434E74: ;
    ebx = eax;
    eax = MEM32(ebp + 8);
    edi = MEM32(eax + 0xC);
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 8);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    eax = eax + 0x76C;
    MEM32(ebp + -16) = eax;
    eax = 0x4890E3;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esp + 4) = 0x1A;
    MEM32(esp + 8) = eax;
    eax = MEM32(ebp + -20);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434EE0u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_00434EE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434EEA; /* jl: less (signed <) */

loc_00434EE5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434EEAu); RECOMP_ABI_CALL(0x00434F00u, sub_00434F00); /* call 0x00434F00 */

loc_00434EEA: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434F00
 * Original: 0x00434F00 - 0x00434F06 (6 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434F00(void)
{
    uint32_t ebp = g_ebp;

loc_00434F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    recomp_unsupported_instruction(0x00434F03u); /* TODO: hlt  */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434F10
 * Original: 0x00434F10 - 0x00434FDD (205 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434F10(void)
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

loc_00434F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    eax = ebp + -32;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00434F2Cu); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_00434F2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00434F3D; /* je: equal / zero */

loc_00434F31: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_00434FD2;

loc_00434F3D: ;
    esi = MEM32(ebp + -32);
    ecx = MEM32(ebp + -28);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edx = 0x863;
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
    if ((_sbb_sf != _sbb_of)) goto loc_00434F9F; /* jl: less (signed <) */

loc_00434F50: ;
    goto loc_00434F52;

loc_00434F52: ;
    eax = MEM32(ebp + -24);
    ecx = 0x10624DD3;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = edx;
    edx = esi;
    _shift_result = RECOMP_SHIFT(edx, 0x1F, 32, 1, &_cf, &_shift_of);
    edx = _shift_result;
    esi = RECOMP_SAR(esi, 6, 32, &_cf);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    ecx = esi;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    eax = MEM32(ebp + -32);
    edx = MEM32(ebp + -28);
    MEM32(ebp + -36) = edx;
    edx = 0xF4240;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = eax;
    eax = MEM32(ebp + -36);
    edi = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF4240);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edx = 0x7FFFFFFF;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebx));
    edx = edx - ebx;
    {
      _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      eax = _sbb_result;
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
    if (!(_sbb_sf != _sbb_of)) goto loc_00434FA8; /* jge: greater or equal (signed >=) */

loc_00434F9D: ;
    goto loc_00434F9F;

loc_00434F9F: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_00434FD2;

loc_00434FA8: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -24);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF4240);
    MEM32(ebp + -40) = ecx;
    ecx = 0x10624DD3;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebp + -40);
    ecx = edx;
    edx = ecx;
    _shift_result = RECOMP_SHIFT(edx, 0x1F, 32, 1, &_cf, &_shift_of);
    edx = _shift_result;
    ecx = RECOMP_SAR(ecx, 6, 32, &_cf);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;

loc_00434FD2: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00434FE0
 * Original: 0x00434FE0 - 0x00435063 (131 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434FE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00434FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x40)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = ~eax;
    eax = eax * 8 + 2;
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + -32);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -28;
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043502Au); RECOMP_ABI_CALL(0x00435070u, sub_00435070); /* call 0x00435070 */

loc_0043502A: ;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFEAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0xFFFFFFEAu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043503A; /* jne: not equal / not zero */

loc_00435033: ;
    MEM32(ebp + -36) = 0xFFFFFFFDu;

loc_0043503A: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043504A; /* je: equal / zero */

loc_00435040: ;
    eax = 0; /* xor self */
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -36))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -12) = eax;
    goto loc_00435059;

loc_0043504A: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    MEM32(ebp + -12) = 0;

loc_00435059: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435070
 * Original: 0x00435070 - 0x004350FB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435070(void)
{
    uint32_t ebp = g_ebp;

loc_00435070: ;
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
    PUSH32(esp, 0x004350F3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004350F3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435100
 * Original: 0x00435100 - 0x0043514A (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435100(void)
{
    uint32_t ebp = g_ebp;

loc_00435100: ;
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
    MEM32(eax) = 0x72;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043513Bu); RECOMP_ABI_CALL(0x00435150u, sub_00435150); /* call 0x00435150 */

loc_0043513B: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435143u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00435143: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435150
 * Original: 0x00435150 - 0x004351DB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435150(void)
{
    uint32_t ebp = g_ebp;

loc_00435150: ;
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
    PUSH32(esp, 0x004351D3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004351D3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004351E0
 * Original: 0x004351E0 - 0x004352F3 (275 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004351E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004351E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = 0xFFFFFFDAu;
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
    MEM32(eax) = 0x193;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435222u); RECOMP_ABI_CALL(0x00435300u, sub_00435300); /* call 0x00435300 */

loc_00435222: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFDAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043523E; /* je: equal / zero */

loc_0043522B: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435236u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00435236: ;
    MEM32(ebp + -12) = eax;
    goto loc_004352E9;

loc_0043523E: ;
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
    MEM32(eax) = 0x71;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043526Bu); RECOMP_ABI_CALL(0x00435300u, sub_00435300); /* call 0x00435300 */

loc_0043526B: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFDAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004352B4; /* jne: not equal / not zero */

loc_00435274: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004352B4; /* jne: not equal / not zero */

loc_0043527A: ;
    edx = 0; /* xor self */
    ecx = ebp + -24;
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xA9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004352A7u); RECOMP_ABI_CALL(0x00435300u, sub_00435300); /* call 0x00435300 */

loc_004352A7: ;
    MEM32(ebp + -16) = eax;
    eax = (uint32_t)((int32_t)MEM32(ebp + -20) * (int32_t)0x3E8);
    MEM32(ebp + -20) = eax;

loc_004352B4: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004352DB; /* jne: not equal / not zero */

loc_004352BA: ;
    edx = MEM32(ebp + -24);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_004352E9;

loc_004352DB: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004352E6u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004352E6: ;
    MEM32(ebp + -12) = eax;

loc_004352E9: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435300
 * Original: 0x00435300 - 0x0043538B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435300(void)
{
    uint32_t ebp = g_ebp;

loc_00435300: ;
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
    PUSH32(esp, 0x00435383u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00435383: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435390
 * Original: 0x00435390 - 0x0043566E (734 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435390(void)
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00435390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xAC));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xAC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004353BA; /* jne: not equal / not zero */

loc_004353AE: ;
    MEM32(ebp + -16) = 0x16;
    goto loc_00435660;

loc_004353BA: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax)); /* movsd */
    MEMD(ebp + -24) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 8);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = 0xFFFFFFDAu;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x80000000u)) >> 32) & 1);
    ecx = ecx + 0x80000000u;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043547F; /* je: equal / zero */

loc_004353ED: ;
    goto loc_004353EF;

loc_004353EF: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -68) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, &_cf);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    ecx = MEM32(ebp + -28);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = eax;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    eax = ecx;
    MEM32(ebp + -72) = eax;
    ebx = ebp + -48;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -76) = eax;
    eax = esp;
    MEM32(ebp + -80) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -76);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -72);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -68);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x197;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043547Cu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043547C: ;
    MEM32(ebp + -32) = eax;

loc_0043547F: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0xFFFFFFDAu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00435492; /* je: equal / zero */

loc_00435485: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -32)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -32))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -16) = eax;
    goto loc_00435660;

loc_00435492: ;
    ecx = MEM32(ebp + -24);
    MEM32(ebp + -88) = ecx;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -84) = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x80000000u)) >> 32) & 1);
    ecx = ecx + 0x80000000u;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_004354BB; /* jne: not equal / not zero */

loc_004354AB: ;
    goto loc_004354AD;

loc_004354AD: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    MEM32(ebp + -96) = ecx;
    MEM32(ebp + -92) = eax;
    goto loc_004354D1;

loc_004354BB: ;
    ecx = MEM32(ebp + -20);
    _shift_result = RECOMP_SHIFT(ecx, 0x1F, 32, 1, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7FFFFFFF)) >> 32) & 1);
    ecx = ecx + 0x7FFFFFFF;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -96) = ecx;
    MEM32(ebp + -92) = eax;
    goto loc_004354D1;

loc_004354D1: ;
    eax = MEM32(ebp + -84);
    ecx = MEM32(ebp + -88);
    esi = MEM32(ebp + -96);
    edx = MEM32(ebp + -92);
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
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
    MEM32(ebp + -56) = ecx;
    MEM32(ebp + -52) = eax;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x80000000u)) >> 32) & 1);
    ecx = ecx + 0x80000000u;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0043550F; /* jne: not equal / not zero */

loc_004354FF: ;
    goto loc_00435501;

loc_00435501: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    MEM32(ebp + -104) = ecx;
    MEM32(ebp + -100) = eax;
    goto loc_00435525;

loc_0043550F: ;
    ecx = MEM32(ebp + -20);
    _shift_result = RECOMP_SHIFT(ecx, 0x1F, 32, 1, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7FFFFFFF)) >> 32) & 1);
    ecx = ecx + 0x7FFFFFFF;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -104) = ecx;
    MEM32(ebp + -100) = eax;
    goto loc_00435525;

loc_00435525: ;
    eax = MEM32(ebp + -104);
    ecx = MEM32(ebp + -100);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -60) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004355A9; /* jne: not equal / not zero */

loc_0043553A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004355A9; /* jne: not equal / not zero */

loc_00435540: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    ecx = ebp + -64;
    edi = edx;
    esi = ecx;
    eax = esp;
    MEM32(ebp + -108) = eax;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x65;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004355A4u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_004355A4: ;
    MEM32(ebp + -32) = eax;
    goto loc_0043561E;

loc_004355A9: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -112) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, &_cf);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(ebp + -116) = ecx;
    ebx = ebp + -64;
    eax = ebx;
    MEM32(ebp + -120) = eax;
    eax = esp;
    MEM32(ebp + -124) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -120);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -116);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x73;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043561Bu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043561B: ;
    MEM32(ebp + -32) = eax;

loc_0043561E: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0xFFFFFFFCu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00435658; /* jne: not equal / not zero */

loc_00435624: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00435658; /* je: equal / zero */

loc_0043562A: ;
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00435658; /* jne: not equal / not zero */

loc_00435635: ;
    edx = MEM32(ebp + -64);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + -56);
    eax = MEM32(ebp + -52);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -60);
    eax = MEM32(ebp + 0x14);
    MEM32(eax + 8) = ecx;

loc_00435658: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -32)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -32))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -16) = eax;

loc_00435660: ;
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
 * sub_00435670
 * Original: 0x00435670 - 0x004356BA (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435670(void)
{
    uint32_t ebp = g_ebp;

loc_00435670: ;
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
    MEM32(eax) = 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004356ABu); RECOMP_ABI_CALL(0x004356C0u, sub_004356C0); /* call 0x004356C0 */

loc_004356AB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004356B3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004356B3: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004356C0
 * Original: 0x004356C0 - 0x0043574B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004356C0(void)
{
    uint32_t ebp = g_ebp;

loc_004356C0: ;
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
    PUSH32(esp, 0x00435743u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00435743: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435750
 * Original: 0x00435750 - 0x0043578C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435750(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435750: ;
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
    PUSH32(esp, 0x00435764u); RECOMP_ABI_CALL(0x00435AF0u, sub_00435AF0); /* call 0x00435AF0 */

loc_00435764: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00435776; /* jne: not equal / not zero */

loc_0043576D: ;
    MEM32(ebp + -4) = 0;
    goto loc_00435784;

loc_00435776: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435781u); RECOMP_ABI_CALL(0x00434DF0u, sub_00434DF0); /* call 0x00434DF0 */

loc_00435781: ;
    MEM32(ebp + -4) = eax;

loc_00435784: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435790
 * Original: 0x00435790 - 0x004357DD (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435790(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -44;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004357AEu); RECOMP_ABI_CALL(0x00435B20u, sub_00435B20); /* call 0x00435B20 */

loc_004357AE: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004357CE; /* je: equal / zero */

loc_004357B7: ;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004357C9u); RECOMP_ABI_CALL(0x00434E20u, sub_00434E20); /* call 0x00434E20 */

loc_004357C9: ;
    MEM32(ebp + -52) = eax;
    goto loc_004357D5;

loc_004357CE: ;
    eax = 0; /* xor self */
    MEM32(ebp + -52) = eax;
    goto loc_004357D5;

loc_004357D5: ;
    eax = MEM32(ebp + -52);
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004357E0
 * Original: 0x004357E0 - 0x0043582D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004357E0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _sbb_result = 0;
    int _sbb_sf = 0, _sbb_of = 0;
    (void)_sbb_result; (void)_sbb_sf; (void)_sbb_of;
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

loc_004357E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    xmm0 = XMM_SCALAR_BITS(edx); /* movd to xmm */
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
    xmm1 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm0 = XMM_UNPACK_LOW(xmm0, xmm1); /* punpckldq */
    XMM_STORE_LOW(ebp + -16, xmm0); /* movlpd */
    fp_push((double)SMEM64(ebp + -16)); /* fild */
    MEMD(ebp + -24) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -32)); /* fld double */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
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
 * sub_00435830
 * Original: 0x00435830 - 0x00435886 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435830(void)
{
    uint32_t ebp = g_ebp;

loc_00435830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = esp;
    ecx = ebp + -16;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043584Cu); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_0043584C: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -8);
    ecx = 0xF4240;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 8);
    MEM16(eax + 8) = LO16(ecx);
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xC) = 0;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xA) = 0;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435890
 * Original: 0x00435890 - 0x004359DC (332 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435890(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00435890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x88)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    eax = 0x47A7CA;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004358B1u); RECOMP_ABI_CALL(0x003DC4D0u, sub_003DC4D0); /* call 0x003DC4D0 */

loc_004358B1: ;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = 0;
    eax = 0; /* xor self */
    eax = ebp + -120;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004358D0u); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_004358D0: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004358E5; /* jne: not equal / not zero */

loc_004358D6: ;
    MEM32(0xDFCD08) = 1;
    goto loc_004359AB;

loc_004358E5: ;
    ecx = MEM32(ebp + -8);
    eax = 0x4555FD;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004358FAu); RECOMP_ABI_CALL(0x0041A200u, sub_0041A200); /* call 0x0041A200 */

loc_004358FA: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00435928; /* jne: not equal / not zero */

loc_00435903: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435908u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00435908: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xC (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00435919; /* jne: not equal / not zero */

loc_0043590D: ;
    MEM32(0xDFCD08) = 6;
    goto loc_00435923;

loc_00435919: ;
    MEM32(0xDFCD08) = 2;

loc_00435923: ;
    goto loc_004359AB;

loc_00435928: ;
    goto loc_0043592A;

loc_0043592A: ;
    ecx = ebp + -112;
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x64;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435944u); RECOMP_ABI_CALL(0x00419630u, sub_00419630); /* call 0x00419630 */

loc_00435944: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00435983; /* je: equal / zero */

loc_00435949: ;
    edx = MEM32(ebp + 8);
    ecx = ebp + -112;
    eax = 0xDFCCDC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435965u); RECOMP_ABI_CALL(0x00436B80u, sub_00436B80); /* call 0x00436B80 */

loc_00435965: ;
    MEM32(ebp + -116) = eax;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00435981; /* je: equal / zero */

loc_0043596E: ;
    eax = MEM32(ebp + -116);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00435981; /* jne: not equal / not zero */

loc_00435976: ;
    eax = 0xDFCCDC;
    MEM32(ebp + -4) = eax;
    goto loc_004359AB;

loc_00435981: ;
    goto loc_0043592A;

loc_00435983: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043598Eu); RECOMP_ABI_CALL(0x00418EF0u, sub_00418EF0); /* call 0x00418EF0 */

loc_0043598E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0043599F; /* je: equal / zero */

loc_00435993: ;
    MEM32(0xDFCD08) = 5;
    goto loc_004359A9;

loc_0043599F: ;
    MEM32(0xDFCD08) = 7;

loc_004359A9: ;
    goto loc_004359AB;

loc_004359AB: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004359BC; /* je: equal / zero */

loc_004359B1: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004359BCu); RECOMP_ABI_CALL(0x00418D80u, sub_00418D80); /* call 0x00418D80 */

loc_004359BC: ;
    eax = MEM32(ebp + -120);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004359D1u); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_004359D1: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x88;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004359E0
 * Original: 0x004359E0 - 0x00435A4B (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004359E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_004359E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004359FB; /* jne: not equal / not zero */

loc_004359F2: ;
    MEM32(ebp + -4) = 0;
    goto loc_00435A43;

loc_004359FB: ;
    eax = esp;
    ecx = ebp + -20;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435A0Eu); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_00435A0E: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -20)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -12);
    ecx = 0x10624DD3;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    edx = RECOMP_SAR(edx, 6, 32, NULL);
    edx = edx + eax;
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(ebp + -4) = 0;

loc_00435A43: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435A50
 * Original: 0x00435A50 - 0x00435A73 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435A50(void)
{
    uint32_t ebp = g_ebp;

loc_00435A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = 0xDFCD0C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435A6Eu); RECOMP_ABI_CALL(0x00435A80u, sub_00435A80); /* call 0x00435A80 */

loc_00435A6E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435A80
 * Original: 0x00435A80 - 0x00435AEF (111 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435A80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    esi = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435AA7u); RECOMP_ABI_CALL(0x00433090u, sub_00433090); /* call 0x00433090 */

loc_00435AA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00435AC0; /* jge: greater or equal (signed >=) */

loc_00435AAC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435AB1u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00435AB1: ;
    MEM32(eax) = 0x4B;
    MEM32(ebp + -8) = 0;
    goto loc_00435AE6;

loc_00435AC0: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x20) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = 0;
    eax = MEM32(ebp + 0xC);
    ecx = 0x508D74;
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;

loc_00435AE6: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435AF0
 * Original: 0x00435AF0 - 0x00435B13 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435AF0(void)
{
    uint32_t ebp = g_ebp;

loc_00435AF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = 0xDFCD38;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435B0Eu); RECOMP_ABI_CALL(0x00435B20u, sub_00435B20); /* call 0x00435B20 */

loc_00435B0E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435B20
 * Original: 0x00435B20 - 0x00435BFA (218 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435B20(void)
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

loc_00435B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xFF0EBD80u));
    eax = eax - 0xFF0EBD80u;
    if (CMP_L((uint32_t)eax + (uint32_t)0xFF0EBD80u, (uint32_t)0xFF0EBD80u)) goto loc_00435B55; /* jl: less (signed <) */

loc_00435B3C: ;
    goto loc_00435B3E;

loc_00435B3E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0xFE1D7B01u));
    ecx = ecx - 0xFE1D7B01u;
    {
      _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF1427F) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      eax = _sbb_result;
    } /* sbb */
    if ((_sbb_sf != _sbb_of)) goto loc_00435B6C; /* jl: less (signed <) */

loc_00435B53: ;
    goto loc_00435B55;

loc_00435B55: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435B5Au); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00435B5A: ;
    MEM32(eax) = 0x4B;
    MEM32(ebp + -16) = 0;
    goto loc_00435BEF;

loc_00435B6C: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    ebx = MEM32(ebp + 0xC);
    esi = ebx;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    edi = ebx;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x24)) >> 32) & 1);
    edi = edi + 0x24;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x28)) >> 32) & 1);
    ebx = ebx + 0x28;
    eax = esp;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435BA7u); RECOMP_ABI_CALL(0x00433560u, sub_00433560); /* call 0x00433560 */

loc_00435BA7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax + 0x24);
    eax = esi;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    esi = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435BD0u); RECOMP_ABI_CALL(0x00433090u, sub_00433090); /* call 0x00433090 */

loc_00435BD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00435BE9; /* jge: greater or equal (signed >=) */

loc_00435BD5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435BDAu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00435BDA: ;
    MEM32(eax) = 0x4B;
    MEM32(ebp + -16) = 0;
    goto loc_00435BEF;

loc_00435BE9: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = eax;

loc_00435BEF: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435C00
 * Original: 0x00435C00 - 0x00435D57 (343 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435C00(void)
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00435C00: ;
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
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435C18u); RECOMP_ABI_CALL(0x00433410u, sub_00433410); /* call 0x00433410 */

loc_00435C18: ;
    MEM32(ebp + -76) = edx;
    MEM32(ebp + -80) = eax;
    ecx = MEM32(ebp + -80);
    edx = MEM32(ebp + -76);
    esi = ebp + -64;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    edi = ebp + -64;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x24)) >> 32) & 1);
    edi = edi + 0x24;
    ebx = ebp + -64;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x28)) >> 32) & 1);
    ebx = ebx + 0x28;
    eax = esp;
    MEM32(eax + 0x18) = ebx;
    ebx = ebp + -68;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435C58u); RECOMP_ABI_CALL(0x00433560u, sub_00433560); /* call 0x00433560 */

loc_00435C58: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00435C89; /* jl: less (signed <) */

loc_00435C61: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x20) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00435C89; /* je: equal / zero */

loc_00435C6C: ;
    esi = MEM32(ebp + -68);
    eax = MEM32(ebp + -28);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    { uint32_t _zr = ((uint32_t)(esi) - (uint32_t)(eax)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esi = _zr; }
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    ecx = MEM32(ebp + -80);
    eax = MEM32(ebp + -76);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
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
    MEM32(ebp + -80) = ecx;
    MEM32(ebp + -76) = eax;

loc_00435C89: ;
    esi = MEM32(ebp + -28);
    edx = esi;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    ecx = MEM32(ebp + -80);
    eax = MEM32(ebp + -76);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
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
    MEM32(ebp + -80) = ecx;
    MEM32(ebp + -76) = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00435CAE; /* jne: not equal / not zero */

loc_00435CA7: ;
    goto loc_00435CA9;

loc_00435CA9: ;
    goto loc_00435D30;

loc_00435CAE: ;
    ecx = MEM32(ebp + -80);
    edx = MEM32(ebp + -76);
    esi = ebp + -32;
    edi = ebp + -28;
    ebx = ebp + -24;
    eax = esp;
    MEM32(eax + 0x18) = ebx;
    ebx = ebp + -68;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435CDFu); RECOMP_ABI_CALL(0x00433560u, sub_00433560); /* call 0x00433560 */

loc_00435CDF: ;
    ecx = MEM32(ebp + -80);
    edx = MEM32(ebp + -76);
    esi = MEM32(ebp + -28);
    eax = esi;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    eax = esp;
    esi = ebp + -64;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435D03u); RECOMP_ABI_CALL(0x00433090u, sub_00433090); /* call 0x00433090 */

loc_00435D03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00435D0A; /* jge: greater or equal (signed >=) */

loc_00435D08: ;
    goto loc_00435D30;

loc_00435D0A: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ebp + -36); /* movups */
    XMM_STORE(eax + 0x1C, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -64); /* movups */
    xmm1 = XMM_MEM(ebp + -48); /* movups */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    MEMD(ebp + -20) = xmm0.d[0]; /* movsd */
    goto loc_00435D49;

loc_00435D30: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435D35u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00435D35: ;
    MEM32(eax) = 0x4B;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    MEM32(ebp + -20) = 0xFFFFFFFFu;

loc_00435D49: ;
    eax = MEM32(ebp + -20);
    edx = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x6C)) >> 32) & 1);
    esp = esp + 0x6C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435D60
 * Original: 0x00435D60 - 0x00435DA3 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435D60(void)
{
    uint32_t ebp = g_ebp;

loc_00435D60: ;
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
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435D90u); RECOMP_ABI_CALL(0x00435390u, sub_00435390); /* call 0x00435390 */

loc_00435D90: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435D9Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00435D9E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00435DB0
 * Original: 0x00435DB0 - 0x0043652E (1918 bytes, 560 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435DB0(void)
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

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00435DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x60));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x60)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = 0x4841D0;
    MEM32(ebp + -32) = 2;
    MEM32(ebp + -36) = 0x30;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFDBu)) >> 32) & 1);
    eax = eax + 0xFFFFFFDBu;
    MEM32(ebp + -40) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x55));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x55)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_004363B5; /* ja: above (unsigned >) */

loc_00435DF1: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax * 4 + 0x508DB4);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x00435DFDu) goto loc_00435DFD;
    if (_jt == 0x00435E1Eu) goto loc_00435E1E;
    if (_jt == 0x00435E3Fu) goto loc_00435E3F;
    if (_jt == 0x00435E60u) goto loc_00435E60;
    if (_jt == 0x00435E81u) goto loc_00435E81;
    if (_jt == 0x00435E8Du) goto loc_00435E8D;
    if (_jt == 0x00435EC6u) goto loc_00435EC6;
    if (_jt == 0x00435ECDu) goto loc_00435ECD;
    if (_jt == 0x00435EE3u) goto loc_00435EE3;
    if (_jt == 0x00435EF1u) goto loc_00435EF1;
    if (_jt == 0x00435EFFu) goto loc_00435EFF;
    if (_jt == 0x00435FA6u) goto loc_00435FA6;
    if (_jt == 0x00435FBCu) goto loc_00435FBC;
    if (_jt == 0x0043600Du) goto loc_0043600D;
    if (_jt == 0x0043602Bu) goto loc_0043602B;
    if (_jt == 0x00436042u) goto loc_00436042;
    if (_jt == 0x00436058u) goto loc_00436058;
    if (_jt == 0x0043606Fu) goto loc_0043606F;
    if (_jt == 0x0043608Du) goto loc_0043608D;
    if (_jt == 0x00436099u) goto loc_00436099;
    if (_jt == 0x004360A7u) goto loc_004360A7;
    if (_jt == 0x004360D4u) goto loc_004360D4;
    if (_jt == 0x004360E9u) goto loc_004360E9;
    if (_jt == 0x00436100u) goto loc_00436100;
    if (_jt == 0x0043610Eu) goto loc_0043610E;
    if (_jt == 0x00436146u) goto loc_00436146;
    if (_jt == 0x00436179u) goto loc_00436179;
    if (_jt == 0x004361CCu) goto loc_004361CC;
    if (_jt == 0x004361EAu) goto loc_004361EA;
    if (_jt == 0x00436207u) goto loc_00436207;
    if (_jt == 0x00436213u) goto loc_00436213;
    if (_jt == 0x0043621Fu) goto loc_0043621F;
    if (_jt == 0x0043626Eu) goto loc_0043626E;
    if (_jt == 0x004362DFu) goto loc_004362DF;
    if (_jt == 0x0043636Bu) goto loc_0043636B;
    if (_jt == 0x0043639Eu) goto loc_0043639E;
    if (_jt == 0x004363B5u) goto loc_004363B5;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00435DFD: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 6 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00435E0B; /* jbe: below or equal (unsigned <=) */

loc_00435E06: ;
    goto loc_004364AF;

loc_00435E0B: ;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax + 0x18);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20000)) >> 32) & 1);
    eax = eax + 0x20000;
    MEM32(ebp + -16) = eax;
    goto loc_0043649A;

loc_00435E1E: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 6 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00435E2C; /* jbe: below or equal (unsigned <=) */

loc_00435E27: ;
    goto loc_004364AF;

loc_00435E2C: ;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax + 0x18);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20007)) >> 32) & 1);
    eax = eax + 0x20007;
    MEM32(ebp + -16) = eax;
    goto loc_0043649A;

loc_00435E3F: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0xB (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00435E4D; /* jbe: below or equal (unsigned <=) */

loc_00435E48: ;
    goto loc_004364AF;

loc_00435E4D: ;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2000E)) >> 32) & 1);
    eax = eax + 0x2000E;
    MEM32(ebp + -16) = eax;
    goto loc_0043649A;

loc_00435E60: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0xB (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00435E6E; /* jbe: below or equal (unsigned <=) */

loc_00435E69: ;
    goto loc_004364AF;

loc_00435E6E: ;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2001A)) >> 32) & 1);
    eax = eax + 0x2001A;
    MEM32(ebp + -16) = eax;
    goto loc_0043649A;

loc_00435E81: ;
    MEM32(ebp + -16) = 0x20028;
    goto loc_004364C9;

loc_00435E8D: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax + 0x14);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x76C)) >> 32) & 1);
    edx = edx + 0x76C;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    eax = esp;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435EBBu); RECOMP_ABI_CALL(0x0043CFF0u, sub_0043CFF0); /* call 0x0043CFF0 */

loc_00435EBB: ;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -24) = eax;
    goto loc_004363C1;

loc_00435EC6: ;
    MEM32(ebp + -36) = 0x5F;

loc_00435ECD: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0xC);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    goto loc_004363C1;

loc_00435EE3: ;
    eax = 0x4449F4;
    MEM32(ebp + -28) = eax;
    goto loc_004364DE;

loc_00435EF1: ;
    eax = 0x447567;
    MEM32(ebp + -28) = eax;
    goto loc_004364DE;

loc_00435EFF: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x14);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x76C)) >> 32) & 1);
    ecx = ecx + 0x76C;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 3 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00435F41; /* jge: greater or equal (signed >=) */

loc_00435F22: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435F2Du); RECOMP_ABI_CALL(0x00436530u, sub_00436530); /* call 0x00436530 */

loc_00435F2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00435F41; /* je: equal / zero */

loc_00435F32: ;
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(MEM32(ebp + -24)) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 0xFFFFFFFFu;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -20) = eax;
    goto loc_00435F6C;

loc_00435F41: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x168) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 0x168 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00435F6A; /* jle: less or equal (signed <=) */

loc_00435F4D: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435F58u); RECOMP_ABI_CALL(0x00436530u, sub_00436530); /* call 0x00436530 */

loc_00435F58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00435F6A; /* jne: not equal / not zero */

loc_00435F5D: ;
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(MEM32(ebp + -24)) + (uint64_t)(1)) >> 32) & 1);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 1;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -20) = eax;

loc_00435F6A: ;
    goto loc_00435F6C;

loc_00435F6C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x67 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00435F9A; /* jne: not equal / not zero */

loc_00435F72: ;
    ecx = MEM32(ebp + -24);
    edx = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00435F92u); RECOMP_ABI_CALL(0x0043D050u, sub_0043D050); /* call 0x0043D050 */

loc_00435F92: ;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -24) = eax;
    goto loc_00435FA1;

loc_00435F9A: ;
    MEM32(ebp + -32) = 4;

loc_00435FA1: ;
    goto loc_004363C1;

loc_00435FA6: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 8);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    goto loc_004363C1;

loc_00435FBC: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 8);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    if ((eax != 0)) goto loc_00435FE9; /* jne: not equal / not zero */

loc_00435FD7: ;
    goto loc_00435FD9;

loc_00435FD9: ;
    MEM32(ebp + -20) = 0;
    MEM32(ebp + -24) = 0xC;
    goto loc_00436008;

loc_00435FE9: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0xD));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0xD)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
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
    if ((_sbb_sf != _sbb_of)) goto loc_00436006; /* jl: less (signed <) */

loc_00435FF7: ;
    goto loc_00435FF9;

loc_00435FF9: ;
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(MEM32(ebp + -24)) + (uint64_t)(0xFFFFFFF4u)) >> 32) & 1);
    MEM32(ebp + -24) = MEM32(ebp + -24) + 0xFFFFFFF4u;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -20) = eax;

loc_00436006: ;
    goto loc_00436008;

loc_00436008: ;
    goto loc_004363C1;

loc_0043600D: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x1C);
    ecx++;
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -32) = 3;
    goto loc_004363C1;

loc_0043602B: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x10);
    ecx++;
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    goto loc_004363C1;

loc_00436042: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 4);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    goto loc_004363C1;

loc_00436058: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 1;
    eax = 0x478409;
    MEM32(ebp + -12) = eax;
    goto loc_00436524;

loc_0043606F: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax + 8);
    eax = 0x20026;
    ecx = 0x20027;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) eax = ecx; /* cmovge */
    MEM32(ebp + -16) = eax;
    goto loc_0043649A;

loc_0043608D: ;
    MEM32(ebp + -16) = 0x2002B;
    goto loc_004364C9;

loc_00436099: ;
    eax = 0x458819;
    MEM32(ebp + -28) = eax;
    goto loc_004364DE;

loc_004360A7: ;
    ecx = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004360B3u); RECOMP_ABI_CALL(0x00433410u, sub_00433410); /* call 0x00433410 */

loc_004360B3: ;
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(ecx + 0x24);
    ecx = esi;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    {
      _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      edx = _sbb_result;
    } /* sbb */
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -32) = 1;
    goto loc_004363C1;

loc_004360D4: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    goto loc_004363C1;

loc_004360E9: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 1;
    eax = 0x468AAE;
    MEM32(ebp + -12) = eax;
    goto loc_00436524;

loc_00436100: ;
    eax = 0x49764E;
    MEM32(ebp + -28) = eax;
    goto loc_004364DE;

loc_0043610E: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00436122; /* je: equal / zero */

loc_00436117: ;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -44) = eax;
    goto loc_0043612C;

loc_00436122: ;
    eax = 7;
    MEM32(ebp + -44) = eax;
    goto loc_0043612C;

loc_0043612C: ;
    ecx = MEM32(ebp + -44);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -32) = 1;
    goto loc_004363C1;

loc_00436146: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    MEM32(ebp + -48) = eax;
    ecx = 0x24924925;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebp + -48);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = 0;
    goto loc_004363C1;

loc_00436179: ;
    eax = MEM32(ebp + 0x14);
    esi = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    MEM32(ebp + -56) = eax;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(6)) >> 32) & 1);
    esi = esi + 6;
    ecx = 0x24924925;
    eax = esi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebp + -56);
    edi = esi;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    { uint32_t _zr = ((uint32_t)(edi) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edi = _zr; }
    _shift_result = RECOMP_SHIFT(edi, 1, 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _shift_result = RECOMP_SHIFT(edi, 2, 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    edx = edi;
    _shift_result = RECOMP_SHIFT(edx, 3, 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(edi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    eax = eax + edx + 7;
    MEM32(ebp + -52) = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(ebp + -52);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = 0;
    goto loc_004363C1;

loc_004361CC: ;
    ecx = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004361D8u); RECOMP_ABI_CALL(0x00436530u, sub_00436530); /* call 0x00436530 */

loc_004361D8: ;
    ecx = eax;
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    goto loc_004363C1;

loc_004361EA: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x18);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -32) = 1;
    goto loc_004363C1;

loc_00436207: ;
    MEM32(ebp + -16) = 0x20029;
    goto loc_004364C9;

loc_00436213: ;
    MEM32(ebp + -16) = 0x2002A;
    goto loc_004364C9;

loc_0043621F: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(eax + 0x14);
    ecx = edx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x76C)) >> 32) & 1);
    edx = edx + 0x76C;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    eax = esp;
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043624Du); RECOMP_ABI_CALL(0x0043D050u, sub_0043D050); /* call 0x0043D050 */

loc_0043624D: ;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_00436269; /* jns: not sign (positive) */

loc_0043625A: ;
    goto loc_0043625C;

loc_0043625C: ;
    ecx = MEM32(ebp + -20);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((MEM32(ebp + -24)) != 0);
    MEM32(ebp + -24) = (0u - (uint32_t)(MEM32(ebp + -24)));
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
    MEM32(ebp + -20) = eax;

loc_00436269: ;
    goto loc_004363C1;

loc_0043626E: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 0x14);
    eax = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, &_cf);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x76C)) >> 32) & 1);
    ecx = ecx + 0x76C;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -20);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x2710));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x2710)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
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
    if ((_sbb_sf != _sbb_of)) goto loc_004362D3; /* jl: less (signed <) */

loc_00436299: ;
    goto loc_0043629B;

loc_0043629B: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -24);
    esi = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x45E169;
    MEM32(eax + 4) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004362C1u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_004362C1: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    goto loc_00436524;

loc_004362D3: ;
    MEM32(ebp + -32) = 4;
    goto loc_004363C1;

loc_004362DF: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004362FF; /* jge: greater or equal (signed >=) */

loc_004362E8: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0;
    eax = 0x452F3B;
    MEM32(ebp + -12) = eax;
    goto loc_00436524;

loc_004362FF: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax + 0x24);
    ecx = 0xE10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax + 0x24);
    ecx = 0xE10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = edx;
    ecx = 0x3C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(ebp + -64);
    ecx = eax;
    eax = MEM32(ebp + -60);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    ecx = 0x46F3BA;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x64;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436359u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_00436359: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    goto loc_00436524;

loc_0043636B: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0043638B; /* jge: greater or equal (signed >=) */

loc_00436374: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0;
    eax = 0x452F3B;
    MEM32(ebp + -12) = eax;
    goto loc_00436524;

loc_0043638B: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436396u); RECOMP_ABI_CALL(0x00433DE0u, sub_00433DE0); /* call 0x00433DE0 */

loc_00436396: ;
    MEM32(ebp + -28) = eax;
    goto loc_004364AF;

loc_0043639E: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 1;
    eax = 0x44A48C;
    MEM32(ebp + -12) = eax;
    goto loc_00436524;

loc_004363B5: ;
    MEM32(ebp + -12) = 0;
    goto loc_00436524;

loc_004363C1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004363CF; /* je: equal / zero */

loc_004363C7: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -68) = eax;
    goto loc_004363D5;

loc_004363CF: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -68) = eax;

loc_004363D5: ;
    eax = MEM32(ebp + -68);
    MEM32(ebp + -72) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x2D)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_004363F6; /* je: equal / zero */

loc_004363E0: ;
    goto loc_004363E2;

loc_004363E2: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0043645A; /* je: equal / zero */

loc_004363EA: ;
    goto loc_004363EC;

loc_004363EC: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x5F));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x5F)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_00436425; /* je: equal / zero */

loc_004363F4: ;
    goto loc_0043645C;

loc_004363F6: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -24);
    esi = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x44A48E;
    MEM32(eax + 4) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043641Cu); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_0043641C: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    goto loc_0043648F;

loc_00436425: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -32);
    esi = MEM32(ebp + -24);
    edi = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x49A05C;
    MEM32(eax + 4) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436451u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_00436451: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    goto loc_0043648F;

loc_0043645A: ;
    goto loc_0043645C;

loc_0043645C: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -32);
    esi = MEM32(ebp + -24);
    edi = MEM32(ebp + -20);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0x47A7D2;
    MEM32(eax + 4) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436488u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_00436488: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_0043648F: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    goto loc_00436524;

loc_0043649A: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004364ACu); RECOMP_ABI_CALL(0x003E4220u, sub_003E4220); /* call 0x003E4220 */

loc_004364AC: ;
    MEM32(ebp + -28) = eax;

loc_004364AF: ;
    eax = MEM32(ebp + -28);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004364BAu); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_004364BA: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -12) = eax;
    goto loc_00436524;

loc_004364C9: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004364DBu); RECOMP_ABI_CALL(0x003E4220u, sub_003E4220); /* call 0x003E4220 */

loc_004364DB: ;
    MEM32(ebp + -28) = eax;

loc_004364DE: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -28);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0x64;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436506u); RECOMP_ABI_CALL(0x00436650u, sub_00436650); /* call 0x00436650 */

loc_00436506: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043651E; /* jne: not equal / not zero */

loc_00436515: ;
    MEM32(ebp + -12) = 0;
    goto loc_00436524;

loc_0043651E: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;

loc_00436524: ;
    eax = MEM32(ebp + -12);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x60)) >> 32) & 1);
    esp = esp + 0x60;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00436530
 * Original: 0x00436530 - 0x00436648 (280 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436530(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00436530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    eax = eax + 7;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax + 6;
    ecx = 7;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(ebp + -16);
    eax = eax - edx;
    ecx = 7;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax + 0x173;
    ecx = MEM32(ebp + 8);
    eax = eax - MEM32(ecx + 0x1C);
    eax = eax - 2;
    ecx = 7;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00436593; /* ja: above (unsigned >) */

loc_0043658A: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;

loc_00436593: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004365F3; /* jne: not equal / not zero */

loc_00436599: ;
    MEM32(ebp + -4) = 0x34;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax + 7;
    ecx = MEM32(ebp + 8);
    eax = eax - MEM32(ecx + 0x1C);
    eax = eax - 1;
    ecx = 7;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -8) = edx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004365E8; /* je: equal / zero */

loc_004365C4: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004365F1; /* jne: not equal / not zero */

loc_004365CA: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = 0x190;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 1;
    MEM32(esp) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004365E3u); RECOMP_ABI_CALL(0x00436B00u, sub_00436B00); /* call 0x00436B00 */

loc_004365E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004365F1; /* je: equal / zero */

loc_004365E8: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;

loc_004365F1: ;
    goto loc_00436640;

loc_004365F3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x35 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043663E; /* jne: not equal / not zero */

loc_004365F9: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    eax = eax + 0x173;
    ecx = MEM32(ebp + 8);
    eax = eax - MEM32(ecx + 0x1C);
    ecx = 7;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -12) = edx;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043663C; /* je: equal / zero */

loc_0043661C: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00436635; /* jne: not equal / not zero */

loc_00436622: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436630u); RECOMP_ABI_CALL(0x00436B00u, sub_00436B00); /* call 0x00436B00 */

loc_00436630: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043663C; /* jne: not equal / not zero */

loc_00436635: ;
    MEM32(ebp + -4) = 1;

loc_0043663C: ;
    goto loc_0043663E;

loc_0043663E: ;
    goto loc_00436640;

loc_00436640: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00436650
 * Original: 0x00436650 - 0x00436A8F (1087 bytes, 317 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436650(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00436650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xAC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = 0;

loc_00436672: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_00436A59; /* jae: above or equal (unsigned >=) */

loc_0043667E: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0043669B; /* jne: not equal / not zero */

loc_00436686: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEM8(eax + ecx) = 0;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;
    goto loc_00436A81;

loc_0043669B: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004366C1; /* je: equal / zero */

loc_004366A6: ;
    eax = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(eax));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    esi = ecx;
    esi = esi + 1;
    MEM32(ebp + -20) = esi;
    MEM8(eax + ecx) = LO8(edx);
    goto loc_00436A4B;

loc_004366C1: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 1;
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + -136) = 0;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004366F5; /* je: equal / zero */

loc_004366DF: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004366F5; /* je: equal / zero */

loc_004366EA: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00436709; /* jne: not equal / not zero */

loc_004366F5: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + 0x10) = ecx;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + -136) = eax;

loc_00436709: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    MEM32(ebp + -140) = ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_00436729; /* jne: not equal / not zero */

loc_00436727: ;
    goto loc_00436732;

loc_00436729: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 1;
    MEM32(ebp + 0x10) = eax;

loc_00436732: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0043673A; /* jne: not equal / not zero */

loc_00436738: ;
    goto loc_0043674F;

loc_0043673A: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436748u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_00436748: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0043675D; /* jne: not equal / not zero */

loc_0043674D: ;
    goto loc_0043677F;

loc_0043674F: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0043677F; /* jae: above or equal (unsigned >=) */

loc_0043675D: ;
    ecx = MEM32(ebp + 0x10);
    eax = ebp + -128;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436777u); RECOMP_ABI_CALL(0x004274A0u, sub_004274A0); /* call 0x004274A0 */

loc_00436777: ;
    MEM32(ebp + -144) = eax;
    goto loc_0043678F;

loc_0043677F: ;
    MEM32(ebp + -144) = 0;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -128) = eax;

loc_0043678F: ;
    eax = MEM32(ebp + -128);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004367BB; /* je: equal / zero */

loc_0043679A: ;
    eax = MEM32(ebp + -128);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004367BB; /* je: equal / zero */

loc_004367A5: ;
    eax = MEM32(ebp + -128);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004367BB; /* je: equal / zero */

loc_004367B0: ;
    eax = MEM32(ebp + -128);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x59 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004367D8; /* jne: not equal / not zero */

loc_004367BB: ;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -144), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004367D6; /* jne: not equal / not zero */

loc_004367C4: ;
    eax = MEM32(ebp + -128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004367D6; /* je: equal / zero */

loc_004367CC: ;
    MEM32(ebp + -144) = 1;

loc_004367D6: ;
    goto loc_004367E2;

loc_004367D8: ;
    MEM32(ebp + -144) = 0;

loc_004367E2: ;
    eax = MEM32(ebp + -128);
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x45 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004367FE; /* je: equal / zero */

loc_004367F3: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00436807; /* jne: not equal / not zero */

loc_004367FE: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 1;
    MEM32(ebp + 0x10) = eax;

loc_00436807: ;
    eax = MEM32(ebp + 0x10);
    esi = (uint32_t)(int32_t)SMEM8(eax);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + -136);
    ebx = ebp + -124;
    edi = ebp + -24;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043683Bu); RECOMP_ABI_CALL(0x00435DB0u, sub_00435DB0); /* call 0x00435DB0 */

loc_0043683B: ;
    MEM32(ebp + -132) = eax;
    _fa = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -132), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0043684F; /* jne: not equal / not zero */

loc_0043684A: ;
    goto loc_00436A59;

loc_0043684F: ;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -144), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00436A0D; /* je: equal / zero */

loc_0043685C: ;
    eax = MEM32(ebp + -132);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00436878; /* je: equal / zero */

loc_0043686A: ;
    eax = MEM32(ebp + -132);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00436890; /* jne: not equal / not zero */

loc_00436878: ;
    eax = MEM32(ebp + -132);
    eax = eax + 1;
    MEM32(ebp + -132) = eax;
    eax = MEM32(ebp + -24);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;

loc_00436890: ;
    goto loc_00436892;

loc_00436892: ;
    eax = MEM32(ebp + -132);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -149) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_004368C1; /* jne: not equal / not zero */

loc_004368A8: ;
    eax = MEM32(ebp + -132);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -149) = LO8(eax);

loc_004368C1: ;
    SET_LO8(eax, MEM8(ebp + -149));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_004368CD; /* jne: not equal / not zero */

loc_004368CB: ;
    goto loc_004368E9;

loc_004368CD: ;
    goto loc_004368CF;

loc_004368CF: ;
    eax = MEM32(ebp + -132);
    eax = eax + 1;
    MEM32(ebp + -132) = eax;
    eax = MEM32(ebp + -24);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;
    goto loc_00436892;

loc_004368E9: ;
    eax = MEM32(ebp + -144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_004368FD; /* jae: above or equal (unsigned >=) */

loc_004368F4: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -144) = eax;

loc_004368FD: ;
    MEM32(ebp + -148) = 0;

loc_00436907: ;
    eax = MEM32(ebp + -132);
    ecx = MEM32(ebp + -148);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_00436932; /* jae: above or equal (unsigned >=) */

loc_0043691F: ;
    goto loc_00436921;

loc_00436921: ;
    eax = MEM32(ebp + -148);
    eax = eax + 1;
    MEM32(ebp + -148) = eax;
    goto loc_00436907;

loc_00436932: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF894u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0xFFFFF894u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_00436961; /* jge: greater or equal (signed >=) */

loc_0043693E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -20) = edx;
    MEM8(eax + ecx) = 0x2D;
    eax = MEM32(ebp + -144);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -144) = eax;
    goto loc_004369B8;

loc_00436961: ;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -140), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004369B6; /* je: equal / zero */

loc_0043696A: ;
    eax = MEM32(ebp + -148);
    ecx = MEM32(ebp + -144);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -24))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = eax + ecx;
    ecx = MEM32(ebp + -128);
    esi = (uint32_t)(int32_t)SMEM8(ecx);
    ecx = 5;
    edx = 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x43 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) ecx = edx; /* cmove */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_004369B6; /* jb: below (unsigned <) */

loc_00436995: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -20) = edx;
    MEM8(eax + ecx) = 0x2B;
    eax = MEM32(ebp + -144);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -144) = eax;

loc_004369B6: ;
    goto loc_004369B8;

loc_004369B8: ;
    goto loc_004369BA;

loc_004369BA: ;
    ecx = MEM32(ebp + -144);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -24) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -150) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_004369DC; /* jbe: below or equal (unsigned <=) */

loc_004369CD: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -150) = LO8(eax);

loc_004369DC: ;
    SET_LO8(eax, MEM8(ebp + -150));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_004369E8; /* jne: not equal / not zero */

loc_004369E6: ;
    goto loc_00436A0B;

loc_004369E8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -20) = edx;
    MEM8(eax + ecx) = 0x30;
    eax = MEM32(ebp + -144);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -144) = eax;
    goto loc_004369BA;

loc_00436A0B: ;
    goto loc_00436A0D;

loc_00436A0D: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + 0xC);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -20))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_00436A23; /* jbe: below or equal (unsigned <=) */

loc_00436A1A: ;
    eax = MEM32(ebp + 0xC);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -20))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -24) = eax;

loc_00436A23: ;
    edx = MEM32(ebp + 8);
    edx = edx + MEM32(ebp + -20);
    ecx = MEM32(ebp + -132);
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436A42u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_00436A42: ;
    eax = MEM32(ebp + -24);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;

loc_00436A4B: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 1;
    MEM32(ebp + 0x10) = eax;
    goto loc_00436672;

loc_00436A59: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00436A7A; /* je: equal / zero */

loc_00436A5F: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00436A70; /* jne: not equal / not zero */

loc_00436A67: ;
    eax = MEM32(ebp + 0xC);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -20) = eax;

loc_00436A70: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEM8(eax + ecx) = 0;

loc_00436A7A: ;
    MEM32(ebp + -16) = 0;

loc_00436A81: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0xAC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00436A90
 * Original: 0x00436A90 - 0x00436AE3 (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436A90(void)
{
    uint32_t ebp = g_ebp;

loc_00436A90: ;
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
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436ABBu); RECOMP_ABI_CALL(0x00436AF0u, sub_00436AF0); /* call 0x00436AF0 */

loc_00436ABB: ;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -12);
    eax = MEM32(eax + 0x60);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436ADCu); RECOMP_ABI_CALL(0x00436650u, sub_00436650); /* call 0x00436650 */

loc_00436ADC: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00436AF0
 * Original: 0x00436AF0 - 0x00436B00 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436AF0(void)
{
    uint32_t ebp = g_ebp;

loc_00436AF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436AFBu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_00436AFB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00436B00
 * Original: 0x00436B00 - 0x00436B79 (121 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436B00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00436B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFF893) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x7FFFF893 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00436B1B; /* jle: less or equal (signed <=) */

loc_00436B10: ;
    eax = MEM32(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x7D0)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + 8) = eax;

loc_00436B1B: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x76C;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    ecx = 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00436B6C; /* jne: not equal / not zero */

loc_00436B3B: ;
    eax = MEM32(ebp + 8);
    ecx = 0x64;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, 1);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00436B66; /* jne: not equal / not zero */

loc_00436B50: ;
    eax = MEM32(ebp + 8);
    ecx = 0x190;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -2) = LO8(eax);

loc_00436B66: ;
    SET_LO8(eax, MEM8(ebp + -2));
    MEM8(ebp + -1) = LO8(eax);

loc_00436B6C: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00436B80
 * Original: 0x00436B80 - 0x00437434 (2228 bytes, 637 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436B80(void)
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
loc_00436B80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x78));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x78)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -48) = 0;
    MEM32(ebp + -52) = 0;
    MEM32(ebp + -56) = 0;

loc_00436BA4: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004373DE; /* je: equal / zero */

loc_00436BB0: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00436C48; /* je: equal / zero */

loc_00436BBF: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436BCDu); RECOMP_ABI_CALL(0x00437440u, sub_00437440); /* call 0x00437440 */

loc_00436BCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00436C13; /* je: equal / zero */

loc_00436BD2: ;
    goto loc_00436BD4;

loc_00436BD4: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -61) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00436BFB; /* je: equal / zero */

loc_00436BE4: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436BF2u); RECOMP_ABI_CALL(0x00437440u, sub_00437440); /* call 0x00437440 */

loc_00436BF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -61) = LO8(eax);

loc_00436BFB: ;
    SET_LO8(eax, MEM8(ebp + -61));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00436C04; /* jne: not equal / not zero */

loc_00436C02: ;
    goto loc_00436C11;

loc_00436C04: ;
    goto loc_00436C06;

loc_00436C06: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_00436BD4;

loc_00436C11: ;
    goto loc_00436C3A;

loc_00436C13: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00436C2F; /* je: equal / zero */

loc_00436C23: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00436C2F: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_00436C3A;

loc_00436C3A: ;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + 0xC) = eax;
    goto loc_00436BA4;

loc_00436C48: ;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00436C65; /* jne: not equal / not zero */

loc_00436C5C: ;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + 0xC) = eax;

loc_00436C65: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00436C6D; /* jne: not equal / not zero */

loc_00436C6B: ;
    goto loc_00436C82;

loc_00436C6D: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436C7Bu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_00436C7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00436C90; /* jne: not equal / not zero */

loc_00436C80: ;
    goto loc_00436CB5;

loc_00436C82: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00436CB5; /* jae: above or equal (unsigned >=) */

loc_00436C90: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436CAAu); RECOMP_ABI_CALL(0x004274A0u, sub_004274A0); /* call 0x004274A0 */

loc_00436CAA: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -60);
    MEM32(ebp + 0xC) = eax;
    goto loc_00436CBC;

loc_00436CB5: ;
    MEM32(ebp + -12) = 0xFFFFFFFFu;

loc_00436CBC: ;
    MEM32(ebp + -20) = 0;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx++;
    MEM32(ebp + 0xC) = ecx;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFDBu)) >> 32) & 1);
    eax = eax + 0xFFFFFFDBu;
    MEM32(ebp + -68) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x54));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x54)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_0043717D; /* ja: above (unsigned >) */

loc_00436CDE: ;
    eax = MEM32(ebp + -68);
    eax = MEM32(eax * 4 + 0x508F0C);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x00436CEAu) goto loc_00436CEA;
    if (_jt == 0x00436D06u) goto loc_00436D06;
    if (_jt == 0x00436D22u) goto loc_00436D22;
    if (_jt == 0x00436D66u) goto loc_00436D66;
    if (_jt == 0x00436D87u) goto loc_00436D87;
    if (_jt == 0x00436DA3u) goto loc_00436DA3;
    if (_jt == 0x00436DD9u) goto loc_00436DD9;
    if (_jt == 0x00436DF5u) goto loc_00436DF5;
    if (_jt == 0x00436E11u) goto loc_00436E11;
    if (_jt == 0x00436E34u) goto loc_00436E34;
    if (_jt == 0x00436E57u) goto loc_00436E57;
    if (_jt == 0x00436E73u) goto loc_00436E73;
    if (_jt == 0x00436EB7u) goto loc_00436EB7;
    if (_jt == 0x00436F8Fu) goto loc_00436F8F;
    if (_jt == 0x00436FD3u) goto loc_00436FD3;
    if (_jt == 0x00437009u) goto loc_00437009;
    if (_jt == 0x00437022u) goto loc_00437022;
    if (_jt == 0x00437058u) goto loc_00437058;
    if (_jt == 0x00437071u) goto loc_00437071;
    if (_jt == 0x0043708Du) goto loc_0043708D;
    if (_jt == 0x004370D1u) goto loc_004370D1;
    if (_jt == 0x00437115u) goto loc_00437115;
    if (_jt == 0x00437130u) goto loc_00437130;
    if (_jt == 0x00437159u) goto loc_00437159;
    if (_jt == 0x0043717Du) goto loc_0043717D;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00436CEA: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 0x20000;
    MEM32(ebp + -28) = 7;
    goto loc_00437354;

loc_00436D06: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 0x2000E;
    MEM32(ebp + -28) = 0xC;
    goto loc_00437354;

loc_00436D22: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -72) = eax;
    MEM32(esp) = 0x20028;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436D34u); RECOMP_ABI_CALL(0x003E43C0u, sub_003E43C0); /* call 0x003E43C0 */

loc_00436D34: ;
    edx = MEM32(ebp + -72);
    ecx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436D4Cu); RECOMP_ABI_CALL(0x00436B80u, sub_00436B80); /* call 0x00436B80 */

loc_00436D4C: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00436D61; /* jne: not equal / not zero */

loc_00436D55: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00436D61: ;
    goto loc_004373D9;

loc_00436D66: ;
    eax = ebp + -52;
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00436D79; /* jge: greater or equal (signed >=) */

loc_00436D72: ;
    MEM32(ebp + -12) = 2;

loc_00436D79: ;
    eax = MEM32(ebp + -48);
    _cf = 0; /* logical op clears CF */
    eax = eax | 2;
    MEM32(ebp + -48) = eax;
    goto loc_0043725F;

loc_00436D87: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 1;
    MEM32(ebp + -28) = 0x1F;
    goto loc_00437189;

loc_00436DA3: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx = 0x4449F4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436DBFu); RECOMP_ABI_CALL(0x00436B80u, sub_00436B80); /* call 0x00436B80 */

loc_00436DBF: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00436DD4; /* jne: not equal / not zero */

loc_00436DC8: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00436DD4: ;
    goto loc_004373D9;

loc_00436DD9: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -28) = 0x18;
    goto loc_00437189;

loc_00436DF5: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 1;
    MEM32(ebp + -28) = 0xC;
    goto loc_00437189;

loc_00436E11: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1C)) >> 32) & 1);
    eax = eax + 0x1C;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 1;
    MEM32(ebp + -28) = 0x16E;
    MEM32(ebp + -20) = 1;
    goto loc_00437189;

loc_00436E34: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 1;
    MEM32(ebp + -28) = 0xC;
    MEM32(ebp + -20) = 1;
    goto loc_00437189;

loc_00436E57: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -28) = 0x3C;
    goto loc_00437189;

loc_00436E73: ;
    goto loc_00436E75;

loc_00436E75: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -73) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00436E9C; /* je: equal / zero */

loc_00436E85: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436E93u); RECOMP_ABI_CALL(0x00437440u, sub_00437440); /* call 0x00437440 */

loc_00436E93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -73) = LO8(eax);

loc_00436E9C: ;
    SET_LO8(eax, MEM8(ebp + -73));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00436EA5; /* jne: not equal / not zero */

loc_00436EA3: ;
    goto loc_00436EB2;

loc_00436EA5: ;
    goto loc_00436EA7;

loc_00436EA7: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_00436E75;

loc_00436EB2: ;
    goto loc_004373D9;

loc_00436EB7: ;
    MEM32(esp) = 0x20026;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436EC3u); RECOMP_ABI_CALL(0x003E43C0u, sub_003E43C0); /* call 0x003E43C0 */

loc_00436EC3: ;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436ED1u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_00436ED1: ;
    MEM32(ebp + -44) = eax;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -44);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436EEDu); RECOMP_ABI_CALL(0x0042A0B0u, sub_0042A0B0); /* call 0x0042A0B0 */

loc_00436EED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00436F17; /* jne: not equal / not zero */

loc_00436EF2: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -80) = eax;
    eax = MEM32(eax + 8);
    ecx = 0xC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + -80);
    MEM32(eax + 8) = edx;
    eax = MEM32(ebp + -44);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    goto loc_004373D9;

loc_00436F17: ;
    MEM32(esp) = 0x20027;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436F23u); RECOMP_ABI_CALL(0x003E43C0u, sub_003E43C0); /* call 0x003E43C0 */

loc_00436F23: ;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436F31u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_00436F31: ;
    MEM32(ebp + -44) = eax;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -44);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436F4Du); RECOMP_ABI_CALL(0x0042A0B0u, sub_0042A0B0); /* call 0x0042A0B0 */

loc_00436F4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00436F83; /* jne: not equal / not zero */

loc_00436F52: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -84) = eax;
    eax = MEM32(eax + 8);
    ecx = 0xC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + -84);
    MEM32(eax + 8) = edx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 8);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -44);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    goto loc_004373D9;

loc_00436F83: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00436F8F: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -88) = eax;
    MEM32(esp) = 0x2002B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436FA1u); RECOMP_ABI_CALL(0x003E43C0u, sub_003E43C0); /* call 0x003E43C0 */

loc_00436FA1: ;
    edx = MEM32(ebp + -88);
    ecx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436FB9u); RECOMP_ABI_CALL(0x00436B80u, sub_00436B80); /* call 0x00436B80 */

loc_00436FB9: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00436FCE; /* jne: not equal / not zero */

loc_00436FC2: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00436FCE: ;
    goto loc_004373D9;

loc_00436FD3: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx = 0x458819;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00436FEFu); RECOMP_ABI_CALL(0x00436B80u, sub_00436B80); /* call 0x00436B80 */

loc_00436FEF: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00437004; /* jne: not equal / not zero */

loc_00436FF8: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00437004: ;
    goto loc_004373D9;

loc_00437009: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -28) = 0x3D;
    goto loc_00437189;

loc_00437022: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx = 0x49764E;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043703Eu); RECOMP_ABI_CALL(0x00436B80u, sub_00436B80); /* call 0x00436B80 */

loc_0043703E: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00437053; /* jne: not equal / not zero */

loc_00437047: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00437053: ;
    goto loc_004373D9;

loc_00437058: ;
    eax = ebp + -36;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -28) = 0x36;
    goto loc_00437189;

loc_00437071: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -28) = 7;
    goto loc_00437189;

loc_0043708D: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -92) = eax;
    MEM32(esp) = 0x20029;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043709Fu); RECOMP_ABI_CALL(0x003E43C0u, sub_003E43C0); /* call 0x003E43C0 */

loc_0043709F: ;
    edx = MEM32(ebp + -92);
    ecx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004370B7u); RECOMP_ABI_CALL(0x00436B80u, sub_00436B80); /* call 0x00436B80 */

loc_004370B7: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004370CC; /* jne: not equal / not zero */

loc_004370C0: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_004370CC: ;
    goto loc_004373D9;

loc_004370D1: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -96) = eax;
    MEM32(esp) = 0x2002A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004370E3u); RECOMP_ABI_CALL(0x003E43C0u, sub_003E43C0); /* call 0x003E43C0 */

loc_004370E3: ;
    edx = MEM32(ebp + -96);
    ecx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004370FBu); RECOMP_ABI_CALL(0x00436B80u, sub_00436B80); /* call 0x00436B80 */

loc_004370FB: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00437110; /* jne: not equal / not zero */

loc_00437104: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00437110: ;
    goto loc_004373D9;

loc_00437115: ;
    eax = ebp + -56;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -12) = 2;
    eax = MEM32(ebp + -48);
    _cf = 0; /* logical op clears CF */
    eax = eax | 1;
    MEM32(ebp + -48) = eax;
    goto loc_0043725F;

loc_00437130: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x14)) >> 32) & 1);
    eax = eax + 0x14;
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00437146; /* jge: greater or equal (signed >=) */

loc_0043713F: ;
    MEM32(ebp + -12) = 4;

loc_00437146: ;
    MEM32(ebp + -20) = 0x76C;
    MEM32(ebp + -48) = 0;
    goto loc_0043725F;

loc_00437159: ;
    eax = MEM32(ebp + 8);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + 8) = ecx;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00437178; /* je: equal / zero */

loc_0043716C: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00437178: ;
    goto loc_004373D9;

loc_0043717D: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_00437189: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00437191; /* jne: not equal / not zero */

loc_0043718F: ;
    goto loc_004371A6;

loc_00437191: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043719Fu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_0043719F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004371C0; /* jne: not equal / not zero */

loc_004371A4: ;
    goto loc_004371B4;

loc_004371A6: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004371C0; /* jb: below (unsigned <) */

loc_004371B4: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_004371C0: ;
    eax = MEM32(ebp + -32);
    MEM32(eax) = 0;
    MEM32(ebp + -8) = 1;

loc_004371D0: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -24);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(ebp + -28))) >> 32) & 1);
    edx = edx + MEM32(ebp + -28);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -97) = LO8(eax);
    if (CMP_G(_fas, _fbs)) goto loc_004371F4; /* jg: greater (signed >) */

loc_004371E2: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -97) = LO8(eax);

loc_004371F4: ;
    SET_LO8(eax, MEM8(ebp + -97));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_004371FD; /* jne: not equal / not zero */

loc_004371FB: ;
    goto loc_00437224;

loc_004371FD: ;
    eax = MEM32(ebp + -32);
    ecx = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0xA);
    eax = MEM32(ebp + 8);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    MEM32(ebp + 8) = edx;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + -32);
    MEM32(eax) = ecx;
    eax = (uint32_t)((int32_t)MEM32(ebp + -8) * (int32_t)0xA);
    MEM32(ebp + -8) = eax;
    goto loc_004371D0;

loc_00437224: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -24)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -24))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0043723D; /* jb: below (unsigned <) */

loc_00437231: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_0043723D: ;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + -32);
    ecx = MEM32(eax);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0x10);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x1C));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x1C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax != 0)) goto loc_0043725A; /* jne: not equal / not zero */

loc_00437256: ;
    goto loc_00437258;

loc_00437258: ;
    goto loc_0043725A;

loc_0043725A: ;
    goto loc_004373D7;

loc_0043725F: ;
    MEM32(ebp + -16) = 0;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043727C; /* jne: not equal / not zero */

loc_00437271: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_00437299;

loc_0043727C: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00437297; /* jne: not equal / not zero */

loc_00437287: ;
    MEM32(ebp + -16) = 1;
    eax = MEM32(ebp + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;

loc_00437297: ;
    goto loc_00437299;

loc_00437299: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_004372A1; /* jne: not equal / not zero */

loc_0043729F: ;
    goto loc_004372B6;

loc_004372A1: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004372AFu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_004372AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004372D0; /* jne: not equal / not zero */

loc_004372B4: ;
    goto loc_004372C4;

loc_004372B6: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004372D0; /* jb: below (unsigned <) */

loc_004372C4: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_004372D0: ;
    MEM32(ebp + -8) = 0;
    eax = MEM32(ebp + -32);
    MEM32(eax) = 0;

loc_004372E0: ;
    ecx = MEM32(ebp + -8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -98) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_004372FF; /* jge: greater or equal (signed >=) */

loc_004372ED: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -98) = LO8(eax);

loc_004372FF: ;
    SET_LO8(eax, MEM8(ebp + -98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00437308; /* jne: not equal / not zero */

loc_00437306: ;
    goto loc_00437331;

loc_00437308: ;
    eax = MEM32(ebp + -32);
    ecx = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0xA);
    eax = MEM32(ebp + 8);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    MEM32(ebp + 8) = edx;
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + -32);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_004372E0;

loc_00437331: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00437343; /* je: equal / zero */

loc_00437337: ;
    eax = MEM32(ebp + -32);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(eax)));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(eax))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + -32);
    MEM32(eax) = ecx;

loc_00437343: ;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + -32);
    ecx = MEM32(eax);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM32(eax) = ecx;
    goto loc_004373D7;

loc_00437354: ;
    eax = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -8) = eax;

loc_0043735F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004373C6; /* jl: less (signed <) */

loc_00437365: ;
    eax = MEM32(ebp + -24);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -8))) >> 32) & 1);
    eax = eax + MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437373u); RECOMP_ABI_CALL(0x003E43C0u, sub_003E43C0); /* call 0x003E43C0 */

loc_00437373: ;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -40);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437381u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_00437381: ;
    MEM32(ebp + -44) = eax;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -44);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043739Du); RECOMP_ABI_CALL(0x0042A0B0u, sub_0042A0B0); /* call 0x0042A0B0 */

loc_0043739D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004373A4; /* je: equal / zero */

loc_004373A2: ;
    goto loc_004373BB;

loc_004373A4: ;
    eax = MEM32(ebp + -44);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + -8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + -28)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + -28))); }
    eax = MEM32(ebp + -32);
    MEM32(eax) = edx;
    goto loc_004373C6;

loc_004373BB: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    goto loc_0043735F;

loc_004373C6: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004373D5; /* jge: greater or equal (signed >=) */

loc_004373CC: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043742C;

loc_004373D5: ;
    goto loc_004373D7;

loc_004373D7: ;
    goto loc_004373D9;

loc_004373D9: ;
    goto loc_00436BA4;

loc_004373DE: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00437426; /* je: equal / zero */

loc_004373E4: ;
    ecx = MEM32(ebp + -56);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(ebp + -48);
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043740D; /* je: equal / zero */

loc_004373F8: ;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -52) * (int32_t)0x64);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x76C));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x76C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(eax + 0x14))) >> 32) & 1);
    ecx = ecx + MEM32(eax + 0x14);
    MEM32(eax + 0x14) = ecx;
    goto loc_00437424;

loc_0043740D: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x44 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00437422; /* jg: greater (signed >) */

loc_00437416: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 0x14);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x64)) >> 32) & 1);
    ecx = ecx + 0x64;
    MEM32(eax + 0x14) = ecx;

loc_00437422: ;
    goto loc_00437424;

loc_00437424: ;
    goto loc_00437426;

loc_00437426: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_0043742C: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x78)) >> 32) & 1);
    esp = esp + 0x78;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437440
 * Original: 0x00437440 - 0x0043746E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437440(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437440: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_00437461; /* je: equal / zero */

loc_00437452: ;
    eax = MEM32(ebp + 8);
    eax = eax - 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -1) = LO8(eax);

loc_00437461: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437470
 * Original: 0x00437470 - 0x004374AB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437470(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    eax = ebp + -16;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043748Eu); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_0043748E: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004374A0; /* je: equal / zero */

loc_00437494: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = MEM32(ebp + 8);
    MEMD(eax) = xmm0.d[0]; /* movsd */

loc_004374A0: ;
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004374B0
 * Original: 0x004374B0 - 0x00437552 (162 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004374B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004374B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x54;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004374C6u); RECOMP_ABI_CALL(0x00433410u, sub_00433410); /* call 0x00433410 */

loc_004374C6: ;
    MEM32(ebp + -60) = edx;
    MEM32(ebp + -64) = eax;
    ecx = MEM32(ebp + -64);
    edx = MEM32(ebp + -60);
    eax = esp;
    esi = ebp + -56;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004374E4u); RECOMP_ABI_CALL(0x00433090u, sub_00433090); /* call 0x00433090 */

loc_004374E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00437504; /* jge: greater or equal (signed >=) */

loc_004374E9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004374EEu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_004374EE: ;
    MEM32(eax) = 0x4B;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    MEM32(ebp + -12) = 0xFFFFFFFFu;
    goto loc_00437546;

loc_00437504: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ebp + -28); /* movups */
    XMM_STORE(eax + 0x1C, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -56); /* movups */
    xmm1 = XMM_MEM(ebp + -40); /* movups */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x20) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x24) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x28) = 0x508D74;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(ebp + -12) = xmm0.d[0]; /* movsd */

loc_00437546: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + -8);
    esp = esp + 0x54;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437560
 * Original: 0x00437560 - 0x0043792A (970 bytes, 242 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437560(void)
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
loc_00437560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1CC));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x1CC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -104) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00437590; /* je: equal / zero */

loc_00437582: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    MEM32(ebp + -388) = eax;
    goto loc_0043759A;

loc_00437590: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -388) = eax;
    goto loc_0043759A;

loc_0043759A: ;
    eax = MEM32(ebp + -388);
    MEM32(ebp + -392) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (_cf) goto loc_004375CF; /* jb: below (unsigned <) */

loc_004375AB: ;
    goto loc_004375AD;

loc_004375AD: ;
    eax = MEM32(ebp + -392);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0043767E; /* je: equal / zero */

loc_004375BC: ;
    goto loc_004375BE;

loc_004375BE: ;
    eax = MEM32(ebp + -392);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax != 0)) goto loc_00437901; /* jne: not equal / not zero */

loc_004375CD: ;
    goto loc_004375CF;

loc_004375CF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00437610; /* je: equal / zero */

loc_004375D5: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(ebp + -100) = eax;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    MEM32(ebp + -92) = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 4 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00437603; /* jne: not equal / not zero */

loc_004375F8: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -88) = eax;
    goto loc_0043760A;

loc_00437603: ;
    MEM32(ebp + -88) = 0;

loc_0043760A: ;
    eax = ebp + -100;
    MEM32(ebp + -104) = eax;

loc_00437610: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -396) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    esi = MEM32(ebp + -104);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    ecx = edi;
    ebx = ebp + -108;
    eax = esp;
    MEM32(ebp + -400) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -396);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x6B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437658u); RECOMP_ABI_CALL(0x00437930u, sub_00437930); /* call 0x00437930 */

loc_00437658: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437660u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00437660: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00437671; /* jge: greater or equal (signed >=) */

loc_00437665: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_0043791C;

loc_00437671: ;
    ecx = MEM32(ebp + -108);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    goto loc_00437915;

loc_0043767E: ;
    eax = MEM32(0xDFCD64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004376DE; /* jne: not equal / not zero */

loc_00437688: ;
    eax = ebp + -376;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x8C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004376A8u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_004376A8: ;
    eax = ebp + -376;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = 0x20;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004376C8u); RECOMP_ABI_CALL(0x004143E0u, sub_004143E0); /* call 0x004143E0 */

loc_004376C8: ;
    eax = 0xDFCD64;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004376DEu); RECOMP_ABI_CALL(0x004379D0u, sub_004379D0); /* call 0x004379D0 */

loc_004376DE: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00437704; /* je: equal / zero */

loc_004376E7: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x20);
    MEM32(ebp + -24) = ecx;
    xmm0 = XMM_MEM(eax); /* movups */
    xmm1 = XMM_MEM(eax + 0x10); /* movups */
    XMM_STORE(ebp + -40, xmm1); /* movaps */
    XMM_STORE(ebp + -56, xmm0); /* movaps */
    goto loc_0043770F;

loc_00437704: ;
    eax = ebp + -56;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043770Fu); RECOMP_ABI_CALL(0x0042D4C0u, sub_0042D4C0); /* call 0x0042D4C0 */

loc_0043770F: ;
    eax = ebp + -56;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437722u); RECOMP_ABI_CALL(0x0042D520u, sub_0042D520); /* call 0x0042D520 */

loc_00437722: ;
    eax = ebp + -84;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043773Fu); RECOMP_ABI_CALL(0x0042D7B0u, sub_0042D7B0); /* call 0x0042D7B0 */

loc_0043773F: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -64) = eax;
    eax = ebp + -236;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437753u); RECOMP_ABI_CALL(0x00413C30u, sub_00413C30); /* call 0x00413C30 */

loc_00437753: ;
    MEM32(ebp + -384) = 0x80000000u;
    eax = ebp + -384;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    ecx = ebp + -384;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    MEM32(ebp + -408) = ecx;
    MEM32(ebp + -404) = eax;

loc_0043777B: ;
    eax = MEM32(ebp + -404);
    ecx = MEM32(ebp + -408);
    MEM32(eax) = 0;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -404) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0043777B; /* jne: not equal / not zero */

loc_0043779A: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    ecx = ebp + -384;
    eax = esp;
    MEM32(ebp + -412) = eax;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x87;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004377ECu); RECOMP_ABI_CALL(0x004379F0u, sub_004379F0); /* call 0x004379F0 */

loc_004377EC: ;
    esi = ebp + -20;
    edx = ebp + -56;
    ecx = 0x437AA0;
    eax = ebp + -84;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043780Fu); RECOMP_ABI_CALL(0x003925A0u, sub_003925A0); /* call 0x003925A0 */

loc_0043780F: ;
    MEM32(ebp + -60) = eax;
    eax = ebp + -236;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437820u); RECOMP_ABI_CALL(0x00413C90u, sub_00413C90); /* call 0x00413C90 */

loc_00437820: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00437848; /* je: equal / zero */

loc_00437826: ;
    eax = MEM32(ebp + -60);
    MEM32(ebp + -416) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437834u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00437834: ;
    ecx = MEM32(ebp + -416);
    MEM32(eax) = ecx;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_0043791C;

loc_00437848: ;
    MEM32(ebp + -100) = 0;
    MEM32(ebp + -96) = 0x20;
    MEM32(ebp + -92) = 4;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -88) = eax;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -420) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    esi = ebp + -100;
    ecx = edi;
    ebx = ebp + -108;
    eax = esp;
    MEM32(ebp + -424) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -420);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x6B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004378AEu); RECOMP_ABI_CALL(0x00437930u, sub_00437930); /* call 0x00437930 */

loc_004378AE: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004378B6u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004378B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004378CC; /* jge: greater or equal (signed >=) */

loc_004378BB: ;
    MEM32(ebp + -108) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x24) = 1;

loc_004378CC: ;
    ecx = MEM32(ebp + -108);
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x5C) = ecx;
    eax = ebp + -84;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004378E0u); RECOMP_ABI_CALL(0x0042D840u, sub_0042D840); /* call 0x0042D840 */

loc_004378E0: ;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -108), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004378EF; /* jge: greater or equal (signed >=) */

loc_004378E6: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_0043791C;

loc_004378EF: ;
    ecx = MEM32(ebp + -20);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 1, &_cf, &_shift_of);
    ecx = _shift_result;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x80000000u;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    goto loc_00437915;

loc_00437901: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437906u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00437906: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    goto loc_0043791C;

loc_00437915: ;
    MEM32(ebp + -16) = 0;

loc_0043791C: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1CC)) >> 32) & 1);
    esp = esp + 0x1CC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437930
 * Original: 0x00437930 - 0x004379CB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437930(void)
{
    uint32_t ebp = g_ebp;

loc_00437930: ;
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
    PUSH32(esp, 0x004379C3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004379C3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004379D0
 * Original: 0x004379D0 - 0x004379E8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004379D0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004379D0: ;
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
 * sub_004379F0
 * Original: 0x004379F0 - 0x00437A9B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004379F0(void)
{
    uint32_t ebp = g_ebp;

loc_004379F0: ;
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
    PUSH32(esp, 0x00437A93u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00437A93: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437AA0
 * Original: 0x00437AA0 - 0x00437C18 (376 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437AA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x168;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437AB1u); RECOMP_ABI_CALL(0x00437C30u, sub_00437C30); /* call 0x00437C30 */

loc_00437AB1: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -172) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    MEM32(ebp + -176) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437AE2u); RECOMP_ABI_CALL(0x0042D840u, sub_0042D840); /* call 0x0042D840 */

loc_00437AE2: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00437AF9; /* je: equal / zero */

loc_00437AED: ;
    MEM32(ebp + -4) = 0;
    goto loc_00437C0D;

loc_00437AF9: ;
    goto loc_00437AFB;

loc_00437AFB: ;
    goto loc_00437AFD;

loc_00437AFD: ;
    MEM32(ebp + -312) = 0x80000000u;
    eax = ebp + -312;
    eax = eax + 4;
    ecx = ebp + -312;
    ecx = ecx + 8;
    MEM32(ebp + -332) = ecx;
    MEM32(ebp + -328) = eax;

loc_00437B25: ;
    eax = MEM32(ebp + -328);
    ecx = MEM32(ebp + -332);
    MEM32(eax) = 0;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -328) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00437B25; /* jne: not equal / not zero */

loc_00437B44: ;
    ecx = ebp + -312;
    eax = ebp + -304;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437B5Cu); RECOMP_ABI_CALL(0x00415620u, sub_00415620); /* call 0x00415620 */

loc_00437B5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00437B63; /* jge: greater or equal (signed >=) */

loc_00437B61: ;
    goto loc_00437AFD;

loc_00437B63: ;
    _fa = (uint32_t)(MEM32(ebp + -296)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -296), 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00437BCC; /* jne: not equal / not zero */

loc_00437B6C: ;
    eax = ebp + -168;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437B7Au); RECOMP_ABI_CALL(0x00413AFCu, sub_00413AFC); /* call 0x00413AFC */

loc_00437B7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00437BCC; /* jne: not equal / not zero */

loc_00437B7F: ;
    goto loc_00437B81;

loc_00437B81: ;
    eax = ebp + -168;
    edx = ebp + -324;
    ecx = 0x437C40;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437BA3u); RECOMP_ABI_CALL(0x0042E160u, sub_0042E160); /* call 0x0042E160 */

loc_00437BA3: ;
    eax = ebp + -176;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ebp + -172); PUSH32(esp, 0x00437BB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00437BB4: ;
    eax = ebp + -324;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437BCAu); RECOMP_ABI_CALL(0x0042E190u, sub_0042E190); /* call 0x0042E190 */

loc_00437BCA: ;
    goto loc_00437BCC;

loc_00437BCC: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00437BD9; /* jge: greater or equal (signed >=) */

loc_00437BD7: ;
    goto loc_00437BDE;

loc_00437BD9: ;
    goto loc_00437AFB;

loc_00437BDE: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x5C);
    ecx = ecx & 0x7FFFFFFF;
    edx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x6F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437C06u); RECOMP_ABI_CALL(0x00437C90u, sub_00437C90); /* call 0x00437C90 */

loc_00437C06: ;
    MEM32(ebp + -4) = 0;

loc_00437C0D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x168;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437C20
 * Original: 0x00437C20 - 0x00437C25 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437C20(void)
{
    uint32_t ebp = g_ebp;

loc_00437C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437C30
 * Original: 0x00437C30 - 0x00437C40 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437C30(void)
{
    uint32_t ebp = g_ebp;

loc_00437C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437C3Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_00437C3B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437C40
 * Original: 0x00437C40 - 0x00437C90 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437C40(void)
{
    uint32_t ebp = g_ebp;

loc_00437C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437C4Eu); RECOMP_ABI_CALL(0x00437C30u, sub_00437C30); /* call 0x00437C30 */

loc_00437C4E: ;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437C56u); RECOMP_ABI_CALL(0x00437C20u, sub_00437C20); /* call 0x00437C20 */

loc_00437C56: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x24) = 0;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x44) = 0;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x28) = 0;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x29) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437C7Du); RECOMP_ABI_CALL(0x003DC3A0u, sub_003DC3A0); /* call 0x003DC3A0 */

loc_00437C7D: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437C90u); RECOMP_ABI_CALL(0x00413ADCu, sub_00413ADC); /* call 0x00413ADC */

    g_ebp = g_seh_ebp = ebp; sub_00437C90(); return; /* fallthrough 0x00437C90 */

}


/**
 * sub_00437C90
 * Original: 0x00437C90 - 0x00437D0F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437C90(void)
{
    uint32_t ebp = g_ebp;

loc_00437C90: ;
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
    PUSH32(esp, 0x00437D08u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00437D08: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437D10
 * Original: 0x00437D10 - 0x00437DAC (156 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437D10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00437D82; /* jge: greater or equal (signed >=) */

loc_00437D21: ;
    eax = MEM32(ebp + 8);
    eax = eax + eax;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = eax;
    ecx = ecx + 0x5C;
    edx = MEM32(eax + 0x5C);
    edx = edx | 0x80000000u;
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437D46u); RECOMP_ABI_CALL(0x00437DB0u, sub_00437DB0); /* call 0x00437DB0 */

loc_00437D46: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x18);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x20;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x82;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437D79u); RECOMP_ABI_CALL(0x00437DD0u, sub_00437DD0); /* call 0x00437DD0 */

loc_00437D79: ;
    MEM32(ebp + -4) = 0;
    goto loc_00437DA4;

loc_00437D82: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x6F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437DA1u); RECOMP_ABI_CALL(0x00437E60u, sub_00437E60); /* call 0x00437E60 */

loc_00437DA1: ;
    MEM32(ebp + -4) = eax;

loc_00437DA4: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437DB0
 * Original: 0x00437DB0 - 0x00437DC8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437DB0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437DB0: ;
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
 * sub_00437DD0
 * Original: 0x00437DD0 - 0x00437E5B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437DD0(void)
{
    uint32_t ebp = g_ebp;

loc_00437DD0: ;
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
    PUSH32(esp, 0x00437E53u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00437E53: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437E60
 * Original: 0x00437E60 - 0x00437EDF (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437E60(void)
{
    uint32_t ebp = g_ebp;

loc_00437E60: ;
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
    PUSH32(esp, 0x00437ED8u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00437ED8: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437EE0
 * Original: 0x00437EE0 - 0x00437F33 (83 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437EE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00437EE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00437F07; /* jge: greater or equal (signed >=) */

loc_00437EF1: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x5C);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + 8) = eax;

loc_00437F07: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x6D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437F26u); RECOMP_ABI_CALL(0x00437F40u, sub_00437F40); /* call 0x00437F40 */

loc_00437F26: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00437F2Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00437F2E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437F40
 * Original: 0x00437F40 - 0x00437FBF (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F40(void)
{
    uint32_t ebp = g_ebp;

loc_00437F40: ;
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
    PUSH32(esp, 0x00437FB8u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00437FB8: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00437FC0
 * Original: 0x00437FC0 - 0x00438025 (101 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437FC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00437FC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00437FEC; /* jge: greater or equal (signed >=) */

loc_00437FD6: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0x5C);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + 8) = eax;

loc_00437FEC: ;
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
    MEM32(eax) = 0x6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438016u); RECOMP_ABI_CALL(0x00438030u, sub_00438030); /* call 0x00438030 */

loc_00438016: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043801Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043801E: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438030
 * Original: 0x00438030 - 0x004380BB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438030(void)
{
    uint32_t ebp = g_ebp;

loc_00438030: ;
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
    PUSH32(esp, 0x004380B3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004380B3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004380C0
 * Original: 0x004380C0 - 0x00438158 (152 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004380C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_004380C0: ;
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
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004380F3; /* jge: greater or equal (signed >=) */

loc_004380DD: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0x5C);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + 8) = eax;

loc_004380F3: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ebx = MEM32(ebp + 0x10);
    eax = edx;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -28) = eax;
    ecx = edx;
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
    MEM32(eax) = 0x6E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438148u); RECOMP_ABI_CALL(0x00438160u, sub_00438160); /* call 0x00438160 */

loc_00438148: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438150u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00438150: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438160
 * Original: 0x00438160 - 0x0043820B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438160(void)
{
    uint32_t ebp = g_ebp;

loc_00438160: ;
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
    PUSH32(esp, 0x00438203u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00438203: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438210
 * Original: 0x00438210 - 0x0043823D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438210(void)
{
    uint32_t ebp = g_ebp;

loc_00438210: ;
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
    MEM32(eax) = 0x99;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438238u); RECOMP_ABI_CALL(0x00438240u, sub_00438240); /* call 0x00438240 */

loc_00438238: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438240
 * Original: 0x00438240 - 0x004382BF (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438240(void)
{
    uint32_t ebp = g_ebp;

loc_00438240: ;
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
    PUSH32(esp, 0x004382B8u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004382B8: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004382C0
 * Original: 0x004382C0 - 0x00438314 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004382C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004382C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004382DB; /* je: equal / zero */

loc_004382D2: ;
    MEM32(ebp + -4) = 0;
    goto loc_0043830C;

loc_004382DB: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004382F0u); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_004382F0: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00438300; /* jge: greater or equal (signed >=) */

loc_004382F9: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_00438306;

loc_00438300: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;

loc_00438306: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;

loc_0043830C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438320
 * Original: 0x00438320 - 0x004383AA (138 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438320(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043837A; /* je: equal / zero */

loc_00438338: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax)); /* movsd */
    MEMD(ebp + -32) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -20) = 0;
    eax = ebp + -16;
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ecx + 8)); /* movsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    MEM32(ebp + -8) = 0;
    eax = eax + 0xC;
    MEM32(eax) = 0;
    eax = ebp + -32;
    MEM32(ebp + -40) = eax;
    goto loc_00438381;

loc_0043837A: ;
    eax = 0; /* xor self */
    MEM32(ebp + -40) = eax;
    goto loc_00438381;

loc_00438381: ;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + -40);
    edx = 0; /* xor self */
    MEM32(esp) = 0xFFFFFF9Cu;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004383A5u); RECOMP_ABI_CALL(0x00417310u, sub_00417310); /* call 0x00417310 */

loc_004383A5: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004383B0
 * Original: 0x004383B0 - 0x004387B7 (1031 bytes, 286 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004383B0(void)
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
loc_004383B0: ;
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
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = 0;

loc_004383D2: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0043877F; /* jae: above or equal (unsigned >=) */

loc_004383DE: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004383FE; /* jne: not equal / not zero */

loc_004383E7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEM16(eax + ecx * 2) = 0;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;
    goto loc_004387A9;

loc_004383FE: ;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00438426; /* je: equal / zero */

loc_00438409: ;
    eax = MEM32(ebp + 0x10);
    SET_LO16(edx, MEM16(eax));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    esi = ecx;
    esi = esi + 1;
    MEM32(ebp + -20) = esi;
    MEM16(eax + ecx * 2) = LO16(edx);
    goto loc_00438771;

loc_00438426: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 2;
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + -340) = 0;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0043845A; /* je: equal / zero */

loc_00438444: ;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0043845A; /* je: equal / zero */

loc_0043844F: ;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0043846E; /* jne: not equal / not zero */

loc_0043845A: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    ecx = ecx + 2;
    MEM32(ebp + 0x10) = ecx;
    eax = ZX16(MEM16(eax));
    MEM32(ebp + -340) = eax;

loc_0043846E: ;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    ecx = ZX8(LO8(ecx));
    MEM32(ebp + -344) = ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0043848E; /* jne: not equal / not zero */

loc_0043848C: ;
    goto loc_00438497;

loc_0043848E: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 2;
    MEM32(ebp + 0x10) = eax;

loc_00438497: ;
    ecx = MEM32(ebp + 0x10);
    eax = ebp + -328;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004384B4u); RECOMP_ABI_CALL(0x00427A70u, sub_00427A70); /* call 0x00427A70 */

loc_004384B4: ;
    MEM32(ebp + -348) = eax;
    eax = MEM32(ebp + -328);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004384F2; /* je: equal / zero */

loc_004384C8: ;
    eax = MEM32(ebp + -328);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004384F2; /* je: equal / zero */

loc_004384D6: ;
    eax = MEM32(ebp + -328);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004384F2; /* je: equal / zero */

loc_004384E4: ;
    eax = MEM32(ebp + -328);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x59 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00438512; /* jne: not equal / not zero */

loc_004384F2: ;
    _fa = (uint32_t)(MEM32(ebp + -348)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -348), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00438510; /* jne: not equal / not zero */

loc_004384FB: ;
    eax = MEM32(ebp + -328);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00438510; /* je: equal / zero */

loc_00438506: ;
    MEM32(ebp + -348) = 1;

loc_00438510: ;
    goto loc_0043851C;

loc_00438512: ;
    MEM32(ebp + -348) = 0;

loc_0043851C: ;
    eax = MEM32(ebp + -328);
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x45 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0043853B; /* je: equal / zero */

loc_00438530: ;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00438544; /* jne: not equal / not zero */

loc_0043853B: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 2;
    MEM32(ebp + 0x10) = eax;

loc_00438544: ;
    eax = MEM32(ebp + 0x10);
    esi = ZX16(MEM16(eax));
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + -340);
    ebx = ebp + -124;
    edi = ebp + -24;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438578u); RECOMP_ABI_CALL(0x00435DB0u, sub_00435DB0); /* call 0x00435DB0 */

loc_00438578: ;
    MEM32(ebp + -332) = eax;
    _fa = (uint32_t)(MEM32(ebp + -332)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -332), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0043858C; /* jne: not equal / not zero */

loc_00438587: ;
    goto loc_0043877F;

loc_0043858C: ;
    ecx = ebp + -324;
    eax = MEM32(ebp + -332);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004385ACu); RECOMP_ABI_CALL(0x00411130u, sub_00411130); /* call 0x00411130 */

loc_004385AC: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004385C1; /* jne: not equal / not zero */

loc_004385B5: ;
    MEM32(ebp + -16) = 0;
    goto loc_004387A9;

loc_004385C1: ;
    eax = ebp + -324;
    MEM32(ebp + -336) = eax;
    _fa = (uint32_t)(MEM32(ebp + -348)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -348), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0043872F; /* je: equal / zero */

loc_004385DA: ;
    goto loc_004385DC;

loc_004385DC: ;
    eax = MEM32(ebp + -336);
    ecx = ZX16(MEM16(eax));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -349) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00438640; /* je: equal / zero */

loc_004385F2: ;
    eax = MEM32(ebp + -336);
    ecx = ZX16(MEM16(eax));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -349) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00438640; /* je: equal / zero */

loc_00438608: ;
    eax = MEM32(ebp + -336);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -350) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00438634; /* jne: not equal / not zero */

loc_0043861E: ;
    eax = MEM32(ebp + -336);
    eax = ZX16(MEM16(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -350) = LO8(eax);

loc_00438634: ;
    SET_LO8(eax, MEM8(ebp + -350));
    MEM8(ebp + -349) = LO8(eax);

loc_00438640: ;
    SET_LO8(eax, MEM8(ebp + -349));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0043864C; /* jne: not equal / not zero */

loc_0043864A: ;
    goto loc_0043866B;

loc_0043864C: ;
    goto loc_0043864E;

loc_0043864E: ;
    eax = MEM32(ebp + -336);
    eax = eax + 2;
    MEM32(ebp + -336) = eax;
    eax = MEM32(ebp + -24);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;
    goto loc_004385DC;

loc_0043866B: ;
    eax = MEM32(ebp + -348);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -348) = eax;
    _fa = (uint32_t)(MEM32(ebp + -344)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -344), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004386A5; /* je: equal / zero */

loc_00438683: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x1FA4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_004386A5; /* jl: less (signed <) */

loc_0043868F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -20) = edx;
    MEM16(eax + ecx * 2) = 0x2B;
    goto loc_004386D8;

loc_004386A5: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF894u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0xFFFFF894u (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_004386C7; /* jge: greater or equal (signed >=) */

loc_004386B1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -20) = edx;
    MEM16(eax + ecx * 2) = 0x2D;
    goto loc_004386D6;

loc_004386C7: ;
    eax = MEM32(ebp + -348);
    eax = eax + 1;
    MEM32(ebp + -348) = eax;

loc_004386D6: ;
    goto loc_004386D8;

loc_004386D8: ;
    goto loc_004386DA;

loc_004386DA: ;
    ecx = MEM32(ebp + -348);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -24) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -351) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_004386FC; /* jbe: below or equal (unsigned <=) */

loc_004386ED: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -351) = LO8(eax);

loc_004386FC: ;
    SET_LO8(eax, MEM8(ebp + -351));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_00438708; /* jne: not equal / not zero */

loc_00438706: ;
    goto loc_0043872D;

loc_00438708: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -20) = edx;
    MEM16(eax + ecx * 2) = 0x30;
    eax = MEM32(ebp + -348);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -348) = eax;
    goto loc_004386DA;

loc_0043872D: ;
    goto loc_0043872F;

loc_0043872F: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + 0xC);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -20))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_00438745; /* jb: below (unsigned <) */

loc_0043873C: ;
    eax = MEM32(ebp + 0xC);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -20))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -24) = eax;

loc_00438745: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + -20);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx + eax;
    ecx = MEM32(ebp + -336);
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438768u); RECOMP_ABI_CALL(0x0042C350u, sub_0042C350); /* call 0x0042C350 */

loc_00438768: ;
    eax = MEM32(ebp + -24);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;

loc_00438771: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 2;
    MEM32(ebp + 0x10) = eax;
    goto loc_004383D2;

loc_0043877F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004387A2; /* je: equal / zero */

loc_00438785: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00438796; /* jne: not equal / not zero */

loc_0043878D: ;
    eax = MEM32(ebp + 0xC);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -20) = eax;

loc_00438796: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    MEM16(eax + ecx * 2) = 0;

loc_004387A2: ;
    MEM32(ebp + -16) = 0;

loc_004387A9: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x16C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004387C0
 * Original: 0x004387C0 - 0x00438813 (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004387C0(void)
{
    uint32_t ebp = g_ebp;

loc_004387C0: ;
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
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004387EBu); RECOMP_ABI_CALL(0x00438820u, sub_00438820); /* call 0x00438820 */

loc_004387EB: ;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -12);
    eax = MEM32(eax + 0x60);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043880Cu); RECOMP_ABI_CALL(0x004383B0u, sub_004383B0); /* call 0x004383B0 */

loc_0043880C: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438820
 * Original: 0x00438820 - 0x00438830 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438820(void)
{
    uint32_t ebp = g_ebp;

loc_00438820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043882Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0043882B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438830
 * Original: 0x00438830 - 0x00438844 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438830(void)
{
    uint32_t ebp = g_ebp;

loc_00438830: ;
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
    PUSH32(esp, 0x00438844u); RECOMP_ABI_CALL(0x003DCBC0u, sub_003DCBC0); /* call 0x003DCBC0 */

}


/**
 * sub_00438850
 * Original: 0x00438850 - 0x004388B6 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438850(void)
{
    uint32_t ebp = g_ebp;

loc_00438850: ;
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
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004388A7u); RECOMP_ABI_CALL(0x004388C0u, sub_004388C0); /* call 0x004388C0 */

loc_004388A7: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004388AFu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004388AF: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004388C0
 * Original: 0x004388C0 - 0x0043896B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004388C0(void)
{
    uint32_t ebp = g_ebp;

loc_004388C0: ;
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
    PUSH32(esp, 0x00438963u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00438963: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438970
 * Original: 0x00438970 - 0x004389A5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438970(void)
{
    uint32_t ebp = g_ebp;

loc_00438970: ;
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
    MEM32(eax) = 0x59;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438998u); RECOMP_ABI_CALL(0x004389B0u, sub_004389B0); /* call 0x004389B0 */

loc_00438998: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004389A0u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004389A0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004389B0
 * Original: 0x004389B0 - 0x00438A2F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004389B0(void)
{
    uint32_t ebp = g_ebp;

loc_004389B0: ;
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
    PUSH32(esp, 0x00438A28u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00438A28: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438A30
 * Original: 0x00438A30 - 0x00438A8A (90 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438A30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */

loc_00438A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -24, xmm0); /* movaps */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = 0;
    XMM_STORE(ebp + -56, xmm0); /* movaps */
    XMM_STORE(ebp + -72, xmm0); /* movaps */
    eax = esp;
    ecx = ebp + -72;
    MEM32(eax + 8) = ecx;
    ecx = ebp + -40;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438A72u); RECOMP_ABI_CALL(0x004141D0u, sub_004141D0); /* call 0x004141D0 */

loc_00438A72: ;
    edx = MEM32(ebp + -44);
    eax = MEM32(ebp + -56);
    ecx = MEM32(ebp + -48);
    ecx = ecx | edx;
    SET_LO8(ecx, ((ecx != 0)) ? 1 : 0); /* setne */
    ecx = ZX8(LO8(ecx));
    eax = eax + ecx;
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438A90
 * Original: 0x00438A90 - 0x00438AC5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438A90(void)
{
    uint32_t ebp = g_ebp;

loc_00438A90: ;
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
    MEM32(eax) = 0x31;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438AB8u); RECOMP_ABI_CALL(0x00438AD0u, sub_00438AD0); /* call 0x00438AD0 */

loc_00438AB8: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438AC0u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00438AC0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438AD0
 * Original: 0x00438AD0 - 0x00438B4F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438AD0(void)
{
    uint32_t ebp = g_ebp;

loc_00438AD0: ;
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
    PUSH32(esp, 0x00438B48u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00438B48: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438B50
 * Original: 0x00438B50 - 0x00438BC9 (121 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B50(void)
{
    uint32_t ebp = g_ebp;

loc_00438B50: ;
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
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438BB9u); RECOMP_ABI_CALL(0x00438BD0u, sub_00438BD0); /* call 0x00438BD0 */

loc_00438BB9: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438BC1u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00438BC1: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438BD0
 * Original: 0x00438BD0 - 0x00438C8B (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438BD0(void)
{
    uint32_t ebp = g_ebp;

loc_00438BD0: ;
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
    PUSH32(esp, 0x00438C83u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00438C83: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438C90
 * Original: 0x00438C90 - 0x00438C9B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438C90(void)
{
    uint32_t ebp = g_ebp;

loc_00438C90: ;
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
 * sub_00438CA0
 * Original: 0x00438CA0 - 0x00438D43 (163 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438CA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438CB5u); RECOMP_ABI_CALL(0x00418090u, sub_00418090); /* call 0x00418090 */

loc_00438CB5: ;
    MEM32(ebp + 8) = eax;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -8) = eax;
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
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x39;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438D23u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_00438D23: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFCu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00438D33; /* jne: not equal / not zero */

loc_00438D2C: ;
    MEM32(ebp + -4) = 0;

loc_00438D33: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438D3Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00438D3E: ;
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438D50
 * Original: 0x00438D50 - 0x00438D8C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438D50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438D79; /* je: equal / zero */

loc_00438D5F: ;
    ecx = MEM32(ebp + 8);
    eax = 0x441F25;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438D74u); RECOMP_ABI_CALL(0x00429B90u, sub_00429B90); /* call 0x00429B90 */

loc_00438D74: ;
    MEM32(ebp + -4) = eax;
    goto loc_00438D84;

loc_00438D79: ;
    eax = 0x441F25;
    MEM32(ebp + -4) = eax;
    goto loc_00438D84;

loc_00438D84: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438D90
 * Original: 0x00438D90 - 0x00438DC8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438D90(void)
{
    uint32_t ebp = g_ebp;

loc_00438D90: ;
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
    MEM32(eax) = 0x17;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438DBBu); RECOMP_ABI_CALL(0x00438DD0u, sub_00438DD0); /* call 0x00438DD0 */

loc_00438DBB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438DC3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00438DC3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438DD0
 * Original: 0x00438DD0 - 0x00438E4F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438DD0(void)
{
    uint32_t ebp = g_ebp;

loc_00438DD0: ;
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
    PUSH32(esp, 0x00438E48u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00438E48: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438E50
 * Original: 0x00438E50 - 0x00438F10 (192 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438E50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00438EA9; /* jne: not equal / not zero */

loc_00438E66: ;
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
    PUSH32(esp, 0x00438E96u); RECOMP_ABI_CALL(0x00438F10u, sub_00438F10); /* call 0x00438F10 */

loc_00438E96: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00438EA7; /* jl: less (signed <) */

loc_00438E9F: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    goto loc_00438F06;

loc_00438EA7: ;
    goto loc_00438EF8;

loc_00438EA9: ;
    goto loc_00438EAB;

loc_00438EAB: ;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -20) = eax;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438EECu); RECOMP_ABI_CALL(0x00438FA0u, sub_00438FA0); /* call 0x00438FA0 */

loc_00438EEC: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF0u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00438EF6; /* jne: not equal / not zero */

loc_00438EF4: ;
    goto loc_00438EAB;

loc_00438EF6: ;
    goto loc_00438EF8;

loc_00438EF8: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00438F03u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00438F03: ;
    MEM32(ebp + -12) = eax;

loc_00438F06: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438F10
 * Original: 0x00438F10 - 0x00438F9B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438F10(void)
{
    uint32_t ebp = g_ebp;

loc_00438F10: ;
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
    PUSH32(esp, 0x00438F93u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00438F93: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00438FA0
 * Original: 0x00438FA0 - 0x0043903B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438FA0(void)
{
    uint32_t ebp = g_ebp;

loc_00438FA0: ;
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
    PUSH32(esp, 0x00439033u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439033: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439040
 * Original: 0x00439040 - 0x004390B4 (116 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439040(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00439040: ;
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
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_00439052: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -20) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ebx = MEM32(ebp + 0x10);
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
    MEM32(eax) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439097u); RECOMP_ABI_CALL(0x004390C0u, sub_004390C0); /* call 0x004390C0 */

loc_00439097: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF0u (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004390A1; /* jne: not equal / not zero */

loc_0043909F: ;
    goto loc_00439052;

loc_004390A1: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004390ACu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004390AC: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004390C0
 * Original: 0x004390C0 - 0x0043915B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004390C0(void)
{
    uint32_t ebp = g_ebp;

loc_004390C0: ;
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
    PUSH32(esp, 0x00439153u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439153: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439160
 * Original: 0x00439160 - 0x00439482 (802 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439160(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00439160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4FC;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043920F; /* je: equal / zero */

loc_00439182: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -1212) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    eax = ebx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -1216) = eax;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -1220) = ecx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -1224) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -1220);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -1216);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -1212);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x1B7;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004391F1u); RECOMP_ABI_CALL(0x00439490u, sub_00439490); /* call 0x00439490 */

loc_004391F1: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFDAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043920D; /* je: equal / zero */

loc_004391FA: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439205u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00439205: ;
    MEM32(ebp + -16) = eax;
    goto loc_00439474;

loc_0043920D: ;
    goto loc_0043920F;

loc_0043920F: ;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFDFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00439230; /* je: equal / zero */

loc_0043921C: ;
    MEM32(esp) = 0xFFFFFFEAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439228u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00439228: ;
    MEM32(ebp + -16) = eax;
    goto loc_00439474;

loc_00439230: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043926E; /* je: equal / zero */

loc_00439236: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043923Bu); RECOMP_ABI_CALL(0x0043AA40u, sub_0043AA40); /* call 0x0043AA40 */

loc_0043923B: ;
    MEM32(ebp + -1228) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439246u); RECOMP_ABI_CALL(0x0043A370u, sub_0043A370); /* call 0x0043A370 */

loc_00439246: ;
    ecx = eax;
    eax = MEM32(ebp + -1228);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004392C9; /* jne: not equal / not zero */

loc_00439252: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439257u); RECOMP_ABI_CALL(0x0043A410u, sub_0043A410); /* call 0x0043A410 */

loc_00439257: ;
    MEM32(ebp + -1232) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439262u); RECOMP_ABI_CALL(0x0043A2D0u, sub_0043A2D0); /* call 0x0043A2D0 */

loc_00439262: ;
    ecx = eax;
    eax = MEM32(ebp + -1232);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004392C9; /* jne: not equal / not zero */

loc_0043926E: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -1236) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    ecx = ebx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -1240) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -1236);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004392B9u); RECOMP_ABI_CALL(0x00439540u, sub_00439540); /* call 0x00439540 */

loc_004392B9: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004392C1u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004392C1: ;
    MEM32(ebp + -16) = eax;
    goto loc_00439474;

loc_004392C9: ;
    eax = ebp + -1192;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x80000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004392DFu); RECOMP_ABI_CALL(0x0043B310u, sub_0043B310); /* call 0x0043B310 */

loc_004392DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004392F8; /* je: equal / zero */

loc_004392E4: ;
    MEM32(esp) = 0xFFFFFFF0u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004392F0u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_004392F0: ;
    MEM32(ebp + -16) = eax;
    goto loc_00439474;

loc_004392F8: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -1208) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -1204) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -1200) = eax;
    eax = MEM32(ebp + -1188);
    MEM32(ebp + -1196) = eax;
    eax = esp;
    ecx = ebp + -1172;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043932Eu); RECOMP_ABI_CALL(0x00413B20u, sub_00413B20); /* call 0x00413B20 */

loc_0043932E: ;
    ecx = ebp + -20;
    eax = esp;
    edx = ebp + -1208;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x4395E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439351u); RECOMP_ABI_CALL(0x0042D1F0u, sub_0042D1F0); /* call 0x0042D1F0 */

loc_00439351: ;
    MEM32(ebp + -1176) = eax;
    ecx = MEM32(ebp + -1188);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x39;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043937Cu); RECOMP_ABI_CALL(0x00439740u, sub_00439740); /* call 0x00439740 */

loc_0043937C: ;
    _fa = (uint32_t)(MEM32(ebp + -1176)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1176), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004393D1; /* jl: less (signed <) */

loc_00439385: ;
    ecx = MEM32(ebp + -1192);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -1184;
    eax = esp;
    MEM32(ebp + -1244) = eax;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 4;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x3F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004393CCu); RECOMP_ABI_CALL(0x00439540u, sub_00439540); /* call 0x00439540 */

loc_004393CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004393DB; /* je: equal / zero */

loc_004393D1: ;
    MEM32(ebp + -1184) = 0xFFFFFFF0u;

loc_004393DB: ;
    ecx = MEM32(ebp + -1192);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x39;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439400u); RECOMP_ABI_CALL(0x00439740u, sub_00439740); /* call 0x00439740 */

loc_00439400: ;
    ecx = MEM32(ebp + -1176);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -1180;
    eax = esp;
    MEM32(ebp + -1248) = eax;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0x80000000u;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x104;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439455u); RECOMP_ABI_CALL(0x00439490u, sub_00439490); /* call 0x00439490 */

loc_00439455: ;
    eax = ebp + -1172;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439463u); RECOMP_ABI_CALL(0x00413C90u, sub_00413C90); /* call 0x00413C90 */

loc_00439463: ;
    eax = MEM32(ebp + -1184);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439471u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00439471: ;
    MEM32(ebp + -16) = eax;

loc_00439474: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x4FC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439490
 * Original: 0x00439490 - 0x0043953B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439490(void)
{
    uint32_t ebp = g_ebp;

loc_00439490: ;
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
    PUSH32(esp, 0x00439533u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439533: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439540
 * Original: 0x00439540 - 0x004395DB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439540(void)
{
    uint32_t ebp = g_ebp;

loc_00439540: ;
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
    PUSH32(esp, 0x004395D3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004395D3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004395E0
 * Original: 0x004395E0 - 0x0043973C (348 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004395E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004395E0: ;
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
    MEM32(ebp + -16) = eax;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xB1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439606u); RECOMP_ABI_CALL(0x00439850u, sub_00439850); /* call 0x00439850 */

loc_00439606: ;
    ecx = eax;
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0xFFFFFFFFu;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x8F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439635u); RECOMP_ABI_CALL(0x004397C0u, sub_004397C0); /* call 0x004397C0 */

loc_00439635: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00439682; /* jne: not equal / not zero */

loc_0043963A: ;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xAF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043964Eu); RECOMP_ABI_CALL(0x00439850u, sub_00439850); /* call 0x00439850 */

loc_0043964E: ;
    ecx = eax;
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0xFFFFFFFFu;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x91;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043967Du); RECOMP_ABI_CALL(0x004397C0u, sub_004397C0); /* call 0x004397C0 */

loc_0043967D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004396A4; /* je: equal / zero */

loc_00439682: ;
    eax = esp;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 1;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x5D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004396A4u); RECOMP_ABI_CALL(0x00439740u, sub_00439740); /* call 0x00439740 */

loc_004396A4: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax);
    esi = MEM32(eax + 4);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = MEM32(eax + 8);
    ebx = edi;
    ebx = RECOMP_SAR(ebx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x18) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004396F1u); RECOMP_ABI_CALL(0x00439490u, sub_00439490); /* call 0x00439490 */

loc_004396F1: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax + 0xC);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -20;
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 4;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439732u); RECOMP_ABI_CALL(0x00439540u, sub_00439540); /* call 0x00439540 */

loc_00439732: ;
    eax = 0; /* xor self */
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439740
 * Original: 0x00439740 - 0x004397BF (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439740(void)
{
    uint32_t ebp = g_ebp;

loc_00439740: ;
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
    PUSH32(esp, 0x004397B8u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004397B8: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004397C0
 * Original: 0x004397C0 - 0x0043984B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004397C0(void)
{
    uint32_t ebp = g_ebp;

loc_004397C0: ;
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
    PUSH32(esp, 0x00439843u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439843: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439850
 * Original: 0x00439850 - 0x004398C7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439850(void)
{
    uint32_t ebp = g_ebp;

loc_00439850: ;
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
    PUSH32(esp, 0x004398C2u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004398C2: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004398D0
 * Original: 0x004398D0 - 0x00439990 (192 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004398D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004398D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004398FBu); RECOMP_ABI_CALL(0x00439990u, sub_00439990); /* call 0x00439990 */

loc_004398FB: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFF7u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00439939; /* jne: not equal / not zero */

loc_00439904: ;
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
    PUSH32(esp, 0x00439934u); RECOMP_ABI_CALL(0x00439A10u, sub_00439A10); /* call 0x00439A10 */

loc_00439934: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00439949; /* jge: greater or equal (signed >=) */

loc_00439939: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439944u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00439944: ;
    MEM32(ebp + -4) = eax;
    goto loc_00439988;

loc_00439949: ;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -35;
    MEM32(ebp + -40) = ecx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043995Eu); RECOMP_ABI_CALL(0x003E0BD0u, sub_003E0BD0); /* call 0x003E0BD0 */

loc_0043995E: ;
    ecx = MEM32(ebp + -40);
    edx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x31;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043997Du); RECOMP_ABI_CALL(0x00439990u, sub_00439990); /* call 0x00439990 */

loc_0043997D: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439985u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00439985: ;
    MEM32(ebp + -4) = eax;

loc_00439988: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439990
 * Original: 0x00439990 - 0x00439A0F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439990(void)
{
    uint32_t ebp = g_ebp;

loc_00439990: ;
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
    PUSH32(esp, 0x00439A08u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439A08: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439A10
 * Original: 0x00439A10 - 0x00439A9B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439A10(void)
{
    uint32_t ebp = g_ebp;

loc_00439A10: ;
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
    PUSH32(esp, 0x00439A93u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439A93: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439AA0
 * Original: 0x00439AA0 - 0x00439BBE (286 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439AA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00439AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x6C;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -52) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    ecx = edi;
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
    MEM32(eax) = 0x37;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439AF1u); RECOMP_ABI_CALL(0x00439BC0u, sub_00439BC0); /* call 0x00439BC0 */

loc_00439AF1: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFF7u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00439B2F; /* jne: not equal / not zero */

loc_00439AFA: ;
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
    PUSH32(esp, 0x00439B2Au); RECOMP_ABI_CALL(0x00439C60u, sub_00439C60); /* call 0x00439C60 */

loc_00439B2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00439B3F; /* jge: greater or equal (signed >=) */

loc_00439B2F: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439B3Au); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00439B3A: ;
    MEM32(ebp + -16) = eax;
    goto loc_00439BB3;

loc_00439B3F: ;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax + 4) = ecx;
    ecx = ebp + -47;
    MEM32(ebp + -60) = ecx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439B54u); RECOMP_ABI_CALL(0x003E0BD0u, sub_003E0BD0); /* call 0x003E0BD0 */

loc_00439B54: ;
    edi = 0; /* xor self */
    edx = edi;
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x10);
    ecx = edi;
    eax = esp;
    MEM32(ebp + -64) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -60);
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439BA8u); RECOMP_ABI_CALL(0x00439CF0u, sub_00439CF0); /* call 0x00439CF0 */

loc_00439BA8: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439BB0u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00439BB0: ;
    MEM32(ebp + -16) = eax;

loc_00439BB3: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x6C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439BC0
 * Original: 0x00439BC0 - 0x00439C5B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439BC0(void)
{
    uint32_t ebp = g_ebp;

loc_00439BC0: ;
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
    PUSH32(esp, 0x00439C53u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439C53: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439C60
 * Original: 0x00439C60 - 0x00439CEB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439C60(void)
{
    uint32_t ebp = g_ebp;

loc_00439C60: ;
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
    PUSH32(esp, 0x00439CE3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439CE3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439CF0
 * Original: 0x00439CF0 - 0x00439DAB (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439CF0(void)
{
    uint32_t ebp = g_ebp;

loc_00439CF0: ;
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
    PUSH32(esp, 0x00439DA3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439DA3: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439DB0
 * Original: 0x00439DB0 - 0x00439E43 (147 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439DB0(void)
{
    uint32_t ebp = g_ebp;

loc_00439DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    eax = edi;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    eax = edi;
    MEM32(ebp + -28) = eax;
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + -32) = ecx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439E33u); RECOMP_ABI_CALL(0x00439E50u, sub_00439E50); /* call 0x00439E50 */

loc_00439E33: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439E3Bu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00439E3B: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439E50
 * Original: 0x00439E50 - 0x00439F0B (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439E50(void)
{
    uint32_t ebp = g_ebp;

loc_00439E50: ;
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
    PUSH32(esp, 0x00439F03u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00439F03: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439F10
 * Original: 0x00439F10 - 0x00439F8E (126 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439F10(void)
{
    uint32_t ebp = g_ebp;

loc_00439F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
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
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x53;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439F81u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_00439F81: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00439F89u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_00439F89: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00439F90
 * Original: 0x00439F90 - 0x0043A00E (126 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439F90(void)
{
    uint32_t ebp = g_ebp;

loc_00439F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
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
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A001u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043A001: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A009u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043A009: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A010
 * Original: 0x0043A010 - 0x0043A064 (84 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A010(void)
{
    uint32_t ebp = g_ebp;

loc_0043A010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + -16);
    edi = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x2E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A055u); RECOMP_ABI_CALL(0x0043A070u, sub_0043A070); /* call 0x0043A070 */

loc_0043A055: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A05Du); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043A05D: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A070
 * Original: 0x0043A070 - 0x0043A0FB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A070(void)
{
    uint32_t ebp = g_ebp;

loc_0043A070: ;
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
    PUSH32(esp, 0x0043A0F3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A0F3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A100
 * Original: 0x0043A100 - 0x0043A239 (313 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043A100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = 1;
    eax = 0x1000;
    if (TEST_NZ(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -36) = eax;
    ecx = esp;
    MEM32(ebp + -16) = ecx;
    edx = eax;
    edx = edx + 0xF;
    edx = edx & 0x1010;
    ecx = esp;
    ecx = ecx - edx;
    MEM32(ebp + -32) = ecx;
    esp = ecx;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043A153; /* jne: not equal / not zero */

loc_0043A145: ;
    eax = MEM32(ebp + -36);
    ecx = MEM32(ebp + -32);
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + 0xC) = eax;
    goto loc_0043A179;

loc_0043A153: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043A177; /* jne: not equal / not zero */

loc_0043A159: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A15Eu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043A15E: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -12) = 0;
    MEM32(ebp + -24) = 1;
    goto loc_0043A22A;

loc_0043A177: ;
    goto loc_0043A179;

loc_0043A179: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    esp = esp - 0x20;
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x11;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A1A6u); RECOMP_ABI_CALL(0x0043A240u, sub_0043A240); /* call 0x0043A240 */

loc_0043A1A6: ;
    esp = esp + 0x10;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A1B1u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043A1B1: ;
    esp = esp + 0x10;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043A1CD; /* jge: greater or equal (signed >=) */

loc_0043A1BD: ;
    MEM32(ebp + -12) = 0;
    MEM32(ebp + -24) = 1;
    goto loc_0043A22A;

loc_0043A1CD: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A1DE; /* je: equal / zero */

loc_0043A1D3: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043A1F9; /* je: equal / zero */

loc_0043A1DE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A1E3u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043A1E3: ;
    MEM32(eax) = 2;
    MEM32(ebp + -12) = 0;
    MEM32(ebp + -24) = 1;
    goto loc_0043A22A;

loc_0043A1F9: ;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043A217; /* jne: not equal / not zero */

loc_0043A201: ;
    eax = MEM32(ebp + 8);
    esp = esp - 0x10;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A20Fu); RECOMP_ABI_CALL(0x00429CE0u, sub_00429CE0); /* call 0x00429CE0 */

loc_0043A20F: ;
    esp = esp + 0x10;
    MEM32(ebp + -40) = eax;
    goto loc_0043A21D;

loc_0043A217: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -40) = eax;

loc_0043A21D: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -24) = 1;

loc_0043A22A: ;
    eax = MEM32(ebp + -16);
    esp = eax;
    eax = MEM32(ebp + -12);
    esp = ebp + -8;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A240
 * Original: 0x0043A240 - 0x0043A2CB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A240(void)
{
    uint32_t ebp = g_ebp;

loc_0043A240: ;
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
    PUSH32(esp, 0x0043A2C3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A2C3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A2D0
 * Original: 0x0043A2D0 - 0x0043A2EF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A2D0(void)
{
    uint32_t ebp = g_ebp;

loc_0043A2D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xB1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A2EAu); RECOMP_ABI_CALL(0x0043A2F0u, sub_0043A2F0); /* call 0x0043A2F0 */

loc_0043A2EA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A2F0
 * Original: 0x0043A2F0 - 0x0043A367 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A2F0(void)
{
    uint32_t ebp = g_ebp;

loc_0043A2F0: ;
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
    PUSH32(esp, 0x0043A362u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A362: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A370
 * Original: 0x0043A370 - 0x0043A38F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A370(void)
{
    uint32_t ebp = g_ebp;

loc_0043A370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xAF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A38Au); RECOMP_ABI_CALL(0x0043A390u, sub_0043A390); /* call 0x0043A390 */

loc_0043A38A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A390
 * Original: 0x0043A390 - 0x0043A407 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A390(void)
{
    uint32_t ebp = g_ebp;

loc_0043A390: ;
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
    PUSH32(esp, 0x0043A402u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A402: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A410
 * Original: 0x0043A410 - 0x0043A42F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A410(void)
{
    uint32_t ebp = g_ebp;

loc_0043A410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A42Au); RECOMP_ABI_CALL(0x0043A430u, sub_0043A430); /* call 0x0043A430 */

loc_0043A42A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A430
 * Original: 0x0043A430 - 0x0043A4A7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A430(void)
{
    uint32_t ebp = g_ebp;

loc_0043A430: ;
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
    PUSH32(esp, 0x0043A4A2u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A4A2: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A4B0
 * Original: 0x0043A4B0 - 0x0043A4FA (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A4B0(void)
{
    uint32_t ebp = g_ebp;

loc_0043A4B0: ;
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
    MEM32(eax) = 0x9E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A4EBu); RECOMP_ABI_CALL(0x0043A500u, sub_0043A500); /* call 0x0043A500 */

loc_0043A4EB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A4F3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043A4F3: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A500
 * Original: 0x0043A500 - 0x0043A58B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A500(void)
{
    uint32_t ebp = g_ebp;

loc_0043A500: ;
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
    PUSH32(esp, 0x0043A583u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A583: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A590
 * Original: 0x0043A590 - 0x0043A64A (186 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0043A590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x198)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + -398;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A5ADu); RECOMP_ABI_CALL(0x0040F340u, sub_0040F340); /* call 0x0040F340 */

loc_0043A5AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043A5BE; /* je: equal / zero */

loc_0043A5B2: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0043A63F;

loc_0043A5BE: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x41 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0043A5CB; /* jbe: below or equal (unsigned <=) */

loc_0043A5C4: ;
    MEM32(ebp + 0xC) = 0x41;

loc_0043A5CB: ;
    MEM32(ebp + -8) = 0;

loc_0043A5D2: ;
    ecx = MEM32(ebp + -8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -399) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_0043A604; /* jae: above or equal (unsigned >=) */

loc_0043A5E2: ;
    eax = MEM32(ebp + -8);
    SET_LO8(eax, MEM8(ebp + eax + -333));
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -8);
    MEM8(ecx + edx) = LO8(eax);
    eax = SX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -399) = LO8(eax);

loc_0043A604: ;
    SET_LO8(eax, MEM8(ebp + -399));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0043A610; /* jne: not equal / not zero */

loc_0043A60E: ;
    goto loc_0043A61D;

loc_0043A610: ;
    goto loc_0043A612;

loc_0043A612: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_0043A5D2;

loc_0043A61D: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043A638; /* je: equal / zero */

loc_0043A623: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043A638; /* jne: not equal / not zero */

loc_0043A62B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM8(eax + ecx) = 0;

loc_0043A638: ;
    MEM32(ebp + -4) = 0;

loc_0043A63F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x198;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A650
 * Original: 0x0043A650 - 0x0043A669 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A650(void)
{
    uint32_t ebp = g_ebp;

loc_0043A650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0x46F3C1;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A664u); RECOMP_ABI_CALL(0x003DC4D0u, sub_003DC4D0); /* call 0x003DC4D0 */

loc_0043A664: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A670
 * Original: 0x0043A670 - 0x0043A6CD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A670(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043A670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A681u); RECOMP_ABI_CALL(0x0043A650u, sub_0043A650); /* call 0x0043A650 */

loc_0043A681: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043A693; /* jne: not equal / not zero */

loc_0043A68A: ;
    MEM32(ebp + -4) = 6;
    goto loc_0043A6C5;

loc_0043A693: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A69Eu); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_0043A69E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0043A6AC; /* jb: below (unsigned <) */

loc_0043A6A3: ;
    MEM32(ebp + -4) = 0x22;
    goto loc_0043A6C5;

loc_0043A6AC: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A6BEu); RECOMP_ABI_CALL(0x00429B90u, sub_00429B90); /* call 0x00429B90 */

loc_0043A6BE: ;
    MEM32(ebp + -4) = 0;

loc_0043A6C5: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A6D0
 * Original: 0x0043A6D0 - 0x0043A708 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A6D0(void)
{
    uint32_t ebp = g_ebp;

loc_0043A6D0: ;
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
    MEM32(eax) = 0x9B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A6FBu); RECOMP_ABI_CALL(0x0043A710u, sub_0043A710); /* call 0x0043A710 */

loc_0043A6FB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A703u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043A703: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A710
 * Original: 0x0043A710 - 0x0043A78F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A710(void)
{
    uint32_t ebp = g_ebp;

loc_0043A710: ;
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
    PUSH32(esp, 0x0043A788u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A788: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A790
 * Original: 0x0043A790 - 0x0043A7BD (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A790(void)
{
    uint32_t ebp = g_ebp;

loc_0043A790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x9B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A7B8u); RECOMP_ABI_CALL(0x0043A7C0u, sub_0043A7C0); /* call 0x0043A7C0 */

loc_0043A7B8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A7C0
 * Original: 0x0043A7C0 - 0x0043A83F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A7C0(void)
{
    uint32_t ebp = g_ebp;

loc_0043A7C0: ;
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
    PUSH32(esp, 0x0043A838u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A838: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A840
 * Original: 0x0043A840 - 0x0043A85F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A840(void)
{
    uint32_t ebp = g_ebp;

loc_0043A840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xAC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A85Au); RECOMP_ABI_CALL(0x0043A860u, sub_0043A860); /* call 0x0043A860 */

loc_0043A85A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A860
 * Original: 0x0043A860 - 0x0043A8D7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A860(void)
{
    uint32_t ebp = g_ebp;

loc_0043A860: ;
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
    PUSH32(esp, 0x0043A8D2u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A8D2: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A8E0
 * Original: 0x0043A8E0 - 0x0043A8FF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A8E0(void)
{
    uint32_t ebp = g_ebp;

loc_0043A8E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xAD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A8FAu); RECOMP_ABI_CALL(0x0043A900u, sub_0043A900); /* call 0x0043A900 */

loc_0043A8FA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A900
 * Original: 0x0043A900 - 0x0043A977 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A900(void)
{
    uint32_t ebp = g_ebp;

loc_0043A900: ;
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
    PUSH32(esp, 0x0043A972u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043A972: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A980
 * Original: 0x0043A980 - 0x0043A9B8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A980(void)
{
    uint32_t ebp = g_ebp;

loc_0043A980: ;
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
    MEM32(eax) = 0x9C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A9ABu); RECOMP_ABI_CALL(0x0043A9C0u, sub_0043A9C0); /* call 0x0043A9C0 */

loc_0043A9AB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043A9B3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043A9B3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043A9C0
 * Original: 0x0043A9C0 - 0x0043AA3F (127 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043A9C0(void)
{
    uint32_t ebp = g_ebp;

loc_0043A9C0: ;
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
    PUSH32(esp, 0x0043AA38u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043AA38: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AA40
 * Original: 0x0043AA40 - 0x0043AA5F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AA40(void)
{
    uint32_t ebp = g_ebp;

loc_0043AA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xAE;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043AA5Au); RECOMP_ABI_CALL(0x0043AA60u, sub_0043AA60); /* call 0x0043AA60 */

loc_0043AA5A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AA60
 * Original: 0x0043AA60 - 0x0043AAD7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AA60(void)
{
    uint32_t ebp = g_ebp;

loc_0043AA60: ;
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
    PUSH32(esp, 0x0043AAD2u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043AAD2: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AAE0
 * Original: 0x0043AAE0 - 0x0043AB69 (137 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AAE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043AAE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    edi = 0; /* xor self */
    esi = ebp + -20;
    eax = esp;
    MEM32(ebp + -28) = eax;
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
    PUSH32(esp, 0x0043AB29u); RECOMP_ABI_CALL(0x0043AB70u, sub_0043AB70); /* call 0x0043AB70 */

loc_0043AB29: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043AB31u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043AB31: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043AB43; /* jne: not equal / not zero */

loc_0043AB3A: ;
    MEM32(ebp + -12) = 1;
    goto loc_0043AB5F;

loc_0043AB43: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043AB48u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043AB48: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043AB58; /* je: equal / zero */

loc_0043AB4D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043AB52u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043AB52: ;
    MEM32(eax) = 0x19;

loc_0043AB58: ;
    MEM32(ebp + -12) = 0;

loc_0043AB5F: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AB70
 * Original: 0x0043AB70 - 0x0043AC0B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AB70(void)
{
    uint32_t ebp = g_ebp;

loc_0043AB70: ;
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
    PUSH32(esp, 0x0043AC03u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043AC03: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AC10
 * Original: 0x0043AC10 - 0x0043AC89 (121 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AC10(void)
{
    uint32_t ebp = g_ebp;

loc_0043AC10: ;
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
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0x100;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043AC79u); RECOMP_ABI_CALL(0x0043AC90u, sub_0043AC90); /* call 0x0043AC90 */

loc_0043AC79: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043AC81u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043AC81: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AC90
 * Original: 0x0043AC90 - 0x0043AD4B (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AC90(void)
{
    uint32_t ebp = g_ebp;

loc_0043AC90: ;
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
    PUSH32(esp, 0x0043AD43u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043AD43: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AD50
 * Original: 0x0043AD50 - 0x0043ADC1 (113 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AD50(void)
{
    uint32_t ebp = g_ebp;

loc_0043AD50: ;
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
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    eax = esp;
    MEM32(eax + 0x24) = edi;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0x1C) = 0xFFFFFFFFu;
    MEM32(eax + 0x18) = 0xFFFFFF9Cu;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x25;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043ADB2u); RECOMP_ABI_CALL(0x0043ADD0u, sub_0043ADD0); /* call 0x0043ADD0 */

loc_0043ADB2: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043ADBAu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043ADBA: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043ADD0
 * Original: 0x0043ADD0 - 0x0043AE8B (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043ADD0(void)
{
    uint32_t ebp = g_ebp;

loc_0043ADD0: ;
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
    PUSH32(esp, 0x0043AE83u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043AE83: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AE90
 * Original: 0x0043AE90 - 0x0043AF26 (150 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AE90(void)
{
    uint32_t ebp = g_ebp;

loc_0043AE90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    eax = ebx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    eax = edi;
    MEM32(ebp + -28) = eax;
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + -32) = ecx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x25;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043AF16u); RECOMP_ABI_CALL(0x0043AF30u, sub_0043AF30); /* call 0x0043AF30 */

loc_0043AF16: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043AF1Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043AF1E: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AF30
 * Original: 0x0043AF30 - 0x0043AFEB (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AF30(void)
{
    uint32_t ebp = g_ebp;

loc_0043AF30: ;
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
    PUSH32(esp, 0x0043AFE3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043AFE3: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043AFF0
 * Original: 0x0043AFF0 - 0x0043B063 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043AFF0(void)
{
    uint32_t ebp = g_ebp;

loc_0043AFF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x3C;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = eax;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -28) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + -24);
    edi = MEM32(ebp + -20);
    ebx = MEM32(ebp + 0x14);
    ecx = ebx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x3E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B04Bu); RECOMP_ABI_CALL(0x0043B070u, sub_0043B070); /* call 0x0043B070 */

loc_0043B04B: ;
    ecx = eax;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B056u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B056: ;
    edx = eax;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B070
 * Original: 0x0043B070 - 0x0043B10B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B070(void)
{
    uint32_t ebp = g_ebp;

loc_0043B070: ;
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
    PUSH32(esp, 0x0043B103u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043B103: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B110
 * Original: 0x0043B110 - 0x0043B1AF (159 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B110(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFD8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFD8u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043B147; /* jle: less or equal (signed <=) */

loc_0043B125: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043B147; /* jge: greater or equal (signed >=) */

loc_0043B12B: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B141u); RECOMP_ABI_CALL(0x0040DF10u, sub_0040DF10); /* call 0x0040DF10 */

loc_0043B141: ;
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;

loc_0043B147: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x13 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043B154; /* jle: less or equal (signed <=) */

loc_0043B14D: ;
    MEM32(ebp + -8) = 0x13;

loc_0043B154: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFECu (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043B161; /* jge: greater or equal (signed >=) */

loc_0043B15A: ;
    MEM32(ebp + -8) = 0xFFFFFFECu;

loc_0043B161: ;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B17Eu); RECOMP_ABI_CALL(0x0040F020u, sub_0040F020); /* call 0x0040F020 */

loc_0043B17E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B1A1; /* je: equal / zero */

loc_0043B183: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B188u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043B188: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043B198; /* jne: not equal / not zero */

loc_0043B18D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B192u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043B192: ;
    MEM32(eax) = 1;

loc_0043B198: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0043B1A7;

loc_0043B1A1: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_0043B1A7: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B1B0
 * Original: 0x0043B1B0 - 0x0043B22B (123 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B1B0(void)
{
    uint32_t ebp = g_ebp;

loc_0043B1B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = esp;
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
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x49;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B21Eu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043B21E: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B226u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B226: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B230
 * Original: 0x0043B230 - 0x0043B273 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B230(void)
{
    uint32_t ebp = g_ebp;

loc_0043B230: ;
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
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x3B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B266u); RECOMP_ABI_CALL(0x0043B280u, sub_0043B280); /* call 0x0043B280 */

loc_0043B266: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B26Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B26E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B280
 * Original: 0x0043B280 - 0x0043B30B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B280(void)
{
    uint32_t ebp = g_ebp;

loc_0043B280: ;
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
    PUSH32(esp, 0x0043B303u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043B303: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B310
 * Original: 0x0043B310 - 0x0043B501 (497 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B310(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043B337; /* jne: not equal / not zero */

loc_0043B324: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B32Fu); RECOMP_ABI_CALL(0x0043B230u, sub_0043B230); /* call 0x0043B230 */

loc_0043B32F: ;
    MEM32(ebp + -12) = eax;
    goto loc_0043B4F7;

loc_0043B337: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x3B;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B364u); RECOMP_ABI_CALL(0x0043B510u, sub_0043B510); /* call 0x0043B510 */

loc_0043B364: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFDAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B380; /* je: equal / zero */

loc_0043B36D: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B378u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B378: ;
    MEM32(ebp + -12) = eax;
    goto loc_0043B4F7;

loc_0043B380: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xFFF7F7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B3A1; /* je: equal / zero */

loc_0043B38D: ;
    MEM32(esp) = 0xFFFFFFEAu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B399u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B399: ;
    MEM32(ebp + -12) = eax;
    goto loc_0043B4F7;

loc_0043B3A1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B3ACu); RECOMP_ABI_CALL(0x0043B230u, sub_0043B230); /* call 0x0043B230 */

loc_0043B3AC: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B3C0; /* je: equal / zero */

loc_0043B3B5: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_0043B4F7;

loc_0043B3C0: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x80000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B458; /* je: equal / zero */

loc_0043B3D1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -24) = eax;
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
    PUSH32(esp, 0x0043B414u); RECOMP_ABI_CALL(0x0043B5A0u, sub_0043B5A0); /* call 0x0043B5A0 */

loc_0043B414: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -20) = eax;
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
    PUSH32(esp, 0x0043B458u); RECOMP_ABI_CALL(0x0043B5A0u, sub_0043B5A0); /* call 0x0043B5A0 */

loc_0043B458: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043B4F0; /* je: equal / zero */

loc_0043B469: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -32) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0x800;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 4;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B4ACu); RECOMP_ABI_CALL(0x0043B5A0u, sub_0043B5A0); /* call 0x0043B5A0 */

loc_0043B4AC: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -28) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0x800;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 4;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x19;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B4F0u); RECOMP_ABI_CALL(0x0043B5A0u, sub_0043B5A0); /* call 0x0043B5A0 */

loc_0043B4F0: ;
    MEM32(ebp + -12) = 0;

loc_0043B4F7: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B510
 * Original: 0x0043B510 - 0x0043B59B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B510(void)
{
    uint32_t ebp = g_ebp;

loc_0043B510: ;
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
    PUSH32(esp, 0x0043B593u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043B593: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B5A0
 * Original: 0x0043B5A0 - 0x0043B63B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B5A0(void)
{
    uint32_t ebp = g_ebp;

loc_0043B5A0: ;
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
    PUSH32(esp, 0x0043B633u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043B633: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B640
 * Original: 0x0043B640 - 0x0043B65C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B640(void)
{
    uint32_t ebp = g_ebp;

loc_0043B640: ;
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
    PUSH32(esp, 0x0043B657u); RECOMP_ABI_CALL(0x00438CA0u, sub_00438CA0); /* call 0x00438CA0 */

loc_0043B657: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B660
 * Original: 0x0043B660 - 0x0043B6FC (156 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B660(void)
{
    uint32_t ebp = g_ebp;

loc_0043B660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x5C;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x43;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B6ECu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043B6EC: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B6F4u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B6F4: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B700
 * Original: 0x0043B700 - 0x0043B7AB (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B700(void)
{
    uint32_t ebp = g_ebp;

loc_0043B700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x5C;
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
    ebx = MEM32(ebp + 0x10);
    eax = ebx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -36) = eax;
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -44) = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -40) = eax;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -40);
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x45;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B79Bu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043B79B: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B7A3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B7A3: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B7B0
 * Original: 0x0043B7B0 - 0x0043B84C (156 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B7B0(void)
{
    uint32_t ebp = g_ebp;

loc_0043B7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x5C;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B83Cu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043B83C: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B844u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B844: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B850
 * Original: 0x0043B850 - 0x0043B8FB (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B850(void)
{
    uint32_t ebp = g_ebp;

loc_0043B850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x5C;
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
    ebx = MEM32(ebp + 0x10);
    eax = ebx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -36) = eax;
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -44) = ecx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -40) = eax;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -40);
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x46;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B8EBu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043B8EB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B8F3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B8F3: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B900
 * Original: 0x0043B900 - 0x0043B988 (136 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B900(void)
{
    uint32_t ebp = g_ebp;

loc_0043B900: ;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x3F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B978u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043B978: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043B980u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043B980: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043B990
 * Original: 0x0043B990 - 0x0043BA2E (158 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043B990(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043B990: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0043B9B5; /* jne: not equal / not zero */

loc_0043B9A8: ;
    eax = ebp + -13;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 0x10) = 1;

loc_0043B9B5: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    ebx = MEM32(ebp + 0x10);
    ecx = edx;
    eax = esp;
    MEM32(ebp + -28) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x4E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BA01u); RECOMP_ABI_CALL(0x0043BA30u, sub_0043BA30); /* call 0x0043BA30 */

loc_0043BA01: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043BA1B; /* jne: not equal / not zero */

loc_0043BA0E: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043BA1B; /* jle: less or equal (signed <=) */

loc_0043BA14: ;
    MEM32(ebp + -20) = 0;

loc_0043BA1B: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BA26u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043BA26: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BA30
 * Original: 0x0043BA30 - 0x0043BADB (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BA30(void)
{
    uint32_t ebp = g_ebp;

loc_0043BA30: ;
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
    PUSH32(esp, 0x0043BAD3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043BAD3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BAE0
 * Original: 0x0043BAE0 - 0x0043BB8B (171 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BAE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043BAE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043BB08; /* jne: not equal / not zero */

loc_0043BAFB: ;
    eax = ebp + -13;
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0x14) = 1;

loc_0043BB08: ;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -24) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    eax = edi;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -32) = eax;
    ecx = edi;
    eax = esp;
    MEM32(ebp + -36) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x4E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BB5Eu); RECOMP_ABI_CALL(0x0043BB90u, sub_0043BB90); /* call 0x0043BB90 */

loc_0043BB5E: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = ebp + -13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043BB78; /* jne: not equal / not zero */

loc_0043BB6B: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043BB78; /* jle: less or equal (signed <=) */

loc_0043BB71: ;
    MEM32(ebp + -20) = 0;

loc_0043BB78: ;
    eax = MEM32(ebp + -20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BB83u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043BB83: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BB90
 * Original: 0x0043BB90 - 0x0043BC3B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BB90(void)
{
    uint32_t ebp = g_ebp;

loc_0043BB90: ;
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
    PUSH32(esp, 0x0043BC33u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043BC33: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BC40
 * Original: 0x0043BC40 - 0x0043BCCB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BC40(void)
{
    uint32_t ebp = g_ebp;

loc_0043BC40: ;
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
    MEM32(ebp + -16) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    ecx = ebx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
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
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x41;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BCBBu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043BCBB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BCC3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043BCC3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BCD0
 * Original: 0x0043BCD0 - 0x0043BD4B (123 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BCD0(void)
{
    uint32_t ebp = g_ebp;

loc_0043BCD0: ;
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
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    eax = ebx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    ecx = edi;
    eax = esp;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x26;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BD3Bu); RECOMP_ABI_CALL(0x0043BD50u, sub_0043BD50); /* call 0x0043BD50 */

loc_0043BD3B: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BD43u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043BD43: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BD50
 * Original: 0x0043BD50 - 0x0043BDFB (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BD50(void)
{
    uint32_t ebp = g_ebp;

loc_0043BD50: ;
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
    PUSH32(esp, 0x0043BDF3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043BDF3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BE00
 * Original: 0x0043BE00 - 0x0043BE51 (81 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BE00(void)
{
    uint32_t ebp = g_ebp;

loc_0043BE00: ;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0x200;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x23;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BE44u); RECOMP_ABI_CALL(0x0043BE60u, sub_0043BE60); /* call 0x0043BE60 */

loc_0043BE44: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BE4Cu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043BE4C: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BE60
 * Original: 0x0043BE60 - 0x0043BEFB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BE60(void)
{
    uint32_t ebp = g_ebp;

loc_0043BE60: ;
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
    PUSH32(esp, 0x0043BEF3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043BEF3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BF00
 * Original: 0x0043BF00 - 0x0043BF31 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BF00(void)
{
    uint32_t ebp = g_ebp;

loc_0043BF00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0x95;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BF2Cu); RECOMP_ABI_CALL(0x0043C2C0u, sub_0043C2C0); /* call 0x0043C2C0 */

loc_0043BF2C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BF40
 * Original: 0x0043BF40 - 0x0043BF71 (49 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BF40(void)
{
    uint32_t ebp = g_ebp;

loc_0043BF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0x93;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BF6Cu); RECOMP_ABI_CALL(0x0043C2C0u, sub_0043C2C0); /* call 0x0043C2C0 */

loc_0043BF6C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BF80
 * Original: 0x0043BF80 - 0x0043BFB3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BF80(void)
{
    uint32_t ebp = g_ebp;

loc_0043BF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = 0x90;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BFAEu); RECOMP_ABI_CALL(0x0043C2C0u, sub_0043C2C0); /* call 0x0043C2C0 */

loc_0043BFAE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043BFC0
 * Original: 0x0043BFC0 - 0x0043C00D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043BFC0(void)
{
    uint32_t ebp = g_ebp;

loc_0043BFC0: ;
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
    MEM32(eax) = 0x9A;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043BFFEu); RECOMP_ABI_CALL(0x0043C010u, sub_0043C010); /* call 0x0043C010 */

loc_0043BFFE: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C006u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043C006: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C010
 * Original: 0x0043C010 - 0x0043C09B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C010(void)
{
    uint32_t ebp = g_ebp;

loc_0043C010: ;
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
    PUSH32(esp, 0x0043C093u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043C093: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C0A0
 * Original: 0x0043C0A0 - 0x0043C0C1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C0A0(void)
{
    uint32_t ebp = g_ebp;

loc_0043C0A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C0BCu); RECOMP_ABI_CALL(0x0043BFC0u, sub_0043BFC0); /* call 0x0043BFC0 */

loc_0043C0BC: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C0D0
 * Original: 0x0043C0D0 - 0x0043C105 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C0D0(void)
{
    uint32_t ebp = g_ebp;

loc_0043C0D0: ;
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
    MEM32(esp) = 0x8F;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C100u); RECOMP_ABI_CALL(0x0043C2C0u, sub_0043C2C0); /* call 0x0043C2C0 */

loc_0043C100: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C110
 * Original: 0x0043C110 - 0x0043C145 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C110(void)
{
    uint32_t ebp = g_ebp;

loc_0043C110: ;
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
    MEM32(esp) = 0x95;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C140u); RECOMP_ABI_CALL(0x0043C2C0u, sub_0043C2C0); /* call 0x0043C2C0 */

loc_0043C140: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C150
 * Original: 0x0043C150 - 0x0043C185 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C150(void)
{
    uint32_t ebp = g_ebp;

loc_0043C150: ;
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
    MEM32(esp) = 0x93;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C180u); RECOMP_ABI_CALL(0x0043C2C0u, sub_0043C2C0); /* call 0x0043C2C0 */

loc_0043C180: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C190
 * Original: 0x0043C190 - 0x0043C1C5 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C190(void)
{
    uint32_t ebp = g_ebp;

loc_0043C190: ;
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
    MEM32(esp) = 0x91;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C1C0u); RECOMP_ABI_CALL(0x0043C2C0u, sub_0043C2C0); /* call 0x0043C2C0 */

loc_0043C1C0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C1D0
 * Original: 0x0043C1D0 - 0x0043C1F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C1D0(void)
{
    uint32_t ebp = g_ebp;

loc_0043C1D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x9D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C1EAu); RECOMP_ABI_CALL(0x0043C200u, sub_0043C200); /* call 0x0043C200 */

loc_0043C1EA: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C1F2u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043C1F2: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C200
 * Original: 0x0043C200 - 0x0043C277 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C200(void)
{
    uint32_t ebp = g_ebp;

loc_0043C200: ;
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
    PUSH32(esp, 0x0043C272u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043C272: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C280
 * Original: 0x0043C280 - 0x0043C2B3 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C280(void)
{
    uint32_t ebp = g_ebp;

loc_0043C280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = 0x92;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C2AEu); RECOMP_ABI_CALL(0x0043C2C0u, sub_0043C2C0); /* call 0x0043C2C0 */

loc_0043C2AE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C2C0
 * Original: 0x0043C2C0 - 0x0043C32C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C2C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C2C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = 1;
    ecx = 0x43C330;
    eax = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C306u); RECOMP_ABI_CALL(0x00432650u, sub_00432650); /* call 0x00432650 */

loc_0043C306: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043C316; /* jle: less or equal (signed <=) */

loc_0043C30C: ;
    eax = 0xFFFFFFF5u;
    MEM32(ebp + -24) = eax;
    goto loc_0043C31C;

loc_0043C316: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -24) = eax;

loc_0043C31C: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C327u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043C327: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C330
 * Original: 0x0043C330 - 0x0043C414 (228 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C330(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C330: ;
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
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043C350; /* jge: greater or equal (signed >=) */

loc_0043C34B: ;
    goto loc_0043C40C;

loc_0043C350: ;
    eax = MEM32(ebp + -16);
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -24) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(eax);
    ebx = MEM32(eax + 4);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ecx = ebx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -32) = ecx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -36) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C3A1u); RECOMP_ABI_CALL(0x0043C420u, sub_0043C420); /* call 0x0043C420 */

loc_0043C3A1: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C403; /* je: equal / zero */

loc_0043C3AA: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043C403; /* jne: not equal / not zero */

loc_0043C3B3: ;
    eax = esp;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C3C0u); RECOMP_ABI_CALL(0x00413B20u, sub_00413B20); /* call 0x00413B20 */

loc_0043C3C0: ;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xAC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C3D4u); RECOMP_ABI_CALL(0x0043C550u, sub_0043C550); /* call 0x0043C550 */

loc_0043C3D4: ;
    ecx = eax;
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 9;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x81;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C403u); RECOMP_ABI_CALL(0x0043C4C0u, sub_0043C4C0); /* call 0x0043C4C0 */

loc_0043C403: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x10) = ecx;

loc_0043C40C: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C420
 * Original: 0x0043C420 - 0x0043C4BB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C420(void)
{
    uint32_t ebp = g_ebp;

loc_0043C420: ;
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
    PUSH32(esp, 0x0043C4B3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043C4B3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C4C0
 * Original: 0x0043C4C0 - 0x0043C54B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C4C0(void)
{
    uint32_t ebp = g_ebp;

loc_0043C4C0: ;
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
    PUSH32(esp, 0x0043C543u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043C543: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C550
 * Original: 0x0043C550 - 0x0043C5C7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C550(void)
{
    uint32_t ebp = g_ebp;

loc_0043C550: ;
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
    PUSH32(esp, 0x0043C5C2u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043C5C2: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C5D0
 * Original: 0x0043C5D0 - 0x0043C624 (84 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C5D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C5D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -16) = 0;
    MEM32(ebp + -12) = 0;
    eax = ebp + -20;
    eax = eax + 0xC;
    MEM32(eax) = 0;
    eax = ebp + -20;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C608u); RECOMP_ABI_CALL(0x00435D60u, sub_00435D60); /* call 0x00435D60 */

loc_0043C608: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043C615; /* je: equal / zero */

loc_0043C60D: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -4) = eax;
    goto loc_0043C61C;

loc_0043C615: ;
    MEM32(ebp + -4) = 0;

loc_0043C61C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C630
 * Original: 0x0043C630 - 0x0043C685 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C630(void)
{
    uint32_t ebp = g_ebp;

loc_0043C630: ;
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
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0xFFFFFFFFu;
    MEM32(eax + 0x10) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C676u); RECOMP_ABI_CALL(0x0043C690u, sub_0043C690); /* call 0x0043C690 */

loc_0043C676: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C67Eu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043C67E: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C690
 * Original: 0x0043C690 - 0x0043C72B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C690(void)
{
    uint32_t ebp = g_ebp;

loc_0043C690: ;
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
    PUSH32(esp, 0x0043C723u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043C723: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C730
 * Original: 0x0043C730 - 0x0043C790 (96 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C730(void)
{
    uint32_t ebp = g_ebp;

loc_0043C730: ;
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
    MEM32(ebp + -16) = eax;
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
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
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C780u); RECOMP_ABI_CALL(0x0043C790u, sub_0043C790); /* call 0x0043C790 */

loc_0043C780: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C788u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043C788: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C790
 * Original: 0x0043C790 - 0x0043C82B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C790(void)
{
    uint32_t ebp = g_ebp;

loc_0043C790: ;
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
    PUSH32(esp, 0x0043C823u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043C823: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C830
 * Original: 0x0043C830 - 0x0043C84F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C830(void)
{
    uint32_t ebp = g_ebp;

loc_0043C830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x51;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C84Au); RECOMP_ABI_CALL(0x0043C850u, sub_0043C850); /* call 0x0043C850 */

loc_0043C84A: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C850
 * Original: 0x0043C850 - 0x0043C8C7 (119 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C850(void)
{
    uint32_t ebp = g_ebp;

loc_0043C850: ;
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
    PUSH32(esp, 0x0043C8C2u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043C8C2: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C8D0
 * Original: 0x0043C8D0 - 0x0043C90F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C8D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043C8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x540F;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C8F3u); RECOMP_ABI_CALL(0x0040E330u, sub_0040E330); /* call 0x0040E330 */

loc_0043C8F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043C901; /* jge: greater or equal (signed >=) */

loc_0043C8F8: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0043C907;

loc_0043C901: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_0043C907: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C910
 * Original: 0x0043C910 - 0x0043C941 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C910(void)
{
    uint32_t ebp = g_ebp;

loc_0043C910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x5410;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C93Cu); RECOMP_ABI_CALL(0x0040E330u, sub_0040E330); /* call 0x0040E330 */

loc_0043C93C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C950
 * Original: 0x0043C950 - 0x0043C9A1 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C950(void)
{
    uint32_t ebp = g_ebp;

loc_0043C950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + -16);
    edi = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x2D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C992u); RECOMP_ABI_CALL(0x0043C9B0u, sub_0043C9B0); /* call 0x0043C9B0 */

loc_0043C992: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043C99Au); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043C99A: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043C9B0
 * Original: 0x0043C9B0 - 0x0043CA3B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043C9B0(void)
{
    uint32_t ebp = g_ebp;

loc_0043C9B0: ;
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
    PUSH32(esp, 0x0043CA33u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043CA33: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CA40
 * Original: 0x0043CA40 - 0x0043CA98 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CA40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043CA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = 0xDFCD68;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CA66u); RECOMP_ABI_CALL(0x0043CAA0u, sub_0043CAA0); /* call 0x0043CAA0 */

loc_0043CA66: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043CA87; /* je: equal / zero */

loc_0043CA6E: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CA79u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043CA79: ;
    ecx = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;
    goto loc_0043CA90;

loc_0043CA87: ;
    eax = 0xDFCD68;
    MEM32(ebp + -4) = eax;

loc_0043CA90: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CAA0
 * Original: 0x0043CAA0 - 0x0043CBE1 (321 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CAA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0043CAA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x154;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CABEu); RECOMP_ABI_CALL(0x0043AAE0u, sub_0043AAE0); /* call 0x0043AAE0 */

loc_0043CABE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043CAD2; /* jne: not equal / not zero */

loc_0043CAC3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CAC8u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043CAC8: ;
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    goto loc_0043CBD5;

loc_0043CAD2: ;
    ecx = ebp + -325;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CAE7u); RECOMP_ABI_CALL(0x003E0BD0u, sub_003E0BD0); /* call 0x003E0BD0 */

loc_0043CAE7: ;
    edx = ebp + -325;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CB03u); RECOMP_ABI_CALL(0x0043B990u, sub_0043B990); /* call 0x0043B990 */

loc_0043CB03: ;
    MEM32(ebp + -332) = eax;
    _fa = (uint32_t)(MEM32(ebp + -332)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -332), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043CB21; /* jge: greater or equal (signed >=) */

loc_0043CB12: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CB17u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043CB17: ;
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    goto loc_0043CBD5;

loc_0043CB21: ;
    eax = MEM32(ebp + -332);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043CB38; /* jne: not equal / not zero */

loc_0043CB2C: ;
    MEM32(ebp + -8) = 0x22;
    goto loc_0043CBD5;

loc_0043CB38: ;
    goto loc_0043CB3A;

loc_0043CB3A: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -332);
    MEM8(eax + ecx) = 0;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -152;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CB5Cu); RECOMP_ABI_CALL(0x00416E90u, sub_00416E90); /* call 0x00416E90 */

loc_0043CB5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043CB7B; /* jne: not equal / not zero */

loc_0043CB61: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -296;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CB76u); RECOMP_ABI_CALL(0x00415EB0u, sub_00415EB0); /* call 0x00415EB0 */

loc_0043CB76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043CB87; /* je: equal / zero */

loc_0043CB7B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CB80u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043CB80: ;
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    goto loc_0043CBD5;

loc_0043CB87: ;
    eax = MEM32(ebp + -152);
    ecx = MEM32(ebp + -148);
    edx = MEM32(ebp + -296);
    esi = MEM32(ebp + -292);
    ecx = ecx ^ esi;
    eax = eax ^ edx;
    eax = eax | ecx;
    if ((eax != 0)) goto loc_0043CBC5; /* jne: not equal / not zero */

loc_0043CBA7: ;
    goto loc_0043CBA9;

loc_0043CBA9: ;
    eax = MEM32(ebp + -64);
    ecx = MEM32(ebp + -60);
    edx = MEM32(ebp + -208);
    esi = MEM32(ebp + -204);
    ecx = ecx ^ esi;
    eax = eax ^ edx;
    eax = eax | ecx;
    if ((eax == 0)) goto loc_0043CBCE; /* je: equal / zero */

loc_0043CBC3: ;
    goto loc_0043CBC5;

loc_0043CBC5: ;
    MEM32(ebp + -8) = 0x13;
    goto loc_0043CBD5;

loc_0043CBCE: ;
    MEM32(ebp + -8) = 0;

loc_0043CBD5: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x154;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CBF0
 * Original: 0x0043CBF0 - 0x0043CC5E (110 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CBF0(void)
{
    uint32_t ebp = g_ebp;

loc_0043CBF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = 0;
    MEM32(ebp + -32) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = 0;
    MEM32(ebp + -12) = 0;
    MEM32(ebp + -16) = 0;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = 0;
    eax = esp;
    ecx = ebp + -64;
    MEM32(eax + 8) = ecx;
    ecx = ebp + -32;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CC4Bu); RECOMP_ABI_CALL(0x004141D0u, sub_004141D0); /* call 0x004141D0 */

loc_0043CC4B: ;
    eax = MEM32(ebp + -48);
    ecx = MEM32(ebp + -40);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF4240);
    eax = eax + ecx;
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CC60
 * Original: 0x0043CC60 - 0x0043CCB1 (81 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CC60(void)
{
    uint32_t ebp = g_ebp;

loc_0043CC60: ;
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
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0xFFFFFF9Cu;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x23;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CCA4u); RECOMP_ABI_CALL(0x0043CCC0u, sub_0043CCC0); /* call 0x0043CCC0 */

loc_0043CCA4: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CCACu); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043CCAC: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CCC0
 * Original: 0x0043CCC0 - 0x0043CD5B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CCC0(void)
{
    uint32_t ebp = g_ebp;

loc_0043CCC0: ;
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
    PUSH32(esp, 0x0043CD53u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043CD53: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CD60
 * Original: 0x0043CD60 - 0x0043CDC1 (97 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CD60(void)
{
    uint32_t ebp = g_ebp;

loc_0043CD60: ;
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
    ecx = ebx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -16);
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x23;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CDB1u); RECOMP_ABI_CALL(0x0043CDD0u, sub_0043CDD0); /* call 0x0043CDD0 */

loc_0043CDB1: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CDB9u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043CDB9: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CDD0
 * Original: 0x0043CDD0 - 0x0043CE6B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CDD0(void)
{
    uint32_t ebp = g_ebp;

loc_0043CDD0: ;
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
    PUSH32(esp, 0x0043CE63u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0043CE63: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CE70
 * Original: 0x0043CE70 - 0x0043CEC5 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CE70(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0043CE70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0x431BDE83;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _shift_result = RECOMP_SHIFT(edx, 0x12, 32, 1, NULL, &_shift_of);
    edx = _shift_result;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -12) = 0;
    eax = MEM32(ebp + 8);
    ecx = 0xF4240;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = (uint32_t)((int32_t)edx * (int32_t)0x3E8);
    MEM32(ebp + -8) = eax;
    eax = ebp + -16;
    eax = eax + 0xC;
    MEM32(eax) = 0;
    eax = ebp + -16;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CEC0u); RECOMP_ABI_CALL(0x00435D60u, sub_00435D60); /* call 0x00435D60 */

loc_0043CEC0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CED0
 * Original: 0x0043CED0 - 0x0043CF58 (136 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CED0(void)
{
    uint32_t ebp = g_ebp;

loc_0043CED0: ;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CF48u); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043CF48: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CF50u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043CF50: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CF60
 * Original: 0x0043CF60 - 0x0043CFEB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CF60(void)
{
    uint32_t ebp = g_ebp;

loc_0043CF60: ;
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
    MEM32(ebp + -16) = edx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    ebx = MEM32(ebp + 0x10);
    ecx = ebx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
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
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x42;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CFDBu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0043CFDB: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043CFE3u); RECOMP_ABI_CALL(0x003E0E90u, sub_003E0E90); /* call 0x003E0E90 */

loc_0043CFE3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043CFF0
 * Original: 0x0043CFF0 - 0x0043D050 (96 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043CFF0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _sbb_result = 0;
    int _sbb_sf = 0, _sbb_of = 0;
    (void)_sbb_result; (void)_sbb_sf; (void)_sbb_of;
    int _cf = 0; /* carry flag */
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043CFF0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x24);
    ebp = eax;
    _shift_result = RECOMP_SHIFT(ebp, 0x1F, 32, 1, &_cf, &_shift_of);
    ebp = _shift_result;
    edi = eax;
    edi = RECOMP_SAR(edi, 0x1F, 32, &_cf);
    ebx = ecx;
    _shift_result = RECOMP_SHIFT(ebx, 0x1F, 32, 1, &_cf, &_shift_of);
    ebx = _shift_result;
    esi = ecx;
    esi = RECOMP_SAR(esi, 0x1F, 32, &_cf);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edi;
    edx = MEM32(esp + 0x20);
    _cf = 0; /* logical op clears CF */
    edx = edx ^ edi;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    ebp = MEM32(esp + 0x28);
    _cf = 0; /* logical op clears CF */
    ebp = ebp ^ esi;
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(ebx)) >> 32) & 1);
    ebp = ebp + ebx;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _cf = 0; /* logical op clears CF */
    esi = esi ^ edi;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043D03Du); RECOMP_ABI_CALL(0x0043D310u, sub_0043D310); /* call 0x0043D310 */

loc_0043D03D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ esi;
    _cf = 0; /* logical op clears CF */
    eax = eax ^ esi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    {
      _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      edx = _sbb_result;
    } /* sbb */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043D050
 * Original: 0x0043D050 - 0x0043D0B7 (103 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D050(void)
{
    uint32_t ebp = g_ebp;
    int _cf = 0; /* carry flag */
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043D050: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x2C);
    esi = ecx;
    _shift_result = RECOMP_SHIFT(esi, 0x1F, 32, 1, &_cf, &_shift_of);
    esi = _shift_result;
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ MEM32(esp + 0x28);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    edi = eax;
    _shift_result = RECOMP_SHIFT(edi, 0x1F, 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    esi = eax;
    esi = RECOMP_SAR(esi, 0x1F, 32, &_cf);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ esi;
    ebx = MEM32(esp + 0x20);
    _cf = 0; /* logical op clears CF */
    ebx = ebx ^ esi;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    ebp = esp + 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043D09Cu); RECOMP_ABI_CALL(0x0043D310u, sub_0043D310); /* call 0x0043D310 */

loc_0043D09C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    edx = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    edx = edx ^ esi;
    _cf = 0; /* logical op clears CF */
    esi = esi ^ MEM32(esp);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    eax = esi;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043D0C0
 * Original: 0x0043D0C0 - 0x0043D1EF (303 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D0C0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043D0C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    esi = MEM32(esp + 0x2C);
    ebp = MEM32(esp + 0x28);
    { uint32_t _bs_v = (uint32_t)(ebp); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        ecx = (uint32_t)_bs_i;;
      } else { (void)(ecx); } }
    eax = 0x3F;
    if ((_fa == 0)) ecx = eax; /* cmove */
    edx = MEM32(esp + 0x24);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0x1F;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    { uint32_t _bs_v = (uint32_t)(esi); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        ebx = (uint32_t)_bs_i;;
      } else { (void)(ebx); } }
    _cf = 0; /* logical op clears CF */
    ebx = ebx ^ 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) ebx = ecx; /* cmove */
    ecx = MEM32(esp + 0x20);
    esi = ecx;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        ecx = (uint32_t)_bs_i;;
      } else { (void)(ecx); } }
    if ((_fa == 0)) ecx = eax; /* cmove */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0x1F;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    { uint32_t _bs_v = (uint32_t)(edx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) eax = ecx; /* cmove */
    ecx = ebx;
    MEM32(esp + 8) = eax;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0043D1E5; /* ja: above (unsigned >) */

loc_0043D124: ;
    if (CMP_NE(_fa, _fb)) goto loc_0043D12D; /* jne: not equal / not zero */

loc_0043D126: ;
    eax = esi;
    goto loc_0043D1E3;

loc_0043D12D: ;
    eax = ecx;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esp + 4) = LO8(eax);
    eax = esi;
    MEM32(esp) = ecx;
    ecx = ZX8(MEM8(esp + 4));
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, edx, LO8(ecx), 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    edi = edx;
    _shift_result = RECOMP_SHIFT(edi, LO8(ecx), 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) eax = edi; /* cmovne */
    ecx = 0;
    if (TEST_NZ(_fa, _fb)) edi = ecx; /* cmovne */
    ecx = MEM32(esp);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ 0x3F);
    MEM32(esp) = ecx;
    ecx = MEM32(esp);
    _shift_result = RECOMP_DOUBLE_SHIFT(edx, esi, LO8(ecx), 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    ecx = MEM32(esp);
    _shift_result = RECOMP_SHIFT(esi, LO8(ecx), 32, 0, &_cf, &_shift_of);
    esi = _shift_result;
    ecx = esi;
    _fa = (uint32_t)(MEM8(esp)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) edx = esi; /* cmovne */
    MEM32(esp + 4) = 0;
    esi = 0;
    if (TEST_NZ(_fa, _fb)) ecx = esi; /* cmovne */
    ebx = ~ebx;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(esp + 8))) >> 32) & 1);
    ebx = ebx + MEM32(esp + 8);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    /* nop */

loc_0043D190: ;
    MEM32(esp) = ebx;
    _shift_result = RECOMP_DOUBLE_SHIFT(edi, eax, 1, 32, 0, &_cf, &_shift_of);
    edi = _shift_result;
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, edx, 1, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_DOUBLE_SHIFT(edx, ecx, 1, 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(esp + 4))) >> 32) & 1);
    edx = edx + MEM32(esp + 4);
    ecx = esi + ecx * 2;
    MEM32(esp + 8) = ecx;
    ecx = edi;
    ecx = ~ecx;
    esi = eax;
    esi = ~esi;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebp)) >> 32) & 1);
    esi = esi + ebp;
    esi = MEM32(esp + 0x2C);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(esi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    esi = ecx;
    _shift_result = RECOMP_SHIFT(esi, 0x1F, 32, 1, &_cf, &_shift_of);
    esi = _shift_result;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    ebx = ebp;
    ebp = ecx;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & MEM32(esp + 0x2C);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    ecx = MEM32(esp + 8);
    {
      _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      edi = _sbb_result;
    } /* sbb */
    ebp = ebx;
    ebx = MEM32(esp);
    ebx++;
    if ((ebx != 0)) goto loc_0043D190; /* jne: not equal / not zero */

loc_0043D1DC: ;
    _shift_result = RECOMP_DOUBLE_SHIFT(edx, ecx, 1, 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    eax = esi + ecx * 2;

loc_0043D1E3: ;
    edi = edx;

loc_0043D1E5: ;
    edx = edi;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043D1F0
 * Original: 0x0043D1F0 - 0x0043D302 (274 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D1F0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0043D1F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    { uint32_t _bs_v = (uint32_t)(MEM32(esp + 0x28)); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        ecx = (uint32_t)_bs_i;;
      } else { (void)(ecx); } }
    eax = 0x3F;
    if ((_fa == 0)) ecx = eax; /* cmove */
    edx = MEM32(esp + 0x2C);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0x1F;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    { uint32_t _bs_v = (uint32_t)(edx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        ebp = (uint32_t)_bs_i;;
      } else { (void)(ebp); } }
    _cf = 0; /* logical op clears CF */
    ebp = ebp ^ 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) ebp = ecx; /* cmove */
    ebx = MEM32(esp + 0x20);
    { uint32_t _bs_v = (uint32_t)(ebx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        ecx = (uint32_t)_bs_i;;
      } else { (void)(ecx); } }
    if ((_fa == 0)) ecx = eax; /* cmove */
    esi = MEM32(esp + 0x24);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0x1F;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    { uint32_t _bs_v = (uint32_t)(esi); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        edi = (uint32_t)_bs_i;;
      } else { (void)(edi); } }
    _cf = 0; /* logical op clears CF */
    edi = edi ^ 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) edi = ecx; /* cmove */
    eax = ebp;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0043D24D; /* jbe: below or equal (unsigned <=) */

loc_0043D244: ;
    eax = ebx;
    edx = esi;
    goto loc_0043D2FA;

loc_0043D24D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edx = 0;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp), 0x3F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043D2FA; /* je: equal / zero */

loc_0043D25E: ;
    eax = MEM32(esp);
    SET_HI8(ecx, LO8(eax));
    SET_HI8(ecx, HI8(ecx) + 1);
    eax = ebx;
    SET_LO8(ecx, HI8(ecx));
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, esi, LO8(ecx), 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    edx = esi;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 1, &_cf, &_shift_of);
    edx = _shift_result;
    MEM32(esp + 4) = edi;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) eax = edx; /* cmovne */
    if (TEST_NZ(_fa, _fb)) edx = edi; /* cmovne */
    ecx = MEM32(esp);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ 0x3F);
    edi = ecx;
    _shift_result = RECOMP_DOUBLE_SHIFT(esi, ebx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    esi = _shift_result;
    ecx = edi;
    _shift_result = RECOMP_SHIFT(ebx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    ebx = _shift_result;
    ecx = edi;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) esi = ebx; /* cmovne */
    MEM32(esp + 8) = 0;
    ecx = 0;
    if (TEST_NZ(_fa, _fb)) ebx = ecx; /* cmovne */
    ebp = ~ebp;
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(MEM32(esp + 4))) >> 32) & 1);
    ebp = ebp + MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    /* nop */

loc_0043D2B0: ;
    _shift_result = RECOMP_DOUBLE_SHIFT(edx, eax, 1, 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    _shift_result = RECOMP_DOUBLE_SHIFT(eax, esi, 1, 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_DOUBLE_SHIFT(esi, ebx, 1, 32, 0, &_cf, &_shift_of);
    esi = _shift_result;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(esp + 8))) >> 32) & 1);
    esi = esi + MEM32(esp + 8);
    ebx = edi + ebx * 2;
    MEM32(esp) = ebx;
    ecx = edx;
    ecx = ~ecx;
    edi = eax;
    edi = ~edi;
    ebx = MEM32(esp + 0x28);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    edi = MEM32(esp + 0x2C);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    edi = ecx;
    _shift_result = RECOMP_SHIFT(edi, 0x1F, 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, &_cf);
    ebx = ebp;
    ebp = ecx;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & MEM32(esp + 0x2C);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & MEM32(esp + 0x28);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    {
      _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      edx = _sbb_result;
    } /* sbb */
    ebp = ebx;
    ebx = MEM32(esp);
    ebp++;
    if ((ebp != 0)) goto loc_0043D2B0; /* jne: not equal / not zero */

loc_0043D2FA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0043D310
 * Original: 0x0043D310 - 0x0043D557 (583 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0043D310(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0043D310: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    ecx = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x20);
    edx = ebp;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D361; /* je: equal / zero */

loc_0043D331: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D37B; /* je: equal / zero */

loc_0043D335: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D3C9; /* je: equal / zero */

loc_0043D33D: ;
    esi = edx;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        edx = (uint32_t)_bs_i;;
      } else { (void)(edx); } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ 0x1F;
    { uint32_t _bs_v = (uint32_t)(ebp); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        ecx = (uint32_t)_bs_i;;
      } else { (void)(ecx); } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0x1F;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0043D430; /* jb: below (unsigned <) */

loc_0043D356: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D372; /* je: equal / zero */

loc_0043D35A: ;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = esi;
    goto loc_0043D372;

loc_0043D361: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D40E; /* je: equal / zero */

loc_0043D369: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D372; /* je: equal / zero */

loc_0043D36D: ;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = edx;

loc_0043D372: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    goto loc_0043D4DF;

loc_0043D37B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D447; /* je: equal / zero */

loc_0043D383: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D4E9; /* je: equal / zero */

loc_0043D38B: ;
    esi = ecx;
    { uint32_t _zr = ((uint32_t)(ecx) - 1u) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D525; /* je: equal / zero */

loc_0043D396: ;
    { uint32_t _bs_v = (uint32_t)(esi); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        ecx = (uint32_t)_bs_i;;
      } else { (void)(ecx); } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0x1F;
    { uint32_t _bs_v = (uint32_t)(ebp); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        esi = (uint32_t)_bs_i;;
      } else { (void)(esi); } }
    _cf = 0; /* logical op clears CF */
    esi = esi ^ 0x1F;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(esi)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0043D369; /* jae: above or equal (unsigned >=) */

loc_0043D3A9: ;
    eax = ecx + 1;
    SET_LO8(ecx, ~LO8(ecx));
    edx = edi;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, &_cf, &_shift_of);
    edx = _shift_result;
    esi = ebp;
    ecx = eax;
    _shift_result = RECOMP_SHIFT(esi, LO8(ecx), 32, 1, &_cf, &_shift_of);
    esi = _shift_result;
    MEM32(esp) = eax;
    _shift_result = RECOMP_DOUBLE_SHIFT(edi, ebp, LO8(ecx), 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ebx = edi;
    edi = edx;
    goto loc_0043D472;

loc_0043D3C9: ;
    ecx = esi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D504; /* je: equal / zero */

loc_0043D3D4: ;
    { uint32_t _bs_v = (uint32_t)(esi); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        edx = (uint32_t)_bs_i;;
      } else { (void)(edx); } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ 0x1F;
    { uint32_t _bs_v = (uint32_t)(ebp); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsr: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 31; _bs_i >= 0; _bs_i--)
          if (_bs_v & (1u << _bs_i)) break;
        ecx = (uint32_t)_bs_i;;
      } else { (void)(ecx); } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0x1F;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x21)) >> 32) & 1);
    edx = edx + 0x21;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043D43A; /* je: equal / zero */

loc_0043D3EC: ;
    MEM32(esp) = edx;
    ecx = edx;
    if (CMP_AE(_fa, _fb)) goto loc_0043D53E; /* jae: above or equal (unsigned >=) */

loc_0043D3F7: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (0u - (uint32_t)(LO8(ecx))));
    ebx = ebp;
    ebp = edi;
    _shift_result = RECOMP_SHIFT(ebp, LO8(ecx), 32, 0, &_cf, &_shift_of);
    ebp = _shift_result;
    esi = ebx;
    ecx = edx;
    _shift_result = RECOMP_SHIFT(esi, LO8(ecx), 32, 1, &_cf, &_shift_of);
    esi = _shift_result;
    _shift_result = RECOMP_DOUBLE_SHIFT(edi, ebx, LO8(ecx), 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    ebx = edi;
    edi = ebp;
    goto loc_0043D472;

loc_0043D40E: ;
    eax = edi;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    ecx = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edi = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D4DF; /* je: equal / zero */

loc_0043D422: ;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = 0;
    goto loc_0043D4DF;

loc_0043D430: ;
    ebx = edx + 1;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043D44C; /* jne: not equal / not zero */

loc_0043D43A: ;
    ebx = ebp;
    MEM32(esp) = 0x20;

loc_0043D443: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    goto loc_0043D472;

loc_0043D447: ;
    goto loc_0043D4DF;

loc_0043D44C: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ 0x1F);
    esi = edi;
    ecx = edx;
    _shift_result = RECOMP_SHIFT(esi, LO8(ecx), 32, 0, &_cf, &_shift_of);
    esi = _shift_result;
    MEM32(esp + 4) = esi;
    esi = ebp;
    ecx = ebx;
    _shift_result = RECOMP_SHIFT(esi, LO8(ecx), 32, 1, &_cf, &_shift_of);
    esi = _shift_result;
    ecx = edx;
    _shift_result = RECOMP_SHIFT(ebp, LO8(ecx), 32, 0, &_cf, &_shift_of);
    ebp = _shift_result;
    MEM32(esp) = ebx;
    ecx = ebx;
    _shift_result = RECOMP_SHIFT(edi, LO8(ecx), 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    _cf = 0; /* logical op clears CF */
    ebp = ebp | edi;
    ebx = ebp;
    edi = MEM32(esp + 4);

loc_0043D472: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    ebp = MEM32(esp);
    /* nop */

loc_0043D480: ;
    _shift_result = RECOMP_DOUBLE_SHIFT(esi, ebx, 1, 32, 0, &_cf, &_shift_of);
    esi = _shift_result;
    _shift_result = RECOMP_DOUBLE_SHIFT(ebx, edi, 1, 32, 0, &_cf, &_shift_of);
    ebx = _shift_result;
    _shift_result = RECOMP_DOUBLE_SHIFT(edi, eax, 1, 32, 0, &_cf, &_shift_of);
    edi = _shift_result;
    MEM32(esp) = edi;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    edx = esi;
    edx = ~edx;
    ecx = ebx;
    ecx = ~ecx;
    edi = MEM32(esp + 0x24);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    ecx = MEM32(esp + 0x28);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    ecx = edx;
    _shift_result = RECOMP_SHIFT(ecx, 0x1F, 32, 1, &_cf, &_shift_of);
    ecx = _shift_result;
    edx = RECOMP_SAR(edx, 0x1F, 32, &_cf);
    edi = edx;
    _cf = 0; /* logical op clears CF */
    edi = edi & MEM32(esp + 0x28);
    _cf = 0; /* logical op clears CF */
    edx = edx & MEM32(esp + 0x24);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    { uint32_t _zr = ((uint32_t)(ebx) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ebx = _zr; }
    {
      _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
      _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb);
      uint32_t _sbb_borrow_in = (uint32_t)!!_cf;
      int64_t _sbb_math = (int64_t)_fas - (int64_t)_fbs - (int64_t)_sbb_borrow_in;
      _sbb_result = (uint32_t)((uint64_t)_sbb_math & 0xFFFFFFFFULL);
      _sbb_sf = !!((uint64_t)_sbb_result & 0x80000000ULL);
      _sbb_of = (_sbb_math < (int64_t)(-2147483648) || _sbb_math > (int64_t)(2147483647));
      _cf = (int)(_fa < _fb || (_sbb_borrow_in && _fa == _fb));
      esi = _sbb_result;
    } /* sbb */
    edi = MEM32(esp);
    { uint32_t _zr = ((uint32_t)(ebp) - 1u) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ebp = _zr; }
    if ((ebp != 0)) goto loc_0043D480; /* jne: not equal / not zero */

loc_0043D4C3: ;
    _shift_result = RECOMP_DOUBLE_SHIFT(edi, eax, 1, 32, 0, &_cf, &_shift_of);
    edi = _shift_result;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    edx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D4D6; /* je: equal / zero */

loc_0043D4D1: ;
    MEM32(edx) = ebx;
    MEM32(edx + 4) = esi;

loc_0043D4D6: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    edx = edi;
    edi = ecx;

loc_0043D4DF: ;
    eax = edi;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_0043D4E9: ;
    eax = ebp;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edi = eax;
    ecx = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D4DF; /* je: equal / zero */

loc_0043D4F9: ;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx) = 0;
    goto loc_0043D4DF;

loc_0043D504: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D513; /* je: equal / zero */

loc_0043D508: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = 0;

loc_0043D513: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0043D4DF; /* je: equal / zero */

loc_0043D518: ;
    { uint32_t _tz_src = (uint32_t)(esi); uint32_t _tz_count = 32u;
      if (_tz_src) for (uint32_t _tz_i = 0; _tz_i < 32u; ++_tz_i)
        if (_tz_src & (1u << _tz_i)) { _tz_count = _tz_i; break; }
      ecx = _tz_count;;
      _fa = _tz_count; _fb = _tz_src; _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      _cf = (_tz_src == 0); } /* tzcnt */
    edx = ebp;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 1, &_cf, &_shift_of);
    edx = _shift_result;
    _shift_result = RECOMP_DOUBLE_SHIFT(edi, ebp, LO8(ecx), 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    goto loc_0043D4DF;

loc_0043D525: ;
    edx = esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0043D532; /* je: equal / zero */

loc_0043D52B: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebp;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = ecx;

loc_0043D532: ;
    { uint32_t _tz_src = (uint32_t)(edx); uint32_t _tz_count = 32u;
      if (_tz_src) for (uint32_t _tz_i = 0; _tz_i < 32u; ++_tz_i)
        if (_tz_src & (1u << _tz_i)) { _tz_count = _tz_i; break; }
      ecx = _tz_count;;
      _fa = _tz_count; _fb = _tz_src; _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      _cf = (_tz_src == 0); } /* tzcnt */
    _shift_result = RECOMP_SHIFT(ebp, LO8(ecx), 32, 1, &_cf, &_shift_of);
    ebp = _shift_result;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edi = ebp;
    goto loc_0043D4DF;

loc_0043D53E: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (0u - (uint32_t)(LO8(ecx))));
    eax = edi;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, &_cf, &_shift_of);
    eax = _shift_result;
    ecx = edx;
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(0xE0)) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + 0xE0);
    _shift_result = RECOMP_DOUBLE_SHIFT(edi, ebp, LO8(ecx), 32, 1, &_cf, &_shift_of);
    edi = _shift_result;
    ecx = edx;
    _shift_result = RECOMP_SHIFT(ebp, LO8(ecx), 32, 1, &_cf, &_shift_of);
    ebp = _shift_result;
    ebx = ebp;
    goto loc_0043D443;

}

