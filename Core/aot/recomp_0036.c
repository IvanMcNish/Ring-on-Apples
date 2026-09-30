/* Generated ELF translation shard 36: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_0039D0B0
 * Original: 0x0039D0B0 - 0x0039D0E5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D0B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039D0B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(0xC68820);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D0E0; /* je: equal / zero */

loc_0039D0C3: ;
    eax = MEM32(ebp + 8);
    MEM32(0xC68820) = eax;
    eax = MEM32(0x969C90);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = 0x8892;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039D0E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039D0E0: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039D0F0
 * Original: 0x0039D0F0 - 0x0039D562 (1138 bytes, 268 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D0F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039D0F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x144;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = 0;
    eax = MEM32(ebp + 0xC);
    eax = eax - MEM32(ebp + 8);
    MEM32(ebp + -280) = eax;
    _fa = (uint32_t)(MEM32(ebp + -280)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -280), 0x100 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039D1A4; /* jbe: below or equal (unsigned <=) */

loc_0039D123: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;

loc_0039D129: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039D198; /* jae: above or equal (unsigned >=) */

loc_0039D131: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -304) = eax;
    eax = MEM32(ebp + -12);
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039D157; /* jae: above or equal (unsigned >=) */

loc_0039D147: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0x100;
    MEM32(ebp + -308) = eax;
    goto loc_0039D160;

loc_0039D157: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -308) = eax;

loc_0039D160: ;
    ecx = MEM32(ebp + -304);
    eax = MEM32(ebp + -308);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D178u); RECOMP_ABI_CALL(0x0039D0F0u, sub_0039D0F0); /* call 0x0039D0F0 */

loc_0039D178: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039D189; /* jne: not equal / not zero */

loc_0039D17D: ;
    MEM32(ebp + -8) = 0;
    goto loc_0039D556;

loc_0039D189: ;
    goto loc_0039D18B;

loc_0039D18B: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0x100;
    MEM32(ebp + -12) = eax;
    goto loc_0039D129;

loc_0039D198: ;
    MEM32(ebp + -8) = 1;
    goto loc_0039D556;

loc_0039D1A4: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;

loc_0039D1AA: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039D2D1; /* jae: above or equal (unsigned >=) */

loc_0039D1B6: ;
    eax = MEM32(ebp + -12);
    ecx = ZX8(MEM8(eax + 0xC7CE90));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM8(ebp + -309) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0039D1FC; /* jne: not equal / not zero */

loc_0039D1CE: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 0x80000000u;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x1000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D1E9u); RECOMP_ABI_CALL(0x003A3C50u, sub_003A3C50); /* call 0x003A3C50 */

loc_0039D1E9: ;
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0xC8CE90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0xC8CE90) (32-bit) */
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    MEM8(ebp + -309) = LO8(eax);

loc_0039D1FC: ;
    SET_LO8(eax, MEM8(ebp + -309));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -284) = eax;
    eax = MEM32(ebp + -12);
    ecx = ZX8(MEM8(eax + 0xC7CE90));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM8(ebp + -310) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0039D235; /* jne: not equal / not zero */

loc_0039D225: ;
    _fa = (uint32_t)(MEM32(ebp + -284)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -284), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -310) = LO8(eax);

loc_0039D235: ;
    SET_LO8(eax, MEM8(ebp + -310));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -12);
    eax = eax - MEM32(ebp + 8);
    MEM8(ebp + eax + -276) = LO8(ecx);
    _fa = (uint32_t)(MEM32(ebp + -284)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -284), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D2C1; /* je: equal / zero */

loc_0039D258: ;
    eax = MEM32(0xC79E78);
    ecx = MEM32(ebp + -12);
    eax = eax - MEM32(ecx * 4 + 0xCACE90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0039D282; /* ja: above (unsigned >) */

loc_0039D26C: ;
    eax = MEM32(ebp + -12);
    SET_LO8(ecx, MEM8(eax + 0xC84E90));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0xC84E90) = LO8(ecx);
    goto loc_0039D28D;

loc_0039D282: ;
    eax = MEM32(ebp + -12);
    MEM8(eax + 0xC84E90) = 1;

loc_0039D28D: ;
    ecx = MEM32(0xC79E78);
    eax = MEM32(ebp + -12);
    MEM32(eax * 4 + 0xCACE90) = ecx;
    eax = MEM32(ebp + -12);
    eax = ZX8(MEM8(eax + 0xC84E90));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0039D2BF; /* jl: less (signed <) */

loc_0039D2AD: ;
    eax = MEM32(ebp + -12);
    MEM8(eax + 0xC7CE90) = 2;
    MEM32(ebp + -20) = 1;

loc_0039D2BF: ;
    goto loc_0039D2C1;

loc_0039D2C1: ;
    goto loc_0039D2C3;

loc_0039D2C3: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0039D1AA;

loc_0039D2D1: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D2E3; /* je: equal / zero */

loc_0039D2D7: ;
    MEM32(ebp + -8) = 0;
    goto loc_0039D556;

loc_0039D2E3: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;

loc_0039D2E9: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039D54F; /* jae: above or equal (unsigned >=) */

loc_0039D2F5: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 0x16, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -288) = eax;
    MEM32(ebp + -300) = 1;
    eax = MEM32(ebp + -12);
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(ebp + eax + -276)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + -276), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039D32C; /* jne: not equal / not zero */

loc_0039D31E: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_0039D544;

loc_0039D32C: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -16) = eax;

loc_0039D332: ;
    ecx = MEM32(ebp + -16);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    MEM8(ebp + -311) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_0039D35C; /* jae: above or equal (unsigned >=) */

loc_0039D342: ;
    eax = MEM32(ebp + -16);
    eax = eax - MEM32(ebp + 8);
    eax = ZX8(MEM8(ebp + eax + -276));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -311) = LO8(eax);

loc_0039D35C: ;
    SET_LO8(eax, MEM8(ebp + -311));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0039D368; /* jne: not equal / not zero */

loc_0039D366: ;
    goto loc_0039D3AC;

loc_0039D368: ;
    eax = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + 0xC7CE90));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D395; /* je: equal / zero */

loc_0039D378: ;
    eax = MEM32(ebp + -16);
    MEM8(eax + 0xC84E90) = 0;
    ecx = MEM32(0xC79E78);
    eax = MEM32(ebp + -16);
    MEM32(eax * 4 + 0xCACE90) = ecx;
    goto loc_0039D39F;

loc_0039D395: ;
    MEM32(ebp + -300) = 0;

loc_0039D39F: ;
    goto loc_0039D3A1;

loc_0039D3A1: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_0039D332;

loc_0039D3AC: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 0x80000000u;
    MEM32(ebp + -292) = eax;
    eax = MEM32(ebp + -16);
    eax = eax - MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -296) = eax;
    ecx = MEM32(ebp + -292);
    eax = MEM32(ebp + -296);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D3E4u); RECOMP_ABI_CALL(0x003A3C40u, sub_003A3C40); /* call 0x003A3C40 */

loc_0039D3E4: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039D429; /* jae: above or equal (unsigned >=) */

loc_0039D3EC: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 0x80000000u;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x1000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D407u); RECOMP_ABI_CALL(0x003A3C50u, sub_003A3C50); /* call 0x003A3C50 */

loc_0039D407: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    MEM32(eax * 4 + 0xC8CE90) = ecx;
    eax = MEM32(ebp + -12);
    MEM8(eax + 0xC7CE90) = 1;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0039D3E4;

loc_0039D429: ;
    eax = MEM32(ebp + -288);
    _fa = (uint32_t)(MEM32(eax * 4 + 0xC7CE10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0xC7CE10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039D4A2; /* jne: not equal / not zero */

loc_0039D439: ;
    eax = MEM32(0x969C8C);
    edx = MEM32(ebp + -288);
    ecx = 0xC7CE10;
    _shift_result = RECOMP_SHIFT(edx, 2, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = ecx + edx;
    MEM32(esp) = 1;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039D45Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039D45C: ;
    eax = MEM32(0x969C90);
    ecx = MEM32(ebp + -288);
    ecx = MEM32(ecx * 4 + 0xC7CE10);
    MEM32(esp) = 0x8F37;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039D47Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039D47B: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x8F37;
    MEM32(esp + 4) = 0x400000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x88E8;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x969C94); PUSH32(esp, 0x0039D4A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039D4A2: ;
    eax = MEM32(0x969C90);
    ecx = MEM32(ebp + -288);
    ecx = MEM32(ecx * 4 + 0xC7CE10);
    MEM32(esp) = 0x8F37;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039D4C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039D4C1: ;
    _fa = (uint32_t)(MEM32(ebp + -300)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -300), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D507; /* je: equal / zero */

loc_0039D4CA: ;
    edx = MEM32(ebp + -292);
    edx = edx - 0x80000000u;
    eax = MEM32(ebp + -288);
    _shift_result = RECOMP_SHIFT(eax, 0x16, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx - eax;
    ecx = MEM32(ebp + -296);
    eax = MEM32(ebp + -292);
    MEM32(esp) = 0x8F37;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D505u); RECOMP_ABI_CALL(0x700000A0u, host_gl_buffer_write); /* call 0x700000A0 */

loc_0039D505: ;
    goto loc_0039D544;

loc_0039D507: ;
    eax = MEM32(0x969DB8);
    esi = MEM32(ebp + -292);
    esi = esi - 0x80000000u;
    ecx = MEM32(ebp + -288);
    _shift_result = RECOMP_SHIFT(ecx, 0x16, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    esi = esi - ecx;
    edx = MEM32(ebp + -296);
    ecx = MEM32(ebp + -292);
    MEM32(esp) = 0x8F37;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039D544u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039D544: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_0039D2E9;

loc_0039D54F: ;
    MEM32(ebp + -8) = 1;

loc_0039D556: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x144;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039D570
 * Original: 0x0039D570 - 0x0039D61C (172 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D570(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039D570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = 0x40;
    eax = MEM32(0xC69E1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xC69E20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xC69E20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039D5D4; /* jne: not equal / not zero */

loc_0039D58A: ;
    _fa = (uint32_t)(MEM32(0xC69E20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xC69E20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D59F; /* je: equal / zero */

loc_0039D593: ;
    eax = MEM32(0xC69E20);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -8) = eax;
    goto loc_0039D5A9;

loc_0039D59F: ;
    eax = 0x100;
    MEM32(ebp + -8) = eax;
    goto loc_0039D5A9;

loc_0039D5A9: ;
    eax = MEM32(ebp + -8);
    MEM32(0xC69E20) = eax;
    ecx = MEM32(0xC69E18);
    eax = MEM32(0xC69E20);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -4));
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D5CFu); RECOMP_ABI_CALL(0x003E9E40u, sub_003E9E40); /* call 0x003E9E40 */

loc_0039D5CF: ;
    MEM32(0xC69E18) = eax;

loc_0039D5D4: ;
    edx = MEM32(0xC69E18);
    eax = MEM32(0xC69E1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -4));
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx + eax;
    eax = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = 0xC68B1C;
    ecx = ecx + 0x11F4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D60Au); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0039D60A: ;
    eax = MEM32(0xC69E1C);
    eax = eax + 1;
    MEM32(0xC69E1C) = eax;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039D620
 * Original: 0x0039D620 - 0x0039D655 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D620(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039D620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(0xC68750);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D650; /* je: equal / zero */

loc_0039D633: ;
    eax = MEM32(ebp + 8);
    MEM32(0xC68750) = eax;
    eax = MEM32(0x969CFC);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = 0x8D40;
    MEM32(esp + 4) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039D650u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0039D650: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039D970
 * Original: 0x0039D970 - 0x0039DA3E (206 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D970(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039D970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D993u); RECOMP_ABI_CALL(0x0039DA40u, sub_0039DA40); /* call 0x0039DA40 */

loc_0039D993: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + 0x40;
    eax = eax - 1;
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x14));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D9B6u); RECOMP_ABI_CALL(0x0039DA80u, sub_0039DA80); /* call 0x0039DA80 */

loc_0039D9B6: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D9D6u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039D9D6: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0x50001;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039D9F2; /* je: equal / zero */

loc_0039D9E5: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -16) = eax;
    goto loc_0039D9F9;

loc_0039D9F2: ;
    eax = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    goto loc_0039D9F9;

loc_0039D9F9: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx | 0x20;
    ecx = ecx | 1;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx - 1;
    _shift_result = RECOMP_SHIFT(ecx, 0x18, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 0x14);
    eax = eax - 1;
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    eax = MEM32(ebp + 0x10);
    eax = eax - 1;
    ecx = ecx | eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039DA40
 * Original: 0x0039DA40 - 0x0039DA76 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DA40(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039DA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx | 0x10000;
    eax = 0; /* xor self */
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DA6Eu); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_0039DA6E: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039DA80
 * Original: 0x0039DA80 - 0x0039DAD2 (82 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DA80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039DA80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x80;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DAACu); RECOMP_ABI_CALL(0x003BF460u, sub_003BF460); /* call 0x003BF460 */

loc_0039DAAC: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039DACA; /* jne: not equal / not zero */

loc_0039DAB5: ;
    eax = MEM32(ebp + 8);
    ecx = 0x44A176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DACAu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039DACA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039DAE0
 * Original: 0x0039DAE0 - 0x0039DB41 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DAE0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039DAE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DB03u); RECOMP_ABI_CALL(0x0039DA40u, sub_0039DA40); /* call 0x0039DA40 */

loc_0039DB03: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + 0x40;
    eax = eax - 1;
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx - 1;
    _shift_result = RECOMP_SHIFT(ecx, 0x18, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 0x14);
    eax = eax - 1;
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    eax = MEM32(ebp + 0x10);
    eax = eax - 1;
    ecx = ecx | eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039DB50
 * Original: 0x0039DB50 - 0x0039DB7C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DB50(void)
{
    uint32_t ebp = g_ebp;

loc_0039DB50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    ecx = ecx + MEM32(eax + 4);
    ecx = ecx & 0x7FFFFFFF;
    eax = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_0039DB80
 * Original: 0x0039DB80 - 0x0039DC27 (167 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DB80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039DB80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    eax = eax & 0xFFFF;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039DBBE; /* je: equal / zero */

loc_0039DBA2: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFF0000u;
    ecx = ecx | MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_0039DBBE: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039DC1D; /* jne: not equal / not zero */

loc_0039DBC4: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    eax = eax & 0x1000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039DC1D; /* je: equal / zero */

loc_0039DBD3: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039DBF4; /* jne: not equal / not zero */

loc_0039DBE4: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DBF2u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039DBF2: ;
    goto loc_0039DC12;

loc_0039DBF4: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039DC10; /* je: equal / zero */

loc_0039DBFD: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    eax = eax | 0x80000000u;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DC10u); RECOMP_ABI_CALL(0x003BF790u, sub_003BF790); /* call 0x003BF790 */

loc_0039DC10: ;
    goto loc_0039DC12;

loc_0039DC12: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DC1Du); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039DC1D: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0039DC30
 * Original: 0x0039DC30 - 0x0039DC3C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DC30(void)
{
    uint32_t ebp = g_ebp;

loc_0039DC30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0039DC40
 * Original: 0x0039DC40 - 0x0039DC4A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DC40(void)
{
    uint32_t ebp = g_ebp;

loc_0039DC40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0039DC50
 * Original: 0x0039DC50 - 0x0039DCB1 (97 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DC50(void)
{
    uint32_t ebp = g_ebp;

loc_0039DC50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x20);
    ebx = 0; /* xor self */
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = 1;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DCA7u); RECOMP_ABI_CALL(0x0039DCC0u, sub_0039DCC0); /* call 0x0039DCC0 */

loc_0039DCA7: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 32; return; /* ret 28 */

}


/**
 * sub_0039DCC0
 * Original: 0x0039DCC0 - 0x0039DED5 (533 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DCC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039DCC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x54;
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DCF0u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039DCF0: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039DD03; /* jbe: below or equal (unsigned <=) */

loc_0039DCFB: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -64) = eax;
    goto loc_0039DD09;

loc_0039DD03: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -64) = eax;

loc_0039DD09: ;
    eax = MEM32(ebp + -64);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DD14u); RECOMP_ABI_CALL(0x0039E5B0u, sub_0039E5B0); /* call 0x0039E5B0 */

loc_0039DD14: ;
    eax = eax + 1;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039DD2C; /* jne: not equal / not zero */

loc_0039DD20: ;
    MEM32(ebp + -8) = 0x8007000Eu;
    goto loc_0039DECC;

loc_0039DD2C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039DD3A; /* je: equal / zero */

loc_0039DD32: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -52) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039DD40; /* jbe: below or equal (unsigned <=) */

loc_0039DD3A: ;
    eax = MEM32(ebp + -52);
    MEM32(ebp + 0x14) = eax;

loc_0039DD40: ;
    eax = MEM32(ebp + -12);
    MEM32(eax) = 0x1040001;
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DD54u); RECOMP_ABI_CALL(0x0039ECF0u, sub_0039ECF0); /* call 0x0039ECF0 */

loc_0039DD54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039DDC0; /* je: equal / zero */

loc_0039DD59: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DD6Au); RECOMP_ABI_CALL(0x0039DA40u, sub_0039DA40); /* call 0x0039DA40 */

loc_0039DD6A: ;
    ecx = eax;
    eax = MEM32(ebp + -68);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax + 0x40;
    eax = eax - 1;
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -60) = eax;
    ecx = MEM32(ebp + 0x18);
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx | 0x10000;
    ecx = ecx | 0x20;
    ecx = ecx | 1;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ebp + -60);
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx - 1;
    _shift_result = RECOMP_SHIFT(ecx, 0x18, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 0xC);
    eax = eax - 1;
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    eax = MEM32(ebp + 8);
    eax = eax - 1;
    ecx = ecx | eax;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x10) = ecx;
    goto loc_0039DE49;

loc_0039DDC0: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DDCBu); RECOMP_ABI_CALL(0x0039E5B0u, sub_0039E5B0); /* call 0x0039E5B0 */

loc_0039DDCB: ;
    _shift_result = RECOMP_SHIFT(eax, 0x1C, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DDDCu); RECOMP_ABI_CALL(0x0039E5B0u, sub_0039E5B0); /* call 0x0039E5B0 */

loc_0039DDDC: ;
    ecx = eax;
    eax = MEM32(ebp + -76);
    _shift_result = RECOMP_SHIFT(ecx, 0x18, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DDF4u); RECOMP_ABI_CALL(0x0039E5B0u, sub_0039E5B0); /* call 0x0039E5B0 */

loc_0039DDF4: ;
    ecx = MEM32(ebp + -72);
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    eax = MEM32(ebp + 0x18);
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    eax = MEM32(ebp + 0x14);
    _shift_result = RECOMP_SHIFT(eax, 0x10, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    esi = MEM32(ebp + 0x10);
    eax = 2;
    edx = 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) eax = edx; /* cmova */
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    esi = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    edx = 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = edx; /* cmovne */
    ecx = ecx | eax;
    ecx = ecx | 1;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x10) = 0;

loc_0039DE49: ;
    eax = MEM32(ebp + -12);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x10);
    eax = ebp + -48;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DE68u); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_0039DE68: ;
    eax = ebp + -48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DE73u); RECOMP_ABI_CALL(0x003C0240u, sub_003C0240); /* call 0x003C0240 */

loc_0039DE73: ;
    esi = MEM32(ebp + 0x1C);
    ecx = 1;
    edx = 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = edx; /* cmovne */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DE91u); RECOMP_ABI_CALL(0x0039DA80u, sub_0039DA80); /* call 0x0039DA80 */

loc_0039DE91: ;
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039DEAE; /* jne: not equal / not zero */

loc_0039DE9A: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DEA5u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039DEA5: ;
    MEM32(ebp + -8) = 0x8007000Eu;
    goto loc_0039DECC;

loc_0039DEAE: ;
    ecx = MEM32(ebp + -56);
    ecx = ecx & 0x7FFFFFFF;
    eax = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = ecx;
    MEM32(ebp + -8) = 0;

loc_0039DECC: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x54;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039DEE0
 * Original: 0x0039DEE0 - 0x0039DF49 (105 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DEE0(void)
{
    uint32_t ebp = g_ebp;

loc_0039DEE0: ;
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
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + -16) = eax;
    eax = 0; /* xor self */
    eax = MEM32(ebp + -16);
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DF3Fu); RECOMP_ABI_CALL(0x0039DCC0u, sub_0039DCC0); /* call 0x0039DCC0 */

loc_0039DF3F: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 36; return; /* ret 32 */

}


/**
 * sub_0039DF50
 * Original: 0x0039DF50 - 0x0039DFAA (90 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DF50(void)
{
    uint32_t ebp = g_ebp;

loc_0039DF50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x1C);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = 1;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 1;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DFA1u); RECOMP_ABI_CALL(0x0039DCC0u, sub_0039DCC0); /* call 0x0039DCC0 */

loc_0039DFA1: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 28; return; /* ret 24 */

}


/**
 * sub_0039DFB0
 * Original: 0x0039DFB0 - 0x0039DFFA (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DFB0(void)
{
    uint32_t ebp = g_ebp;

loc_0039DFB0: ;
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
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DFF1u); RECOMP_ABI_CALL(0x0039E000u, sub_0039E000); /* call 0x0039E000 */

loc_0039DFF1: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039E000
 * Original: 0x0039E000 - 0x0039E16F (367 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E000(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039E000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x54;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    eax = ebp + -40;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E035u); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_0039E035: ;
    eax = MEM32(ebp + 0x10);
    ecx = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E047u); RECOMP_ABI_CALL(0x003C0290u, sub_003C0290); /* call 0x003C0290 */

loc_0039E047: ;
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E058u); RECOMP_ABI_CALL(0x0039E330u, sub_0039E330); /* call 0x0039E330 */

loc_0039E058: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E09C; /* je: equal / zero */

loc_0039E061: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -60) = eax;
    eax = ebp + -40;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E072u); RECOMP_ABI_CALL(0x003C0240u, sub_003C0240); /* call 0x003C0240 */

loc_0039E072: ;
    ecx = eax;
    eax = MEM32(ebp + -60);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E08Fu); RECOMP_ABI_CALL(0x003C0100u, sub_003C0100); /* call 0x003C0100 */

loc_0039E08F: ;
    ecx = eax;
    eax = MEM32(ebp + -56);
    eax = eax + ecx;
    eax = eax + MEM32(ebp + -48);
    MEM32(ebp + -48) = eax;

loc_0039E09C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E158; /* je: equal / zero */

loc_0039E0A6: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E158; /* je: equal / zero */

loc_0039E0B0: ;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -64) = eax;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E0C8u); RECOMP_ABI_CALL(0x0039E2F0u, sub_0039E2F0); /* call 0x0039E2F0 */

loc_0039E0C8: ;
    ecx = eax;
    eax = MEM32(ebp + -64);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E13B; /* je: equal / zero */

loc_0039E0DA: ;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(eax + 4);
    ecx = 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -44));
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(eax);
    ecx = 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -72) = eax;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E117u); RECOMP_ABI_CALL(0x0039E2F0u, sub_0039E2F0); /* call 0x0039E2F0 */

loc_0039E117: ;
    ecx = MEM32(ebp + -76);
    esi = eax;
    eax = MEM32(ebp + -72);
    esi = esi + 3;
    _shift_result = RECOMP_SHIFT(esi, 2, 32, 1, NULL, &_shift_of);
    esi = _shift_result;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edx = eax;
    eax = MEM32(ebp + -68);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = eax + ecx;
    eax = eax + MEM32(ebp + -48);
    MEM32(ebp + -48) = eax;
    goto loc_0039E156;

loc_0039E13B: ;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(eax + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -44));
    ecx = MEM32(ebp + 0x18);
    ecx = MEM32(ecx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -52));
    eax = eax + ecx;
    eax = eax + MEM32(ebp + -48);
    MEM32(ebp + -48) = eax;

loc_0039E156: ;
    goto loc_0039E158;

loc_0039E158: ;
    ecx = MEM32(ebp + -44);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + 0x14);
    MEM32(eax + 4) = ecx;
    esp = esp + 0x54;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039E170
 * Original: 0x0039E170 - 0x0039E1BA (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E170(void)
{
    uint32_t ebp = g_ebp;

loc_0039E170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x1C);
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
    PUSH32(esp, 0x0039E1B1u); RECOMP_ABI_CALL(0x0039E000u, sub_0039E000); /* call 0x0039E000 */

loc_0039E1B1: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 28; return; /* ret 24 */

}


/**
 * sub_0039E1C0
 * Original: 0x0039E1C0 - 0x0039E2E5 (293 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E1C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039E1C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x54;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x10);
    eax = ebp + -44;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E1FBu); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_0039E1FB: ;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -44;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E20Du); RECOMP_ABI_CALL(0x003C0290u, sub_003C0290); /* call 0x003C0290 */

loc_0039E20D: ;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -60) = eax;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E228u); RECOMP_ABI_CALL(0x0039E2F0u, sub_0039E2F0); /* call 0x0039E2F0 */

loc_0039E228: ;
    ecx = eax;
    eax = MEM32(ebp + -60);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E241u); RECOMP_ABI_CALL(0x0039E330u, sub_0039E330); /* call 0x0039E330 */

loc_0039E241: ;
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E262; /* je: equal / zero */

loc_0039E24A: ;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -44;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E25Cu); RECOMP_ABI_CALL(0x003C0100u, sub_003C0100); /* call 0x003C0100 */

loc_0039E25C: ;
    eax = eax + MEM32(ebp + -56);
    MEM32(ebp + -56) = eax;

loc_0039E262: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E2C3; /* je: equal / zero */

loc_0039E268: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E2C3; /* je: equal / zero */

loc_0039E26E: ;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -52));
    ecx = MEM32(ebp + 0x14);
    ecx = MEM32(ecx + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -48));
    eax = eax + ecx;
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -68) = eax;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E2A7u); RECOMP_ABI_CALL(0x0039E2F0u, sub_0039E2F0); /* call 0x0039E2F0 */

loc_0039E2A7: ;
    ecx = MEM32(ebp + -72);
    esi = eax;
    eax = MEM32(ebp + -68);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edx = eax;
    eax = MEM32(ebp + -64);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = eax + ecx;
    eax = eax + MEM32(ebp + -56);
    MEM32(ebp + -56) = eax;

loc_0039E2C3: ;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -52);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -56);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 8) = ecx;
    esp = esp + 0x54;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039E2F0
 * Original: 0x0039E2F0 - 0x0039E327 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E2F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039E2F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E315; /* je: equal / zero */

loc_0039E30D: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    goto loc_0039E31F;

loc_0039E315: ;
    eax = 1;
    MEM32(ebp + -8) = eax;
    goto loc_0039E31F;

loc_0039E31F: ;
    eax = MEM32(ebp + -8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039E330
 * Original: 0x0039E330 - 0x0039E359 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E330(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039E330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E34A; /* je: equal / zero */

loc_0039E33D: ;
    eax = MEM32(ebp + 8);
    eax = eax | 0x80000000u;
    MEM32(ebp + -4) = eax;
    goto loc_0039E351;

loc_0039E34A: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_0039E351;

loc_0039E351: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039E360
 * Original: 0x0039E360 - 0x0039E38F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E360(void)
{
    uint32_t ebp = g_ebp;

loc_0039E360: ;
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
    PUSH32(esp, 0x0039E388u); RECOMP_ABI_CALL(0x0039E390u, sub_0039E390); /* call 0x0039E390 */

loc_0039E388: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039E390
 * Original: 0x0039E390 - 0x0039E476 (230 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E390(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039E390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
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
    PUSH32(esp, 0x0039E3BEu); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_0039E3BE: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E3D0u); RECOMP_ABI_CALL(0x0039E2F0u, sub_0039E2F0); /* call 0x0039E2F0 */

loc_0039E3D0: ;
    MEM32(ebp + -40) = eax;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E3E5u); RECOMP_ABI_CALL(0x0039E2F0u, sub_0039E2F0); /* call 0x0039E2F0 */

loc_0039E3E5: ;
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E405u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039E405: ;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 4) = 1;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -44);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E43Bu); RECOMP_ABI_CALL(0x003C0290u, sub_003C0290); /* call 0x003C0290 */

loc_0039E43B: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E452; /* je: equal / zero */

loc_0039E444: ;
    eax = MEM32(ebp + -44);
    eax = eax + 3;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -52) = eax;
    goto loc_0039E458;

loc_0039E452: ;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -52) = eax;

loc_0039E458: ;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + -52);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x10) = 0x11;
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039E480
 * Original: 0x0039E480 - 0x0039E5A9 (297 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E480(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039E480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E4A9u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039E4A9: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039E4BE; /* jne: not equal / not zero */

loc_0039E4B2: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0039E59F;

loc_0039E4BE: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x10);
    eax = ebp + -44;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E4DDu); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_0039E4DD: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E4EFu); RECOMP_ABI_CALL(0x0039E2F0u, sub_0039E2F0); /* call 0x0039E2F0 */

loc_0039E4EF: ;
    MEM32(ebp + -52) = eax;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E504u); RECOMP_ABI_CALL(0x0039E2F0u, sub_0039E2F0); /* call 0x0039E2F0 */

loc_0039E504: ;
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + -48);
    MEM32(eax) = 0x50001;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -44;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E52Bu); RECOMP_ABI_CALL(0x003C0100u, sub_003C0100); /* call 0x003C0100 */

loc_0039E52B: ;
    ecx = MEM32(ebp + -68);
    ecx = ecx + eax;
    eax = MEM32(ebp + -48);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xC);
    eax = eax & 0xFFFF;
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + -52);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E54Fu); RECOMP_ABI_CALL(0x0039E5B0u, sub_0039E5B0); /* call 0x0039E5B0 */

loc_0039E54F: ;
    ecx = eax;
    eax = MEM32(ebp + -64);
    _shift_result = RECOMP_SHIFT(ecx, 0x14, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -56);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E567u); RECOMP_ABI_CALL(0x0039E5B0u, sub_0039E5B0); /* call 0x0039E5B0 */

loc_0039E567: ;
    ecx = MEM32(ebp + -60);
    _shift_result = RECOMP_SHIFT(eax, 0x18, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    ecx = ecx | 0x10000;
    eax = MEM32(ebp + -48);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ebp + -48);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -48);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0039E59F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039E5B0
 * Original: 0x0039E5B0 - 0x0039E5DF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E5B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039E5B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_0039E5BE: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039E5D7; /* jbe: below or equal (unsigned <=) */

loc_0039E5C4: ;
    eax = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_0039E5BE;

loc_0039E5D7: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039E5E0
 * Original: 0x0039E5E0 - 0x0039E60F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E5E0(void)
{
    uint32_t ebp = g_ebp;

loc_0039E5E0: ;
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
    PUSH32(esp, 0x0039E608u); RECOMP_ABI_CALL(0x0039E390u, sub_0039E390); /* call 0x0039E390 */

loc_0039E608: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_0039E610
 * Original: 0x0039E610 - 0x0039E656 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E610(void)
{
    uint32_t ebp = g_ebp;

loc_0039E610: ;
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
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E64Eu); RECOMP_ABI_CALL(0x0039E000u, sub_0039E000); /* call 0x0039E000 */

loc_0039E64E: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}


/**
 * sub_0039E660
 * Original: 0x0039E660 - 0x0039E70C (172 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039E660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E689u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039E689: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039E69B; /* jne: not equal / not zero */

loc_0039E692: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0039E702;

loc_0039E69B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E6A9; /* je: equal / zero */

loc_0039E6A1: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    goto loc_0039E6B3;

loc_0039E6A9: ;
    eax = 1;
    MEM32(ebp + -16) = eax;
    goto loc_0039E6B3;

loc_0039E6B3: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E6BEu); RECOMP_ABI_CALL(0x0039DA80u, sub_0039DA80); /* call 0x0039DA80 */

loc_0039E6BE: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039E6DB; /* jne: not equal / not zero */

loc_0039E6C7: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E6D2u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039E6D2: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0039E702;

loc_0039E6DB: ;
    eax = MEM32(ebp + -8);
    MEM32(eax) = 0x1000001;
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0x7FFFFFFF;
    eax = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0039E702: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039E710
 * Original: 0x0039E710 - 0x0039E75A (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E710(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039E710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E744; /* je: equal / zero */

loc_0039E72E: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E73Cu); RECOMP_ABI_CALL(0x0039E330u, sub_0039E330); /* call 0x0039E330 */

loc_0039E73C: ;
    eax = eax + MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    goto loc_0039E74B;

loc_0039E744: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_0039E74B;

loc_0039E74B: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039E760
 * Original: 0x0039E760 - 0x0039E80E (174 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E760(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039E760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E789u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039E789: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039E79B; /* jne: not equal / not zero */

loc_0039E792: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0039E804;

loc_0039E79B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039E7A9; /* je: equal / zero */

loc_0039E7A1: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    goto loc_0039E7B3;

loc_0039E7A9: ;
    eax = 1;
    MEM32(ebp + -16) = eax;
    goto loc_0039E7B3;

loc_0039E7B3: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E7C6u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039E7C6: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039E7E3; /* jne: not equal / not zero */

loc_0039E7CF: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E7DAu); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039E7DA: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0039E804;

loc_0039E7E3: ;
    eax = MEM32(ebp + -8);
    MEM32(eax) = 0x1010001;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0039E804: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039E810
 * Original: 0x0039E810 - 0x0039E8AF (159 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E810(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039E810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E830u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039E830: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039E842; /* jne: not equal / not zero */

loc_0039E839: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0039E8A5;

loc_0039E842: ;
    MEM32(esp) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E84Eu); RECOMP_ABI_CALL(0x0039DA80u, sub_0039DA80); /* call 0x0039DA80 */

loc_0039E84E: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E85Cu); RECOMP_ABI_CALL(0x0039E8B0u, sub_0039E8B0); /* call 0x0039E8B0 */

loc_0039E85C: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039E876; /* jne: not equal / not zero */

loc_0039E862: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E86Du); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_0039E86D: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0039E8A5;

loc_0039E876: ;
    ecx = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 0x1E, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx | 0x1030001;
    eax = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0x7FFFFFFF;
    eax = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0039E8A5: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_0039E8B0
 * Original: 0x0039E8B0 - 0x0039E904 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E8B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0039E8B0: ;
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
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0039E8DA; /* je: equal / zero */

loc_0039E8C4: ;
    goto loc_0039E8C6;

loc_0039E8C6: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0039E8E3; /* je: equal / zero */

loc_0039E8CE: ;
    goto loc_0039E8D0;

loc_0039E8D0: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0039E8EC; /* je: equal / zero */

loc_0039E8D8: ;
    goto loc_0039E8F5;

loc_0039E8DA: ;
    MEM32(ebp + -4) = 0x80;
    goto loc_0039E8FC;

loc_0039E8E3: ;
    MEM32(ebp + -4) = 0x40;
    goto loc_0039E8FC;

loc_0039E8EC: ;
    MEM32(ebp + -4) = 0x20;
    goto loc_0039E8FC;

loc_0039E8F5: ;
    MEM32(ebp + -4) = 0x100;

loc_0039E8FC: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039E910
 * Original: 0x0039E910 - 0x0039E93B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E910(void)
{
    uint32_t ebp = g_ebp;

loc_0039E910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E92Du); RECOMP_ABI_CALL(0x0039E330u, sub_0039E330); /* call 0x0039E330 */

loc_0039E92D: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039E940
 * Original: 0x0039E940 - 0x0039EA02 (194 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E940(void)
{
    uint32_t ebp = g_ebp;

loc_0039E940: ;
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
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E97Au); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039E97A: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xC); /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0x10); /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x14); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x18); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039EA10
 * Original: 0x0039EA10 - 0x0039EAC6 (182 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EA10(void)
{
    uint32_t ebp = g_ebp;

loc_0039EA10: ;
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
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EA4Au); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039EA4A: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xC); /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0x10); /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x14); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x18); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039EAD0
 * Original: 0x0039EAD0 - 0x0039EC42 (370 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EAD0(void)
{
    uint32_t ebp = g_ebp;

loc_0039EAD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x1C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 8);
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039EC50
 * Original: 0x0039EC50 - 0x0039ECE9 (153 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EC50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0039EC50: ;
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
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039ECE0; /* je: equal / zero */

loc_0039EC65: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0039ECE0; /* je: equal / zero */

loc_0039EC6B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039EC7C; /* jne: not equal / not zero */

loc_0039EC71: ;
    eax = 0x49712C;
    MEM32(ebp + -8) = eax;
    goto loc_0039ECB1;

loc_0039EC7C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x8007000Eu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0039EC90; /* jne: not equal / not zero */

loc_0039EC85: ;
    eax = 0x4998DD;
    MEM32(ebp + -12) = eax;
    goto loc_0039ECAB;

loc_0039EC90: ;
    edx = MEM32(ebp + 8);
    eax = 0x45DF2F;
    ecx = 0x457CB2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80004005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80004005u (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) eax = ecx; /* cmove */
    MEM32(ebp + -12) = eax;

loc_0039ECAB: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -8) = eax;

loc_0039ECB1: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0x10);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039ECD3u); RECOMP_ABI_CALL(0x0042A340u, sub_0042A340); /* call 0x0042A340 */

loc_0039ECD3: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM8(eax + ecx) = 0;

loc_0039ECE0: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039ECF0
 * Original: 0x0039ECF0 - 0x0039ED26 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039ECF0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0039ECF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx | 0x10000;
    eax = 0; /* xor self */
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039ED1Eu); RECOMP_ABI_CALL(0x003BFE90u, sub_003BFE90); /* call 0x003BFE90 */

loc_0039ED1E: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039F040
 * Original: 0x0039F040 - 0x0039F075 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F040(void)
{
    uint32_t ebp = g_ebp;

loc_0039F040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F054u); RECOMP_ABI_CALL(0x0039F080u, sub_0039F080); /* call 0x0039F080 */

loc_0039F054: ;
    eax = MEM32(0xCDCE9C);
    eax = eax + 1;
    MEM32(0xCDCE9C) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = 0xCDCE9C;
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039F080
 * Original: 0x0039F080 - 0x0039F1A4 (292 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F080(void)
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

loc_0039F080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    _fa = (uint32_t)(MEM32(0xCDCEBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xCDCEBC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F094; /* je: equal / zero */

loc_0039F08F: ;
    goto loc_0039F19F;

loc_0039F094: ;
    MEM32(0xCDCEBC) = 1;
    eax = 0x493F3B;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F0ACu); RECOMP_ABI_CALL(0x003B6670u, sub_003B6670); /* call 0x003B6670 */

loc_0039F0AC: ;
    MEMD(ebp + -24) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -24)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(0x5ACBC8) = xmm0.f[0]; /* movss */
    eax = 0x44D0E3;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F0CEu); RECOMP_ABI_CALL(0x003B6550u, sub_003B6550); /* call 0x003B6550 */

loc_0039F0CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F16D; /* je: equal / zero */

loc_0039F0D7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F0DCu); RECOMP_ABI_CALL(0x003B8160u, sub_003B8160); /* call 0x003B8160 */

loc_0039F0DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F16D; /* je: equal / zero */

loc_0039F0E5: ;
    MEM32(ebp + -12) = 0x8120;
    MEM32(ebp + -8) = 2;
    MEM32(ebp + -4) = 0xBB80;
    ecx = 0x47FEDB;
    eax = 0x488DA8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F112u); RECOMP_ABI_CALL(0x00391850u, sub_00391850); /* call 0x00391850 */

loc_0039F112: ;
    ecx = ebp + -12;
    eax = 0x3A0110;
    edx = 0; /* xor self */
    MEM32(esp) = 0xFFFFFFFFu;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F139u); RECOMP_ABI_CALL(0x00391F90u, sub_00391F90); /* call 0x00391F90 */

loc_0039F139: ;
    MEM32(0xCDCEC0) = eax;
    _fa = (uint32_t)(MEM32(0xCDCEC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xCDCEC0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F156; /* je: equal / zero */

loc_0039F147: ;
    eax = MEM32(0xCDCEC0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F154u); RECOMP_ABI_CALL(0x00392010u, sub_00392010); /* call 0x00392010 */

loc_0039F154: ;
    goto loc_0039F19F;

loc_0039F156: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F15Bu); RECOMP_ABI_CALL(0x00391880u, sub_00391880); /* call 0x00391880 */

loc_0039F15B: ;
    ecx = 0x45DF3E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F16Du); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_0039F16D: ;
    ecx = ebp + -16;
    eax = 0; /* xor self */
    eax = 0x3A01C0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F194u); RECOMP_ABI_CALL(0x003925A0u, sub_003925A0); /* call 0x003925A0 */

loc_0039F194: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F19Fu); RECOMP_ABI_CALL(0x00392790u, sub_00392790); /* call 0x00392790 */

loc_0039F19F: ;
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
 * sub_0039F1B0
 * Original: 0x0039F1B0 - 0x0039F1E3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F1B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039F1B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(0xCDCE9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xCDCE9C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F1D2; /* je: equal / zero */

loc_0039F1C0: ;
    eax = MEM32(0xCDCE9C);
    eax = eax + 0xFFFFFFFFu;
    MEM32(0xCDCE9C) = eax;
    MEM32(ebp + -4) = eax;
    goto loc_0039F1D9;

loc_0039F1D2: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_0039F1D9;

loc_0039F1D9: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0039F1F0
 * Original: 0x0039F1F0 - 0x0039F200 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F1F0(void)
{
    uint32_t ebp = g_ebp;

loc_0039F1F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F1FBu); RECOMP_ABI_CALL(0x0039F200u, sub_0039F200); /* call 0x0039F200 */

loc_0039F1FB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039F200
 * Original: 0x0039F200 - 0x0039F2AA (170 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F200(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039F200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F214u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039F214: ;
    eax = MEM32(0xCDCEB8);
    MEM32(ebp + -4) = eax;

loc_0039F21C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F297; /* je: equal / zero */

loc_0039F222: ;
    goto loc_0039F224;

loc_0039F224: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x95C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x95C), 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0039F251; /* je: equal / zero */

loc_0039F235: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x58;
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)((int32_t)MEM32(ecx + 0x958) * (int32_t)0x24);
    eax = eax + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_0039F251: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0039F25A; /* jne: not equal / not zero */

loc_0039F258: ;
    goto loc_0039F28A;

loc_0039F25A: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -4);
    eax = eax + 0x58;
    edx = MEM32(ebp + -4);
    edx = (uint32_t)((int32_t)MEM32(edx + 0x958) * (int32_t)0x24);
    eax = eax + edx;
    eax = MEM32(eax + 4);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F288u); RECOMP_ABI_CALL(0x003A0E30u, sub_003A0E30); /* call 0x003A0E30 */

loc_0039F288: ;
    goto loc_0039F224;

loc_0039F28A: ;
    goto loc_0039F28C;

loc_0039F28C: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    goto loc_0039F21C;

loc_0039F297: ;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F2A5u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039F2A5: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039F2B0
 * Original: 0x0039F2B0 - 0x0039F2B5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F2B0(void)
{
    uint32_t ebp = g_ebp;

loc_0039F2B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0039F2C0
 * Original: 0x0039F2C0 - 0x0039F319 (89 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F2C0(void)
{
    uint32_t ebp = g_ebp;

loc_0039F2C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F2E9u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0039F2E9: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x40;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 4) = 0x40;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 8) = 0x7FF;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0xC) = 0;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_0039F320
 * Original: 0x0039F320 - 0x0039F338 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F320(void)
{
    uint32_t ebp = g_ebp;

loc_0039F320: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_0039F340
 * Original: 0x0039F340 - 0x0039F367 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039F340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F361; /* je: equal / zero */

loc_0039F358: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax) = 0;

loc_0039F361: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039F370
 * Original: 0x0039F370 - 0x0039F37C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F370(void)
{
    uint32_t ebp = g_ebp;

loc_0039F370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0039F380
 * Original: 0x0039F380 - 0x0039F392 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F380(void)
{
    uint32_t ebp = g_ebp;

loc_0039F380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039F3A0
 * Original: 0x0039F3A0 - 0x0039F3B2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F3A0(void)
{
    uint32_t ebp = g_ebp;

loc_0039F3A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039F3C0
 * Original: 0x0039F3C0 - 0x0039F42B (107 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F3C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0039F3C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F3DFu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039F3DF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0039F3F8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0039F3EC: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0039F407;

loc_0039F3F8: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0039F407;

loc_0039F407: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(0x5ACBA8) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F422u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039F422: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039F430
 * Original: 0x0039F430 - 0x0039F49B (107 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F430(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0039F430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F44Fu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039F44F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_0039F468; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0039F45C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0039F477;

loc_0039F468: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0039F477;

loc_0039F477: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(0x5ACBA4) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F492u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039F492: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039F4A0
 * Original: 0x0039F4A0 - 0x0039F507 (103 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F4A0(void)
{
    uint32_t ebp = g_ebp;

loc_0039F4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F4C9u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039F4C9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(0x5ACB80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(0x5ACB84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(0x5ACB88) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F4FEu); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039F4FE: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039F510
 * Original: 0x0039F510 - 0x0039F52E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F510(void)
{
    uint32_t ebp = g_ebp;

loc_0039F510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039F530
 * Original: 0x0039F530 - 0x0039F5EF (191 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F530(void)
{
    uint32_t ebp = g_ebp;

loc_0039F530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F568u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039F568: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(0x5ACB8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(0x5ACB90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(0x5ACB94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEMF(0x5ACB98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    MEMF(0x5ACB9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    MEMF(0x5ACBA0) = xmm0.f[0]; /* movss */
    eax = 0x5ACB80;
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F5C7u); RECOMP_ABI_CALL(0x0039F5F0u, sub_0039F5F0); /* call 0x0039F5F0 */

loc_0039F5C7: ;
    eax = 0x5ACB80;
    eax = eax + 0x18;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F5D8u); RECOMP_ABI_CALL(0x0039F5F0u, sub_0039F5F0); /* call 0x0039F5F0 */

loc_0039F5D8: ;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F5E6u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039F5E6: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 36; return; /* ret 32 */

}


/**
 * sub_0039F5F0
 * Original: 0x0039F5F0 - 0x0039F673 (131 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F5F0(void)
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

loc_0039F5F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F60Bu); RECOMP_ABI_CALL(0x003A0DE0u, sub_003A0DE0); /* call 0x003A0DE0 */

loc_0039F60B: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD84)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_0039F66E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0039F62E: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_0039F66E: ;
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
 * sub_0039F680
 * Original: 0x0039F680 - 0x0039F846 (454 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F680(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039F680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x980;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F6A6u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039F6A6: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039F6C4; /* jne: not equal / not zero */

loc_0039F6B8: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0039F83C;

loc_0039F6C4: ;
    eax = MEM32(ebp + -8);
    ecx = 0x5ACBAC;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(eax + 8) = 1;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x10) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0039F70B; /* je: equal / zero */

loc_0039F6FC: ;
    eax = MEM32(ebp + -12);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x69 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -13) = LO8(eax);

loc_0039F70B: ;
    SET_LO8(eax, MEM8(ebp + -13));
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x14) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    MEM8(ebp + -14) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0039F734; /* je: equal / zero */

loc_0039F724: ;
    eax = MEM32(ebp + -12);
    eax = ZX16(MEM16(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -14) = LO8(eax);

loc_0039F734: ;
    SET_LO8(edx, MEM8(ebp + -14));
    ecx = 1;
    eax = 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) ecx = eax; /* cmovne */
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x18) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F75E; /* je: equal / zero */

loc_0039F753: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    goto loc_0039F765;

loc_0039F75E: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;
    goto loc_0039F765;

loc_0039F765: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x38) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x3C) = 0;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43DDB8)); /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F80Bu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039F80B: ;
    ecx = MEM32(0xCDCEB8);
    eax = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(0xCDCEB8) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F82Du); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039F82D: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0039F83C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}


/**
 * sub_0039F850
 * Original: 0x0039F850 - 0x0039F86B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F850(void)
{
    uint32_t ebp = g_ebp;

loc_0039F850: ;
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
    PUSH32(esp, 0x0039F864u); RECOMP_ABI_CALL(0x0039F870u, sub_0039F870); /* call 0x0039F870 */

loc_0039F864: ;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0039F870
 * Original: 0x0039F870 - 0x0039F92D (189 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F870(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039F870: ;
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
    PUSH32(esp, 0x0039F884u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039F884: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F895u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039F895: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x95C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x95C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F908; /* je: equal / zero */

loc_0039F8A1: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x58;
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)((int32_t)MEM32(ecx + 0x958) * (int32_t)0x24);
    eax = eax + ecx;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 0x20);
    eax = 0x80004004u;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F8E6; /* je: equal / zero */

loc_0039F8DB: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    goto loc_0039F8ED;

loc_0039F8E6: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;
    goto loc_0039F8ED;

loc_0039F8ED: ;
    ecx = MEM32(ebp + -12);
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + -20);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F906u); RECOMP_ABI_CALL(0x003A0E30u, sub_003A0E30); /* call 0x003A0E30 */

loc_0039F906: ;
    goto loc_0039F895;

loc_0039F908: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(eax + 0x960) = xmm0.d[0]; /* movsd */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F924u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039F924: ;
    eax = 0; /* xor self */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0039F930
 * Original: 0x0039F930 - 0x0039F982 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F930(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039F930: ;
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
    PUSH32(esp, 0x0039F944u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039F944: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F955u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039F955: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x95C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x95C), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F978u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039F978: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_0039F990
 * Original: 0x0039F990 - 0x0039F99B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F990(void)
{
    uint32_t ebp = g_ebp;

loc_0039F990: ;
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
 * sub_0039F9A0
 * Original: 0x0039F9A0 - 0x0039F9FF (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F9A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039F9A0: ;
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
    PUSH32(esp, 0x0039F9B7u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039F9B7: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F9C8u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039F9C8: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039F9D6; /* je: equal / zero */

loc_0039F9CE: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    goto loc_0039F9DF;

loc_0039F9D6: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x1C);
    MEM32(ebp + -8) = eax;

loc_0039F9DF: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x20) = ecx;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F9F6u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039F9F6: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_0039FA00
 * Original: 0x0039FA00 - 0x0039FA5A (90 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FA00(void)
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

loc_0039FA00: ;
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
    PUSH32(esp, 0x0039FA17u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039FA17: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FA28u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039FA28: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FA33u); RECOMP_ABI_CALL(0x0039FA60u, sub_0039FA60); /* call 0x0039FA60 */

loc_0039FA33: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FA51u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039FA51: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0039FA60
 * Original: 0x0039FA60 - 0x0039FAC4 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FA60(void)
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

loc_0039FA60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFD8F0u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0039FA7C; /* jg: greater (signed >) */

loc_0039FA72: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_0039FAB2;

loc_0039FA7C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 8); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D790)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = esp;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D628)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FAA5u); RECOMP_ABI_CALL(0x00405CA0u, sub_00405CA0); /* call 0x00405CA0 */

loc_0039FAA5: ;
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_0039FAB2: ;
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
 * sub_0039FAD0
 * Original: 0x0039FAD0 - 0x0039FB7D (173 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FAD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039FAD0: ;
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
    PUSH32(esp, 0x0039FAE7u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039FAE7: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FAF8u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039FAF8: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 1;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -12) = xmm1.f[0]; /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0039FB22; /* jne: not equal / not zero */

loc_0039FB18: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */

loc_0039FB22: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    eax = eax & 2;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -20) = xmm1.f[0]; /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0039FB59; /* jne: not equal / not zero */

loc_0039FB4F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */

loc_0039FB59: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FB74u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039FB74: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_0039FB80
 * Original: 0x0039FB80 - 0x0039FC6D (237 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FB80(void)
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

loc_0039FB80: ;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FB9Au); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039FB9A: ;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = 0;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FBB2u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039FBB2: ;
    MEM32(ebp + -8) = 0;

loc_0039FBB9: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039FC56; /* jae: above or equal (unsigned >=) */

loc_0039FBC3: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039FBDB; /* jne: not equal / not zero */

loc_0039FBD9: ;
    goto loc_0039FC48;

loc_0039FBDB: ;
    ecx = MEM32(ebp + -8);
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039FC0D; /* jne: not equal / not zero */

loc_0039FBEA: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -12);
    eax = MEM32(eax + ecx * 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FBFBu); RECOMP_ABI_CALL(0x0039FA60u, sub_0039FA60); /* call 0x0039FA60 */

loc_0039FBFB: ;
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    goto loc_0039FC3F;

loc_0039FC0D: ;
    ecx = MEM32(ebp + -8);
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039FC3D; /* jne: not equal / not zero */

loc_0039FC1C: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -12);
    eax = MEM32(eax + ecx * 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FC2Du); RECOMP_ABI_CALL(0x0039FA60u, sub_0039FA60); /* call 0x0039FA60 */

loc_0039FC2D: ;
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */

loc_0039FC3D: ;
    goto loc_0039FC3F;

loc_0039FC3F: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;

loc_0039FC48: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_0039FBB9;

loc_0039FC56: ;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FC64u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039FC64: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0039FC70
 * Original: 0x0039FC70 - 0x0039FCBB (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FC70(void)
{
    uint32_t ebp = g_ebp;

loc_0039FC70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FC8Au); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039FC8A: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FC9Bu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039FC9B: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x3C) = ecx;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FCB2u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039FCB2: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039FCC0
 * Original: 0x0039FCC0 - 0x0039FD35 (117 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FCC0(void)
{
    uint32_t ebp = g_ebp;

loc_0039FCC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FCE6u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039FCE6: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FCF7u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039FCF7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FD2Cu); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039FD2C: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039FD40
 * Original: 0x0039FD40 - 0x0039FD91 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FD40(void)
{
    uint32_t ebp = g_ebp;

loc_0039FD40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FD5Cu); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039FD5C: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FD6Du); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039FD6D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FD88u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039FD88: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039FDA0
 * Original: 0x0039FDA0 - 0x0039FDF1 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FDA0(void)
{
    uint32_t ebp = g_ebp;

loc_0039FDA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FDBCu); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039FDBC: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FDCDu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039FDCD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FDE8u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039FDE8: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039FE00
 * Original: 0x0039FE00 - 0x0039FE9E (158 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FE00(void)
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

loc_0039FE00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x14); /* cvtsi2ss */
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x18); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = eax + ecx;
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x1C); /* cvtsi2ss */
    ecx = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0039FE50; /* jle: less or equal (signed <=) */

loc_0039FE49: ;
    MEM32(ebp + -4) = 0;

loc_0039FE50: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FE5Bu); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039FE5B: ;
    MEM32(ebp + -8) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FE6Cu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039FE6C: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FE77u); RECOMP_ABI_CALL(0x0039FA60u, sub_0039FA60); /* call 0x0039FA60 */

loc_0039FE77: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FE95u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039FE95: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_0039FEA0
 * Original: 0x0039FEA0 - 0x0039FEF1 (81 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FEA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039FEA0: ;
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
    PUSH32(esp, 0x0039FEB7u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_0039FEB7: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FEC8u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0039FEC8: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x24) = ecx;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FEE8u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0039FEE8: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_0039FF00
 * Original: 0x0039FF00 - 0x0039FF1E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FF00(void)
{
    uint32_t ebp = g_ebp;

loc_0039FF00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039FF20
 * Original: 0x0039FF20 - 0x0039FF35 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FF20(void)
{
    uint32_t ebp = g_ebp;

loc_0039FF20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}


/**
 * sub_0039FF40
 * Original: 0x0039FF40 - 0x0039FF5E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FF40(void)
{
    uint32_t ebp = g_ebp;

loc_0039FF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}


/**
 * sub_0039FF60
 * Original: 0x0039FF60 - 0x0039FF72 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FF60(void)
{
    uint32_t ebp = g_ebp;

loc_0039FF60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_0039FF80
 * Original: 0x0039FF80 - 0x0039FFD4 (84 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FF80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039FF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FFA0u); RECOMP_ABI_CALL(0x003E5E50u, sub_003E5E50); /* call 0x003E5E50 */

loc_0039FFA0: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039FFB2; /* jne: not equal / not zero */

loc_0039FFA9: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0039FFCA;

loc_0039FFB2: ;
    eax = MEM32(ebp + -8);
    MEM32(eax) = 1;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0039FFCA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_0039FFE0
 * Original: 0x0039FFE0 - 0x003A0008 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FFE0(void)
{
    uint32_t ebp = g_ebp;

loc_0039FFE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0004u); RECOMP_ABI_CALL(0x0039FF80u, sub_0039FF80); /* call 0x0039FF80 */

loc_003A0004: ;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}


/**
 * sub_003A0010
 * Original: 0x003A0010 - 0x003A0047 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0010(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A0010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ecx) = eax;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A003D; /* jne: not equal / not zero */

loc_003A0032: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A003Du); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003A003D: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003A0050
 * Original: 0x003A0050 - 0x003A007E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0050(void)
{
    uint32_t ebp = g_ebp;

loc_003A0050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    eax = 0; /* xor self */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_003A0080
 * Original: 0x003A0080 - 0x003A009F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0080(void)
{
    uint32_t ebp = g_ebp;

loc_003A0080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = 1;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}


/**
 * sub_003A00A0
 * Original: 0x003A00A0 - 0x003A00B6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A00A0(void)
{
    uint32_t ebp = g_ebp;

loc_003A00A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003A00C0
 * Original: 0x003A00C0 - 0x003A00CF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A00C0(void)
{
    uint32_t ebp = g_ebp;

loc_003A00C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_003A00D0
 * Original: 0x003A00D0 - 0x003A00E2 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A00D0(void)
{
    uint32_t ebp = g_ebp;

loc_003A00D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_003A00F0
 * Original: 0x003A00F0 - 0x003A00FF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A00F0(void)
{
    uint32_t ebp = g_ebp;

loc_003A00F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_003A0100
 * Original: 0x003A0100 - 0x003A010F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0100(void)
{
    uint32_t ebp = g_ebp;

loc_003A0100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_003A0110
 * Original: 0x003A0110 - 0x003A01C0 (176 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0110(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003A0110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x2018)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003A0125: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003A01B8; /* jle: less or equal (signed <=) */

loc_003A012F: ;
    eax = MEM32(ebp + 0x10);
    _shift_result = RECOMP_SHIFT(eax, 3, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -8196) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8196)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8196), 0x400 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003A0151; /* jbe: below or equal (unsigned <=) */

loc_003A0147: ;
    MEM32(ebp + -8196) = 0x400;

loc_003A0151: ;
    _fa = (uint32_t)(MEM32(ebp + -8196)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8196), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A0164; /* jne: not equal / not zero */

loc_003A015A: ;
    MEM32(ebp + -8196) = 1;

loc_003A0164: ;
    ecx = ebp + -8192;
    eax = MEM32(ebp + -8196);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A017Cu); RECOMP_ABI_CALL(0x003A0270u, sub_003A0270); /* call 0x003A0270 */

loc_003A017C: ;
    edx = MEM32(ebp + 0xC);
    ecx = ebp + -8192;
    eax = MEM32(ebp + -8196);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A01A0u); RECOMP_ABI_CALL(0x00391FD0u, sub_00391FD0); /* call 0x00391FD0 */

loc_003A01A0: ;
    ecx = MEM32(ebp + -8196);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 0x10);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + 0x10) = eax;
    goto loc_003A0125;

loc_003A01B8: ;
    esp = esp + 0x2018;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A01C0
 * Original: 0x003A01C0 - 0x003A0269 (169 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A01C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A01C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xF28));
    esp = esp - 0xF28;
    eax = MEM32(ebp + 8);
    eax = ebp + -3856;
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A01E2u); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_003A01E2: ;
    eax = ebp + -3840;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x1E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A01F8u); RECOMP_ABI_CALL(0x003A0270u, sub_003A0270); /* call 0x003A0270 */

loc_003A01F8: ;
    eax = MEM32(ebp + -3848);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x989680)) >> 32) & 1);
    eax = eax + 0x989680;
    MEM32(ebp + -3848) = eax;
    _fa = (uint32_t)(MEM32(ebp + -3848)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B9ACA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -3848), 0x3B9ACA00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003A023C; /* jl: less (signed <) */

loc_003A0215: ;
    eax = MEM32(ebp + -3848);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC4653600u)) >> 32) & 1);
    eax = eax + 0xC4653600u;
    MEM32(ebp + -3848) = eax;
    eax = MEM32(ebp + -3856);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -3852)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -3852) = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -3856) = eax;

loc_003A023C: ;
    eax = ebp + -3856;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = 1;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0264u); RECOMP_ABI_CALL(0x00435390u, sub_00435390); /* call 0x00435390 */

loc_003A0264: ;
    goto loc_003A01E2;

}


/**
 * sub_003A0270
 * Original: 0x003A0270 - 0x003A03F4 (388 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0270(void)
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

loc_003A0270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A029Du); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003A029D: ;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A02ABu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_003A02AB: ;
    eax = MEM32(0xCDCEB8);
    MEM32(ebp + -4) = eax;

loc_003A02B3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A02DD; /* je: equal / zero */

loc_003A02B9: ;
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A02D2u); RECOMP_ABI_CALL(0x003A0400u, sub_003A0400); /* call 0x003A0400 */

loc_003A02D2: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    goto loc_003A02B3;

loc_003A02DD: ;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A02EBu); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A02EB: ;
    MEM32(ebp + -8) = 0;

loc_003A02F2: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A03EF; /* jae: above or equal (unsigned >=) */

loc_003A0302: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D80C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_003A0336; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_003A0324: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D7D0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + -12); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003A03DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + -12)) */

loc_003A0336: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x43D808)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.u[0] = (!isnan(xmm0.f[0]) && !isnan(xmm1.f[0]) && (xmm0.f[0] < xmm1.f[0])) ? 0xFFFFFFFFu : 0u; /* cmpltss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_AND(xmm1, xmm3); /* andps */
    xmm0 = XMM_ANDN(xmm0, xmm2); /* andnps */
    xmm0 = XMM_OR(xmm0, xmm1); /* orps */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm1 = XMM_MEM(0x43EC90); /* movaps */
    xmm0 = XMM_AND(xmm0, xmm1); /* pand */
    xmm1 = XMM_SCALAR(MEMF(0x43D80C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D9DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A03ABu); RECOMP_ABI_CALL(0x0040C9D0u, sub_0040C9D0); /* call 0x0040C9D0 */

loc_003A03AB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x43D9DC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D80C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    MEMF(eax + ecx * 4) = xmm0.f[0]; /* movss */

loc_003A03DF: ;
    goto loc_003A03E1;

loc_003A03E1: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003A02F2;

loc_003A03EF: ;
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
 * sub_003A0400
 * Original: 0x003A0400 - 0x003A095D (1373 bytes, 336 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0400(void)
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

loc_003A0400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x84;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A0431; /* jne: not equal / not zero */

loc_003A041C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x95C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x95C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A0431; /* je: equal / zero */

loc_003A0428: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A0436; /* jne: not equal / not zero */

loc_003A0431: ;
    goto loc_003A0954;

loc_003A0436: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A044A; /* je: equal / zero */

loc_003A043F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    MEM32(ebp + -120) = eax;
    goto loc_003A0453;

loc_003A044A: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    MEM32(ebp + -120) = eax;

loc_003A0453: ;
    eax = MEM32(ebp + -120);
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    xmm1 = XMM_MEM(0x43ECA0); /* movaps */
    xmm0 = XMM_OR(xmm0, xmm1); /* por */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E238)); /* movsd */
    xmm0.d[0] = xmm0.d[0] / xmm1.d[0]; /* divsd */
    MEMD(ebp + -16) = xmm0.d[0]; /* movsd */
    edx = MEM32(ebp + 8);
    ecx = ebp + -20;
    eax = ebp + -24;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A049Bu); RECOMP_ABI_CALL(0x003A0960u, sub_003A0960); /* call 0x003A0960 */

loc_003A049B: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x978)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x978), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A04D4; /* jne: not equal / not zero */

loc_003A04A7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x970) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x974) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x978) = 1;

loc_003A04D4: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x970)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x974)); /* movss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR_BITS(MEM32(ebp + 0x10)); /* movd to xmm */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm3 = xmm2; /* movaps */
    xmm1 = XMM_OR(xmm1, xmm3); /* por */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm1.d[0]; /* cvtsd2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR_BITS(MEM32(ebp + 0x10)); /* movd to xmm */
    xmm1 = XMM_OR(xmm1, xmm3); /* por */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm1.f[0] = (float)xmm1.d[0]; /* cvtsd2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    MEM32(ebp + -44) = 0;

loc_003A0556: ;
    eax = MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A0934; /* jae: above or equal (unsigned >=) */

loc_003A0562: ;
    goto loc_003A0564;

loc_003A0564: ;
    MEM32(ebp + -48) = 0;
    MEM32(ebp + -68) = 0;

loc_003A0572: ;
    eax = MEM32(ebp + -68);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x95C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x95C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A05BB; /* jae: above or equal (unsigned >=) */

loc_003A0580: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x58;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x958);
    ecx = ecx + MEM32(ebp + -68);
    ecx = ecx & 0x3F;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24);
    eax = eax + ecx;
    MEM32(ebp + -72) = eax;
    eax = MEM32(ebp + -72);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A05AE; /* jne: not equal / not zero */

loc_003A05A6: ;
    eax = MEM32(ebp + -72);
    MEM32(ebp + -48) = eax;
    goto loc_003A05BB;

loc_003A05AE: ;
    goto loc_003A05B0;

loc_003A05B0: ;
    eax = MEM32(ebp + -68);
    eax = eax + 1;
    MEM32(ebp + -68) = eax;
    goto loc_003A0572;

loc_003A05BB: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A05C6; /* jne: not equal / not zero */

loc_003A05C1: ;
    goto loc_003A06CE;

loc_003A05C6: ;
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x960)); /* movsd */
    eax = MEM32(ebp + -48);
    xmm0 = XMM_SCALAR_BITS(MEM32(eax + 0x1C)); /* movd to xmm */
    xmm2 = XMM_MEM(0x43ECA0); /* movaps */
    xmm0 = XMM_OR(xmm0, xmm2); /* por */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm2.d[0]; /* subsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003A05FB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003A05F6: ;
    goto loc_003A06CE;

loc_003A05FB: ;
    eax = MEM32(ebp + -48);
    xmm1 = XMM_SCALAR_BITS(MEM32(eax + 0x1C)); /* movd to xmm */
    xmm0 = XMM_MEM(0x43ECA0); /* movaps */
    xmm1 = XMM_OR(xmm1, xmm0); /* por */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm0.d[0]; /* subsd */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x960)); /* movsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    MEMD(eax + 0x960) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -48);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A06BF; /* je: equal / zero */

loc_003A063E: ;
    eax = MEM32(ebp + -48);
    eax = MEM32(eax + 0x1C);
    eax = eax - 1;
    MEM32(ebp + -76) = eax;
    edx = MEM32(ebp + -48);
    ecx = MEM32(ebp + -76);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0670u); RECOMP_ABI_CALL(0x003A0A00u, sub_003A0A00); /* call 0x003A0A00 */

loc_003A0670: ;
    MEMF(ebp + -100) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x968) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + -48);
    edx = MEM32(ebp + -76);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    ecx = ecx - 1;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A06ACu); RECOMP_ABI_CALL(0x003A0A00u, sub_003A0A00); /* call 0x003A0A00 */

loc_003A06AC: ;
    MEMF(ebp + -96) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -96)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x96C) = xmm0.f[0]; /* movss */

loc_003A06BF: ;
    eax = MEM32(ebp + -48);
    MEM32(eax + 0x20) = 1;
    goto loc_003A0564;

loc_003A06CE: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A06D9; /* jne: not equal / not zero */

loc_003A06D4: ;
    goto loc_003A0934;

loc_003A06D9: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x960)); /* movsd */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E2D8)); /* movsd */
    xmm1 = xmm0; /* movaps */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    ecx = (int32_t)xmm1.d[0]; /* cvttsd2si */
    eax = (int32_t)xmm0.d[0]; /* cvttsd2si */
    edx = eax;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    ecx = ecx & edx;
    eax = eax | ecx;
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(eax + 0x960)); /* movsd */
    xmm2 = XMM_MEM(0x43ECA0); /* movaps */
    xmm1 = XMM_SCALAR_BITS(MEM32(ebp + -52)); /* movd to xmm */
    xmm1 = XMM_OR(xmm1, xmm2); /* por */
    xmm2 = XMM_SCALAR_DOUBLE(MEMD(0x43E1D0)); /* movsd */
    xmm1.d[0] = xmm1.d[0] - xmm2.d[0]; /* subsd */
    xmm0.d[0] = xmm0.d[0] - xmm1.d[0]; /* subsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -48);
    ecx = MEM32(ebp + -52);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0761u); RECOMP_ABI_CALL(0x003A0A00u, sub_003A0A00); /* call 0x003A0A00 */

loc_003A0761: ;
    MEMF(ebp + -108) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -108)); /* movss */
    MEMF(ebp + -80) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + -48);
    edx = MEM32(ebp + -52);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    ecx = ecx - 1;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0797u); RECOMP_ABI_CALL(0x003A0A00u, sub_003A0A00); /* call 0x003A0A00 */

loc_003A0797: ;
    MEMF(ebp + -104) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -104)); /* movss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -52);
    eax = eax + 1;
    ecx = MEM32(ebp + -48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A0823; /* jae: above or equal (unsigned >=) */

loc_003A07B2: ;
    edx = MEM32(ebp + -48);
    ecx = MEM32(ebp + -52);
    ecx = ecx + 1;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A07DBu); RECOMP_ABI_CALL(0x003A0A00u, sub_003A0A00); /* call 0x003A0A00 */

loc_003A07DB: ;
    MEMF(ebp + -116) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    esi = MEM32(ebp + -48);
    edx = MEM32(ebp + -52);
    edx = edx + 1;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    ecx = ecx - 1;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0814u); RECOMP_ABI_CALL(0x003A0A00u, sub_003A0A00); /* call 0x003A0A00 */

loc_003A0814: ;
    MEMF(ebp + -112) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -112)); /* movss */
    MEMF(ebp + -92) = xmm0.f[0]; /* movss */
    goto loc_003A0837;

loc_003A0823: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    MEMF(ebp + -92) = xmm0.f[0]; /* movss */

loc_003A0837: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -80); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -56); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -92)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -84); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -56); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A08B6; /* jne: not equal / not zero */

loc_003A087A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -28); /* mulss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + ecx * 4); /* addss */
    MEMF(eax + ecx * 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -32); /* mulss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + ecx * 4 + 4); /* addss */
    MEMF(eax + ecx * 4 + 4) = xmm0.f[0]; /* movss */
    goto loc_003A08F0;

loc_003A08B6: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -28); /* mulss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + ecx * 4); /* addss */
    MEMF(eax + ecx * 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -32); /* mulss */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -44);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + ecx * 4 + 4); /* addss */
    MEMF(eax + ecx * 4 + 4) = xmm0.f[0]; /* movss */

loc_003A08F0: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -28); /* addss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -32); /* addss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -16)); /* movsd */
    eax = MEM32(ebp + 8);
    xmm0.d[0] = xmm0.d[0] + MEMD(eax + 0x960); /* addsd */
    MEMD(eax + 0x960) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -44);
    eax = eax + 1;
    MEM32(ebp + -44) = eax;
    goto loc_003A0556;

loc_003A0934: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x970) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x974) = xmm0.f[0]; /* movss */

loc_003A0954: ;
    esp = esp + 0x84;
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
 * sub_003A0960
 * Original: 0x003A0960 - 0x003A09F5 (149 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0960(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A0960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x38), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A099C; /* je: equal / zero */

loc_003A0978: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A099C; /* je: equal / zero */

loc_003A0981: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A099Au); RECOMP_ABI_CALL(0x003A0A50u, sub_003A0A50); /* call 0x003A0A50 */

loc_003A099A: ;
    goto loc_003A09BA;

loc_003A099C: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_003A09BA: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5ACBC8); /* mulss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5ACBC8); /* mulss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A0A00
 * Original: 0x003A0A00 - 0x003A0A45 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0A00(void)
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

loc_003A0A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = MEM32(ebp + 0x10);
    ecx = ecx + edx;
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43D828)); /* movss */
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
 * sub_003A0A50
 * Original: 0x003A0A50 - 0x003A0DD7 (903 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0A50(void)
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

loc_003A0A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x68;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A0AAE; /* jne: not equal / not zero */

loc_003A0A68: ;
    MEM32(ebp + -48) = 0;

loc_003A0A6F: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A0A95; /* jge: greater or equal (signed >=) */

loc_003A0A75: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -48);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4 + 0x40)); /* movss */
    eax = MEM32(ebp + -48);
    MEMF(ebp + eax * 4 + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -48);
    eax = eax + 1;
    MEM32(ebp + -48) = eax;
    goto loc_003A0A6F;

loc_003A0A95: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    goto loc_003A0BA6;

loc_003A0AAE: ;
    MEM32(ebp + -48) = 0;

loc_003A0AB5: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A0AE7; /* jge: greater or equal (signed >=) */

loc_003A0ABB: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -48);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx * 4 + 0x40)); /* movss */
    eax = MEM32(ebp + -48);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax * 4 + 0x5ACB80); /* subss */
    eax = MEM32(ebp + -48);
    MEMF(ebp + eax * 4 + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -48);
    eax = eax + 1;
    MEM32(ebp + -48) = eax;
    goto loc_003A0AB5;

loc_003A0AE7: ;
    xmm0 = XMM_SCALAR(MEMF(0x5ACB9C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5ACB94); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x5ACBA0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x5ACB90); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5ACBA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5ACB8C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x5ACB98)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x5ACB94); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5ACB98)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5ACB90); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x5ACB9C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x5ACB8C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    ecx = ebp + -12;
    eax = ebp + -24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0B74u); RECOMP_ABI_CALL(0x003A0DE0u, sub_003A0DE0); /* call 0x003A0DE0 */

loc_003A0B74: ;
    MEMF(ebp + -68) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    ecx = ebp + -12;
    eax = 0x5ACB80;
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0B99u); RECOMP_ABI_CALL(0x003A0DE0u, sub_003A0DE0); /* call 0x003A0DE0 */

loc_003A0B99: ;
    MEMF(ebp + -64) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */

loc_003A0BA6: ;
    ecx = ebp + -12;
    eax = ebp + -12;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0BB8u); RECOMP_ABI_CALL(0x003A0DE0u, sub_003A0DE0); /* call 0x003A0DE0 */

loc_003A0BB8: ;
    MEMF(ebp + -72) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -72)); /* movss */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x5ACBA8); /* mulss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + 8);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x4C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003A0C67; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x4C)) */

loc_003A0BEC: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003A0C67; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003A0BFC: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003A0C1A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003A0C0E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */
    goto loc_003A0C27;

loc_003A0C1A: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    MEMF(ebp + -84) = xmm0.f[0]; /* movss */

loc_003A0C27: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -84)); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x5ACBA4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    eax = MEM32(ebp + 8);
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x4C); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */

loc_003A0C67: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -40); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -44); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DDDC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003A0CAB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003A0C9A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -56); /* divss */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    goto loc_003A0CB5;

loc_003A0CAB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -88) = xmm0.f[0]; /* movss */
    goto loc_003A0CB5;

loc_003A0CB5: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003A0CF8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003A0CD1: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_003A0CF8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003A0CE1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x4C); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -36); /* mulss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */

loc_003A0CF8: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DCA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -36); /* mulss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -36); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D840)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0D44u); RECOMP_ABI_CALL(0x003F10B0u, sub_003F10B0); /* call 0x003F10B0 */

loc_003A0D44: ;
    MEMF(ebp + -80) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D6E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D768)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0D7Bu); RECOMP_ABI_CALL(0x00409C20u, sub_00409C20); /* call 0x00409C20 */

loc_003A0D7B: ;
    MEMF(ebp + -76) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D6E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D768)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x54); /* mulss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x54); /* mulss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
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
 * sub_003A0DE0
 * Original: 0x003A0DE0 - 0x003A0E2D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0DE0(void)
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

loc_003A0DE0: ;
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
 * sub_003A0E30
 * Original: 0x003A0E30 - 0x003A0F2F (255 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0E30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003A0E30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x34)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0x58;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)MEM32(ecx + 0x958) * (int32_t)0x24);
    eax = eax + ecx;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = ebp + -32;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0E6Fu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A0E6F: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0E7Au); RECOMP_ABI_CALL(0x003A0F30u, sub_003A0F30); /* call 0x003A0F30 */

loc_003A0E7A: ;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x20) = 0;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x958);
    ecx = ecx + 1;
    ecx = ecx & 0x3F;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x958) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x95C);
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(eax + 0x95C) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A0EBC; /* je: equal / zero */

loc_003A0EB4: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -24);
    MEM32(eax) = ecx;

loc_003A0EBC: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A0ECA; /* je: equal / zero */

loc_003A0EC2: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_003A0ECA: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A0F13; /* je: equal / zero */

loc_003A0ED3: ;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0EE1u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A0EE1: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ebp + 8);
    esi = MEM32(ecx + 0x10);
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x003A0F00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003A0F00: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0F11u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_003A0F11: ;
    goto loc_003A0F29;

loc_003A0F13: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A0F27; /* je: equal / zero */

loc_003A0F19: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0F24u); RECOMP_ABI_CALL(0x003BDC10u, sub_003BDC10); /* call 0x003BDC10 */

loc_003A0F24: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_003A0F27: ;
    goto loc_003A0F29;

loc_003A0F29: ;
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A0F30
 * Original: 0x003A0F30 - 0x003A0F56 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0F30(void)
{
    uint32_t ebp = g_ebp;

loc_003A0F30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0F47u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003A0F47: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x18) = 0;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A0F60
 * Original: 0x003A0F60 - 0x003A0FAC (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0F60(void)
{
    uint32_t ebp = g_ebp;

loc_003A0F60: ;
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
    PUSH32(esp, 0x003A0F74u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_003A0F74: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0F85u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_003A0F85: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + 8);
    eax = eax + 1;
    MEM32(ecx + 8) = eax;
    MEM32(ebp + -8) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0FA2u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A0FA2: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003A0FB0
 * Original: 0x003A0FB0 - 0x003A107D (205 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0FB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A0FB0: ;
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
    PUSH32(esp, 0x003A0FC4u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_003A0FC4: ;
    MEM32(ebp + -8) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0FD5u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_003A0FD5: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ecx + 8);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ecx + 8) = eax;
    MEM32(ebp + -16) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0FF2u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A0FF2: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A1000; /* je: equal / zero */

loc_003A0FF8: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    goto loc_003A1073;

loc_003A1000: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A100Bu); RECOMP_ABI_CALL(0x0039F870u, sub_0039F870); /* call 0x0039F870 */

loc_003A100B: ;
    esp = esp - 4;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A101Cu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_003A101C: ;
    eax = 0xCDCEB8;
    MEM32(ebp + -12) = eax;

loc_003A1025: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A1053; /* je: equal / zero */

loc_003A102D: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1044; /* jne: not equal / not zero */

loc_003A1037: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    goto loc_003A1053;

loc_003A1044: ;
    goto loc_003A1046;

loc_003A1046: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    eax = eax + 4;
    MEM32(ebp + -12) = eax;
    goto loc_003A1025;

loc_003A1053: ;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1061u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A1061: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A106Cu); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003A106C: ;
    MEM32(ebp + -4) = 0;

loc_003A1073: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003A1080
 * Original: 0x003A1080 - 0x003A10F2 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1080(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A1080: ;
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
    PUSH32(esp, 0x003A1097u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_003A1097: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A10B7u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003A10B7: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 5;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A10D5; /* je: equal / zero */

loc_003A10C9: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)MEM32(eax + 0x18) * (int32_t)0x24);
    MEM32(ebp + -8) = eax;
    goto loc_003A10E0;

loc_003A10D5: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x18);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -8) = eax;

loc_003A10E0: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_003A1100
 * Original: 0x003A1100 - 0x003A115A (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A1100: ;
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
    PUSH32(esp, 0x003A1117u); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_003A1117: ;
    MEM32(ebp + -4) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1128u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_003A1128: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x95C);
    ecx = 0; /* xor self */
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_B(_fa, _fb)) ecx = eax; /* cmovb */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1151u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A1151: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}


/**
 * sub_003A1160
 * Original: 0x003A1160 - 0x003A132E (462 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1160(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A1160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A117Bu); RECOMP_ABI_CALL(0x0039F990u, sub_0039F990); /* call 0x0039F990 */

loc_003A117B: ;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -20) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1197; /* jne: not equal / not zero */

loc_003A118B: ;
    MEM32(ebp + -8) = 0x80070057u;
    goto loc_003A1323;

loc_003A1197: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A11CD; /* je: equal / zero */

loc_003A11A0: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x18);
    eax = ebp + -20;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A11C8u); RECOMP_ABI_CALL(0x003A1340u, sub_003A1340); /* call 0x003A1340 */

loc_003A11C8: ;
    MEM32(ebp + -28) = eax;
    goto loc_003A11F8;

loc_003A11CD: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 4);
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x18);
    eax = ebp + -20;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A11F5u); RECOMP_ABI_CALL(0x003A1560u, sub_003A1560); /* call 0x003A1560 */

loc_003A11F5: ;
    MEM32(ebp + -28) = eax;

loc_003A11F8: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -24) = eax;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A120Cu); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_003A120C: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x95C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x95C), 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A123D; /* jne: not equal / not zero */

loc_003A1218: ;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1226u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A1226: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1231u); RECOMP_ABI_CALL(0x003E5FE0u, sub_003E5FE0); /* call 0x003E5FE0 */

loc_003A1231: ;
    MEM32(ebp + -8) = 0x8007000Eu;
    goto loc_003A1323;

loc_003A123D: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0x58;
    ecx = MEM32(ebp + -12);
    ecx = MEM32(ecx + 0x958);
    edx = MEM32(ebp + -12);
    ecx = ecx + MEM32(edx + 0x95C);
    ecx = ecx & 0x3F;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24);
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A127Au); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A127A: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x18) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A1291; /* je: equal / zero */

loc_003A1289: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -32) = eax;
    goto loc_003A1298;

loc_003A1291: ;
    eax = 0; /* xor self */
    MEM32(ebp + -32) = eax;
    goto loc_003A1298;

loc_003A1298: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x20) = 0;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A12C0; /* je: equal / zero */

loc_003A12B4: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    MEM32(eax) = 0x8000000Au;

loc_003A12C0: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A12D5; /* je: equal / zero */

loc_003A12C9: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    MEM32(eax) = 0;

loc_003A12D5: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + 0x95C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x95C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A12FC; /* jne: not equal / not zero */

loc_003A12E1: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(eax + 0x960) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x978) = 0;

loc_003A12FC: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax + 0x95C);
    ecx = ecx + 1;
    MEM32(eax + 0x95C) = ecx;
    eax = 0xCDCEA0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A131Cu); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A131C: ;
    MEM32(ebp + -8) = 0;

loc_003A1323: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_003A1330
 * Original: 0x003A1330 - 0x003A133C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1330(void)
{
    uint32_t ebp = g_ebp;

loc_003A1330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}


/**
 * sub_003A1340
 * Original: 0x003A1340 - 0x003A1558 (536 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A1340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x10) * (int32_t)0x24);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -8)); }
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A1372; /* je: equal / zero */

loc_003A136A: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -64) = eax;
    goto loc_003A137C;

loc_003A1372: ;
    eax = 1;
    MEM32(ebp + -64) = eax;
    goto loc_003A137C;

loc_003A137C: ;
    eax = MEM32(ebp + -64);
    _shift_result = RECOMP_SHIFT(eax, 6, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1390u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_003A1390: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A13AE; /* jne: not equal / not zero */

loc_003A1399: ;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 0;
    MEM32(ebp + -4) = 0;
    goto loc_003A1550;

loc_003A13AE: ;
    MEM32(ebp + -20) = 0;

loc_003A13B5: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A153F; /* jae: above or equal (unsigned >=) */

loc_003A13C1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + -8));
    eax = eax + ecx;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + -20);
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x10));
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 0;

loc_003A13EB: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A152F; /* jae: above or equal (unsigned >=) */

loc_003A13F7: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -24);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -36);
    eax = ZX8(MEM8(eax));
    ecx = MEM32(ebp + -36);
    ecx = ZX8(MEM8(ecx + 1));
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -36);
    eax = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A1431; /* jle: less or equal (signed <=) */

loc_003A1427: ;
    eax = 0x58;
    MEM32(ebp + -68) = eax;
    goto loc_003A143B;

loc_003A1431: ;
    eax = MEM32(ebp + -36);
    eax = ZX8(MEM8(eax + 2));
    MEM32(ebp + -68) = eax;

loc_003A143B: ;
    eax = MEM32(ebp + -68);
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -48) = 0;

loc_003A1448: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A151F; /* jae: above or equal (unsigned >=) */

loc_003A1452: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + 0x10);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = MEM32(ebp + -48);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x10));
    ecx = ecx + MEM32(ebp + -24);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -52) = 0;

loc_003A1476: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A150F; /* jae: above or equal (unsigned >=) */

loc_003A1480: ;
    eax = MEM32(ebp + -48);
    _shift_result = RECOMP_SHIFT(eax, 3, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + -52);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -56);
    ecx = MEM32(ebp + -52);
    edx = ZX8(MEM8(eax + ecx));
    edx = edx & 0xF;
    ecx = ebp + -40;
    eax = ebp + -44;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A14B3u); RECOMP_ABI_CALL(0x003A1600u, sub_003A1600); /* call 0x003A1600 */

loc_003A14B3: ;
    SET_LO16(edx, LO16(eax));
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -60);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x10));
    ecx = ecx + MEM32(ebp + -24);
    MEM16(eax + ecx * 2) = LO16(edx);
    eax = MEM32(ebp + -56);
    ecx = MEM32(ebp + -52);
    edx = ZX8(MEM8(eax + ecx));
    edx = RECOMP_SAR(edx, 4, 32, NULL);
    ecx = ebp + -40;
    eax = ebp + -44;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A14EAu); RECOMP_ABI_CALL(0x003A1600u, sub_003A1600); /* call 0x003A1600 */

loc_003A14EA: ;
    SET_LO16(edx, LO16(eax));
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -60);
    ecx = ecx + 1;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x10));
    ecx = ecx + MEM32(ebp + -24);
    MEM16(eax + ecx * 2) = LO16(edx);
    eax = MEM32(ebp + -52);
    eax = eax + 1;
    MEM32(ebp + -52) = eax;
    goto loc_003A1476;

loc_003A150F: ;
    goto loc_003A1511;

loc_003A1511: ;
    eax = MEM32(ebp + -48);
    eax = eax + 1;
    MEM32(ebp + -48) = eax;
    goto loc_003A1448;

loc_003A151F: ;
    goto loc_003A1521;

loc_003A1521: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_003A13EB;

loc_003A152F: ;
    goto loc_003A1531;

loc_003A1531: ;
    eax = MEM32(ebp + -20);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    goto loc_003A13B5;

loc_003A153F: ;
    ecx = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;

loc_003A1550: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A1560
 * Original: 0x003A1560 - 0x003A15F7 (151 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1560(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A1560: ;
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
    ecx = MEM32(ebp + 0x10);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A158F; /* je: equal / zero */

loc_003A1587: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = eax;
    goto loc_003A1599;

loc_003A158F: ;
    eax = 1;
    MEM32(ebp + -12) = eax;
    goto loc_003A1599;

loc_003A1599: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A15AAu); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_003A15AA: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A15D2; /* je: equal / zero */

loc_003A15B3: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A15D2u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A15D2: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A15E0; /* je: equal / zero */

loc_003A15D8: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    goto loc_003A15E7;

loc_003A15E0: ;
    eax = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    goto loc_003A15E7;

loc_003A15E7: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A1600
 * Original: 0x003A1600 - 0x003A16EA (234 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1600(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003A1600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    eax = MEM32(eax * 4 + 0x4CFF00);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = RECOMP_SAR(eax, 3, 32, NULL);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A163E; /* je: equal / zero */

loc_003A1632: ;
    eax = MEM32(ebp + -4);
    eax = RECOMP_SAR(eax, 2, 32, NULL);
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;

loc_003A163E: ;
    eax = MEM32(ebp + 8);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A1654; /* je: equal / zero */

loc_003A1649: ;
    eax = MEM32(ebp + -4);
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;

loc_003A1654: ;
    eax = MEM32(ebp + 8);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A1668; /* je: equal / zero */

loc_003A165F: ;
    eax = MEM32(ebp + -4);
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;

loc_003A1668: ;
    eax = MEM32(ebp + 8);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A167B; /* je: equal / zero */

loc_003A1673: ;
    eax = 0; /* xor self */
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -8))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -8) = eax;

loc_003A167B: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0xC);
    ecx = ecx + MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x7FFF (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003A1699; /* jle: less or equal (signed <=) */

loc_003A1690: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x7FFF;

loc_003A1699: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFF8000u (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003A16AD; /* jge: greater or equal (signed >=) */

loc_003A16A4: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0xFFFF8000u;

loc_003A16AD: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax * 4 + 0x4D0064);
    eax = MEM32(ebp + 0x10);
    ecx = ecx + MEM32(eax);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003A16CF; /* jge: greater or equal (signed >=) */

loc_003A16C6: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;

loc_003A16CF: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x58 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003A16E0; /* jle: less or equal (signed <=) */

loc_003A16D7: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x58;

loc_003A16E0: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A1A00
 * Original: 0x003A1A00 - 0x003A3197 (6039 bytes, 1232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1A00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A1A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(ebp + -4) = 1;
    eax = 0x474ABD;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1A1Bu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1A1B: ;
    MEM32(0x96A1BC) = eax;
    _fa = (uint32_t)(MEM32(0x96A1BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1BC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1A48; /* jne: not equal / not zero */

loc_003A1A29: ;
    ecx = 0x497131;
    eax = 0x474ABD;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1A41u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1A41: ;
    MEM32(ebp + -4) = 0;

loc_003A1A48: ;
    eax = 0x444759;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1A56u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1A56: ;
    MEM32(0x969C60) = eax;
    _fa = (uint32_t)(MEM32(0x969C60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C60), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1A83; /* jne: not equal / not zero */

loc_003A1A64: ;
    ecx = 0x497131;
    eax = 0x444759;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1A7Cu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1A7C: ;
    MEM32(ebp + -4) = 0;

loc_003A1A83: ;
    eax = 0x44723A;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1A91u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1A91: ;
    MEM32(0x96A1C0) = eax;
    _fa = (uint32_t)(MEM32(0x96A1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1C0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1ABE; /* jne: not equal / not zero */

loc_003A1A9F: ;
    ecx = 0x497131;
    eax = 0x44723A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1AB7u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1AB7: ;
    MEM32(ebp + -4) = 0;

loc_003A1ABE: ;
    eax = 0x48B57E;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1ACCu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1ACC: ;
    MEM32(0x969D7C) = eax;
    _fa = (uint32_t)(MEM32(0x969D7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D7C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1AF9; /* jne: not equal / not zero */

loc_003A1ADA: ;
    ecx = 0x497131;
    eax = 0x48B57E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1AF2u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1AF2: ;
    MEM32(ebp + -4) = 0;

loc_003A1AF9: ;
    eax = 0x488DAC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1B07u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1B07: ;
    MEM32(0x969CC4) = eax;
    _fa = (uint32_t)(MEM32(0x969CC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CC4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1B34; /* jne: not equal / not zero */

loc_003A1B15: ;
    ecx = 0x497131;
    eax = 0x488DAC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1B2Du); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1B2D: ;
    MEM32(ebp + -4) = 0;

loc_003A1B34: ;
    eax = 0x46393C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1B42u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1B42: ;
    MEM32(0x969D90) = eax;
    _fa = (uint32_t)(MEM32(0x969D90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D90), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1B6F; /* jne: not equal / not zero */

loc_003A1B50: ;
    ecx = 0x497131;
    eax = 0x46393C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1B68u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1B68: ;
    MEM32(ebp + -4) = 0;

loc_003A1B6F: ;
    eax = 0x493F48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1B7Du); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1B7D: ;
    MEM32(0x969C80) = eax;
    _fa = (uint32_t)(MEM32(0x969C80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C80), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1BAA; /* jne: not equal / not zero */

loc_003A1B8B: ;
    ecx = 0x497131;
    eax = 0x493F48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1BA3u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1BA3: ;
    MEM32(ebp + -4) = 0;

loc_003A1BAA: ;
    eax = 0x45DF70;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1BB8u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1BB8: ;
    MEM32(0x969CF8) = eax;
    _fa = (uint32_t)(MEM32(0x969CF8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CF8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1BE5; /* jne: not equal / not zero */

loc_003A1BC6: ;
    ecx = 0x497131;
    eax = 0x45DF70;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1BDEu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1BDE: ;
    MEM32(ebp + -4) = 0;

loc_003A1BE5: ;
    eax = 0x47FEFA;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1BF3u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1BF3: ;
    MEM32(0x969D28) = eax;
    _fa = (uint32_t)(MEM32(0x969D28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1C20; /* jne: not equal / not zero */

loc_003A1C01: ;
    ecx = 0x497131;
    eax = 0x47FEFA;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1C19u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1C19: ;
    MEM32(ebp + -4) = 0;

loc_003A1C20: ;
    eax = 0x47A553;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1C2Eu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1C2E: ;
    MEM32(0x969D2C) = eax;
    _fa = (uint32_t)(MEM32(0x969D2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D2C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1C5B; /* jne: not equal / not zero */

loc_003A1C3C: ;
    ecx = 0x497131;
    eax = 0x47A553;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1C54u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1C54: ;
    MEM32(ebp + -4) = 0;

loc_003A1C5B: ;
    eax = 0x44A1B1;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1C69u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1C69: ;
    MEM32(0x969CF0) = eax;
    _fa = (uint32_t)(MEM32(0x969CF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CF0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1C96; /* jne: not equal / not zero */

loc_003A1C77: ;
    ecx = 0x497131;
    eax = 0x44A1B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1C8Fu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1C8F: ;
    MEM32(ebp + -4) = 0;

loc_003A1C96: ;
    eax = 0x46960C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1CA4u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1CA4: ;
    MEM32(0x969CDC) = eax;
    _fa = (uint32_t)(MEM32(0x969CDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CDC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1CD1; /* jne: not equal / not zero */

loc_003A1CB2: ;
    ecx = 0x497131;
    eax = 0x46960C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1CCAu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1CCA: ;
    MEM32(ebp + -4) = 0;

loc_003A1CD1: ;
    eax = 0x441CE7;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1CDFu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1CDF: ;
    MEM32(0x969CE4) = eax;
    _fa = (uint32_t)(MEM32(0x969CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CE4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1D0C; /* jne: not equal / not zero */

loc_003A1CED: ;
    ecx = 0x497131;
    eax = 0x441CE7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1D05u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1D05: ;
    MEM32(ebp + -4) = 0;

loc_003A1D0C: ;
    eax = 0x4776C6;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1D1Au); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1D1A: ;
    MEM32(0x969CEC) = eax;
    _fa = (uint32_t)(MEM32(0x969CEC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CEC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1D47; /* jne: not equal / not zero */

loc_003A1D28: ;
    ecx = 0x497131;
    eax = 0x4776C6;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1D40u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1D40: ;
    MEM32(ebp + -4) = 0;

loc_003A1D47: ;
    eax = 0x471F4A;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1D55u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1D55: ;
    MEM32(0x969CF4) = eax;
    _fa = (uint32_t)(MEM32(0x969CF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CF4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1D82; /* jne: not equal / not zero */

loc_003A1D63: ;
    ecx = 0x497131;
    eax = 0x471F4A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1D7Bu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1D7B: ;
    MEM32(ebp + -4) = 0;

loc_003A1D82: ;
    eax = 0x45534D;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1D90u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1D90: ;
    MEM32(0x969CD8) = eax;
    _fa = (uint32_t)(MEM32(0x969CD8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CD8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1DBD; /* jne: not equal / not zero */

loc_003A1D9E: ;
    ecx = 0x497131;
    eax = 0x45534D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1DB6u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1DB6: ;
    MEM32(ebp + -4) = 0;

loc_003A1DBD: ;
    eax = 0x46F157;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1DCBu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1DCB: ;
    MEM32(0x969CE0) = eax;
    _fa = (uint32_t)(MEM32(0x969CE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CE0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1DF8; /* jne: not equal / not zero */

loc_003A1DD9: ;
    ecx = 0x497131;
    eax = 0x46F157;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1DF1u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1DF1: ;
    MEM32(ebp + -4) = 0;

loc_003A1DF8: ;
    eax = 0x45AFB6;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1E06u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1E06: ;
    MEM32(0x969D30) = eax;
    _fa = (uint32_t)(MEM32(0x969D30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1E33; /* jne: not equal / not zero */

loc_003A1E14: ;
    ecx = 0x497131;
    eax = 0x45AFB6;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1E2Cu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1E2C: ;
    MEM32(ebp + -4) = 0;

loc_003A1E33: ;
    eax = 0x4502B1;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1E41u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1E41: ;
    MEM32(0x969D34) = eax;
    _fa = (uint32_t)(MEM32(0x969D34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D34), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1E6E; /* jne: not equal / not zero */

loc_003A1E4F: ;
    ecx = 0x497131;
    eax = 0x4502B1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1E67u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1E67: ;
    MEM32(ebp + -4) = 0;

loc_003A1E6E: ;
    eax = 0x497153;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1E7Cu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1E7C: ;
    MEM32(0x969D38) = eax;
    _fa = (uint32_t)(MEM32(0x969D38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D38), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1EA9; /* jne: not equal / not zero */

loc_003A1E8A: ;
    ecx = 0x497131;
    eax = 0x497153;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1EA2u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1EA2: ;
    MEM32(ebp + -4) = 0;

loc_003A1EA9: ;
    eax = 0x455359;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1EB7u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1EB7: ;
    MEM32(0x969CE8) = eax;
    _fa = (uint32_t)(MEM32(0x969CE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CE8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1EE4; /* jne: not equal / not zero */

loc_003A1EC5: ;
    ecx = 0x497131;
    eax = 0x455359;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1EDDu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1EDD: ;
    MEM32(ebp + -4) = 0;

loc_003A1EE4: ;
    eax = 0x47A560;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1EF2u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1EF2: ;
    MEM32(0x969D3C) = eax;
    _fa = (uint32_t)(MEM32(0x969D3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D3C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1F1F; /* jne: not equal / not zero */

loc_003A1F00: ;
    ecx = 0x497131;
    eax = 0x47A560;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1F18u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1F18: ;
    MEM32(ebp + -4) = 0;

loc_003A1F1F: ;
    eax = 0x493F51;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1F2Du); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1F2D: ;
    MEM32(0x969D40) = eax;
    _fa = (uint32_t)(MEM32(0x969D40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D40), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1F5A; /* jne: not equal / not zero */

loc_003A1F3B: ;
    ecx = 0x497131;
    eax = 0x493F51;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1F53u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1F53: ;
    MEM32(ebp + -4) = 0;

loc_003A1F5A: ;
    eax = 0x447248;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1F68u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1F68: ;
    MEM32(0x969D44) = eax;
    _fa = (uint32_t)(MEM32(0x969D44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D44), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1F95; /* jne: not equal / not zero */

loc_003A1F76: ;
    ecx = 0x497131;
    eax = 0x447248;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1F8Eu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1F8E: ;
    MEM32(ebp + -4) = 0;

loc_003A1F95: ;
    eax = 0x444767;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1FA3u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1FA3: ;
    MEM32(0x969D4C) = eax;
    _fa = (uint32_t)(MEM32(0x969D4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D4C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A1FD0; /* jne: not equal / not zero */

loc_003A1FB1: ;
    ecx = 0x497131;
    eax = 0x444767;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1FC9u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A1FC9: ;
    MEM32(ebp + -4) = 0;

loc_003A1FD0: ;
    eax = 0x447255;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1FDEu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A1FDE: ;
    MEM32(0x969D48) = eax;
    _fa = (uint32_t)(MEM32(0x969D48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D48), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A200B; /* jne: not equal / not zero */

loc_003A1FEC: ;
    ecx = 0x497131;
    eax = 0x447255;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2004u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2004: ;
    MEM32(ebp + -4) = 0;

loc_003A200B: ;
    eax = 0x499D21;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2019u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2019: ;
    MEM32(0x96A1C4) = eax;
    _fa = (uint32_t)(MEM32(0x96A1C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1C4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2046; /* jne: not equal / not zero */

loc_003A2027: ;
    ecx = 0x497131;
    eax = 0x499D21;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A203Fu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A203F: ;
    MEM32(ebp + -4) = 0;

loc_003A2046: ;
    eax = 0x45DF7A;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2054u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2054: ;
    MEM32(0x969D50) = eax;
    _fa = (uint32_t)(MEM32(0x969D50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D50), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2081; /* jne: not equal / not zero */

loc_003A2062: ;
    ecx = 0x497131;
    eax = 0x45DF7A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A207Au); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A207A: ;
    MEM32(ebp + -4) = 0;

loc_003A2081: ;
    eax = 0x49715F;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A208Fu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A208F: ;
    MEM32(0x96A1C8) = eax;
    _fa = (uint32_t)(MEM32(0x96A1C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1C8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A20BC; /* jne: not equal / not zero */

loc_003A209D: ;
    ecx = 0x497131;
    eax = 0x49715F;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A20B5u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A20B5: ;
    MEM32(ebp + -4) = 0;

loc_003A20BC: ;
    eax = 0x46F163;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A20CAu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A20CA: ;
    MEM32(0x96A1CC) = eax;
    _fa = (uint32_t)(MEM32(0x96A1CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1CC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A20F7; /* jne: not equal / not zero */

loc_003A20D8: ;
    ecx = 0x497131;
    eax = 0x46F163;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A20F0u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A20F0: ;
    MEM32(ebp + -4) = 0;

loc_003A20F7: ;
    eax = 0x4776D5;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2105u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2105: ;
    MEM32(0x969D14) = eax;
    _fa = (uint32_t)(MEM32(0x969D14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2132; /* jne: not equal / not zero */

loc_003A2113: ;
    ecx = 0x497131;
    eax = 0x4776D5;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A212Bu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A212B: ;
    MEM32(ebp + -4) = 0;

loc_003A2132: ;
    eax = 0x47D3BA;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2140u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2140: ;
    MEM32(0x96A1D0) = eax;
    _fa = (uint32_t)(MEM32(0x96A1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1D0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A216D; /* jne: not equal / not zero */

loc_003A214E: ;
    ecx = 0x497131;
    eax = 0x47D3BA;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2166u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2166: ;
    MEM32(ebp + -4) = 0;

loc_003A216D: ;
    eax = 0x45AFC2;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A217Bu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A217B: ;
    MEM32(0x969CA4) = eax;
    _fa = (uint32_t)(MEM32(0x969CA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CA4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A21A8; /* jne: not equal / not zero */

loc_003A2189: ;
    ecx = 0x497131;
    eax = 0x45AFC2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A21A1u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A21A1: ;
    MEM32(ebp + -4) = 0;

loc_003A21A8: ;
    eax = 0x46665E;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A21B6u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A21B6: ;
    MEM32(0x969D04) = eax;
    _fa = (uint32_t)(MEM32(0x969D04)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D04), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A21E3; /* jne: not equal / not zero */

loc_003A21C4: ;
    ecx = 0x497131;
    eax = 0x46665E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A21DCu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A21DC: ;
    MEM32(ebp + -4) = 0;

loc_003A21E3: ;
    eax = 0x4831D8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A21F1u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A21F1: ;
    MEM32(0x96A1D4) = eax;
    _fa = (uint32_t)(MEM32(0x96A1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1D4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A221E; /* jne: not equal / not zero */

loc_003A21FF: ;
    ecx = 0x497131;
    eax = 0x4831D8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2217u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2217: ;
    MEM32(ebp + -4) = 0;

loc_003A221E: ;
    eax = 0x46666C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A222Cu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A222C: ;
    MEM32(0x969D08) = eax;
    _fa = (uint32_t)(MEM32(0x969D08)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D08), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2259; /* jne: not equal / not zero */

loc_003A223A: ;
    ecx = 0x497131;
    eax = 0x46666C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2252u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2252: ;
    MEM32(ebp + -4) = 0;

loc_003A2259: ;
    eax = 0x4831E9;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2267u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2267: ;
    MEM32(0x969D78) = eax;
    _fa = (uint32_t)(MEM32(0x969D78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D78), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2294; /* jne: not equal / not zero */

loc_003A2275: ;
    ecx = 0x497131;
    eax = 0x4831E9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A228Du); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A228D: ;
    MEM32(ebp + -4) = 0;

loc_003A2294: ;
    eax = 0x444772;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A22A2u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A22A2: ;
    MEM32(0x969D10) = eax;
    _fa = (uint32_t)(MEM32(0x969D10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A22CF; /* jne: not equal / not zero */

loc_003A22B0: ;
    ecx = 0x497131;
    eax = 0x444772;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A22C8u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A22C8: ;
    MEM32(ebp + -4) = 0;

loc_003A22CF: ;
    eax = 0x48B58F;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A22DDu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A22DD: ;
    MEM32(0x96A1D8) = eax;
    _fa = (uint32_t)(MEM32(0x96A1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1D8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A230A; /* jne: not equal / not zero */

loc_003A22EB: ;
    ecx = 0x497131;
    eax = 0x48B58F;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2303u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2303: ;
    MEM32(ebp + -4) = 0;

loc_003A230A: ;
    eax = 0x45AFCA;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2318u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2318: ;
    MEM32(0x96A1DC) = eax;
    _fa = (uint32_t)(MEM32(0x96A1DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1DC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2345; /* jne: not equal / not zero */

loc_003A2326: ;
    ecx = 0x497131;
    eax = 0x45AFCA;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A233Eu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A233E: ;
    MEM32(ebp + -4) = 0;

loc_003A2345: ;
    eax = 0x493F61;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2353u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2353: ;
    MEM32(0x96A1E0) = eax;
    _fa = (uint32_t)(MEM32(0x96A1E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1E0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2380; /* jne: not equal / not zero */

loc_003A2361: ;
    ecx = 0x497131;
    eax = 0x493F61;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2379u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2379: ;
    MEM32(ebp + -4) = 0;

loc_003A2380: ;
    eax = 0x447261;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A238Eu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A238E: ;
    MEM32(0x96A1E4) = eax;
    _fa = (uint32_t)(MEM32(0x96A1E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A23BB; /* jne: not equal / not zero */

loc_003A239C: ;
    ecx = 0x497131;
    eax = 0x447261;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A23B4u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A23B4: ;
    MEM32(ebp + -4) = 0;

loc_003A23BB: ;
    eax = 0x469619;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A23C9u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A23C9: ;
    MEM32(0x969D0C) = eax;
    _fa = (uint32_t)(MEM32(0x969D0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D0C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A23F6; /* jne: not equal / not zero */

loc_003A23D7: ;
    ecx = 0x497131;
    eax = 0x469619;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A23EFu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A23EF: ;
    MEM32(ebp + -4) = 0;

loc_003A23F6: ;
    eax = 0x47A56C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2404u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2404: ;
    MEM32(0x96A1E8) = eax;
    _fa = (uint32_t)(MEM32(0x96A1E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1E8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2431; /* jne: not equal / not zero */

loc_003A2412: ;
    ecx = 0x497131;
    eax = 0x47A56C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A242Au); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A242A: ;
    MEM32(ebp + -4) = 0;

loc_003A2431: ;
    eax = 0x493F78;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A243Fu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A243F: ;
    MEM32(0x96A1EC) = eax;
    _fa = (uint32_t)(MEM32(0x96A1EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1EC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A246C; /* jne: not equal / not zero */

loc_003A244D: ;
    ecx = 0x497131;
    eax = 0x493F78;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2465u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2465: ;
    MEM32(ebp + -4) = 0;

loc_003A246C: ;
    eax = 0x4776E2;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A247Au); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A247A: ;
    MEM32(0x96A1F0) = eax;
    _fa = (uint32_t)(MEM32(0x96A1F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1F0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A24A7; /* jne: not equal / not zero */

loc_003A2488: ;
    ecx = 0x497131;
    eax = 0x4776E2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A24A0u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A24A0: ;
    MEM32(ebp + -4) = 0;

loc_003A24A7: ;
    eax = 0x471F52;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A24B5u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A24B5: ;
    MEM32(0x969C98) = eax;
    _fa = (uint32_t)(MEM32(0x969C98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C98), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A24E2; /* jne: not equal / not zero */

loc_003A24C3: ;
    ecx = 0x497131;
    eax = 0x471F52;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A24DBu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A24DB: ;
    MEM32(ebp + -4) = 0;

loc_003A24E2: ;
    eax = 0x46C5BD;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A24F0u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A24F0: ;
    MEM32(0x969D80) = eax;
    _fa = (uint32_t)(MEM32(0x969D80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D80), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A251D; /* jne: not equal / not zero */

loc_003A24FE: ;
    ecx = 0x497131;
    eax = 0x46C5BD;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2516u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2516: ;
    MEM32(ebp + -4) = 0;

loc_003A251D: ;
    eax = 0x45AFDA;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A252Bu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A252B: ;
    MEM32(0x969D84) = eax;
    _fa = (uint32_t)(MEM32(0x969D84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D84), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2558; /* jne: not equal / not zero */

loc_003A2539: ;
    ecx = 0x497131;
    eax = 0x45AFDA;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2551u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2551: ;
    MEM32(ebp + -4) = 0;

loc_003A2558: ;
    eax = 0x4585DB;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2566u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2566: ;
    MEM32(0x969D88) = eax;
    _fa = (uint32_t)(MEM32(0x969D88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D88), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2593; /* jne: not equal / not zero */

loc_003A2574: ;
    ecx = 0x497131;
    eax = 0x4585DB;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A258Cu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A258C: ;
    MEM32(ebp + -4) = 0;

loc_003A2593: ;
    eax = 0x47D3C3;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A25A1u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A25A1: ;
    MEM32(0x969D8C) = eax;
    _fa = (uint32_t)(MEM32(0x969D8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D8C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A25CE; /* jne: not equal / not zero */

loc_003A25AF: ;
    ecx = 0x497131;
    eax = 0x47D3C3;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A25C7u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A25C7: ;
    MEM32(ebp + -4) = 0;

loc_003A25CE: ;
    eax = 0x4502BF;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A25DCu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A25DC: ;
    MEM32(0x969D18) = eax;
    _fa = (uint32_t)(MEM32(0x969D18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2609; /* jne: not equal / not zero */

loc_003A25EA: ;
    ecx = 0x497131;
    eax = 0x4502BF;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2602u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2602: ;
    MEM32(ebp + -4) = 0;

loc_003A2609: ;
    eax = 0x44D105;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2617u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2617: ;
    MEM32(0x96A1F4) = eax;
    _fa = (uint32_t)(MEM32(0x96A1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1F4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2644; /* jne: not equal / not zero */

loc_003A2625: ;
    ecx = 0x497131;
    eax = 0x44D105;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A263Du); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A263D: ;
    MEM32(ebp + -4) = 0;

loc_003A2644: ;
    eax = 0x47D3D8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2652u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2652: ;
    MEM32(0x969CFC) = eax;
    _fa = (uint32_t)(MEM32(0x969CFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CFC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A267F; /* jne: not equal / not zero */

loc_003A2660: ;
    ecx = 0x497131;
    eax = 0x47D3D8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2678u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2678: ;
    MEM32(ebp + -4) = 0;

loc_003A267F: ;
    eax = 0x455367;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A268Du); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A268D: ;
    MEM32(0x969D1C) = eax;
    _fa = (uint32_t)(MEM32(0x969D1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A26BA; /* jne: not equal / not zero */

loc_003A269B: ;
    ecx = 0x497131;
    eax = 0x455367;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A26B3u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A26B3: ;
    MEM32(ebp + -4) = 0;

loc_003A26BA: ;
    eax = 0x4776F3;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A26C8u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A26C8: ;
    MEM32(0x969D24) = eax;
    _fa = (uint32_t)(MEM32(0x969D24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A26F5; /* jne: not equal / not zero */

loc_003A26D6: ;
    ecx = 0x497131;
    eax = 0x4776F3;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A26EEu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A26EE: ;
    MEM32(ebp + -4) = 0;

loc_003A26F5: ;
    eax = 0x47D3EA;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2703u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2703: ;
    MEM32(0x969D00) = eax;
    _fa = (uint32_t)(MEM32(0x969D00)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D00), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2730; /* jne: not equal / not zero */

loc_003A2711: ;
    ecx = 0x497131;
    eax = 0x47D3EA;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2729u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2729: ;
    MEM32(ebp + -4) = 0;

loc_003A2730: ;
    eax = 0x46C5CB;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A273Eu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A273E: ;
    MEM32(0x969D20) = eax;
    _fa = (uint32_t)(MEM32(0x969D20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A276B; /* jne: not equal / not zero */

loc_003A274C: ;
    ecx = 0x497131;
    eax = 0x46C5CB;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2764u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2764: ;
    MEM32(ebp + -4) = 0;

loc_003A276B: ;
    eax = 0x45537E;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2779u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2779: ;
    MEM32(0x969D94) = eax;
    _fa = (uint32_t)(MEM32(0x969D94)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D94), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A27A6; /* jne: not equal / not zero */

loc_003A2787: ;
    ecx = 0x497131;
    eax = 0x45537E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A279Fu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A279F: ;
    MEM32(ebp + -4) = 0;

loc_003A27A6: ;
    eax = 0x44A1BB;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A27B4u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A27B4: ;
    MEM32(0x969C8C) = eax;
    _fa = (uint32_t)(MEM32(0x969C8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C8C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A27E1; /* jne: not equal / not zero */

loc_003A27C2: ;
    ecx = 0x497131;
    eax = 0x44A1BB;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A27DAu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A27DA: ;
    MEM32(ebp + -4) = 0;

loc_003A27E1: ;
    eax = 0x46667A;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A27EFu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A27EF: ;
    MEM32(0x96A1F8) = eax;
    _fa = (uint32_t)(MEM32(0x96A1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1F8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A281C; /* jne: not equal / not zero */

loc_003A27FD: ;
    ecx = 0x497131;
    eax = 0x46667A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2815u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2815: ;
    MEM32(ebp + -4) = 0;

loc_003A281C: ;
    eax = 0x48B59C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A282Au); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A282A: ;
    MEM32(0x969C90) = eax;
    _fa = (uint32_t)(MEM32(0x969C90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C90), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2857; /* jne: not equal / not zero */

loc_003A2838: ;
    ecx = 0x497131;
    eax = 0x48B59C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2850u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2850: ;
    MEM32(ebp + -4) = 0;

loc_003A2857: ;
    eax = 0x447278;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2865u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2865: ;
    MEM32(0x969C94) = eax;
    _fa = (uint32_t)(MEM32(0x969C94)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C94), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2892; /* jne: not equal / not zero */

loc_003A2873: ;
    ecx = 0x497131;
    eax = 0x447278;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A288Bu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A288B: ;
    MEM32(ebp + -4) = 0;

loc_003A2892: ;
    eax = 0x471F60;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A28A0u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A28A0: ;
    MEM32(0x969DB8) = eax;
    _fa = (uint32_t)(MEM32(0x969DB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969DB8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A28CD; /* jne: not equal / not zero */

loc_003A28AE: ;
    ecx = 0x497131;
    eax = 0x471F60;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A28C6u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A28C6: ;
    MEM32(ebp + -4) = 0;

loc_003A28CD: ;
    eax = 0x45538B;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A28DBu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A28DB: ;
    MEM32(0x96A1FC) = eax;
    _fa = (uint32_t)(MEM32(0x96A1FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A1FC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2908; /* jne: not equal / not zero */

loc_003A28E9: ;
    ecx = 0x497131;
    eax = 0x45538B;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2901u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2901: ;
    MEM32(ebp + -4) = 0;

loc_003A2908: ;
    eax = 0x45AFEE;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2916u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2916: ;
    MEM32(0x96A200) = eax;
    _fa = (uint32_t)(MEM32(0x96A200)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A200), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2943; /* jne: not equal / not zero */

loc_003A2924: ;
    ecx = 0x497131;
    eax = 0x45AFEE;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A293Cu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A293C: ;
    MEM32(ebp + -4) = 0;

loc_003A2943: ;
    eax = 0x48E687;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2951u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2951: ;
    MEM32(0x96A204) = eax;
    _fa = (uint32_t)(MEM32(0x96A204)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A204), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A297E; /* jne: not equal / not zero */

loc_003A295F: ;
    ecx = 0x497131;
    eax = 0x48E687;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2977u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2977: ;
    MEM32(ebp + -4) = 0;

loc_003A297E: ;
    eax = 0x47A57D;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A298Cu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A298C: ;
    MEM32(0x969C84) = eax;
    _fa = (uint32_t)(MEM32(0x969C84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C84), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A29B9; /* jne: not equal / not zero */

loc_003A299A: ;
    ecx = 0x497131;
    eax = 0x47A57D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A29B2u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A29B2: ;
    MEM32(ebp + -4) = 0;

loc_003A29B9: ;
    eax = 0x45DF8A;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A29C7u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A29C7: ;
    MEM32(0x969C88) = eax;
    _fa = (uint32_t)(MEM32(0x969C88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C88), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A29F4; /* jne: not equal / not zero */

loc_003A29D5: ;
    ecx = 0x497131;
    eax = 0x45DF8A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A29EDu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A29ED: ;
    MEM32(ebp + -4) = 0;

loc_003A29F4: ;
    eax = 0x493F88;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2A02u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2A02: ;
    MEM32(0x969CCC) = eax;
    _fa = (uint32_t)(MEM32(0x969CCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CCC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2A2F; /* jne: not equal / not zero */

loc_003A2A10: ;
    ecx = 0x497131;
    eax = 0x493F88;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2A28u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2A28: ;
    MEM32(ebp + -4) = 0;

loc_003A2A2F: ;
    eax = 0x441CF4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2A3Du); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2A3D: ;
    MEM32(0x969DB0) = eax;
    _fa = (uint32_t)(MEM32(0x969DB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969DB0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2A6A; /* jne: not equal / not zero */

loc_003A2A4B: ;
    ecx = 0x497131;
    eax = 0x441CF4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2A63u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2A63: ;
    MEM32(ebp + -4) = 0;

loc_003A2A6A: ;
    eax = 0x45AFFF;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2A78u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2A78: ;
    MEM32(0x969CD4) = eax;
    _fa = (uint32_t)(MEM32(0x969CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CD4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2AA5; /* jne: not equal / not zero */

loc_003A2A86: ;
    ecx = 0x497131;
    eax = 0x45AFFF;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2A9Eu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2A9E: ;
    MEM32(ebp + -4) = 0;

loc_003A2AA5: ;
    eax = 0x4831F9;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2AB3u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2AB3: ;
    MEM32(0x969CD0) = eax;
    _fa = (uint32_t)(MEM32(0x969CD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CD0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2AE0; /* jne: not equal / not zero */

loc_003A2AC1: ;
    ecx = 0x497131;
    eax = 0x4831F9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2AD9u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2AD9: ;
    MEM32(ebp + -4) = 0;

loc_003A2AE0: ;
    eax = 0x46C5D9;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2AEEu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2AEE: ;
    MEM32(0x969CA0) = eax;
    _fa = (uint32_t)(MEM32(0x969CA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CA0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2B1B; /* jne: not equal / not zero */

loc_003A2AFC: ;
    ecx = 0x497131;
    eax = 0x46C5D9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2B14u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2B14: ;
    MEM32(ebp + -4) = 0;

loc_003A2B1B: ;
    eax = 0x47D3FC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2B29u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2B29: ;
    MEM32(0x969DB4) = eax;
    _fa = (uint32_t)(MEM32(0x969DB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969DB4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2B56; /* jne: not equal / not zero */

loc_003A2B37: ;
    ecx = 0x497131;
    eax = 0x47D3FC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2B4Fu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2B4F: ;
    MEM32(ebp + -4) = 0;

loc_003A2B56: ;
    eax = 0x46668A;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2B64u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2B64: ;
    MEM32(0x969CBC) = eax;
    _fa = (uint32_t)(MEM32(0x969CBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CBC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2B91; /* jne: not equal / not zero */

loc_003A2B72: ;
    ecx = 0x497131;
    eax = 0x46668A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2B8Au); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2B8A: ;
    MEM32(ebp + -4) = 0;

loc_003A2B91: ;
    eax = 0x44477F;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2B9Fu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2B9F: ;
    MEM32(0x969CB8) = eax;
    _fa = (uint32_t)(MEM32(0x969CB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CB8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2BCC; /* jne: not equal / not zero */

loc_003A2BAD: ;
    ecx = 0x497131;
    eax = 0x44477F;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2BC5u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2BC5: ;
    MEM32(ebp + -4) = 0;

loc_003A2BCC: ;
    eax = 0x45539D;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2BDAu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2BDA: ;
    MEM32(0x969CC8) = eax;
    _fa = (uint32_t)(MEM32(0x969CC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CC8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2C07; /* jne: not equal / not zero */

loc_003A2BE8: ;
    ecx = 0x497131;
    eax = 0x45539D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2C00u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2C00: ;
    MEM32(ebp + -4) = 0;

loc_003A2C07: ;
    eax = 0x4553B6;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2C15u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2C15: ;
    MEM32(0x969D98) = eax;
    _fa = (uint32_t)(MEM32(0x969D98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D98), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2C42; /* jne: not equal / not zero */

loc_003A2C23: ;
    ecx = 0x497131;
    eax = 0x4553B6;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2C3Bu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2C3B: ;
    MEM32(ebp + -4) = 0;

loc_003A2C42: ;
    eax = 0x4502D1;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2C50u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2C50: ;
    MEM32(0x969D9C) = eax;
    _fa = (uint32_t)(MEM32(0x969D9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D9C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2C7D; /* jne: not equal / not zero */

loc_003A2C5E: ;
    ecx = 0x497131;
    eax = 0x4502D1;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2C76u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2C76: ;
    MEM32(ebp + -4) = 0;

loc_003A2C7D: ;
    eax = 0x483210;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2C8Bu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2C8B: ;
    MEM32(0x969DA0) = eax;
    _fa = (uint32_t)(MEM32(0x969DA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969DA0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2CB8; /* jne: not equal / not zero */

loc_003A2C99: ;
    ecx = 0x497131;
    eax = 0x483210;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2CB1u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2CB1: ;
    MEM32(ebp + -4) = 0;

loc_003A2CB8: ;
    eax = 0x48B5A9;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2CC6u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2CC6: ;
    MEM32(0x969DA4) = eax;
    _fa = (uint32_t)(MEM32(0x969DA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969DA4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2CF3; /* jne: not equal / not zero */

loc_003A2CD4: ;
    ecx = 0x497131;
    eax = 0x48B5A9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2CECu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2CEC: ;
    MEM32(ebp + -4) = 0;

loc_003A2CF3: ;
    eax = 0x493FA2;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2D01u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2D01: ;
    MEM32(0x969DA8) = eax;
    _fa = (uint32_t)(MEM32(0x969DA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969DA8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2D2E; /* jne: not equal / not zero */

loc_003A2D0F: ;
    ecx = 0x497131;
    eax = 0x493FA2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2D27u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2D27: ;
    MEM32(ebp + -4) = 0;

loc_003A2D2E: ;
    eax = 0x474AC9;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2D3Cu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2D3C: ;
    MEM32(0x969DAC) = eax;
    _fa = (uint32_t)(MEM32(0x969DAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969DAC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2D69; /* jne: not equal / not zero */

loc_003A2D4A: ;
    ecx = 0x497131;
    eax = 0x474AC9;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2D62u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2D62: ;
    MEM32(ebp + -4) = 0;

loc_003A2D69: ;
    eax = 0x45DF9C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2D77u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2D77: ;
    MEM32(0x969D54) = eax;
    _fa = (uint32_t)(MEM32(0x969D54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D54), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2DA4; /* jne: not equal / not zero */

loc_003A2D85: ;
    ecx = 0x497131;
    eax = 0x45DF9C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2D9Du); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2D9D: ;
    MEM32(ebp + -4) = 0;

loc_003A2DA4: ;
    eax = 0x45DFAC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2DB2u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2DB2: ;
    MEM32(0x969D58) = eax;
    _fa = (uint32_t)(MEM32(0x969D58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D58), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2DDF; /* jne: not equal / not zero */

loc_003A2DC0: ;
    ecx = 0x497131;
    eax = 0x45DFAC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2DD8u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2DD8: ;
    MEM32(ebp + -4) = 0;

loc_003A2DDF: ;
    eax = 0x441D0F;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2DEDu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2DED: ;
    MEM32(0x96A208) = eax;
    _fa = (uint32_t)(MEM32(0x96A208)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A208), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2E1A; /* jne: not equal / not zero */

loc_003A2DFB: ;
    ecx = 0x497131;
    eax = 0x441D0F;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2E13u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2E13: ;
    MEM32(ebp + -4) = 0;

loc_003A2E1A: ;
    eax = 0x4585EF;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2E28u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2E28: ;
    MEM32(0x96A20C) = eax;
    _fa = (uint32_t)(MEM32(0x96A20C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A20C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2E55; /* jne: not equal / not zero */

loc_003A2E36: ;
    ecx = 0x497131;
    eax = 0x4585EF;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2E4Eu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2E4E: ;
    MEM32(ebp + -4) = 0;

loc_003A2E55: ;
    eax = 0x488DB7;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2E63u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2E63: ;
    MEM32(0x969D5C) = eax;
    _fa = (uint32_t)(MEM32(0x969D5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D5C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2E90; /* jne: not equal / not zero */

loc_003A2E71: ;
    ecx = 0x497131;
    eax = 0x488DB7;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2E89u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2E89: ;
    MEM32(ebp + -4) = 0;

loc_003A2E90: ;
    eax = 0x44478E;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2E9Eu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2E9E: ;
    MEM32(0x969D60) = eax;
    _fa = (uint32_t)(MEM32(0x969D60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D60), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2ECB; /* jne: not equal / not zero */

loc_003A2EAC: ;
    ecx = 0x497131;
    eax = 0x44478E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2EC4u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2EC4: ;
    MEM32(ebp + -4) = 0;

loc_003A2ECB: ;
    eax = 0x47A58F;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2ED9u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2ED9: ;
    MEM32(0x969D64) = eax;
    _fa = (uint32_t)(MEM32(0x969D64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D64), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2F06; /* jne: not equal / not zero */

loc_003A2EE7: ;
    ecx = 0x497131;
    eax = 0x47A58F;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2EFFu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2EFF: ;
    MEM32(ebp + -4) = 0;

loc_003A2F06: ;
    eax = 0x471F70;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2F14u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2F14: ;
    MEM32(0x969D70) = eax;
    _fa = (uint32_t)(MEM32(0x969D70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D70), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2F41; /* jne: not equal / not zero */

loc_003A2F22: ;
    ecx = 0x497131;
    eax = 0x471F70;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2F3Au); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2F3A: ;
    MEM32(ebp + -4) = 0;

loc_003A2F41: ;
    eax = 0x48E698;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2F4Fu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2F4F: ;
    MEM32(0x969D68) = eax;
    _fa = (uint32_t)(MEM32(0x969D68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D68), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2F7C; /* jne: not equal / not zero */

loc_003A2F5D: ;
    ecx = 0x497131;
    eax = 0x48E698;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2F75u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2F75: ;
    MEM32(ebp + -4) = 0;

loc_003A2F7C: ;
    eax = 0x49716B;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2F8Au); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2F8A: ;
    MEM32(0x969D6C) = eax;
    _fa = (uint32_t)(MEM32(0x969D6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D6C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2FB7; /* jne: not equal / not zero */

loc_003A2F98: ;
    ecx = 0x497131;
    eax = 0x49716B;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2FB0u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2FB0: ;
    MEM32(ebp + -4) = 0;

loc_003A2FB7: ;
    eax = 0x49140A;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2FC5u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A2FC5: ;
    MEM32(0x96A210) = eax;
    _fa = (uint32_t)(MEM32(0x96A210)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A210), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A2FF2; /* jne: not equal / not zero */

loc_003A2FD3: ;
    ecx = 0x497131;
    eax = 0x49140A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2FEBu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A2FEB: ;
    MEM32(ebp + -4) = 0;

loc_003A2FF2: ;
    eax = 0x45B015;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3000u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A3000: ;
    MEM32(0x969D74) = eax;
    _fa = (uint32_t)(MEM32(0x969D74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969D74), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A302D; /* jne: not equal / not zero */

loc_003A300E: ;
    ecx = 0x497131;
    eax = 0x45B015;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3026u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A3026: ;
    MEM32(ebp + -4) = 0;

loc_003A302D: ;
    eax = 0x47770C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A303Bu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A303B: ;
    MEM32(0x969CC0) = eax;
    _fa = (uint32_t)(MEM32(0x969CC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CC0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A3068; /* jne: not equal / not zero */

loc_003A3049: ;
    ecx = 0x497131;
    eax = 0x47770C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3061u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A3061: ;
    MEM32(ebp + -4) = 0;

loc_003A3068: ;
    eax = 0x47FF05;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3076u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A3076: ;
    MEM32(0x96A214) = eax;
    _fa = (uint32_t)(MEM32(0x96A214)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x96A214), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A30A3; /* jne: not equal / not zero */

loc_003A3084: ;
    ecx = 0x497131;
    eax = 0x47FF05;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A309Cu); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A309C: ;
    MEM32(ebp + -4) = 0;

loc_003A30A3: ;
    eax = 0x474AD8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A30B1u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A30B1: ;
    MEM32(0x969C9C) = eax;
    _fa = (uint32_t)(MEM32(0x969C9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969C9C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A30DE; /* jne: not equal / not zero */

loc_003A30BF: ;
    ecx = 0x497131;
    eax = 0x474AD8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A30D7u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A30D7: ;
    MEM32(ebp + -4) = 0;

loc_003A30DE: ;
    eax = 0x497177;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A30ECu); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A30EC: ;
    MEM32(0x969CA8) = eax;
    _fa = (uint32_t)(MEM32(0x969CA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CA8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A3119; /* jne: not equal / not zero */

loc_003A30FA: ;
    ecx = 0x497131;
    eax = 0x497177;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3112u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A3112: ;
    MEM32(ebp + -4) = 0;

loc_003A3119: ;
    eax = 0x441D24;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3127u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A3127: ;
    MEM32(0x969CAC) = eax;
    _fa = (uint32_t)(MEM32(0x969CAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CAC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A3154; /* jne: not equal / not zero */

loc_003A3135: ;
    ecx = 0x497131;
    eax = 0x441D24;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A314Du); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A314D: ;
    MEM32(ebp + -4) = 0;

loc_003A3154: ;
    eax = 0x4502E0;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3162u); RECOMP_ABI_CALL(0x00391D70u, sub_00391D70); /* call 0x00391D70 */

loc_003A3162: ;
    MEM32(0x969CB0) = eax;
    _fa = (uint32_t)(MEM32(0x969CB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x969CB0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A318F; /* jne: not equal / not zero */

loc_003A3170: ;
    ecx = 0x497131;
    eax = 0x4502E0;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3188u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A3188: ;
    MEM32(ebp + -4) = 0;

loc_003A318F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A34B0
 * Original: 0x003A34B0 - 0x003A34C3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A34B0(void)
{
    uint32_t ebp = g_ebp;

loc_003A34B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    eax = (int32_t)xmm0.f[0]; /* cvtss2si */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A34D0
 * Original: 0x003A34D0 - 0x003A350C (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A34D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A34D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A34E7; /* je: equal / zero */

loc_003A34DF: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_003A34F2;

loc_003A34E7: ;
    eax = 0x452F3B;
    MEM32(ebp + -4) = eax;
    goto loc_003A34F2;

loc_003A34F2: ;
    eax = MEM32(ebp + -4);
    ecx = 0x483220;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3507u); RECOMP_ABI_CALL(0x003BD310u, sub_003BD310); /* call 0x003BD310 */

loc_003A3507: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A350Cu); RECOMP_ABI_CALL(0x003DCC90u, sub_003DCC90); /* call 0x003DCC90 */

}


/**
 * sub_003A3510
 * Original: 0x003A3510 - 0x003A3776 (614 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3510(void)
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
loc_003A3510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x68)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + -40;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3539u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003A3539: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A3545; /* je: equal / zero */

loc_003A353F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A3551; /* jne: not equal / not zero */

loc_003A3545: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A376E;

loc_003A3551: ;
    goto loc_003A3553;

loc_003A3553: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A374D; /* je: equal / zero */

loc_003A355F: ;
    MEM32(ebp + -76) = 0;

loc_003A3566: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -81) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A3585; /* je: equal / zero */

loc_003A3576: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -81) = LO8(eax);

loc_003A3585: ;
    SET_LO8(eax, MEM8(ebp + -81));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003A358E; /* jne: not equal / not zero */

loc_003A358C: ;
    goto loc_003A3599;

loc_003A358E: ;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_003A3566;

loc_003A3599: ;
    goto loc_003A359B;

loc_003A359B: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -82) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A35BA; /* je: equal / zero */

loc_003A35AB: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -82) = LO8(eax);

loc_003A35BA: ;
    SET_LO8(eax, MEM8(ebp + -82));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003A35C3; /* jne: not equal / not zero */

loc_003A35C1: ;
    goto loc_003A3603;

loc_003A35C3: ;
    eax = MEM32(ebp + -76);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_003A35DA; /* jb: below (unsigned <) */

loc_003A35CE: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A376E;

loc_003A35DA: ;
    eax = MEM32(ebp + 8);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + 8) = ecx;
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A35F0u); RECOMP_ABI_CALL(0x003DB5E0u, sub_003DB5E0); /* call 0x003DB5E0 */

loc_003A35F0: ;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -76);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -76) = edx;
    MEM8(ebp + eax + -72) = LO8(ecx);
    goto loc_003A359B;

loc_003A3603: ;
    goto loc_003A3605;

loc_003A3605: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -83) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A363F; /* je: equal / zero */

loc_003A3610: ;
    eax = MEM32(ebp + -76);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = (uint32_t)(int32_t)SMEM8(ebp + eax + -72);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -84) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A3639; /* je: equal / zero */

loc_003A3625: ;
    eax = MEM32(ebp + -76);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = (uint32_t)(int32_t)SMEM8(ebp + eax + -72);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -84) = LO8(eax);

loc_003A3639: ;
    SET_LO8(eax, MEM8(ebp + -84));
    MEM8(ebp + -83) = LO8(eax);

loc_003A363F: ;
    SET_LO8(eax, MEM8(ebp + -83));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003A3648; /* jne: not equal / not zero */

loc_003A3646: ;
    goto loc_003A3653;

loc_003A3648: ;
    eax = MEM32(ebp + -76);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -76) = eax;
    goto loc_003A3605;

loc_003A3653: ;
    eax = MEM32(ebp + -76);
    MEM8(ebp + eax + -72) = 0;
    _fa = (uint32_t)(MEM32(ebp + -76)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -76), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A366D; /* jne: not equal / not zero */

loc_003A3661: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A376E;

loc_003A366D: ;
    ecx = ebp + -72;
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0x441D2F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3680u); RECOMP_ABI_CALL(0x00429B30u, sub_00429B30); /* call 0x00429B30 */

loc_003A3680: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A368E; /* jne: not equal / not zero */

loc_003A3685: ;
    MEM8(ebp + -6) = 1;
    goto loc_003A3721;

loc_003A368E: ;
    ecx = ebp + -72;
    eax = 0x44A1C8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A36ABu); RECOMP_ABI_CALL(0x0042A280u, sub_0042A280); /* call 0x0042A280 */

loc_003A36AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A36E4; /* jne: not equal / not zero */

loc_003A36B0: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -67);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_003A36E4; /* jl: less (signed <) */

loc_003A36B9: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -67);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_003A36E4; /* jg: greater (signed >) */

loc_003A36C2: ;
    _fa = (uint32_t)(MEM8(ebp + -66)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -66), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A36E4; /* jne: not equal / not zero */

loc_003A36C8: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + -67);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ZX8(LO8(eax));
    eax = ZX8(MEM8(ebp + -7));
    eax = eax | ecx;
    MEM8(ebp + -7) = LO8(eax);
    goto loc_003A371F;

loc_003A36E4: ;
    eax = ebp + -72;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A36EFu); RECOMP_ABI_CALL(0x003A3780u, sub_003A3780); /* call 0x003A3780 */

loc_003A36EF: ;
    MEM32(ebp + -80) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A3701; /* je: equal / zero */

loc_003A36F8: ;
    eax = ZX8(MEM8(ebp + -8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A370A; /* jne: not equal / not zero */

loc_003A3701: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A376E;

loc_003A370A: ;
    ecx = MEM32(ebp + -80);
    SET_LO8(eax, MEM8(ebp + -8));
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(ebp + -8) = LO8(edx);
    eax = ZX8(LO8(eax));
    MEM32(ebp + eax * 4 + -40) = ecx;

loc_003A371F: ;
    goto loc_003A3721;

loc_003A3721: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A3748; /* jne: not equal / not zero */

loc_003A372C: ;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A3746; /* jne: not equal / not zero */

loc_003A373D: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A376E;

loc_003A3746: ;
    goto loc_003A3748;

loc_003A3748: ;
    goto loc_003A3553;

loc_003A374D: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3767u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A3767: ;
    MEM32(ebp + -4) = 1;

loc_003A376E: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x68;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A3780
 * Original: 0x003A3780 - 0x003A385A (218 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3780(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003A3780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A3804; /* je: equal / zero */

loc_003A3794: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A3804; /* jne: not equal / not zero */

loc_003A379D: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_003A37C7; /* jl: less (signed <) */

loc_003A37A8: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_003A37C7; /* jg: greater (signed >) */

loc_003A37B3: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    eax = eax + 4;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x41)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_003A3852;

loc_003A37C7: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_003A37EE; /* jl: less (signed <) */

loc_003A37D2: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_G(_fas, _fbs)) goto loc_003A37EE; /* jg: greater (signed >) */

loc_003A37DD: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    eax = eax + 0x1E;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x31)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_003A3852;

loc_003A37EE: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A3802; /* jne: not equal / not zero */

loc_003A37F9: ;
    MEM32(ebp + -4) = 0x27;
    goto loc_003A3852;

loc_003A3802: ;
    goto loc_003A3804;

loc_003A3804: ;
    MEM32(ebp + -8) = 0;

loc_003A380B: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xF (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003A384B; /* jae: above or equal (unsigned >=) */

loc_003A3811: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    edx = MEM32(eax * 8 + 0x4D04C4);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A382Au); RECOMP_ABI_CALL(0x00429B30u, sub_00429B30); /* call 0x00429B30 */

loc_003A382A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A383E; /* jne: not equal / not zero */

loc_003A382F: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 8 + 0x4D04C8);
    MEM32(ebp + -4) = eax;
    goto loc_003A3852;

loc_003A383E: ;
    goto loc_003A3840;

loc_003A3840: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003A380B;

loc_003A384B: ;
    MEM32(ebp + -4) = 0;

loc_003A3852: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A3860
 * Original: 0x003A3860 - 0x003A3912 (178 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3860(void)
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
loc_003A3860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;

loc_003A3879: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx + 0x20));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003A38AF; /* jae: above or equal (unsigned >=) */

loc_003A3887: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -8);
    ecx = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A38A2; /* je: equal / zero */

loc_003A3899: ;
    MEM32(ebp + -4) = 1;
    goto loc_003A390A;

loc_003A38A2: ;
    goto loc_003A38A4;

loc_003A38A4: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003A3879;

loc_003A38AF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A3903; /* je: equal / zero */

loc_003A38B5: ;
    MEM32(ebp + -8) = 1;

loc_003A38BC: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 5 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_A(_fa, _fb)) goto loc_003A3901; /* ja: above (unsigned >) */

loc_003A38C2: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax + 0x21));
    ecx = MEM32(ebp + -8);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A38F4; /* je: equal / zero */

loc_003A38DC: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A38F4; /* je: equal / zero */

loc_003A38EB: ;
    MEM32(ebp + -4) = 1;
    goto loc_003A390A;

loc_003A38F4: ;
    goto loc_003A38F6;

loc_003A38F6: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003A38BC;

loc_003A3901: ;
    goto loc_003A3903;

loc_003A3903: ;
    MEM32(ebp + -4) = 0;

loc_003A390A: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A3C30
 * Original: 0x003A3C30 - 0x003A3C35 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3C30(void)
{
    uint32_t ebp = g_ebp;

loc_003A3C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A3C40
 * Original: 0x003A3C40 - 0x003A3C4B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3C40(void)
{
    uint32_t ebp = g_ebp;

loc_003A3C40: ;
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
 * sub_003A3C50
 * Original: 0x003A3C50 - 0x003A3D14 (196 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3C50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A3C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x30;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = 0;
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = ebp + -16;
    eax = ebp + -20;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3C85u); RECOMP_ABI_CALL(0x003A3D20u, sub_003A3D20); /* call 0x003A3D20 */

loc_003A3C85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A3C93; /* jne: not equal / not zero */

loc_003A3C8A: ;
    MEM32(ebp + -12) = 0;
    goto loc_003A3D0A;

loc_003A3C93: ;
    eax = 0xCEAC70;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3CA1u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_003A3CA1: ;
    edi = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(edi, 0xC, 32, 0, NULL, &_shift_of);
    edi = _shift_result;
    edi = edi + 0x80000000u;
    esi = MEM32(ebp + -20);
    esi = esi - MEM32(ebp + -16);
    esi = esi + 1;
    edx = 0xCEAC88;
    eax = (uint32_t)((int32_t)MEM32(ebp + -16) * (int32_t)0x18);
    edx = edx + eax;
    ecx = 0x5ACBCC;
    eax = ebp + -24;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3CE3u); RECOMP_ABI_CALL(0x700000F0u, host_memory_fingerprint_range); /* call 0x700000F0 */

loc_003A3CE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A3CF6; /* jne: not equal / not zero */

loc_003A3CE8: ;
    eax = 0x47D40F;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3CF6u); RECOMP_ABI_CALL(0x70000020u, host_abort); /* call 0x70000020 */

loc_003A3CF6: ;
    eax = 0xCEAC70;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3D04u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A3D04: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -12) = eax;

loc_003A3D0A: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A3D20
 * Original: 0x003A3D20 - 0x003A3DE0 (192 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3D20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A3D20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A3D41; /* je: equal / zero */

loc_003A3D38: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x80000000u (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A3D4D; /* jae: above or equal (unsigned >=) */

loc_003A3D41: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A3DD8;

loc_003A3D4D: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0x80000000u;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x8000000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A3D70; /* jae: above or equal (unsigned >=) */

loc_003A3D61: ;
    eax = MEM32(ebp + 0xC);
    ecx = 0x8000000;
    ecx = ecx - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003A3D79; /* jbe: below or equal (unsigned <=) */

loc_003A3D70: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A3DD8;

loc_003A3D79: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3D84u); RECOMP_ABI_CALL(0x003BF420u, sub_003BF420); /* call 0x003BF420 */

loc_003A3D84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A3D9F; /* je: equal / zero */

loc_003A3D89: ;
    eax = MEM32(ebp + 8);
    eax = eax + MEM32(ebp + 0xC);
    eax = eax - 1;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3D9Au); RECOMP_ABI_CALL(0x003BF420u, sub_003BF420); /* call 0x003BF420 */

loc_003A3D9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A3DA8; /* jne: not equal / not zero */

loc_003A3D9F: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A3DD8;

loc_003A3DA8: ;
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 0xC, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -8);
    ecx = ecx + MEM32(ebp + 0xC);
    ecx = ecx - 1;
    _shift_result = RECOMP_SHIFT(ecx, 0xC, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8000 (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -4) = eax;

loc_003A3DD8: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A3DE0
 * Original: 0x003A3DE0 - 0x003A3DF5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3DE0(void)
{
    uint32_t ebp = g_ebp;

loc_003A3DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 1;
    { uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(0x5ACBCC), eax);
      eax = _old; }  /* lock xadd */
    eax = eax + 1;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A3E00
 * Original: 0x003A3E00 - 0x003A3E23 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3E00(void)
{
    uint32_t ebp = g_ebp;

loc_003A3E00: ;
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
    PUSH32(esp, 0x003A3E1Eu); RECOMP_ABI_CALL(0x003A3E30u, sub_003A3E30); /* call 0x003A3E30 */

loc_003A3E1E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A3E30
 * Original: 0x003A3E30 - 0x003A3ECC (156 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3E30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A3E30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = ebp + -8;
    eax = ebp + -12;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3E5Du); RECOMP_ABI_CALL(0x003A3D20u, sub_003A3D20); /* call 0x003A3D20 */

loc_003A3E5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A3E64; /* jne: not equal / not zero */

loc_003A3E62: ;
    goto loc_003A3EC6;

loc_003A3E64: ;
    eax = 0xCEAC70;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3E72u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_003A3E72: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -16) = eax;

loc_003A3E78: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003A3EB8; /* ja: above (unsigned >) */

loc_003A3E80: ;
    eax = MEM32(ebp + -16);
    eax = eax + eax * 2;
    MEM8(eax * 8 + 0xCEAC9C) = 0;
    ecx = 1;
    { uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(0x5ACBCC), ecx);
      ecx = _old; }  /* lock xadd */
    ecx = ecx + 1;
    eax = 0xCEAC88;
    edx = (uint32_t)((int32_t)MEM32(ebp + -16) * (int32_t)0x18);
    eax = eax + edx;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_003A3E78;

loc_003A3EB8: ;
    eax = 0xCEAC70;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3EC6u); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_003A3EC6: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A3ED0
 * Original: 0x003A3ED0 - 0x003A3EF3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3ED0(void)
{
    uint32_t ebp = g_ebp;

loc_003A3ED0: ;
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
    PUSH32(esp, 0x003A3EEEu); RECOMP_ABI_CALL(0x003A3E30u, sub_003A3E30); /* call 0x003A3E30 */

loc_003A3EEE: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4210
 * Original: 0x003A4210 - 0x003A426D (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4210(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A4210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003A421C: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A422Au); RECOMP_ABI_CALL(0x003DB570u, sub_003DB570); /* call 0x003DB570 */

loc_003A422A: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A423Bu); RECOMP_ABI_CALL(0x003DB570u, sub_003DB570); /* call 0x003DB570 */

loc_003A423B: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A424C; /* jne: not equal / not zero */

loc_003A4246: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A4257; /* jne: not equal / not zero */

loc_003A424C: ;
    eax = MEM32(ebp + -4);
    eax = eax - MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_003A4257: ;
    goto loc_003A4259;

loc_003A4259: ;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 1;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A421C;

}


/**
 * sub_003A4270
 * Original: 0x003A4270 - 0x003A42EE (126 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4270(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003A4270: ;
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

loc_003A427F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A42DF; /* je: equal / zero */

loc_003A4285: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4293u); RECOMP_ABI_CALL(0x003DB570u, sub_003DB570); /* call 0x003DB570 */

loc_003A4293: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A42A4u); RECOMP_ABI_CALL(0x003DB570u, sub_003DB570); /* call 0x003DB570 */

loc_003A42A4: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A42B5; /* jne: not equal / not zero */

loc_003A42AF: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A42C0; /* jne: not equal / not zero */

loc_003A42B5: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -12))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_003A42E6;

loc_003A42C0: ;
    goto loc_003A42C2;

loc_003A42C2: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 1;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A427F;

loc_003A42DF: ;
    MEM32(ebp + -4) = 0;

loc_003A42E6: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A42F0
 * Original: 0x003A42F0 - 0x003A4340 (80 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A42F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A42F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4305u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A4305: ;
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4316u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_003A4316: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4338; /* je: equal / zero */

loc_003A431F: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -4);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4338u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A4338: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4340
 * Original: 0x003A4340 - 0x003A437F (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A4340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003A434F: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4377; /* je: equal / zero */

loc_003A4357: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4365u); RECOMP_ABI_CALL(0x003DB570u, sub_003DB570); /* call 0x003DB570 */

loc_003A4365: ;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -4);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A434F;

loc_003A4377: ;
    eax = MEM32(ebp + 8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4380
 * Original: 0x003A4380 - 0x003A43BF (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4380(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A4380: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003A438F: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A43B7; /* je: equal / zero */

loc_003A4397: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A43A5u); RECOMP_ABI_CALL(0x003DB5E0u, sub_003DB5E0); /* call 0x003DB5E0 */

loc_003A43A5: ;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -4);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A438F;

loc_003A43B7: ;
    eax = MEM32(ebp + 8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A43C0
 * Original: 0x003A43C0 - 0x003A4433 (115 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A43C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A43C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A4404; /* jne: not equal / not zero */

loc_003A43D6: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A4404; /* jge: greater or equal (signed >=) */

loc_003A43DC: ;
    edx = 0; /* xor self */
    edx = edx - MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A43FFu); RECOMP_ABI_CALL(0x003A4440u, sub_003A4440); /* call 0x003A4440 */

loc_003A43FF: ;
    MEM32(ebp + -8) = eax;
    goto loc_003A442A;

loc_003A4404: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4427u); RECOMP_ABI_CALL(0x003A4440u, sub_003A4440); /* call 0x003A4440 */

loc_003A4427: ;
    MEM32(ebp + -8) = eax;

loc_003A442A: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4440
 * Original: 0x003A4440 - 0x003A451B (219 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4440(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A4440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -44) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A446B; /* jl: less (signed <) */

loc_003A4465: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x24 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003A447C; /* jle: less or equal (signed <=) */

loc_003A446B: ;
    eax = MEM32(ebp + 0xC);
    MEM8(eax) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    goto loc_003A4513;

loc_003A447C: ;
    goto loc_003A447E;

loc_003A447E: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0x10));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0x10)); }
    MEM32(ebp + -52) = edx;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A449A; /* jge: greater or equal (signed >=) */

loc_003A448F: ;
    eax = MEM32(ebp + -52);
    eax = eax + 0x30;
    MEM32(ebp + -56) = eax;
    goto loc_003A44A6;

loc_003A449A: ;
    eax = MEM32(ebp + -52);
    eax = eax + 0x61;
    eax = eax - 0xA;
    MEM32(ebp + -56) = eax;

loc_003A44A6: ;
    eax = MEM32(ebp + -56);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -44);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -44) = edx;
    MEM8(ebp + eax + -40) = LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A447E; /* jne: not equal / not zero */

loc_003A44CD: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A44E1; /* je: equal / zero */

loc_003A44D3: ;
    eax = MEM32(ebp + -48);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -48) = ecx;
    MEM8(eax) = 0x2D;

loc_003A44E1: ;
    goto loc_003A44E3;

loc_003A44E3: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4507; /* je: equal / zero */

loc_003A44E9: ;
    eax = MEM32(ebp + -44);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + -44) = ecx;
    SET_LO8(ecx, MEM8(ebp + eax + -41));
    eax = MEM32(ebp + -48);
    edx = eax;
    edx = edx + 1;
    MEM32(ebp + -48) = edx;
    MEM8(eax) = LO8(ecx);
    goto loc_003A44E3;

loc_003A4507: ;
    eax = MEM32(ebp + -48);
    MEM8(eax) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;

loc_003A4513: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4520
 * Original: 0x003A4520 - 0x003A454D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4520(void)
{
    uint32_t ebp = g_ebp;

loc_003A4520: ;
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
    PUSH32(esp, 0x003A4548u); RECOMP_ABI_CALL(0x003A43C0u, sub_003A43C0); /* call 0x003A43C0 */

loc_003A4548: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4550
 * Original: 0x003A4550 - 0x003A4589 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4550(void)
{
    uint32_t ebp = g_ebp;

loc_003A4550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4583u); RECOMP_ABI_CALL(0x003A4440u, sub_003A4440); /* call 0x003A4440 */

loc_003A4583: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4590
 * Original: 0x003A4590 - 0x003A4796 (518 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A4590: ;
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
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;
    MEM32(ebp + -12) = 0;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A45F9; /* je: equal / zero */

loc_003A45C4: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A45F9; /* jne: not equal / not zero */

loc_003A45D0: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A45EE; /* je: equal / zero */

loc_003A45D6: ;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 1) = 0x3A;
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 2) = 0;

loc_003A45EE: ;
    eax = MEM32(ebp + -4);
    eax = eax + 2;
    MEM32(ebp + -4) = eax;
    goto loc_003A4607;

loc_003A45F9: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4605; /* je: equal / zero */

loc_003A45FF: ;
    eax = MEM32(ebp + 0xC);
    MEM8(eax) = 0;

loc_003A4605: ;
    goto loc_003A4607;

loc_003A4607: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;

loc_003A460D: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4653; /* je: equal / zero */

loc_003A4615: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A462B; /* je: equal / zero */

loc_003A4620: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A4633; /* jne: not equal / not zero */

loc_003A462B: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;
    goto loc_003A4646;

loc_003A4633: ;
    eax = MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A4644; /* jne: not equal / not zero */

loc_003A463E: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;

loc_003A4644: ;
    goto loc_003A4646;

loc_003A4646: ;
    goto loc_003A4648;

loc_003A4648: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_003A460D;

loc_003A4653: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A466E; /* je: equal / zero */

loc_003A4659: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A466E; /* je: equal / zero */

loc_003A465F: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A466E; /* jae: above or equal (unsigned >=) */

loc_003A4667: ;
    MEM32(ebp + -12) = 0;

loc_003A466E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A46CA; /* je: equal / zero */

loc_003A4674: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A468A; /* je: equal / zero */

loc_003A467A: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax = eax - ecx;
    eax = eax + 1;
    MEM32(ebp + -28) = eax;
    goto loc_003A4691;

loc_003A468A: ;
    eax = 0; /* xor self */
    MEM32(ebp + -28) = eax;
    goto loc_003A4691;

loc_003A4691: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A46A7; /* jb: below (unsigned <) */

loc_003A46A0: ;
    MEM32(ebp + -20) = 0xFF;

loc_003A46A7: ;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -20);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A46C0u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A46C0: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -20);
    MEM8(eax + ecx) = 0;

loc_003A46CA: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A46DB; /* je: equal / zero */

loc_003A46D0: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -32) = eax;
    goto loc_003A46E1;

loc_003A46DB: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -32) = eax;

loc_003A46E1: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4748; /* je: equal / zero */

loc_003A46ED: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4700; /* je: equal / zero */

loc_003A46F3: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -4);
    eax = eax - ecx;
    MEM32(ebp + -36) = eax;
    goto loc_003A470F;

loc_003A4700: ;
    ecx = MEM32(ebp + -4);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A470Cu); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A470C: ;
    MEM32(ebp + -36) = eax;

loc_003A470F: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A4725; /* jb: below (unsigned <) */

loc_003A471E: ;
    MEM32(ebp + -24) = 0xFF;

loc_003A4725: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A473Eu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A473E: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -24);
    MEM8(eax + ecx) = 0;

loc_003A4748: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4791; /* je: equal / zero */

loc_003A474E: ;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -40) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4762; /* je: equal / zero */

loc_003A475A: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -44) = eax;
    goto loc_003A476D;

loc_003A4762: ;
    eax = 0x452F3B;
    MEM32(ebp + -44) = eax;
    goto loc_003A476D;

loc_003A476D: ;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -44);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4787u); RECOMP_ABI_CALL(0x0042A340u, sub_0042A340); /* call 0x0042A340 */

loc_003A4787: ;
    eax = MEM32(ebp + 0x18);
    MEM8(eax + 0xFF) = 0;

loc_003A4791: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A47A0
 * Original: 0x003A47A0 - 0x003A48C8 (296 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A47A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A47A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM8(eax) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A47FB; /* je: equal / zero */

loc_003A47C1: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A47FB; /* je: equal / zero */

loc_003A47CC: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A47E6u); RECOMP_ABI_CALL(0x0042A1F0u, sub_0042A1F0); /* call 0x0042A1F0 */

loc_003A47E6: ;
    ecx = MEM32(ebp + 8);
    eax = 0x46D380;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A47FBu); RECOMP_ABI_CALL(0x00429960u, sub_00429960); /* call 0x00429960 */

loc_003A47FB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4868; /* je: equal / zero */

loc_003A4801: ;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4868; /* je: equal / zero */

loc_003A480C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A481Eu); RECOMP_ABI_CALL(0x00429960u, sub_00429960); /* call 0x00429960 */

loc_003A481E: ;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A482Au); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A482A: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ecx = ecx - 1;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4866; /* je: equal / zero */

loc_003A483F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ecx = ecx - 1;
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4866; /* je: equal / zero */

loc_003A4851: ;
    ecx = MEM32(ebp + 8);
    eax = 0x4553C5;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4866u); RECOMP_ABI_CALL(0x00429960u, sub_00429960); /* call 0x00429960 */

loc_003A4866: ;
    goto loc_003A4868;

loc_003A4868: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4880; /* je: equal / zero */

loc_003A486E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4880u); RECOMP_ABI_CALL(0x00429960u, sub_00429960); /* call 0x00429960 */

loc_003A4880: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A48C3; /* je: equal / zero */

loc_003A4886: ;
    eax = MEM32(ebp + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A48C3; /* je: equal / zero */

loc_003A4891: ;
    eax = MEM32(ebp + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A48B1; /* je: equal / zero */

loc_003A489C: ;
    ecx = MEM32(ebp + 8);
    eax = 0x454B21;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A48B1u); RECOMP_ABI_CALL(0x00429960u, sub_00429960); /* call 0x00429960 */

loc_003A48B1: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A48C3u); RECOMP_ABI_CALL(0x00429960u, sub_00429960); /* call 0x00429960 */

loc_003A48C3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A48D0
 * Original: 0x003A48D0 - 0x003A4953 (131 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A48D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A48D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A490B; /* jne: not equal / not zero */

loc_003A48E5: ;
    MEM32(ebp + 0x10) = 0x104;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A48F7u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_003A48F7: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A4909; /* jne: not equal / not zero */

loc_003A4900: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A494B;

loc_003A4909: ;
    goto loc_003A490B;

loc_003A490B: ;
    ecx = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4917u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A4917: ;
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003A4933; /* jbe: below or equal (unsigned <=) */

loc_003A491F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4924u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003A4924: ;
    MEM32(eax) = 0x22;
    MEM32(ebp + -4) = 0;
    goto loc_003A494B;

loc_003A4933: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4945u); RECOMP_ABI_CALL(0x00429B90u, sub_00429B90); /* call 0x00429B90 */

loc_003A4945: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003A494B: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4960
 * Original: 0x003A4960 - 0x003A49CC (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4960(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A4960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + -28;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4977u); RECOMP_ABI_CALL(0x003DDFF4u, sub_003DDFF4); /* call 0x003DDFF4 */

loc_003A4977: ;
    eax = ZX16(MEM16(ebp + -28));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4983u); RECOMP_ABI_CALL(0x003A49D0u, sub_003A49D0); /* call 0x003A49D0 */

loc_003A4983: ;
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A49C4; /* je: equal / zero */

loc_003A498C: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0xC);
    ecx = ecx ^ 0xFFFFFFFFu;
    eax = eax & ecx;
    ecx = MEM32(ebp + 8);
    ecx = ecx & MEM32(ebp + 0xC);
    eax = eax | ecx;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    eax = ZX16(MEM16(ebp + -28));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A49B5u); RECOMP_ABI_CALL(0x003A4A90u, sub_003A4A90); /* call 0x003A4A90 */

loc_003A49B5: ;
    MEM16(ebp + -28) = LO16(eax);
    eax = ebp + -28;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A49C4u); RECOMP_ABI_CALL(0x003DE01Eu, sub_003DE01E); /* call 0x003DE01E */

loc_003A49C4: ;
    eax = MEM32(ebp + -32);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A49D0
 * Original: 0x003A49D0 - 0x003A4A90 (192 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A49D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A49D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -8) = 0;

loc_003A49E8: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 6 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A4A21; /* jae: above or equal (unsigned >=) */

loc_003A49EE: ;
    eax = ZX16(MEM16(ebp + 8));
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx * 8 + 0x4D0960));
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4A14; /* je: equal / zero */

loc_003A4A04: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 8 + 0x4D095C);
    eax = eax | MEM32(ebp + -4);
    MEM32(ebp + -4) = eax;

loc_003A4A14: ;
    goto loc_003A4A16;

loc_003A4A16: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003A49E8;

loc_003A4A21: ;
    eax = ZX8(MEM8(ebp + 9));
    eax = eax & 3;
    MEM32(ebp + -12) = eax;
    if ((eax == 0)) goto loc_003A4A39; /* je: equal / zero */

loc_003A4A2D: ;
    goto loc_003A4A2F;

loc_003A4A2F: ;
    eax = MEM32(ebp + -12);
    eax = eax - 2;
    if ((eax == 0)) goto loc_003A4A46; /* je: equal / zero */

loc_003A4A37: ;
    goto loc_003A4A53;

loc_003A4A39: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x20000;
    MEM32(ebp + -4) = eax;
    goto loc_003A4A5C;

loc_003A4A46: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x10000;
    MEM32(ebp + -4) = eax;
    goto loc_003A4A5C;

loc_003A4A53: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0;
    MEM32(ebp + -4) = eax;

loc_003A4A5C: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = RECOMP_SAR(eax, 0xA, 32, NULL);
    eax = eax & 3;
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | MEM32(ebp + -4);
    MEM32(ebp + -4) = eax;
    eax = ZX16(MEM16(ebp + 8));
    eax = eax & 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4A88; /* je: equal / zero */

loc_003A4A7D: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x40000;
    MEM32(ebp + -4) = eax;

loc_003A4A88: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4A90
 * Original: 0x003A4A90 - 0x003A4B67 (215 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4A90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A4A90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 0xE0C0;
    MEM16(ebp + 0xC) = LO16(eax);
    MEM32(ebp + -4) = 0;

loc_003A4AB1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 6 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A4AEB; /* jae: above or equal (unsigned >=) */

loc_003A4AB7: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    eax = eax & MEM32(ecx * 8 + 0x4D095C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4ADE; /* je: equal / zero */

loc_003A4AC9: ;
    eax = MEM32(ebp + -4);
    ecx = ZX16(MEM16(eax * 8 + 0x4D0960));
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax | ecx;
    MEM16(ebp + 0xC) = LO16(eax);

loc_003A4ADE: ;
    goto loc_003A4AE0;

loc_003A4AE0: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A4AB1;

loc_003A4AEB: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0x30000;
    MEM32(ebp + -8) = eax;
    eax = eax - 0x10000;
    if ((eax == 0)) goto loc_003A4B0D; /* je: equal / zero */

loc_003A4AFD: ;
    goto loc_003A4AFF;

loc_003A4AFF: ;
    eax = MEM32(ebp + -8);
    eax = eax - 0x20000;
    if ((eax != 0)) goto loc_003A4B1C; /* jne: not equal / not zero */

loc_003A4B09: ;
    goto loc_003A4B0B;

loc_003A4B0B: ;
    goto loc_003A4B29;

loc_003A4B0D: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax | 0x200;
    MEM16(ebp + 0xC) = LO16(eax);
    goto loc_003A4B29;

loc_003A4B1C: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax | 0x300;
    MEM16(ebp + 0xC) = LO16(eax);

loc_003A4B29: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0x300;
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _shift_result = RECOMP_SHIFT(eax, 0xA, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ZX16(LO16(eax));
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax | ecx;
    MEM16(ebp + 0xC) = LO16(eax);
    eax = MEM32(ebp + 8);
    eax = eax & 0x40000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A4B5E; /* je: equal / zero */

loc_003A4B51: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax | 0x1000;
    MEM16(ebp + 0xC) = LO16(eax);

loc_003A4B5E: ;
    SET_LO16(eax, MEM16(ebp + 0xC));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4B70
 * Original: 0x003A4B70 - 0x003A4B98 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4B70(void)
{
    uint32_t ebp = g_ebp;

loc_003A4B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xFFF7FFFFu;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4B93u); RECOMP_ABI_CALL(0x003A4960u, sub_003A4960); /* call 0x003A4960 */

loc_003A4B93: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4BA0
 * Original: 0x003A4BA0 - 0x003A4BBD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4BA0(void)
{
    uint32_t ebp = g_ebp;

loc_003A4BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = ebp + -28;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4BB1u); RECOMP_ABI_CALL(0x003DDFF4u, sub_003DDFF4); /* call 0x003DDFF4 */

loc_003A4BB1: ;
    eax = ZX16(MEM16(ebp + -24));
    eax = eax & 0x3F;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4BC0
 * Original: 0x003A4BC0 - 0x003A4BFB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4BC0(void)
{
    uint32_t ebp = g_ebp;

loc_003A4BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = ebp + -28;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4BD1u); RECOMP_ABI_CALL(0x003DDFF4u, sub_003DDFF4); /* call 0x003DDFF4 */

loc_003A4BD1: ;
    eax = ZX16(MEM16(ebp + -24));
    eax = eax & 0x3F;
    MEM32(ebp + -32) = eax;
    eax = ZX16(MEM16(ebp + -24));
    eax = eax & 0xFF00;
    MEM16(ebp + -24) = LO16(eax);
    eax = ebp + -28;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4BF3u); RECOMP_ABI_CALL(0x003DE01Eu, sub_003DE01E); /* call 0x003DE01E */

loc_003A4BF3: ;
    eax = MEM32(ebp + -32);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4C00
 * Original: 0x003A4C00 - 0x003A4C37 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4C00(void)
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

loc_003A4C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4C1Bu); RECOMP_ABI_CALL(0x003A4C40u, sub_003A4C40); /* call 0x003A4C40 */

loc_003A4C1B: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FFFFFFF;
    _cf = (int)((eax) != 0);
    eax = (0u - (uint32_t)(eax));
    eax = 0x7FF00000;
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
    SET_LO8(eax, (_cf) ? 1 : 0); /* setb */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4C40
 * Original: 0x003A4C40 - 0x003A4C60 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4C40(void)
{
    uint32_t ebp = g_ebp;

loc_003A4C40: ;
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
 * sub_003A4C60
 * Original: 0x003A4C60 - 0x003A4C97 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4C60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A4C60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    eax = esp;
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4C7Bu); RECOMP_ABI_CALL(0x003A4C40u, sub_003A4C40); /* call 0x003A4C40 */

loc_003A4C7B: ;
    eax = edx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF00000;
    _shift_result = RECOMP_SHIFT(eax, 0x14, 32, 1, &_cf, &_shift_of);
    eax = _shift_result;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x7FF));
    eax = eax - 0x7FF;
    SET_LO8(eax, (_cf) ? 1 : 0); /* setb */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4CA0
 * Original: 0x003A4CA0 - 0x003A4CD7 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4CA0(void)
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

loc_003A4CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    eax = esp;
    MEMD(eax + 8) = xmm1.d[0]; /* movsd */
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4CCAu); RECOMP_ABI_CALL(0x003F9AE0u, sub_003F9AE0); /* call 0x003F9AE0 */

loc_003A4CCA: ;
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
 * sub_003A4CE0
 * Original: 0x003A4CE0 - 0x003A4D24 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4CE0(void)
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

loc_003A4CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_MEM(0x43ECC0); /* movaps */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(ebp + 0x10)); /* movsd */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm2 = XMM_MEM(0x43EC00); /* movaps */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + 8)); /* movsd */
    xmm0 = XMM_AND(xmm0, xmm2); /* pand */
    xmm0 = XMM_OR(xmm0, xmm1); /* por */
    xmm1 = xmm0; /* movaps */
    XMM_STORE_LOW(ebp + -8, xmm0); /* movlpd */
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
 * sub_003A4D30
 * Original: 0x003A4D30 - 0x003A4D49 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4D30(void)
{
    uint32_t ebp = g_ebp;

loc_003A4D30: ;
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
    PUSH32(esp, 0x003A4D44u); RECOMP_ABI_CALL(0x003E92C0u, sub_003E92C0); /* call 0x003E92C0 */

loc_003A4D44: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4D50
 * Original: 0x003A4D50 - 0x003A4D60 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4D50(void)
{
    uint32_t ebp = g_ebp;

loc_003A4D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4D5Bu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003A4D5B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4D60
 * Original: 0x003A4D60 - 0x003A4DC7 (103 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4D60(void)
{
    uint32_t ebp = g_ebp;

loc_003A4D60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x414;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -1032) = eax;
    ecx = MEM32(ebp + 0x10);
    eax = ebp + -1028;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4D9Fu); RECOMP_ABI_CALL(0x003A4DD0u, sub_003A4DD0); /* call 0x003A4DD0 */

loc_003A4D9F: ;
    edx = MEM32(ebp + -1032);
    ecx = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4DBEu); RECOMP_ABI_CALL(0x00425550u, sub_00425550); /* call 0x00425550 */

loc_003A4DBE: ;
    esp = esp + 0x414;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4DD0
 * Original: 0x003A4DD0 - 0x003A4FC9 (505 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4DD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003A4DD0: ;
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
    MEM32(ebp + -16) = 0;
    ecx = MEM32(ebp + 8);
    eax = 0x44A1D8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4DFCu); RECOMP_ABI_CALL(0x0042A6C0u, sub_0042A6C0); /* call 0x0042A6C0 */

loc_003A4DFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A4E26; /* jne: not equal / not zero */

loc_003A4E01: ;
    ecx = MEM32(ebp + 8);
    eax = 0x497184;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4E16u); RECOMP_ABI_CALL(0x0042A6C0u, sub_0042A6C0); /* call 0x0042A6C0 */

loc_003A4E16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A4E26; /* jne: not equal / not zero */

loc_003A4E1B: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    goto loc_003A4FC0;

loc_003A4E26: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;

loc_003A4E2C: ;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -17) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A4E4B; /* je: equal / zero */

loc_003A4E3C: ;
    eax = MEM32(ebp + -16);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -17) = LO8(eax);

loc_003A4E4B: ;
    SET_LO8(eax, MEM8(ebp + -17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003A4E57; /* jne: not equal / not zero */

loc_003A4E52: ;
    goto loc_003A4FB0;

loc_003A4E57: ;
    eax = MEM32(ebp + -12);
    SET_LO8(edx, MEM8(eax));
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    esi = ecx;
    esi = esi + 1;
    MEM32(ebp + -16) = esi;
    MEM8(eax + ecx) = LO8(edx);
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A4E7D; /* je: equal / zero */

loc_003A4E78: ;
    goto loc_003A4FA2;

loc_003A4E7D: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A4EAD; /* jne: not equal / not zero */

loc_003A4E89: ;
    eax = MEM32(ebp + -12);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -12) = ecx;
    SET_LO8(edx, MEM8(eax + 1));
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    esi = ecx;
    esi = esi + 1;
    MEM32(ebp + -16) = esi;
    MEM8(eax + ecx) = LO8(edx);
    goto loc_003A4FA2;

loc_003A4EAD: ;
    goto loc_003A4EAF;

loc_003A4EAF: ;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 1);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -18) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A4EF4; /* je: equal / zero */

loc_003A4EC0: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    ecx = 0x47FF11;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4ED9u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_003A4ED9: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -18) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A4EF4; /* je: equal / zero */

loc_003A4EE5: ;
    eax = MEM32(ebp + -16);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -18) = LO8(eax);

loc_003A4EF4: ;
    SET_LO8(eax, MEM8(ebp + -18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003A4EFD; /* jne: not equal / not zero */

loc_003A4EFB: ;
    goto loc_003A4F1E;

loc_003A4EFD: ;
    eax = MEM32(ebp + -12);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -12) = ecx;
    SET_LO8(edx, MEM8(eax + 1));
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    esi = ecx;
    esi = esi + 1;
    MEM32(ebp + -16) = esi;
    MEM8(eax + ecx) = LO8(edx);
    goto loc_003A4EAF;

loc_003A4F1E: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A4F71; /* jne: not equal / not zero */

loc_003A4F2A: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A4F71; /* jne: not equal / not zero */

loc_003A4F36: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + 3);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A4F71; /* jne: not equal / not zero */

loc_003A4F42: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -16) = edx;
    MEM8(eax + ecx) = 0x6C;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + -16) = edx;
    MEM8(eax + ecx) = 0x6C;
    eax = MEM32(ebp + -12);
    eax = eax + 3;
    MEM32(ebp + -12) = eax;
    goto loc_003A4FA0;

loc_003A4F71: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A4F9E; /* jne: not equal / not zero */

loc_003A4F7D: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A4F9E; /* jne: not equal / not zero */

loc_003A4F89: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM8(eax + 3);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A4F9E; /* jne: not equal / not zero */

loc_003A4F95: ;
    eax = MEM32(ebp + -12);
    eax = eax + 3;
    MEM32(ebp + -12) = eax;

loc_003A4F9E: ;
    goto loc_003A4FA0;

loc_003A4FA0: ;
    goto loc_003A4FA2;

loc_003A4FA2: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_003A4E2C;

loc_003A4FB0: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    MEM8(eax + ecx) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;

loc_003A4FC0: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A4FD0
 * Original: 0x003A4FD0 - 0x003A5012 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4FD0(void)
{
    uint32_t ebp = g_ebp;

loc_003A4FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x14;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5005u); RECOMP_ABI_CALL(0x003A4D60u, sub_003A4D60); /* call 0x003A4D60 */

loc_003A5005: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5020
 * Original: 0x003A5020 - 0x003A507B (91 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5020(void)
{
    uint32_t ebp = g_ebp;

loc_003A5020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x418;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -1028) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5058u); RECOMP_ABI_CALL(0x003A4DD0u, sub_003A4DD0); /* call 0x003A4DD0 */

loc_003A5058: ;
    edx = MEM32(ebp + -1028);
    ecx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5073u); RECOMP_ABI_CALL(0x00425760u, sub_00425760); /* call 0x00425760 */

loc_003A5073: ;
    esp = esp + 0x418;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5080
 * Original: 0x003A5080 - 0x003A50B7 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5080(void)
{
    uint32_t ebp = g_ebp;

loc_003A5080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x10;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -8);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A50ABu); RECOMP_ABI_CALL(0x003A5020u, sub_003A5020); /* call 0x003A5020 */

loc_003A50AB: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A50C0
 * Original: 0x003A50C0 - 0x003A511B (91 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A50C0(void)
{
    uint32_t ebp = g_ebp;

loc_003A50C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x418;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -1028) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A50F8u); RECOMP_ABI_CALL(0x003A4DD0u, sub_003A4DD0); /* call 0x003A4DD0 */

loc_003A50F8: ;
    edx = MEM32(ebp + -1028);
    ecx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5113u); RECOMP_ABI_CALL(0x0041F6F0u, sub_0041F6F0); /* call 0x0041F6F0 */

loc_003A5113: ;
    esp = esp + 0x418;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5120
 * Original: 0x003A5120 - 0x003A5157 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5120(void)
{
    uint32_t ebp = g_ebp;

loc_003A5120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x10;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -8);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A514Bu); RECOMP_ABI_CALL(0x003A50C0u, sub_003A50C0); /* call 0x003A50C0 */

loc_003A514B: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5160
 * Original: 0x003A5160 - 0x003A518D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5160(void)
{
    uint32_t ebp = g_ebp;

loc_003A5160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = 0x838EDC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5188u); RECOMP_ABI_CALL(0x003A50C0u, sub_003A50C0); /* call 0x003A50C0 */

loc_003A5188: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5190
 * Original: 0x003A5190 - 0x003A51C3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5190(void)
{
    uint32_t ebp = g_ebp;

loc_003A5190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = ebp + 0xC;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -4);
    eax = esp;
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x838EDC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A51B8u); RECOMP_ABI_CALL(0x003A50C0u, sub_003A50C0); /* call 0x003A50C0 */

loc_003A51B8: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A51D0
 * Original: 0x003A51D0 - 0x003A5215 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A51D0(void)
{
    uint32_t ebp = g_ebp;

loc_003A51D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x418;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A51FCu); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A51FC: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A520Du); RECOMP_ABI_CALL(0x0041A200u, sub_0041A200); /* call 0x0041A200 */

loc_003A520D: ;
    esp = esp + 0x418;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5220
 * Original: 0x003A5220 - 0x003A5250 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5220(void)
{
    uint32_t ebp = g_ebp;

loc_003A5220: ;
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
    PUSH32(esp, 0x003A5248u); RECOMP_ABI_CALL(0x003BAD80u, sub_003BAD80); /* call 0x003BAD80 */

loc_003A5248: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5250
 * Original: 0x003A5250 - 0x003A52BB (107 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5250(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x418;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A528D; /* je: equal / zero */

loc_003A5268: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5285u); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A5285: ;
    MEM32(ebp + -1028) = eax;
    goto loc_003A5297;

loc_003A528D: ;
    eax = 0; /* xor self */
    MEM32(ebp + -1028) = eax;
    goto loc_003A5297;

loc_003A5297: ;
    edx = MEM32(ebp + -1028);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A52B3u); RECOMP_ABI_CALL(0x0041B3B0u, sub_0041B3B0); /* call 0x0041B3B0 */

loc_003A52B3: ;
    esp = esp + 0x418;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A52C0
 * Original: 0x003A52C0 - 0x003A52F9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A52C0(void)
{
    uint32_t ebp = g_ebp;

loc_003A52C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x418;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A52E9u); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A52E9: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A52F1u); RECOMP_ABI_CALL(0x0041E5E0u, sub_0041E5E0); /* call 0x0041E5E0 */

loc_003A52F1: ;
    esp = esp + 0x418;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5300
 * Original: 0x003A5300 - 0x003A5369 (105 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5300(void)
{
    uint32_t ebp = g_ebp;

loc_003A5300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x818;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A532Cu); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A532C: ;
    MEM32(ebp + -2052) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -2048;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A534Fu); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A534F: ;
    ecx = MEM32(ebp + -2052);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5361u); RECOMP_ABI_CALL(0x0041E730u, sub_0041E730); /* call 0x0041E730 */

loc_003A5361: ;
    esp = esp + 0x818;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5370
 * Original: 0x003A5370 - 0x003A5436 (198 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5370(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x424;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -1032) = 0;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A53B7; /* je: equal / zero */

loc_003A5395: ;
    eax = ebp + 0x10;
    MEM32(ebp + -1036) = eax;
    eax = MEM32(ebp + -1036);
    ecx = eax;
    ecx = ecx + 4;
    MEM32(ebp + -1036) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -1032) = eax;

loc_003A53B7: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -1028;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A53D4u); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A53D4: ;
    MEM32(ebp + -1044) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax | 0x80000;
    MEM32(ebp + -1040) = eax;
    _fa = (uint32_t)(MEM32(ebp + -1032)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1032), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A53FF; /* je: equal / zero */

loc_003A53F1: ;
    eax = MEM32(ebp + -1032);
    MEM32(ebp + -1048) = eax;
    goto loc_003A540C;

loc_003A53FF: ;
    eax = 0x1A4;
    MEM32(ebp + -1048) = eax;
    goto loc_003A540C;

loc_003A540C: ;
    ecx = MEM32(ebp + -1044);
    edx = MEM32(ebp + -1040);
    esi = MEM32(ebp + -1048);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A542Du); RECOMP_ABI_CALL(0x003DD880u, sub_003DD880); /* call 0x003DD880 */

loc_003A542D: ;
    esp = esp + 0x424;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5440
 * Original: 0x003A5440 - 0x003A5479 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5440(void)
{
    uint32_t ebp = g_ebp;

loc_003A5440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x418;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5469u); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A5469: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5471u); RECOMP_ABI_CALL(0x70000410u, posix_make_directory); /* call 0x70000410 */

loc_003A5471: ;
    esp = esp + 0x418;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5480
 * Original: 0x003A5480 - 0x003A54B9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5480(void)
{
    uint32_t ebp = g_ebp;

loc_003A5480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x418;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A54A9u); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A54A9: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A54B1u); RECOMP_ABI_CALL(0x0043BE00u, sub_0043BE00); /* call 0x0043BE00 */

loc_003A54B1: ;
    esp = esp + 0x418;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A54C0
 * Original: 0x003A54C0 - 0x003A54F9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A54C0(void)
{
    uint32_t ebp = g_ebp;

loc_003A54C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x418;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A54E9u); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A54E9: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A54F1u); RECOMP_ABI_CALL(0x00438A90u, sub_00438A90); /* call 0x00438A90 */

loc_003A54F1: ;
    esp = esp + 0x418;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5500
 * Original: 0x003A5500 - 0x003A5523 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5500(void)
{
    uint32_t ebp = g_ebp;

loc_003A5500: ;
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
    PUSH32(esp, 0x003A551Eu); RECOMP_ABI_CALL(0x0043A100u, sub_0043A100); /* call 0x0043A100 */

loc_003A551E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5530
 * Original: 0x003A5530 - 0x003A55A5 (117 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5530(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x438;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -1028;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A555Cu); RECOMP_ABI_CALL(0x003A5220u, sub_003A5220); /* call 0x003A5220 */

loc_003A555C: ;
    ecx = eax;
    eax = ebp + -1064;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5570u); RECOMP_ABI_CALL(0x70000620u, posix_stat); /* call 0x70000620 */

loc_003A5570: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A557E; /* je: equal / zero */

loc_003A5575: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003A559A;

loc_003A557E: ;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -1064;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5593u); RECOMP_ABI_CALL(0x003A55B0u, sub_003A55B0); /* call 0x003A55B0 */

loc_003A5593: ;
    MEM32(ebp + -4) = 0;

loc_003A559A: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x438;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A55B0
 * Original: 0x003A55B0 - 0x003A5696 (230 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A55B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A55B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A55D9u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_003A55D9: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    edx = edx & 1;
    eax = 0x8000;
    ecx = 0x4000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + 0xC);
    MEM16(eax + 6) = LO16(ecx);
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax + 6));
    ecx = ecx | 0x100;
    MEM16(eax + 6) = LO16(ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A562A; /* jne: not equal / not zero */

loc_003A5619: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax + 6));
    ecx = ecx | 0x80;
    MEM16(eax + 6) = LO16(ecx);

loc_003A562A: ;
    eax = MEM32(ebp + 0xC);
    MEM16(eax + 8) = 1;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5646; /* je: equal / zero */

loc_003A563C: ;
    eax = 0x7FFFFFFF;
    MEM32(ebp + -4) = eax;
    goto loc_003A564F;

loc_003A5646: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;

loc_003A564F: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 0;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 0;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A56A0
 * Original: 0x003A56A0 - 0x003A56ED (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A56A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A56A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A56BEu); RECOMP_ABI_CALL(0x700003F0u, posix_fstat); /* call 0x700003F0 */

loc_003A56BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A56CC; /* je: equal / zero */

loc_003A56C3: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003A56E5;

loc_003A56CC: ;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A56DEu); RECOMP_ABI_CALL(0x003A55B0u, sub_003A55B0); /* call 0x003A55B0 */

loc_003A56DE: ;
    MEM32(ebp + -4) = 0;

loc_003A56E5: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A56F0
 * Original: 0x003A56F0 - 0x003A573D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A56F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A56F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -40;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A570Bu); RECOMP_ABI_CALL(0x700003F0u, posix_fstat); /* call 0x700003F0 */

loc_003A570B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5719; /* je: equal / zero */

loc_003A5710: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003A5735;

loc_003A5719: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5729; /* je: equal / zero */

loc_003A571F: ;
    eax = 0x7FFFFFFF;
    MEM32(ebp + -44) = eax;
    goto loc_003A572F;

loc_003A5729: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -44) = eax;

loc_003A572F: ;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -4) = eax;

loc_003A5735: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5740
 * Original: 0x003A5740 - 0x003A576D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5740(void)
{
    uint32_t ebp = g_ebp;

loc_003A5740: ;
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
    PUSH32(esp, 0x003A5768u); RECOMP_ABI_CALL(0x70000630u, posix_truncate); /* call 0x70000630 */

loc_003A5768: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5770
 * Original: 0x003A5770 - 0x003A5793 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5770(void)
{
    uint32_t ebp = g_ebp;

loc_003A5770: ;
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
    PUSH32(esp, 0x003A578Eu); RECOMP_ABI_CALL(0x00417490u, sub_00417490); /* call 0x00417490 */

loc_003A578E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A57A0
 * Original: 0x003A57A0 - 0x003A57B9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A57A0(void)
{
    uint32_t ebp = g_ebp;

loc_003A57A0: ;
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
    PUSH32(esp, 0x003A57B4u); RECOMP_ABI_CALL(0x00419BB0u, sub_00419BB0); /* call 0x00419BB0 */

loc_003A57B4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A57C0
 * Original: 0x003A57C0 - 0x003A5813 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A57C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A57C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A57F5; /* je: equal / zero */

loc_003A57DF: ;
    eax = ebp + 0x10;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    ecx = eax;
    ecx = ecx + 4;
    MEM32(ebp + -12) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;

loc_003A57F5: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -8);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A580Du); RECOMP_ABI_CALL(0x003A5370u, sub_003A5370); /* call 0x003A5370 */

loc_003A580D: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5820
 * Original: 0x003A5820 - 0x003A5839 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5820(void)
{
    uint32_t ebp = g_ebp;

loc_003A5820: ;
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
    PUSH32(esp, 0x003A5834u); RECOMP_ABI_CALL(0x00438CA0u, sub_00438CA0); /* call 0x00438CA0 */

loc_003A5834: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5840
 * Original: 0x003A5840 - 0x003A586D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5840(void)
{
    uint32_t ebp = g_ebp;

loc_003A5840: ;
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
    PUSH32(esp, 0x003A5868u); RECOMP_ABI_CALL(0x0043B900u, sub_0043B900); /* call 0x0043B900 */

loc_003A5868: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5870
 * Original: 0x003A5870 - 0x003A589D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5870(void)
{
    uint32_t ebp = g_ebp;

loc_003A5870: ;
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
    PUSH32(esp, 0x003A5898u); RECOMP_ABI_CALL(0x0043CED0u, sub_0043CED0); /* call 0x0043CED0 */

loc_003A5898: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A58A0
 * Original: 0x003A58A0 - 0x003A58D8 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A58A0(void)
{
    uint32_t ebp = g_ebp;

loc_003A58A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x10;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = edx;
    esi = RECOMP_SAR(esi, 0x1F, 32, NULL);
    edi = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A58D1u); RECOMP_ABI_CALL(0x0043AFF0u, sub_0043AFF0); /* call 0x0043AFF0 */

loc_003A58D1: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5BF0
 * Original: 0x003A5BF0 - 0x003A5C20 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5BF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003A5BFD: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5C11; /* je: equal / zero */

loc_003A5C06: ;
    eax = MEM32(ebp + -4);
    eax = eax + 2;
    MEM32(ebp + -4) = eax;
    goto loc_003A5BFD;

loc_003A5C11: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    eax = eax - ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5C20
 * Original: 0x003A5C20 - 0x003A5C6F (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5C20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_003A5C33: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003A5C53; /* jae: above or equal (unsigned >=) */

loc_003A5C40: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax + ecx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_003A5C53: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A5C5C; /* jne: not equal / not zero */

loc_003A5C5A: ;
    goto loc_003A5C67;

loc_003A5C5C: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A5C33;

loc_003A5C67: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5C70
 * Original: 0x003A5C70 - 0x003A5CAE (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5C70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003A5C80: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(eax, MEM16(eax));
    ecx = MEM32(ebp + -4);
    edx = ecx;
    edx = edx + 2;
    MEM32(ebp + -4) = edx;
    MEM16(ecx) = LO16(eax);
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5CA6; /* je: equal / zero */

loc_003A5CA4: ;
    goto loc_003A5C80;

loc_003A5CA6: ;
    eax = MEM32(ebp + 8);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5CB0
 * Original: 0x003A5CB0 - 0x003A5D37 (135 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5CB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_003A5CC6: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003A5CE6; /* jae: above or equal (unsigned >=) */

loc_003A5CD3: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax + ecx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_003A5CE6: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A5CEF; /* jne: not equal / not zero */

loc_003A5CED: ;
    goto loc_003A5D0E;

loc_003A5CEF: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    SET_LO16(edx, MEM16(eax + ecx * 2));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM16(eax + ecx * 2) = LO16(edx);
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A5CC6;

loc_003A5D0E: ;
    goto loc_003A5D10;

loc_003A5D10: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A5D2F; /* jae: above or equal (unsigned >=) */

loc_003A5D18: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM16(eax + ecx * 2) = 0;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A5D10;

loc_003A5D2F: ;
    eax = MEM32(ebp + 8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5D40
 * Original: 0x003A5D40 - 0x003A5D7B (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5D40(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A5D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5D5Du); RECOMP_ABI_CALL(0x003A5BF0u, sub_003A5BF0); /* call 0x003A5BF0 */

loc_003A5D5D: ;
    ecx = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5D73u); RECOMP_ABI_CALL(0x003A5C70u, sub_003A5C70); /* call 0x003A5C70 */

loc_003A5D73: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5D80
 * Original: 0x003A5D80 - 0x003A5E07 (135 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5D80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A5D80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5DA0u); RECOMP_ABI_CALL(0x003A5BF0u, sub_003A5BF0); /* call 0x003A5BF0 */

loc_003A5DA0: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;

loc_003A5DAC: ;
    ecx = MEM32(ebp + 0x10);
    eax = ecx;
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A5DD0; /* je: equal / zero */

loc_003A5DC1: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_003A5DD0: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A5DD9; /* jne: not equal / not zero */

loc_003A5DD7: ;
    goto loc_003A5DF7;

loc_003A5DD9: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + -4);
    edx = eax;
    edx = edx + 2;
    MEM32(ebp + -4) = edx;
    MEM16(eax) = LO16(ecx);
    goto loc_003A5DAC;

loc_003A5DF7: ;
    eax = MEM32(ebp + -4);
    MEM16(eax) = 0;
    eax = MEM32(ebp + 8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5E10
 * Original: 0x003A5E10 - 0x003A5E6E (94 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5E10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003A5E1A: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A5E3E; /* je: equal / zero */

loc_003A5E2A: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1) = LO8(eax);

loc_003A5E3E: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A5E47; /* jne: not equal / not zero */

loc_003A5E45: ;
    goto loc_003A5E5B;

loc_003A5E47: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A5E1A;

loc_003A5E5B: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    eax = eax - ecx;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5E70
 * Original: 0x003A5E70 - 0x003A5EDD (109 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5E70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003A5E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003A5E7D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A5ECE; /* je: equal / zero */

loc_003A5E83: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A5E9C; /* jne: not equal / not zero */

loc_003A5E93: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A5EAF; /* jne: not equal / not zero */

loc_003A5E9C: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_003A5ED5;

loc_003A5EAF: ;
    goto loc_003A5EB1;

loc_003A5EB1: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A5E7D;

loc_003A5ECE: ;
    MEM32(ebp + -4) = 0;

loc_003A5ED5: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5EE0
 * Original: 0x003A5EE0 - 0x003A5F03 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5EE0(void)
{
    uint32_t ebp = g_ebp;

loc_003A5EE0: ;
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
    PUSH32(esp, 0x003A5EFEu); RECOMP_ABI_CALL(0x003A5E10u, sub_003A5E10); /* call 0x003A5E10 */

loc_003A5EFE: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5F10
 * Original: 0x003A5F10 - 0x003A5F5A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5F10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5F2Au); RECOMP_ABI_CALL(0x003A5BF0u, sub_003A5BF0); /* call 0x003A5BF0 */

loc_003A5F2A: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5F52; /* je: equal / zero */

loc_003A5F33: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5F52; /* je: equal / zero */

loc_003A5F39: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5F52u); RECOMP_ABI_CALL(0x003A5CB0u, sub_003A5CB0); /* call 0x003A5CB0 */

loc_003A5F52: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5F60
 * Original: 0x003A5F60 - 0x003A5FA8 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5F60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003A5F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);

loc_003A5F6B: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = ZX16(MEM16(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A5F81; /* jne: not equal / not zero */

loc_003A5F79: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_003A5FA0;

loc_003A5F81: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A5F93; /* jne: not equal / not zero */

loc_003A5F8A: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A5FA0;

loc_003A5F93: ;
    goto loc_003A5F95;

loc_003A5F95: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_003A5F6B;

loc_003A5FA0: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A5FB0
 * Original: 0x003A5FB0 - 0x003A5FF4 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5FB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A5FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_003A5FC2: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = ZX16(MEM16(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5FD6; /* jne: not equal / not zero */

loc_003A5FD0: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003A5FD6: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A5FE7; /* jne: not equal / not zero */

loc_003A5FDF: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_003A5FE7: ;
    goto loc_003A5FE9;

loc_003A5FE9: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_003A5FC2;

}


/**
 * sub_003A6000
 * Original: 0x003A6000 - 0x003A6085 (133 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6000(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003A6000: ;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6017u); RECOMP_ABI_CALL(0x003A5BF0u, sub_003A5BF0); /* call 0x003A5BF0 */

loc_003A6017: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A6028; /* jne: not equal / not zero */

loc_003A6020: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_003A607D;

loc_003A6028: ;
    goto loc_003A602A;

loc_003A602A: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A6076; /* je: equal / zero */

loc_003A6033: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A6069; /* jne: not equal / not zero */

loc_003A6043: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A605Cu); RECOMP_ABI_CALL(0x003A5E70u, sub_003A5E70); /* call 0x003A5E70 */

loc_003A605C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A6069; /* jne: not equal / not zero */

loc_003A6061: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_003A607D;

loc_003A6069: ;
    goto loc_003A606B;

loc_003A606B: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_003A602A;

loc_003A6076: ;
    MEM32(ebp + -4) = 0;

loc_003A607D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6090
 * Original: 0x003A6090 - 0x003A60F5 (101 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6090(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6090: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_003A60A3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ecx = ZX16(MEM16(eax + ecx * 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A60D9; /* je: equal / zero */

loc_003A60B7: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(esp) = edx;
    eax = ZX16(MEM16(eax + ecx * 2));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A60D0u); RECOMP_ABI_CALL(0x003A5F60u, sub_003A5F60); /* call 0x003A5F60 */

loc_003A60D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_003A60D9: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A60E2; /* jne: not equal / not zero */

loc_003A60E0: ;
    goto loc_003A60ED;

loc_003A60E2: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A60A3;

loc_003A60ED: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6100
 * Original: 0x003A6100 - 0x003A6167 (103 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_003A6113: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ecx = ZX16(MEM16(eax + ecx * 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A614B; /* je: equal / zero */

loc_003A6127: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(esp) = edx;
    eax = ZX16(MEM16(eax + ecx * 2));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6140u); RECOMP_ABI_CALL(0x003A5F60u, sub_003A5F60); /* call 0x003A5F60 */

loc_003A6140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -5) = LO8(eax);

loc_003A614B: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A6154; /* jne: not equal / not zero */

loc_003A6152: ;
    goto loc_003A615F;

loc_003A6154: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A6113;

loc_003A615F: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6170
 * Original: 0x003A6170 - 0x003A61C3 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6170(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003A6170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003A617C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A61B4; /* je: equal / zero */

loc_003A6185: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A619Au); RECOMP_ABI_CALL(0x003A5F60u, sub_003A5F60); /* call 0x003A5F60 */

loc_003A619A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A61A7; /* je: equal / zero */

loc_003A619F: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_003A61BB;

loc_003A61A7: ;
    goto loc_003A61A9;

loc_003A61A9: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_003A617C;

loc_003A61B4: ;
    MEM32(ebp + -4) = 0;

loc_003A61BB: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A61D0
 * Original: 0x003A61D0 - 0x003A6321 (337 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A61D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A61D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A61FA; /* je: equal / zero */

loc_003A61E2: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A61F5u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A61F5: ;
    ecx = MEM32(ebp + -12);
    MEM32(eax) = ecx;

loc_003A61FA: ;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6207u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A6207: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6218; /* jne: not equal / not zero */

loc_003A620C: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A6319;

loc_003A6218: ;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6225u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A6225: ;
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6236u); RECOMP_ABI_CALL(0x003A6090u, sub_003A6090); /* call 0x003A6090 */

loc_003A6236: ;
    MEM32(ebp + -16) = eax;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6246u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A6246: ;
    ecx = MEM32(ebp + -16);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx + MEM32(eax);
    MEM32(eax) = ecx;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A625Cu); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A625C: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6283; /* jne: not equal / not zero */

loc_003A6264: ;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6271u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A6271: ;
    MEM32(eax) = 0;
    MEM32(ebp + -4) = 0;
    goto loc_003A6319;

loc_003A6283: ;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6290u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A6290: ;
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A62A2u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A62A2: ;
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A62B3u); RECOMP_ABI_CALL(0x003A6100u, sub_003A6100); /* call 0x003A6100 */

loc_003A62B3: ;
    MEM32(ebp + -20) = eax;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A62C3u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A62C3: ;
    ecx = MEM32(ebp + -20);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx + MEM32(eax);
    MEM32(eax) = ecx;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A62D9u); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A62D9: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6300; /* je: equal / zero */

loc_003A62E1: ;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A62EEu); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A62EE: ;
    ecx = eax;
    eax = MEM32(ecx);
    edx = eax;
    edx = edx + 2;
    MEM32(ecx) = edx;
    MEM16(eax) = 0;
    goto loc_003A6313;

loc_003A6300: ;
    eax = esp;
    MEM32(eax) = 0x5ACBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A630Du); RECOMP_ABI_CALL(0x00392810u, sub_00392810); /* call 0x00392810 */

loc_003A630D: ;
    MEM32(eax) = 0;

loc_003A6313: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_003A6319: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6330
 * Original: 0x003A6330 - 0x003A6381 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6330(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A6330: ;
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
    PUSH32(esp, 0x003A6344u); RECOMP_ABI_CALL(0x003A5BF0u, sub_003A5BF0); /* call 0x003A5BF0 */

loc_003A6344: ;
    eax = eax + 1;
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6357u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_003A6357: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6379; /* je: equal / zero */

loc_003A6360: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -4);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6379u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A6379: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6390
 * Original: 0x003A6390 - 0x003A63C9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6390(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A63A6u); RECOMP_ABI_CALL(0x003A63D0u, sub_003A63D0); /* call 0x003A63D0 */

loc_003A63A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A63BA; /* je: equal / zero */

loc_003A63AB: ;
    eax = ZX16(MEM16(ebp + 8));
    eax = eax + 0x20;
    eax = ZX16(LO16(eax));
    MEM32(ebp + -4) = eax;
    goto loc_003A63C1;

loc_003A63BA: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(ebp + -4) = eax;

loc_003A63C1: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A63D0
 * Original: 0x003A63D0 - 0x003A6433 (99 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A63D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A63D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A63EF; /* jl: less (signed <) */

loc_003A63E1: ;
    ecx = ZX16(MEM16(ebp + 8));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5A (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_003A6426; /* jle: less or equal (signed <=) */

loc_003A63EF: ;
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0 (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_003A6420; /* jl: less (signed <) */

loc_003A6400: ;
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xDE (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_G(_fas, _fbs)) goto loc_003A6420; /* jg: greater (signed >) */

loc_003A6411: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD7 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -2) = LO8(eax);

loc_003A6420: ;
    SET_LO8(eax, MEM8(ebp + -2));
    MEM8(ebp + -1) = LO8(eax);

loc_003A6426: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6440
 * Original: 0x003A6440 - 0x003A648F (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6440(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003A6440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6456u); RECOMP_ABI_CALL(0x003A6490u, sub_003A6490); /* call 0x003A6490 */

loc_003A6456: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A6480; /* je: equal / zero */

loc_003A645B: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDF (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A6480; /* je: equal / zero */

loc_003A6466: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A6480; /* je: equal / zero */

loc_003A6471: ;
    eax = ZX16(MEM16(ebp + 8));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x20)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = ZX16(LO16(eax));
    MEM32(ebp + -4) = eax;
    goto loc_003A6487;

loc_003A6480: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(ebp + -4) = eax;

loc_003A6487: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6490
 * Original: 0x003A6490 - 0x003A64F3 (99 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6490(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A64AF; /* jl: less (signed <) */

loc_003A64A1: ;
    ecx = ZX16(MEM16(ebp + 8));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7A (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_003A64E6; /* jle: less or equal (signed <=) */

loc_003A64AF: ;
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xDF (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_003A64E0; /* jl: less (signed <) */

loc_003A64C0: ;
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_G(_fas, _fbs)) goto loc_003A64E0; /* jg: greater (signed >) */

loc_003A64D1: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF7 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -2) = LO8(eax);

loc_003A64E0: ;
    SET_LO8(eax, MEM8(ebp + -2));
    MEM8(ebp + -1) = LO8(eax);

loc_003A64E6: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6500
 * Original: 0x003A6500 - 0x003A651B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6500(void)
{
    uint32_t ebp = g_ebp;

loc_003A6500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6516u); RECOMP_ABI_CALL(0x003A63D0u, sub_003A63D0); /* call 0x003A63D0 */

loc_003A6516: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6520
 * Original: 0x003A6520 - 0x003A653B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6520(void)
{
    uint32_t ebp = g_ebp;

loc_003A6520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6536u); RECOMP_ABI_CALL(0x003A6490u, sub_003A6490); /* call 0x003A6490 */

loc_003A6536: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6540
 * Original: 0x003A6540 - 0x003A6584 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6540(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6540: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6556u); RECOMP_ABI_CALL(0x003A63D0u, sub_003A63D0); /* call 0x003A63D0 */

loc_003A6556: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A6577; /* jne: not equal / not zero */

loc_003A6562: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A656Eu); RECOMP_ABI_CALL(0x003A6490u, sub_003A6490); /* call 0x003A6490 */

loc_003A656E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_003A6577: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6590
 * Original: 0x003A6590 - 0x003A65C0 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 8));
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_003A65B3; /* jl: less (signed <) */

loc_003A65A6: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(ebp + -1) = LO8(eax);

loc_003A65B3: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A65C0
 * Original: 0x003A65C0 - 0x003A6604 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A65C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A65C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A65D6u); RECOMP_ABI_CALL(0x003A6540u, sub_003A6540); /* call 0x003A6540 */

loc_003A65D6: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A65F7; /* jne: not equal / not zero */

loc_003A65E2: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A65EEu); RECOMP_ABI_CALL(0x003A6590u, sub_003A6590); /* call 0x003A6590 */

loc_003A65EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_003A65F7: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6610
 * Original: 0x003A6610 - 0x003A662A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6610(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6630
 * Original: 0x003A6630 - 0x003A6676 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6630(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 8));
    ecx = ZX16(MEM16(ebp + 8));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_003A6669; /* jl: less (signed <) */

loc_003A6646: ;
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7F (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_003A6663; /* jl: less (signed <) */

loc_003A6654: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM8(ebp + -2) = LO8(eax);

loc_003A6663: ;
    SET_LO8(eax, MEM8(ebp + -2));
    MEM8(ebp + -1) = LO8(eax);

loc_003A6669: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6680
 * Original: 0x003A6680 - 0x003A66BE (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6680(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6696u); RECOMP_ABI_CALL(0x003A6630u, sub_003A6630); /* call 0x003A6630 */

loc_003A6696: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A66B1; /* jne: not equal / not zero */

loc_003A66A2: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_003A66B1: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A66C0
 * Original: 0x003A66C0 - 0x003A670C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A66C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A66C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A66D6u); RECOMP_ABI_CALL(0x003A6680u, sub_003A6680); /* call 0x003A6680 */

loc_003A66D6: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A66FF; /* je: equal / zero */

loc_003A66E2: ;
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A66FF; /* je: equal / zero */

loc_003A66F0: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_003A66FF: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6710
 * Original: 0x003A6710 - 0x003A6777 (103 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6710(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6726u); RECOMP_ABI_CALL(0x003A6590u, sub_003A6590); /* call 0x003A6590 */

loc_003A6726: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003A676A; /* jne: not equal / not zero */

loc_003A6732: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A6749; /* jl: less (signed <) */

loc_003A673B: ;
    ecx = ZX16(MEM16(ebp + 8));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x66 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_003A676A; /* jle: less or equal (signed <=) */

loc_003A6749: ;
    ecx = ZX16(MEM16(ebp + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x41 (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_003A6764; /* jl: less (signed <) */

loc_003A6757: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(ebp + -2) = LO8(eax);

loc_003A6764: ;
    SET_LO8(eax, MEM8(ebp + -2));
    MEM8(ebp + -1) = LO8(eax);

loc_003A676A: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6780
 * Original: 0x003A6780 - 0x003A67C9 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6780(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO16(eax, MEM16(ebp + 8));
    ecx = ZX16(MEM16(ebp + 8));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A67BC; /* je: equal / zero */

loc_003A6796: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A67AD; /* jl: less (signed <) */

loc_003A679F: ;
    ecx = ZX16(MEM16(ebp + 8));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_003A67BC; /* jle: less or equal (signed <=) */

loc_003A67AD: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1) = LO8(eax);

loc_003A67BC: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A67D0
 * Original: 0x003A67D0 - 0x003A6816 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A67D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A67D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A67E6u); RECOMP_ABI_CALL(0x003A66C0u, sub_003A66C0); /* call 0x003A66C0 */

loc_003A67E6: ;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A6809; /* je: equal / zero */

loc_003A67F2: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A67FEu); RECOMP_ABI_CALL(0x003A65C0u, sub_003A65C0); /* call 0x003A65C0 */

loc_003A67FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -1) = LO8(eax);

loc_003A6809: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6820
 * Original: 0x003A6820 - 0x003A699C (380 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6820(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    MEM32(ebp + -4) = 0;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A685B; /* je: equal / zero */

loc_003A6841: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A684Du); RECOMP_ABI_CALL(0x003A6500u, sub_003A6500); /* call 0x003A6500 */

loc_003A684D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A685B; /* je: equal / zero */

loc_003A6852: ;
    eax = MEM32(ebp + -4);
    eax = eax | 1;
    MEM32(ebp + -4) = eax;

loc_003A685B: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6881; /* je: equal / zero */

loc_003A6867: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6873u); RECOMP_ABI_CALL(0x003A6520u, sub_003A6520); /* call 0x003A6520 */

loc_003A6873: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6881; /* je: equal / zero */

loc_003A6878: ;
    eax = MEM32(ebp + -4);
    eax = eax | 2;
    MEM32(ebp + -4) = eax;

loc_003A6881: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A68A7; /* je: equal / zero */

loc_003A688D: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6899u); RECOMP_ABI_CALL(0x003A6590u, sub_003A6590); /* call 0x003A6590 */

loc_003A6899: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A68A7; /* je: equal / zero */

loc_003A689E: ;
    eax = MEM32(ebp + -4);
    eax = eax | 4;
    MEM32(ebp + -4) = eax;

loc_003A68A7: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A68CD; /* je: equal / zero */

loc_003A68B3: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A68BFu); RECOMP_ABI_CALL(0x003A6780u, sub_003A6780); /* call 0x003A6780 */

loc_003A68BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A68CD; /* je: equal / zero */

loc_003A68C4: ;
    eax = MEM32(ebp + -4);
    eax = eax | 8;
    MEM32(ebp + -4) = eax;

loc_003A68CD: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A68F3; /* je: equal / zero */

loc_003A68D9: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A68E5u); RECOMP_ABI_CALL(0x003A67D0u, sub_003A67D0); /* call 0x003A67D0 */

loc_003A68E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A68F3; /* je: equal / zero */

loc_003A68EA: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x10;
    MEM32(ebp + -4) = eax;

loc_003A68F3: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6919; /* je: equal / zero */

loc_003A68FF: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A690Bu); RECOMP_ABI_CALL(0x003A6630u, sub_003A6630); /* call 0x003A6630 */

loc_003A690B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6919; /* je: equal / zero */

loc_003A6910: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x20;
    MEM32(ebp + -4) = eax;

loc_003A6919: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6940; /* je: equal / zero */

loc_003A6925: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6937; /* je: equal / zero */

loc_003A692E: ;
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6940; /* jne: not equal / not zero */

loc_003A6937: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x40;
    MEM32(ebp + -4) = eax;

loc_003A6940: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A696A; /* je: equal / zero */

loc_003A694E: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A695Au); RECOMP_ABI_CALL(0x003A6710u, sub_003A6710); /* call 0x003A6710 */

loc_003A695A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A696A; /* je: equal / zero */

loc_003A695F: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x80;
    MEM32(ebp + -4) = eax;

loc_003A696A: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6994; /* je: equal / zero */

loc_003A6978: ;
    eax = ZX16(MEM16(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6984u); RECOMP_ABI_CALL(0x003A6540u, sub_003A6540); /* call 0x003A6540 */

loc_003A6984: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6994; /* je: equal / zero */

loc_003A6989: ;
    eax = MEM32(ebp + -4);
    eax = eax | 0x100;
    MEM32(ebp + -4) = eax;

loc_003A6994: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A69A0
 * Original: 0x003A69A0 - 0x003A6A08 (104 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A69A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003A69A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003A69AC: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A69BAu); RECOMP_ABI_CALL(0x003A6390u, sub_003A6390); /* call 0x003A6390 */

loc_003A69BA: ;
    MEM16(ebp + -2) = LO16(eax);
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A69CCu); RECOMP_ABI_CALL(0x003A6390u, sub_003A6390); /* call 0x003A6390 */

loc_003A69CC: ;
    MEM16(ebp + -4) = LO16(eax);
    eax = ZX16(MEM16(ebp + -2));
    ecx = ZX16(MEM16(ebp + -4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A69E3; /* jne: not equal / not zero */

loc_003A69DC: ;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -2), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A69F2; /* jne: not equal / not zero */

loc_003A69E3: ;
    eax = ZX16(MEM16(ebp + -2));
    ecx = ZX16(MEM16(ebp + -4));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_003A69F2: ;
    goto loc_003A69F4;

loc_003A69F4: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A69AC;

}


/**
 * sub_003A6A10
 * Original: 0x003A6A10 - 0x003A6A99 (137 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6A10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003A6A10: ;
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

loc_003A6A1F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A6A8A; /* je: equal / zero */

loc_003A6A25: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6A33u); RECOMP_ABI_CALL(0x003A6390u, sub_003A6390); /* call 0x003A6390 */

loc_003A6A33: ;
    MEM16(ebp + -6) = LO16(eax);
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6A45u); RECOMP_ABI_CALL(0x003A6390u, sub_003A6390); /* call 0x003A6390 */

loc_003A6A45: ;
    MEM16(ebp + -8) = LO16(eax);
    eax = ZX16(MEM16(ebp + -6));
    ecx = ZX16(MEM16(ebp + -8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A6A5C; /* jne: not equal / not zero */

loc_003A6A55: ;
    _fa = (uint32_t)(MEM16(ebp + -6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -6), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A6A6B; /* jne: not equal / not zero */

loc_003A6A5C: ;
    eax = ZX16(MEM16(ebp + -6));
    ecx = ZX16(MEM16(ebp + -8));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_003A6A91;

loc_003A6A6B: ;
    goto loc_003A6A6D;

loc_003A6A6D: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A6A1F;

loc_003A6A8A: ;
    MEM32(ebp + -4) = 0;

loc_003A6A91: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6AA0
 * Original: 0x003A6AA0 - 0x003A6AE2 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6AA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003A6AAF: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6ADA; /* je: equal / zero */

loc_003A6AB8: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6AC6u); RECOMP_ABI_CALL(0x003A6390u, sub_003A6390); /* call 0x003A6390 */

loc_003A6AC6: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -4);
    MEM16(eax) = LO16(ecx);
    eax = MEM32(ebp + -4);
    eax = eax + 2;
    MEM32(ebp + -4) = eax;
    goto loc_003A6AAF;

loc_003A6ADA: ;
    eax = MEM32(ebp + 8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6AF0
 * Original: 0x003A6AF0 - 0x003A6B32 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6AF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6AF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_003A6AFF: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6B2A; /* je: equal / zero */

loc_003A6B08: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6B16u); RECOMP_ABI_CALL(0x003A6440u, sub_003A6440); /* call 0x003A6440 */

loc_003A6B16: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -4);
    MEM16(eax) = LO16(ecx);
    eax = MEM32(ebp + -4);
    eax = eax + 2;
    MEM32(ebp + -4) = eax;
    goto loc_003A6AFF;

loc_003A6B2A: ;
    eax = MEM32(ebp + 8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6B40
 * Original: 0x003A6B40 - 0x003A6B8F (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6B40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6B40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);

loc_003A6B4E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6B80; /* je: equal / zero */

loc_003A6B54: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = ZX16(MEM16(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A6B6A; /* jne: not equal / not zero */

loc_003A6B62: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_003A6B87;

loc_003A6B6A: ;
    goto loc_003A6B6C;

loc_003A6B6C: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_003A6B4E;

loc_003A6B80: ;
    MEM32(ebp + -4) = 0;

loc_003A6B87: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6B90
 * Original: 0x003A6B90 - 0x003A6BF4 (100 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6B90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003A6B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003A6B9D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A6BE5; /* je: equal / zero */

loc_003A6BA3: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A6BC6; /* je: equal / zero */

loc_003A6BB3: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_003A6BEC;

loc_003A6BC6: ;
    goto loc_003A6BC8;

loc_003A6BC8: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A6B9D;

loc_003A6BE5: ;
    MEM32(ebp + -4) = 0;

loc_003A6BEC: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6C00
 * Original: 0x003A6C00 - 0x003A6C35 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6C00(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A6C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    MEM32(ebp + -4) = edx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6C2Du); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A6C2D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6C40
 * Original: 0x003A6C40 - 0x003A6C76 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6C40(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A6C40: ;
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
    MEM32(ebp + -8) = ecx;
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    _shift_result = RECOMP_SHIFT(esi, 1, 32, 0, NULL, &_shift_of);
    esi = _shift_result;
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6C6Du); RECOMP_ABI_CALL(0x004290A0u, sub_004290A0); /* call 0x004290A0 */

loc_003A6C6D: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6C80
 * Original: 0x003A6C80 - 0x003A6CBE (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6C80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6C80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_003A6C95: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A6CB6; /* jae: above or equal (unsigned >=) */

loc_003A6C9D: ;
    SET_LO16(edx, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM16(eax + ecx * 2) = LO16(edx);
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A6C95;

loc_003A6CB6: ;
    eax = MEM32(ebp + 8);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6CC0
 * Original: 0x003A6CC0 - 0x003A6D39 (121 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6CC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A6CC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -128;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6CECu); RECOMP_ABI_CALL(0x003A6D40u, sub_003A6D40); /* call 0x003A6D40 */

loc_003A6CEC: ;
    edx = ebp + -128;
    eax = MEM32(ebp + 0x10);
    ecx = ebp + -132;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6D08u); RECOMP_ABI_CALL(0x004274E0u, sub_004274E0); /* call 0x004274E0 */

loc_003A6D08: ;
    MEM32(ebp + -136) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6D2B; /* je: equal / zero */

loc_003A6D14: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -132);
    edx = ebp + -128;
    eax = eax - edx;
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_003A6D2B: ;
    eax = MEM32(ebp + -136);
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6D40
 * Original: 0x003A6D40 - 0x003A6DCA (138 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6D40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;

loc_003A6D56: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003A6D8F; /* jae: above or equal (unsigned >=) */

loc_003A6D66: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ecx = ZX16(MEM16(eax + ecx * 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A6D8F; /* je: equal / zero */

loc_003A6D7A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax + ecx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM8(ebp + -5) = LO8(eax);

loc_003A6D8F: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A6D98; /* jne: not equal / not zero */

loc_003A6D96: ;
    goto loc_003A6DB8;

loc_003A6D98: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    SET_LO8(edx, LO8(eax));
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    MEM8(eax + ecx) = LO8(edx);
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A6D56;

loc_003A6DB8: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    MEM8(eax + ecx) = 0;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6DD0
 * Original: 0x003A6DD0 - 0x003A6E49 (121 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6DD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A6DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -128;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6DFCu); RECOMP_ABI_CALL(0x003A6D40u, sub_003A6D40); /* call 0x003A6D40 */

loc_003A6DFC: ;
    edx = ebp + -128;
    eax = MEM32(ebp + 0x10);
    ecx = ebp + -132;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6E18u); RECOMP_ABI_CALL(0x004274A0u, sub_004274A0); /* call 0x004274A0 */

loc_003A6E18: ;
    MEM32(ebp + -136) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6E3B; /* je: equal / zero */

loc_003A6E24: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -132);
    edx = ebp + -128;
    eax = eax - edx;
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_003A6E3B: ;
    eax = MEM32(ebp + -136);
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6E50
 * Original: 0x003A6E50 - 0x003A6EDF (143 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6E50(void)
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

loc_003A6E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xB8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -128;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6E79u); RECOMP_ABI_CALL(0x003A6D40u, sub_003A6D40); /* call 0x003A6D40 */

loc_003A6E79: ;
    ecx = ebp + -128;
    eax = ebp + -132;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6E8Eu); RECOMP_ABI_CALL(0x004272E0u, sub_004272E0); /* call 0x004272E0 */

loc_003A6E8E: ;
    MEMD(ebp + -152) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6EC1; /* je: equal / zero */

loc_003A6EAA: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -132);
    edx = ebp + -128;
    eax = eax - edx;
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_003A6EC1: ;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    MEMD(ebp + -160) = xmm0.d[0]; /* movsd */
    fp_push(MEMD(ebp + -160)); /* fld double */
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
 * sub_003A6EE0
 * Original: 0x003A6EE0 - 0x003A6F0B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6EE0(void)
{
    uint32_t ebp = g_ebp;

loc_003A6EE0: ;
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
    MEM32(esp + 8) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6F06u); RECOMP_ABI_CALL(0x003A6CC0u, sub_003A6CC0); /* call 0x003A6CC0 */

loc_003A6F06: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6F10
 * Original: 0x003A6F10 - 0x003A6F3B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6F10(void)
{
    uint32_t ebp = g_ebp;

loc_003A6F10: ;
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
    MEM32(esp + 8) = 0xA;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6F36u); RECOMP_ABI_CALL(0x003A6CC0u, sub_003A6CC0); /* call 0x003A6CC0 */

loc_003A6F36: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6F40
 * Original: 0x003A6F40 - 0x003A6FA3 (99 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6F40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A6F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = 0;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    edx = ebp + -12;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6F7Eu); RECOMP_ABI_CALL(0x003A6FB0u, sub_003A6FB0); /* call 0x003A6FB0 */

loc_003A6F7E: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A6F91; /* jae: above or equal (unsigned >=) */

loc_003A6F89: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -20) = eax;
    goto loc_003A6F9B;

loc_003A6F91: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -20) = eax;
    goto loc_003A6F9B;

loc_003A6F9B: ;
    eax = MEM32(ebp + -20);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A6FB0
 * Original: 0x003A6FB0 - 0x003A7817 (2151 bytes, 635 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6FB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_003A6FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x690));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x690)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003A6FC4: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A77B6; /* je: equal / zero */

loc_003A6FD1: ;
    MEM32(ebp + -76) = 0;
    MEM32(ebp + -80) = 0;
    MEM32(ebp + -84) = 0xFFFFFFFFu;
    MEM32(ebp + -88) = 0;
    MEM32(ebp + -92) = 0;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A701E; /* je: equal / zero */

loc_003A6FFF: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    MEM32(ebp + 0xC) = edx;
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A701Cu); RECOMP_ABI_CALL(0x003A8550u, sub_003A8550); /* call 0x003A8550 */

loc_003A701C: ;
    goto loc_003A6FC4;

loc_003A701E: ;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7054; /* jne: not equal / not zero */

loc_003A7032: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    MEM32(ebp + 0xC) = edx;
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A704Fu); RECOMP_ABI_CALL(0x003A8550u, sub_003A8550); /* call 0x003A8550 */

loc_003A704F: ;
    goto loc_003A6FC4;

loc_003A7054: ;
    eax = MEM32(ebp + -76);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -76) = ecx;
    MEM8(ebp + eax + -72) = 0x25;

loc_003A7064: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1645) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A70C2; /* je: equal / zero */

loc_003A7077: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1645) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A70C2; /* je: equal / zero */

loc_003A708A: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1645) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A70C2; /* je: equal / zero */

loc_003A709D: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x23 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1645) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A70C2; /* je: equal / zero */

loc_003A70B0: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1645) = LO8(eax);

loc_003A70C2: ;
    SET_LO8(eax, MEM8(ebp + -1645));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003A70CE; /* jne: not equal / not zero */

loc_003A70CC: ;
    goto loc_003A7104;

loc_003A70CE: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A70E0; /* jne: not equal / not zero */

loc_003A70D9: ;
    MEM32(ebp + -88) = 1;

loc_003A70E0: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(eax, MEM16(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -76);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    MEM32(ebp + -76) = edx;
    MEM8(ebp + eax + -72) = LO8(ecx);
    goto loc_003A7064;

loc_003A7104: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2A (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7180; /* jne: not equal / not zero */

loc_003A710F: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -80) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003A7144; /* jge: greater or equal (signed >=) */

loc_003A7125: ;
    MEM32(ebp + -88) = 1;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -80)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -80))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -76);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -76) = ecx;
    MEM8(ebp + eax + -72) = 0x2D;

loc_003A7144: ;
    esi = ebp + -72;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(ebp + -76))) >> 32) & 1);
    esi = esi + MEM32(ebp + -76);
    edx = 0x40;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(ebp + -76)));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(MEM32(ebp + -76))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    eax = MEM32(ebp + -80);
    ecx = 0x48A01E;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A716Fu); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_003A716F: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -76))) >> 32) & 1);
    eax = eax + MEM32(ebp + -76);
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A71E8;

loc_003A7180: ;
    goto loc_003A7182;

loc_003A7182: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1646) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_003A71A7; /* jl: less (signed <) */

loc_003A7195: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(ebp + -1646) = LO8(eax);

loc_003A71A7: ;
    SET_LO8(eax, MEM8(ebp + -1646));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003A71B3; /* jne: not equal / not zero */

loc_003A71B1: ;
    goto loc_003A71E6;

loc_003A71B3: ;
    eax = (uint32_t)((int32_t)MEM32(ebp + -80) * (int32_t)0xA);
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(eax, MEM16(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -76);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    MEM32(ebp + -76) = edx;
    MEM8(ebp + eax + -72) = LO8(ecx);
    goto loc_003A7182;

loc_003A71E6: ;
    goto loc_003A71E8;

loc_003A71E8: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A72F0; /* jne: not equal / not zero */

loc_003A71F7: ;
    MEM32(ebp + -84) = 0;
    eax = MEM32(ebp + -76);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(ebp + -76) = ecx;
    MEM8(ebp + eax + -72) = 0x2E;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2A (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7286; /* jne: not equal / not zero */

loc_003A7222: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -84) = eax;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003A724A; /* jge: greater or equal (signed >=) */

loc_003A7238: ;
    MEM32(ebp + -84) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -76);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -76) = eax;
    goto loc_003A727B;

loc_003A724A: ;
    esi = ebp + -72;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(ebp + -76))) >> 32) & 1);
    esi = esi + MEM32(ebp + -76);
    edx = 0x40;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(ebp + -76)));
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(MEM32(ebp + -76))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    eax = MEM32(ebp + -84);
    ecx = 0x48A01E;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7275u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_003A7275: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -76))) >> 32) & 1);
    eax = eax + MEM32(ebp + -76);
    MEM32(ebp + -76) = eax;

loc_003A727B: ;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A72EE;

loc_003A7286: ;
    goto loc_003A7288;

loc_003A7288: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1647) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_003A72AD; /* jl: less (signed <) */

loc_003A729B: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM8(ebp + -1647) = LO8(eax);

loc_003A72AD: ;
    SET_LO8(eax, MEM8(ebp + -1647));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003A72B9; /* jne: not equal / not zero */

loc_003A72B7: ;
    goto loc_003A72EC;

loc_003A72B9: ;
    eax = (uint32_t)((int32_t)MEM32(ebp + -84) * (int32_t)0xA);
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x30));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(eax, MEM16(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -76);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    MEM32(ebp + -76) = edx;
    MEM8(ebp + eax + -72) = LO8(ecx);
    goto loc_003A7288;

loc_003A72EC: ;
    goto loc_003A72EE;

loc_003A72EE: ;
    goto loc_003A72F0;

loc_003A72F0: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x68 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7310; /* jne: not equal / not zero */

loc_003A72FB: ;
    MEM32(ebp + -92) = 1;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A73A9;

loc_003A7310: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A7326; /* je: equal / zero */

loc_003A731B: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x77 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7353; /* jne: not equal / not zero */

loc_003A7326: ;
    MEM32(ebp + -92) = 2;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7351; /* jne: not equal / not zero */

loc_003A7341: ;
    MEM32(ebp + -92) = 3;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;

loc_003A7351: ;
    goto loc_003A73A7;

loc_003A7353: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7388; /* jne: not equal / not zero */

loc_003A735E: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7388; /* jne: not equal / not zero */

loc_003A736A: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7388; /* jne: not equal / not zero */

loc_003A7376: ;
    MEM32(ebp + -92) = 3;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(6)) >> 32) & 1);
    eax = eax + 6;
    MEM32(ebp + 0xC) = eax;
    goto loc_003A73A5;

loc_003A7388: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4C (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A73A3; /* jne: not equal / not zero */

loc_003A7393: ;
    MEM32(ebp + -92) = 4;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;

loc_003A73A3: ;
    goto loc_003A73A5;

loc_003A73A5: ;
    goto loc_003A73A7;

loc_003A73A7: ;
    goto loc_003A73A9;

loc_003A73A9: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax));
    MEM16(ebp + -94) = LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -94)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -94), 0 (16-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A73BF; /* jne: not equal / not zero */

loc_003A73BA: ;
    goto loc_003A77B6;

loc_003A73BF: ;
    eax = MEM32(ebp + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    eax = ZX16(MEM16(ebp + -94));
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFBDu)) >> 32) & 1);
    eax = eax + 0xFFFFFFBDu;
    MEM32(ebp + -1652) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x35));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x35)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_003A779E; /* ja: above (unsigned >) */

loc_003A73DE: ;
    eax = MEM32(ebp + -1652);
    eax = MEM32(eax * 4 + 0x4D09FC);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x003A73EDu) goto loc_003A73ED;
    if (_jt == 0x003A745Cu) goto loc_003A745C;
    if (_jt == 0x003A74CBu) goto loc_003A74CB;
    if (_jt == 0x003A7538u) goto loc_003A7538;
    if (_jt == 0x003A755Eu) goto loc_003A755E;
    if (_jt == 0x003A779Eu) goto loc_003A779E;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003A73ED: ;
    _fa = (uint32_t)(MEM32(ebp + -92)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -92), 1 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7426; /* jne: not equal / not zero */

loc_003A73F3: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    esi = MEM32(eax);
    edx = MEM32(ebp + -84);
    ecx = MEM32(ebp + -80);
    eax = MEM32(ebp + -88);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7424u); RECOMP_ABI_CALL(0x003A8590u, sub_003A8590); /* call 0x003A8590 */

loc_003A7424: ;
    goto loc_003A7457;

loc_003A7426: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    esi = MEM32(eax);
    edx = MEM32(ebp + -84);
    ecx = MEM32(ebp + -80);
    eax = MEM32(ebp + -88);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7457u); RECOMP_ABI_CALL(0x003A8640u, sub_003A8640); /* call 0x003A8640 */

loc_003A7457: ;
    goto loc_003A77B1;

loc_003A745C: ;
    _fa = (uint32_t)(MEM32(ebp + -92)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -92), 2 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A7495; /* jne: not equal / not zero */

loc_003A7462: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    esi = MEM32(eax);
    edx = MEM32(ebp + -84);
    ecx = MEM32(ebp + -80);
    eax = MEM32(ebp + -88);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7493u); RECOMP_ABI_CALL(0x003A8640u, sub_003A8640); /* call 0x003A8640 */

loc_003A7493: ;
    goto loc_003A74C6;

loc_003A7495: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    esi = MEM32(eax);
    edx = MEM32(ebp + -84);
    ecx = MEM32(ebp + -80);
    eax = MEM32(ebp + -88);
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A74C6u); RECOMP_ABI_CALL(0x003A8590u, sub_003A8590); /* call 0x003A8590 */

loc_003A74C6: ;
    goto loc_003A77B1;

loc_003A74CB: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    eax = MEM32(eax);
    MEM16(ebp + -98) = LO16(eax);
    MEM16(ebp + -96) = 0;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A74F1; /* jne: not equal / not zero */

loc_003A74EB: ;
    _fa = (uint32_t)(MEM32(ebp + -92)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -92), 1 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A7500; /* je: equal / zero */

loc_003A74F1: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A750B; /* jne: not equal / not zero */

loc_003A74FA: ;
    _fa = (uint32_t)(MEM32(ebp + -92)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -92), 2 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A750B; /* je: equal / zero */

loc_003A7500: ;
    SET_LO16(eax, MEM16(ebp + -98));
    eax = ZX8(LO8(eax));
    MEM16(ebp + -98) = LO16(eax);

loc_003A750B: ;
    esi = MEM32(ebp + 8);
    edx = ebp + -98;
    ecx = MEM32(ebp + -80);
    eax = MEM32(ebp + -88);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7533u); RECOMP_ABI_CALL(0x003A8640u, sub_003A8640); /* call 0x003A8640 */

loc_003A7533: ;
    goto loc_003A77B1;

loc_003A7538: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -104) = eax;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A7559; /* je: equal / zero */

loc_003A754E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + -104);
    MEM32(eax) = ecx;

loc_003A7559: ;
    goto loc_003A77B1;

loc_003A755E: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A759D; /* jne: not equal / not zero */

loc_003A7567: ;
    edx = ebp + -616;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    eax = MEM32(eax);
    ecx = 0x463948;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x200;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7598u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_003A7598: ;
    goto loc_003A772C;

loc_003A759D: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A75CA; /* je: equal / zero */

loc_003A75A6: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x45 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A75CA; /* je: equal / zero */

loc_003A75AF: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x66 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A75CA; /* je: equal / zero */

loc_003A75B8: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A75CA; /* je: equal / zero */

loc_003A75C1: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A761E; /* jne: not equal / not zero */

loc_003A75CA: ;
    SET_LO16(eax, MEM16(ebp + -94));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -76);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    MEM32(ebp + -76) = edx;
    MEM8(ebp + eax + -72) = LO8(ecx);
    eax = MEM32(ebp + -76);
    MEM8(ebp + eax + -72) = 0;
    ecx = ebp + -616;
    eax = ebp + -72;
    edx = MEM32(ebp + 0x10);
    esi = edx;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    MEM32(ebp + 0x10) = esi;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(edx)); /* movsd */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x200;
    MEM32(esp + 8) = eax;
    MEMD(esp + 0xC) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7619u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_003A7619: ;
    goto loc_003A772A;

loc_003A761E: ;
    _fa = (uint32_t)(MEM32(ebp + -92)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -92), 3 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A768F; /* jne: not equal / not zero */

loc_003A7624: ;
    eax = MEM32(ebp + -76);
    ecx = eax;
    ecx++;
    MEM32(ebp + -76) = ecx;
    MEM8(ebp + eax + -72) = 0x6C;
    eax = MEM32(ebp + -76);
    ecx = eax;
    ecx++;
    MEM32(ebp + -76) = ecx;
    MEM8(ebp + eax + -72) = 0x6C;
    SET_LO8(ecx, MEM8(ebp + -94));
    eax = MEM32(ebp + -76);
    edx = eax;
    edx++;
    MEM32(ebp + -76) = edx;
    MEM8(ebp + eax + -72) = LO8(ecx);
    eax = MEM32(ebp + -76);
    MEM8(ebp + eax + -72) = 0;
    ecx = ebp + -616;
    edx = ebp + -72;
    eax = MEM32(ebp + 0x10);
    esi = eax;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    MEM32(ebp + 0x10) = esi;
    esi = MEM32(eax);
    edi = MEM32(eax + 4);
    eax = esp;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 8) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A768Au); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_003A768A: ;
    goto loc_003A7728;

loc_003A768F: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    MEM32(ebp + 0x10) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -1644) = eax;
    _fa = (uint32_t)(MEM32(ebp + -92)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -92), 1 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A76E4; /* jne: not equal / not zero */

loc_003A76A8: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A76BA; /* je: equal / zero */

loc_003A76B1: ;
    eax = ZX16(MEM16(ebp + -94));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x69 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003A76C9; /* jne: not equal / not zero */

loc_003A76BA: ;
    eax = MEM32(ebp + -1644);
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -1656) = eax;
    goto loc_003A76D8;

loc_003A76C9: ;
    eax = MEM32(ebp + -1644);
    eax = ZX16(LO16(eax));
    MEM32(ebp + -1656) = eax;

loc_003A76D8: ;
    eax = MEM32(ebp + -1656);
    MEM32(ebp + -1644) = eax;

loc_003A76E4: ;
    SET_LO16(eax, MEM16(ebp + -94));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -76);
    edx = eax;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    MEM32(ebp + -76) = edx;
    MEM8(ebp + eax + -72) = LO8(ecx);
    eax = MEM32(ebp + -76);
    MEM8(ebp + eax + -72) = 0;
    edx = ebp + -616;
    ecx = ebp + -72;
    eax = MEM32(ebp + -1644);
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x200;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7728u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_003A7728: ;
    goto loc_003A772A;

loc_003A772A: ;
    goto loc_003A772C;

loc_003A772C: ;
    eax = ebp + -616;
    MEM32(ebp + -1660) = eax;
    ecx = ebp + -616;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7747u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A7747: ;
    edx = MEM32(ebp + -1660);
    ecx = eax;
    eax = ebp + -1640;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x200;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A776Du); RECOMP_ABI_CALL(0x003A7F20u, sub_003A7F20); /* call 0x003A7F20 */

loc_003A776D: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -1640;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A779Cu); RECOMP_ABI_CALL(0x003A8640u, sub_003A8640); /* call 0x003A8640 */

loc_003A779C: ;
    goto loc_003A77B1;

loc_003A779E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = ZX16(MEM16(ebp + -94));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A77B1u); RECOMP_ABI_CALL(0x003A8550u, sub_003A8550); /* call 0x003A8550 */

loc_003A77B1: ;
    goto loc_003A6FC4;

loc_003A77B6: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A7807; /* je: equal / zero */

loc_003A77BF: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -1664) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003A77E6; /* jae: above or equal (unsigned >=) */

loc_003A77D8: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -1668) = eax;
    goto loc_003A77F5;

loc_003A77E6: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -1668) = eax;

loc_003A77F5: ;
    eax = MEM32(ebp + -1664);
    ecx = MEM32(ebp + -1668);
    MEM16(eax + ecx * 2) = 0;

loc_003A7807: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x690)) >> 32) & 1);
    esp = esp + 0x690;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7820
 * Original: 0x003A7820 - 0x003A7862 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7820(void)
{
    uint32_t ebp = g_ebp;

loc_003A7820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x14;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + -12);
    eax = esp;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7855u); RECOMP_ABI_CALL(0x003A6F40u, sub_003A6F40); /* call 0x003A6F40 */

loc_003A7855: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7870
 * Original: 0x003A7870 - 0x003A78A5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7870(void)
{
    uint32_t ebp = g_ebp;

loc_003A7870: ;
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
    MEM32(esp + 4) = 0x7FFFFFFF;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A78A0u); RECOMP_ABI_CALL(0x003A6F40u, sub_003A6F40); /* call 0x003A6F40 */

loc_003A78A0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A78B0
 * Original: 0x003A78B0 - 0x003A78E7 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A78B0(void)
{
    uint32_t ebp = g_ebp;

loc_003A78B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x10;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -8);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A78DBu); RECOMP_ABI_CALL(0x003A7870u, sub_003A7870); /* call 0x003A7870 */

loc_003A78DB: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A78F0
 * Original: 0x003A78F0 - 0x003A798F (159 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A78F0(void)
{
    uint32_t ebp = g_ebp;

loc_003A78F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x5028;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + -8192;
    MEM32(ebp + -20492) = eax;
    MEM32(ebp + -20488) = 0x1000;
    MEM32(ebp + -20484) = 0;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = ebp + -20492;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A793Eu); RECOMP_ABI_CALL(0x003A6FB0u, sub_003A6FB0); /* call 0x003A6FB0 */

loc_003A793E: ;
    MEM32(ebp + -20496) = eax;
    ecx = ebp + -8192;
    eax = ebp + -20480;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x1000;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x3000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A796Cu); RECOMP_ABI_CALL(0x003A7990u, sub_003A7990); /* call 0x003A7990 */

loc_003A796C: ;
    ecx = ebp + -20480;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7981u); RECOMP_ABI_CALL(0x0041AE30u, sub_0041AE30); /* call 0x0041AE30 */

loc_003A7981: ;
    eax = MEM32(ebp + -20496);
    esp = esp + 0x5028;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7990
 * Original: 0x003A7990 - 0x003A7B88 (504 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7990(void)
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
loc_003A7990: ;
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
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -8) = 0;

loc_003A79B0: ;
    ecx = MEM32(ebp + -8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -21) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003A79D0; /* jae: above or equal (unsigned >=) */

loc_003A79BD: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + ecx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -21) = LO8(eax);

loc_003A79D0: ;
    SET_LO8(eax, MEM8(ebp + -21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_003A79DC; /* jne: not equal / not zero */

loc_003A79D7: ;
    goto loc_003A7B70;

loc_003A79DC: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + ecx * 2));
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xD800 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_B(_fa, _fb)) goto loc_003A7A59; /* jb: below (unsigned <) */

loc_003A79F2: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xDC00 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003A7A59; /* jae: above or equal (unsigned >=) */

loc_003A79FB: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003A7A59; /* jae: above or equal (unsigned >=) */

loc_003A7A06: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + ecx * 2 + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDC00 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_003A7A59; /* jl: less (signed <) */

loc_003A7A18: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + ecx * 2 + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_003A7A59; /* jge: greater or equal (signed >=) */

loc_003A7A2A: ;
    eax = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xD800)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _shift_result = RECOMP_SHIFT(eax, 0xA, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + 0x10000;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx + edx * 2 + 2));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0xDC00)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = eax + ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;

loc_003A7A59: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x80 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003A7A74; /* jae: above or equal (unsigned >=) */

loc_003A7A62: ;
    eax = MEM32(ebp + -12);
    MEM8(ebp + -16) = LO8(eax);
    MEM32(ebp + -20) = 1;
    goto loc_003A7B2D;

loc_003A7A74: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x800 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003A7AA5; /* jae: above or equal (unsigned >=) */

loc_003A7A7D: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 6, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | 0xC0;
    MEM8(ebp + -16) = LO8(eax);
    eax = MEM32(ebp + -12);
    eax = eax & 0x3F;
    eax = eax | 0x80;
    MEM8(ebp + -15) = LO8(eax);
    MEM32(ebp + -20) = 2;
    goto loc_003A7B2B;

loc_003A7AA5: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x10000 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_003A7AE4; /* jae: above or equal (unsigned >=) */

loc_003A7AAE: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | 0xE0;
    MEM8(ebp + -16) = LO8(eax);
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 6, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x3F;
    eax = eax | 0x80;
    MEM8(ebp + -15) = LO8(eax);
    eax = MEM32(ebp + -12);
    eax = eax & 0x3F;
    eax = eax | 0x80;
    MEM8(ebp + -14) = LO8(eax);
    MEM32(ebp + -20) = 3;
    goto loc_003A7B29;

loc_003A7AE4: ;
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0x12, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax | 0xF0;
    MEM8(ebp + -16) = LO8(eax);
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x3F;
    eax = eax | 0x80;
    MEM8(ebp + -15) = LO8(eax);
    eax = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(eax, 6, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 0x3F;
    eax = eax | 0x80;
    MEM8(ebp + -14) = LO8(eax);
    eax = MEM32(ebp + -12);
    eax = eax & 0x3F;
    eax = eax | 0x80;
    MEM8(ebp + -13) = LO8(eax);
    MEM32(ebp + -20) = 4;

loc_003A7B29: ;
    goto loc_003A7B2B;

loc_003A7B2B: ;
    goto loc_003A7B2D;

loc_003A7B2D: ;
    eax = MEM32(ebp + -4);
    eax = eax + MEM32(ebp + -20);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_003A7B3D; /* jbe: below or equal (unsigned <=) */

loc_003A7B3B: ;
    goto loc_003A7B70;

loc_003A7B3D: ;
    edx = MEM32(ebp + 0x10);
    edx = edx + MEM32(ebp + -4);
    ecx = ebp + -16;
    eax = MEM32(ebp + -20);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7B59u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_003A7B59: ;
    eax = MEM32(ebp + -20);
    eax = eax + MEM32(ebp + -4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003A79B0;

loc_003A7B70: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A7B80; /* je: equal / zero */

loc_003A7B76: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    MEM8(eax + ecx) = 0;

loc_003A7B80: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7B90
 * Original: 0x003A7B90 - 0x003A7BC7 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7B90(void)
{
    uint32_t ebp = g_ebp;

loc_003A7B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + 0x10;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -8);
    eax = esp;
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7BBBu); RECOMP_ABI_CALL(0x003A78F0u, sub_003A78F0); /* call 0x003A78F0 */

loc_003A7BBB: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7BD0
 * Original: 0x003A7BD0 - 0x003A7BFD (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7BD0(void)
{
    uint32_t ebp = g_ebp;

loc_003A7BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    edx = 0x838EDC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7BF8u); RECOMP_ABI_CALL(0x003A78F0u, sub_003A78F0); /* call 0x003A78F0 */

loc_003A7BF8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7C00
 * Original: 0x003A7C00 - 0x003A7C2C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7C00(void)
{
    uint32_t ebp = g_ebp;

loc_003A7C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = ebp + 0xC;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -4);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7C21u); RECOMP_ABI_CALL(0x003A7BD0u, sub_003A7BD0); /* call 0x003A7BD0 */

loc_003A7C21: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7C30
 * Original: 0x003A7C30 - 0x003A7C89 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7C30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A7C30: ;
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
    PUSH32(esp, 0x003A7C44u); RECOMP_ABI_CALL(0x00419150u, sub_00419150); /* call 0x00419150 */

loc_003A7C44: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7C55; /* jne: not equal / not zero */

loc_003A7C4D: ;
    MEM16(ebp + -2) = 0xFFFF;
    goto loc_003A7C80;

loc_003A7C55: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7C60u); RECOMP_ABI_CALL(0x00419150u, sub_00419150); /* call 0x00419150 */

loc_003A7C60: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7C71; /* jne: not equal / not zero */

loc_003A7C69: ;
    MEM16(ebp + -2) = 0xFFFF;
    goto loc_003A7C80;

loc_003A7C71: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    MEM16(ebp + -2) = LO16(eax);

loc_003A7C80: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7C90
 * Original: 0x003A7C90 - 0x003A7CEF (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7C90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    ecx = ZX16(MEM16(ebp + 8));
    ecx = ecx & 0xFF;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7CB6u); RECOMP_ABI_CALL(0x0041AA80u, sub_0041AA80); /* call 0x0041AA80 */

loc_003A7CB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7CD6; /* je: equal / zero */

loc_003A7CBB: ;
    ecx = ZX16(MEM16(ebp + 8));
    ecx = RECOMP_SAR(ecx, 8, 32, NULL);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7CD1u); RECOMP_ABI_CALL(0x0041AA80u, sub_0041AA80); /* call 0x0041AA80 */

loc_003A7CD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7CDE; /* jne: not equal / not zero */

loc_003A7CD6: ;
    MEM16(ebp + -2) = 0xFFFF;
    goto loc_003A7CE6;

loc_003A7CDE: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ebp + -2) = LO16(eax);

loc_003A7CE6: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7CF0
 * Original: 0x003A7CF0 - 0x003A7D41 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7CF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = ZX16(MEM16(ebp + 8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7D28; /* je: equal / zero */

loc_003A7D08: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFEu;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7D23u); RECOMP_ABI_CALL(0x0041B870u, sub_0041B870); /* call 0x0041B870 */

loc_003A7D23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7D30; /* je: equal / zero */

loc_003A7D28: ;
    MEM16(ebp + -2) = 0xFFFF;
    goto loc_003A7D38;

loc_003A7D30: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ebp + -2) = LO16(eax);

loc_003A7D38: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7D50
 * Original: 0x003A7D50 - 0x003A7DEC (156 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7D50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003A7D76; /* jg: greater (signed >) */

loc_003A7D6D: ;
    MEM32(ebp + -8) = 0;
    goto loc_003A7DE3;

loc_003A7D76: ;
    goto loc_003A7D78;

loc_003A7D78: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A7DC2; /* jge: greater or equal (signed >=) */

loc_003A7D83: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7D8Eu); RECOMP_ABI_CALL(0x003A7C30u, sub_003A7C30); /* call 0x003A7C30 */

loc_003A7D8E: ;
    MEM16(ebp + -14) = LO16(eax);
    eax = ZX16(MEM16(ebp + -14));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7D9F; /* jne: not equal / not zero */

loc_003A7D9D: ;
    goto loc_003A7DC2;

loc_003A7D9F: ;
    SET_LO16(edx, MEM16(ebp + -14));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    esi = ecx;
    esi = esi + 1;
    MEM32(ebp + -12) = esi;
    MEM16(eax + ecx * 2) = LO16(edx);
    eax = ZX16(MEM16(ebp + -14));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7DC0; /* jne: not equal / not zero */

loc_003A7DBE: ;
    goto loc_003A7DC2;

loc_003A7DC0: ;
    goto loc_003A7D78;

loc_003A7DC2: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7DD1; /* jne: not equal / not zero */

loc_003A7DC8: ;
    MEM32(ebp + -8) = 0;
    goto loc_003A7DE3;

loc_003A7DD1: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    MEM16(eax + ecx * 2) = 0;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;

loc_003A7DE3: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7DF0
 * Original: 0x003A7DF0 - 0x003A7E4C (92 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7DF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_003A7DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_003A7DFC: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_003A7E3D; /* je: equal / zero */

loc_003A7E05: ;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7E1Du); RECOMP_ABI_CALL(0x003A7C90u, sub_003A7C90); /* call 0x003A7C90 */

loc_003A7E1D: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_003A7E30; /* jne: not equal / not zero */

loc_003A7E27: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_003A7E44;

loc_003A7E30: ;
    goto loc_003A7E32;

loc_003A7E32: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_003A7DFC;

loc_003A7E3D: ;
    MEM32(ebp + -4) = 0;

loc_003A7E44: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7E50
 * Original: 0x003A7E50 - 0x003A7F16 (198 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7E50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A7E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x424;
    eax = MEM32(ebp + 8);
    ecx = ebp + -1032;
    eax = 0x838E50;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0x400;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7E7Du); RECOMP_ABI_CALL(0x00419630u, sub_00419630); /* call 0x00419630 */

loc_003A7E7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7E8B; /* jne: not equal / not zero */

loc_003A7E82: ;
    MEM32(ebp + -8) = 0;
    goto loc_003A7F0A;

loc_003A7E8B: ;
    ecx = ebp + -1032;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7E9Au); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A7E9A: ;
    MEM32(ebp + -1036) = eax;
    _fa = (uint32_t)(MEM32(ebp + -1036)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1036), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A7ED8; /* je: equal / zero */

loc_003A7EA9: ;
    eax = MEM32(ebp + -1036);
    eax = eax - 1;
    eax = (uint32_t)(int32_t)SMEM8(ebp + eax + -1032);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7ED8; /* jne: not equal / not zero */

loc_003A7EBF: ;
    eax = MEM32(ebp + -1036);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + -1036) = ecx;
    MEM8(ebp + eax + -1033) = 0;

loc_003A7ED8: ;
    esi = ebp + -1032;
    edx = MEM32(ebp + -1036);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -1036);
    eax = eax + 1;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7F04u); RECOMP_ABI_CALL(0x003A7F20u, sub_003A7F20); /* call 0x003A7F20 */

loc_003A7F04: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;

loc_003A7F0A: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x424;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A7F20
 * Original: 0x003A7F20 - 0x003A8096 (374 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7F20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_003A7F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = 0;

loc_003A7F49: ;
    ecx = MEM32(ebp + -8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -12) (32-bit) */
    MEM8(ebp + -25) = LO8(eax);
    if (CMP_AE(_fa, _fb)) goto loc_003A7F75; /* jae: above or equal (unsigned >=) */

loc_003A7F56: ;
    eax = MEM32(ebp + -8);
    ecx = ZX8(MEM8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -25) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A7F75; /* je: equal / zero */

loc_003A7F66: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x14) (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    MEM8(ebp + -25) = LO8(eax);

loc_003A7F75: ;
    SET_LO8(eax, MEM8(ebp + -25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A7F81; /* jne: not equal / not zero */

loc_003A7F7C: ;
    goto loc_003A807B;

loc_003A7F81: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax));
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xC2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A7FE2; /* jb: below (unsigned <) */

loc_003A7F9A: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xE0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A7FE2; /* jae: above or equal (unsigned >=) */

loc_003A7FA3: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A7FE2; /* jae: above or equal (unsigned >=) */

loc_003A7FAE: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 1));
    eax = eax & 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A7FE2; /* jne: not equal / not zero */

loc_003A7FC1: ;
    eax = MEM32(ebp + -20);
    eax = eax & 0x1F;
    _shift_result = RECOMP_SHIFT(eax, 6, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + -8);
    ecx = ZX8(MEM8(ecx + 1));
    ecx = ecx & 0x3F;
    eax = eax | ecx;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 2;
    goto loc_003A8055;

loc_003A7FE2: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xE0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003A8053; /* jb: below (unsigned <) */

loc_003A7FEB: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xF0 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A8053; /* jae: above or equal (unsigned >=) */

loc_003A7FF4: ;
    eax = MEM32(ebp + -8);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A8053; /* jae: above or equal (unsigned >=) */

loc_003A7FFF: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 1));
    eax = eax & 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8053; /* jne: not equal / not zero */

loc_003A8012: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 2));
    eax = eax & 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8053; /* jne: not equal / not zero */

loc_003A8025: ;
    eax = MEM32(ebp + -20);
    eax = eax & 0xF;
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + -8);
    ecx = ZX8(MEM8(ecx + 1));
    ecx = ecx & 0x3F;
    _shift_result = RECOMP_SHIFT(ecx, 6, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    ecx = MEM32(ebp + -8);
    ecx = ZX8(MEM8(ecx + 2));
    ecx = ecx & 0x3F;
    eax = eax | ecx;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 3;

loc_003A8053: ;
    goto loc_003A8055;

loc_003A8055: ;
    eax = MEM32(ebp + -20);
    SET_LO16(edx, LO16(eax));
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -16);
    esi = ecx;
    esi = esi + 1;
    MEM32(ebp + -16) = esi;
    MEM16(eax + ecx * 2) = LO16(edx);
    eax = MEM32(ebp + -24);
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;
    goto loc_003A7F49;

loc_003A807B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A808D; /* je: equal / zero */

loc_003A8081: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -16);
    MEM16(eax + ecx * 2) = 0;

loc_003A808D: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x18;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A80A0
 * Original: 0x003A80A0 - 0x003A80E7 (71 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A80A0(void)
{
    uint32_t ebp = g_ebp;

loc_003A80A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1018;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -4096;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x1000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A80D1u); RECOMP_ABI_CALL(0x003A7990u, sub_003A7990); /* call 0x003A7990 */

loc_003A80D1: ;
    eax = ebp + -4096;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A80DFu); RECOMP_ABI_CALL(0x0041E460u, sub_0041E460); /* call 0x0041E460 */

loc_003A80DF: ;
    esp = esp + 0x1018;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A80F0
 * Original: 0x003A80F0 - 0x003A8169 (121 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A80F0(void)
{
    uint32_t ebp = g_ebp;

loc_003A80F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x428;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8124u); RECOMP_ABI_CALL(0x003A7990u, sub_003A7990); /* call 0x003A7990 */

loc_003A8124: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -1040;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8149u); RECOMP_ABI_CALL(0x003A7990u, sub_003A7990); /* call 0x003A7990 */

loc_003A8149: ;
    ecx = ebp + -1024;
    eax = ebp + -1040;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8161u); RECOMP_ABI_CALL(0x003A51D0u, sub_003A51D0); /* call 0x003A51D0 */

loc_003A8161: ;
    esp = esp + 0x428;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A8170
 * Original: 0x003A8170 - 0x003A8223 (179 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8170(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x428;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -1044;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A81A7u); RECOMP_ABI_CALL(0x003A7990u, sub_003A7990); /* call 0x003A7990 */

loc_003A81A7: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A81D1; /* jne: not equal / not zero */

loc_003A81AD: ;
    ecx = ebp + -1044;
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A81CCu); RECOMP_ABI_CALL(0x003A5250u, sub_003A5250); /* call 0x003A5250 */

loc_003A81CC: ;
    MEM32(ebp + -4) = eax;
    goto loc_003A8218;

loc_003A81D1: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -1028;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A81F6u); RECOMP_ABI_CALL(0x003A7990u, sub_003A7990); /* call 0x003A7990 */

loc_003A81F6: ;
    edx = ebp + -1028;
    ecx = ebp + -1044;
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8215u); RECOMP_ABI_CALL(0x003A5250u, sub_003A5250); /* call 0x003A5250 */

loc_003A8215: ;
    MEM32(ebp + -4) = eax;

loc_003A8218: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x428;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A8230
 * Original: 0x003A8230 - 0x003A8275 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8230(void)
{
    uint32_t ebp = g_ebp;

loc_003A8230: ;
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
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A825Eu); RECOMP_ABI_CALL(0x003A7990u, sub_003A7990); /* call 0x003A7990 */

loc_003A825E: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8270u); RECOMP_ABI_CALL(0x003A5770u, sub_003A5770); /* call 0x003A5770 */

loc_003A8270: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A8280
 * Original: 0x003A8280 - 0x003A82C7 (71 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8280(void)
{
    uint32_t ebp = g_ebp;

loc_003A8280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x418;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A82B1u); RECOMP_ABI_CALL(0x003A7990u, sub_003A7990); /* call 0x003A7990 */

loc_003A82B1: ;
    eax = ebp + -1024;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A82BFu); RECOMP_ABI_CALL(0x003A52C0u, sub_003A52C0); /* call 0x003A52C0 */

loc_003A82BF: ;
    esp = esp + 0x418;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A82D0
 * Original: 0x003A82D0 - 0x003A8350 (128 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A82D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A82D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    edx = ebp + -20;
    eax = MEM32(0xDAACB0);
    eax = eax + 1;
    MEM32(0xDAACB0) = eax;
    ecx = 0x491421;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x14;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8307u); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_003A8307: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8316; /* jne: not equal / not zero */

loc_003A830D: ;
    eax = 0xDAAC88;
    MEM32(ebp + 8) = eax;

loc_003A8316: ;
    eax = ebp + -20;
    MEM32(ebp + -24) = eax;
    ecx = ebp + -20;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8328u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A8328: ;
    edx = MEM32(ebp + -24);
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8348u); RECOMP_ABI_CALL(0x003A7F20u, sub_003A7F20); /* call 0x003A7F20 */

loc_003A8348: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A8350
 * Original: 0x003A8350 - 0x003A83D7 (135 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8350(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8388; /* je: equal / zero */

loc_003A835F: ;
    edx = ebp + -68;
    eax = MEM32(ebp + 8);
    ecx = 0x49142B;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x40;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8383u); RECOMP_ABI_CALL(0x00436A90u, sub_00436A90); /* call 0x00436A90 */

loc_003A8383: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A8391; /* jne: not equal / not zero */

loc_003A8388: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A83CF;

loc_003A8391: ;
    eax = ebp + -68;
    MEM32(ebp + -72) = eax;
    ecx = ebp + -68;
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A83A3u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A83A3: ;
    edx = MEM32(ebp + -72);
    ecx = eax;
    eax = 0xDAACB4;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A83C6u); RECOMP_ABI_CALL(0x003A7F20u, sub_003A7F20); /* call 0x003A7F20 */

loc_003A83C6: ;
    eax = 0xDAACB4;
    MEM32(ebp + -4) = eax;

loc_003A83CF: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A83E0
 * Original: 0x003A83E0 - 0x003A8425 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A83E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A83E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8406; /* je: equal / zero */

loc_003A83EF: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8401u); RECOMP_ABI_CALL(0x00435B20u, sub_00435B20); /* call 0x00435B20 */

loc_003A8401: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A840F; /* jne: not equal / not zero */

loc_003A8406: ;
    MEM32(ebp + -4) = 0;
    goto loc_003A841D;

loc_003A840F: ;
    eax = ebp + -48;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A841Au); RECOMP_ABI_CALL(0x003A8350u, sub_003A8350); /* call 0x003A8350 */

loc_003A841A: ;
    MEM32(ebp + -4) = eax;

loc_003A841D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A8430
 * Original: 0x003A8430 - 0x003A8487 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8430(void)
{
    uint32_t ebp = g_ebp;

loc_003A8430: ;
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
    PUSH32(esp, 0x003A8444u); RECOMP_ABI_CALL(0x003DCB80u, sub_003DCB80); /* call 0x003DCB80 */

loc_003A8444: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -4);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8459u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A8459: ;
    edx = MEM32(ebp + -8);
    ecx = eax;
    eax = 0xDAAD34;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x100;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A847Cu); RECOMP_ABI_CALL(0x003A7F20u, sub_003A7F20); /* call 0x003A7F20 */

loc_003A847C: ;
    eax = 0xDAAD34;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A8490
 * Original: 0x003A8490 - 0x003A854A (186 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8490(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x414;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8516; /* je: equal / zero */

loc_003A84A3: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A8516; /* je: equal / zero */

loc_003A84AE: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -1028;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A84D3u); RECOMP_ABI_CALL(0x003A7990u, sub_003A7990); /* call 0x003A7990 */

loc_003A84D3: ;
    eax = ebp + -1028;
    MEM32(ebp + -1032) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A84E4u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003A84E4: ;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A84EEu); RECOMP_ABI_CALL(0x003DCB80u, sub_003DCB80); /* call 0x003DCB80 */

loc_003A84EE: ;
    ecx = MEM32(ebp + -1032);
    esi = 0x838DC4;
    edx = 0x45DFBF;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8514u); RECOMP_ABI_CALL(0x0041AA40u, sub_0041AA40); /* call 0x0041AA40 */

loc_003A8514: ;
    goto loc_003A8541;

loc_003A8516: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A851Bu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_003A851B: ;
    eax = MEM32(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8525u); RECOMP_ABI_CALL(0x003DCB80u, sub_003DCB80); /* call 0x003DCB80 */

loc_003A8525: ;
    edx = 0x838DC4;
    ecx = 0x44DB07;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8541u); RECOMP_ABI_CALL(0x0041AA40u, sub_0041AA40); /* call 0x0041AA40 */

loc_003A8541: ;
    esp = esp + 0x414;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A8550
 * Original: 0x003A8550 - 0x003A858C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8550(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    eax = eax + 1;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A857E; /* jae: above or equal (unsigned >=) */

loc_003A856B: ;
    SET_LO16(edx, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 8);
    MEM16(eax + ecx * 2) = LO16(edx);

loc_003A857E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    ecx = ecx + 1;
    MEM32(eax + 8) = ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A8590
 * Original: 0x003A8590 - 0x003A863F (175 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8590(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x824;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A85B8; /* jne: not equal / not zero */

loc_003A85AF: ;
    eax = 0x499D2F;
    MEM32(ebp + 0xC) = eax;

loc_003A85B8: ;
    ecx = MEM32(ebp + 0xC);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A85C4u); RECOMP_ABI_CALL(0x0042A000u, sub_0042A000); /* call 0x0042A000 */

loc_003A85C4: ;
    MEM32(ebp + -2056) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003A85E4; /* jl: less (signed <) */

loc_003A85D0: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -2056)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -2056) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003A85E4; /* jae: above or equal (unsigned >=) */

loc_003A85DB: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -2056) = eax;

loc_003A85E4: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -2056);
    eax = ebp + -2052;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0x400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A860Bu); RECOMP_ABI_CALL(0x003A7F20u, sub_003A7F20); /* call 0x003A7F20 */

loc_003A860B: ;
    esi = MEM32(ebp + 8);
    edx = ebp + -2052;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A8636u); RECOMP_ABI_CALL(0x003A8640u, sub_003A8640); /* call 0x003A8640 */

loc_003A8636: ;
    esp = esp + 0x824;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_003A8640
 * Original: 0x003A8640 - 0x003A8720 (224 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8640(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003A8640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A866B; /* jne: not equal / not zero */

loc_003A8662: ;
    eax = 0x4D0C74;
    MEM32(ebp + 0xC) = eax;

loc_003A866B: ;
    goto loc_003A866D;

loc_003A866D: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    ecx = ZX16(MEM16(eax + ecx * 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003A869E; /* je: equal / zero */

loc_003A8681: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM8(ebp + -10) = LO8(eax);
    if (CMP_L(_fas, _fbs)) goto loc_003A8698; /* jl: less (signed <) */

loc_003A868C: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM8(ebp + -10) = LO8(eax);

loc_003A8698: ;
    SET_LO8(eax, MEM8(ebp + -10));
    MEM8(ebp + -9) = LO8(eax);

loc_003A869E: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003A86A7; /* jne: not equal / not zero */

loc_003A86A5: ;
    goto loc_003A86B2;

loc_003A86A7: ;
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    goto loc_003A866D;

loc_003A86B2: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003A86CD; /* jne: not equal / not zero */

loc_003A86B8: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    eax = eax - MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A86CDu); RECOMP_ABI_CALL(0x003A8720u, sub_003A8720); /* call 0x003A8720 */

loc_003A86CD: ;
    MEM32(ebp + -8) = 0;

loc_003A86D4: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003A8700; /* jge: greater or equal (signed >=) */

loc_003A86DC: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    MEM32(esp) = edx;
    eax = ZX16(MEM16(eax + ecx * 2));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A86F5u); RECOMP_ABI_CALL(0x003A8550u, sub_003A8550); /* call 0x003A8550 */

loc_003A86F5: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_003A86D4;

loc_003A8700: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003A871B; /* je: equal / zero */

loc_003A8706: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    eax = eax - MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A871Bu); RECOMP_ABI_CALL(0x003A8720u, sub_003A8720); /* call 0x003A8720 */

loc_003A871B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}

