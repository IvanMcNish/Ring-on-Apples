/* Generated ELF translation shard 8: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_000E1CB0
 * Original: 0x000E1CB0 - 0x000E20EB (1083 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1CB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000E1CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(0x5822C0);
    MEM32(ebp + -4) = eax;

loc_000E1CC1: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x94C);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1CDAu); RECOMP_ABI_CALL(0x003BDB50u, sub_003BDB50); /* call 0x003BDB50 */

loc_000E1CDA: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1CE2u); RECOMP_ABI_CALL(0x000E20F0u, sub_000E20F0); /* call 0x000E20F0 */

loc_000E1CE2: ;
    MEM32(esp) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1CEEu); RECOMP_ABI_CALL(0x000E2120u, sub_000E2120); /* call 0x000E2120 */

loc_000E1CEE: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1CF9u); RECOMP_ABI_CALL(0x000E2150u, sub_000E2150); /* call 0x000E2150 */

loc_000E1CF9: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1D04u); RECOMP_ABI_CALL(0x000E2280u, sub_000E2280); /* call 0x000E2280 */

loc_000E1D04: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1D09u); RECOMP_ABI_CALL(0x000E2480u, sub_000E2480); /* call 0x000E2480 */

loc_000E1D09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E208D; /* jne: not equal / not zero */

loc_000E1D11: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1D1Fu); RECOMP_ABI_CALL(0x000E2120u, sub_000E2120); /* call 0x000E2120 */

loc_000E1D1F: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1D2Au); RECOMP_ABI_CALL(0x000E24C0u, sub_000E24C0); /* call 0x000E24C0 */

loc_000E1D2A: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1D35u); RECOMP_ABI_CALL(0x000E2630u, sub_000E2630); /* call 0x000E2630 */

loc_000E1D35: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1D43u); RECOMP_ABI_CALL(0x000E26A0u, sub_000E26A0); /* call 0x000E26A0 */

loc_000E1D43: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x104;
    eax = 0x483D21;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1D66u); RECOMP_ABI_CALL(0x000E0290u, sub_000E0290); /* call 0x000E0290 */

loc_000E1D66: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E2082; /* je: equal / zero */

loc_000E1D6E: ;
    MEM8(ebp + -5) = 1;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x10C);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x800)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + -4);
    MEM32(eax + 0xA9C) = ecx;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0xA9C);
    eax = MEM32(ebp + -4);
    MEM32(eax + 0xA98) = ecx;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1DA7u); RECOMP_ABI_CALL(0x000E26E0u, sub_000E26E0); /* call 0x000E26E0 */

loc_000E1DA7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1DACu); RECOMP_ABI_CALL(0x000E2480u, sub_000E2480); /* call 0x000E2480 */

loc_000E1DAC: ;
    SET_LO8(ecx, LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -15) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000E1DD6; /* jne: not equal / not zero */

loc_000E1DB8: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0xA9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA9C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -15) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_000E1DD6; /* jle: less or equal (signed <=) */

loc_000E1DC9: ;
    eax = ZX8(MEM8(ebp + -5));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -15) = LO8(eax);

loc_000E1DD6: ;
    SET_LO8(eax, MEM8(ebp + -15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_000E1DE2; /* jne: not equal / not zero */

loc_000E1DDD: ;
    goto loc_000E2040;

loc_000E1DE2: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x994)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x994), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F04; /* je: equal / zero */

loc_000E1DF2: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABA);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1E0Bu); RECOMP_ABI_CALL(0x000E1500u, sub_000E1500); /* call 0x000E1500 */

loc_000E1E0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -13) = LO8(eax);
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0xAB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xAB4), 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -16) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000E1E3D; /* jne: not equal / not zero */

loc_000E1E2A: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -16) = LO8(eax);

loc_000E1E3D: ;
    SET_LO8(eax, MEM8(ebp + -16));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -14) = LO8(eax);
    eax = ZX8(MEM8(ebp + -13));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E1E5E; /* jne: not equal / not zero */

loc_000E1E51: ;
    eax = ZX8(MEM8(ebp + -14));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1EFB; /* je: equal / zero */

loc_000E1E5E: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1E70; /* je: equal / zero */

loc_000E1E64: ;
    MEM32(esp) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1E70u); RECOMP_ABI_CALL(0x000E2120u, sub_000E2120); /* call 0x000E2120 */

loc_000E1E70: ;
    _fa = (uint32_t)(MEM8(ebp + -14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -14), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1E82; /* je: equal / zero */

loc_000E1E76: ;
    MEM32(esp) = 7;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1E82u); RECOMP_ABI_CALL(0x000E2120u, sub_000E2120); /* call 0x000E2120 */

loc_000E1E82: ;
    MEM32(esp) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1E8Eu); RECOMP_ABI_CALL(0x000E2120u, sub_000E2120); /* call 0x000E2120 */

loc_000E1E8E: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x958);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1E9Fu); RECOMP_ABI_CALL(0x003BDC10u, sub_003BDC10); /* call 0x003BDC10 */

loc_000E1E9F: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x950);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x1388;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1EC3u); RECOMP_ABI_CALL(0x003BD8C0u, sub_003BD8C0); /* call 0x003BD8C0 */

loc_000E1EC3: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM32(ebp + -12) = eax;
    MEM32(esp) = 5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1ED5u); RECOMP_ABI_CALL(0x000E26A0u, sub_000E26A0); /* call 0x000E26A0 */

loc_000E1ED5: ;
    _fa = (uint32_t)(MEM8(ebp + -14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -14), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1EE7; /* je: equal / zero */

loc_000E1EDB: ;
    MEM32(esp) = 7;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1EE7u); RECOMP_ABI_CALL(0x000E26A0u, sub_000E26A0); /* call 0x000E26A0 */

loc_000E1EE7: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1EF9; /* je: equal / zero */

loc_000E1EED: ;
    MEM32(esp) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1EF9u); RECOMP_ABI_CALL(0x000E26A0u, sub_000E26A0); /* call 0x000E26A0 */

loc_000E1EF9: ;
    goto loc_000E1F02;

loc_000E1EFB: ;
    MEM32(ebp + -12) = 0xC0;

loc_000E1F02: ;
    goto loc_000E1F0B;

loc_000E1F04: ;
    MEM32(ebp + -12) = 0xC0;

loc_000E1F0B: ;
    MEM8(ebp + -5) = 0;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    if (TEST_Z(_fa, _fb)) goto loc_000E1F3A; /* je: equal / zero */

loc_000E1F19: ;
    goto loc_000E1F1B;

loc_000E1F1B: ;
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xC0)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_000E1F3F; /* je: equal / zero */

loc_000E1F25: ;
    goto loc_000E1F27;

loc_000E1F27: ;
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x102)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_000E1FC5; /* je: equal / zero */

loc_000E1F35: ;
    goto loc_000E2007;

loc_000E1F3A: ;
    goto loc_000E203B;

loc_000E1F3F: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x998;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1F57u); RECOMP_ABI_CALL(0x000E27B0u, sub_000E27B0); /* call 0x000E27B0 */

loc_000E1F57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E1F8F; /* jne: not equal / not zero */

loc_000E1F5B: ;
    ecx = 0x4644D9;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x351;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1F83u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E1F83: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1F8Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E1F8F: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1F9Au); RECOMP_ABI_CALL(0x000E2810u, sub_000E2810); /* call 0x000E2810 */

loc_000E1F9A: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1FA5u); RECOMP_ABI_CALL(0x000E2BF0u, sub_000E2BF0); /* call 0x000E2BF0 */

loc_000E1FA5: ;
    eax = MEM32(0x5822C0);
    eax = MEM32(eax + 0x904);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -5) = LO8(eax);
    goto loc_000E203B;

loc_000E1FC5: ;
    ecx = 0x47B1CA;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x362;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1FEDu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E1FED: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E1FF9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E1FF9: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2005u); RECOMP_ABI_CALL(0x000E2FA0u, sub_000E2FA0); /* call 0x000E2FA0 */

loc_000E2005: ;
    goto loc_000E203B;

loc_000E2007: ;
    ecx = 0x474EB4;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x36B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E202Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E202F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E203Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E203B: ;
    goto loc_000E1DA7;

loc_000E2040: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0xA9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA9C), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E2080; /* jne: not equal / not zero */

loc_000E204C: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2057u); RECOMP_ABI_CALL(0x000E2FD0u, sub_000E2FD0); /* call 0x000E2FD0 */

loc_000E2057: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -4);
    eax = eax + 0x104;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x800;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2080u); RECOMP_ABI_CALL(0x000E3100u, sub_000E3100); /* call 0x000E3100 */

loc_000E2080: ;
    goto loc_000E2082;

loc_000E2082: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E208Du); RECOMP_ABI_CALL(0x000E3150u, sub_000E3150); /* call 0x000E3150 */

loc_000E208D: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2098u); RECOMP_ABI_CALL(0x000E2FD0u, sub_000E2FD0); /* call 0x000E2FD0 */

loc_000E2098: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x990);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E20A9u); RECOMP_ABI_CALL(0x003BD690u, sub_003BD690); /* call 0x003BD690 */

loc_000E20A9: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x990) = 0;
    MEM32(esp) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E20C5u); RECOMP_ABI_CALL(0x000E26A0u, sub_000E26A0); /* call 0x000E26A0 */

loc_000E20C5: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x98C) = 0;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x954);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E20E3u); RECOMP_ABI_CALL(0x003BDC10u, sub_003BDC10); /* call 0x003BDC10 */

loc_000E20E3: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    goto loc_000E1CC1;

}


/**
 * sub_000E20F0
 * Original: 0x000E20F0 - 0x000E2120 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E20F0(void)
{
    uint32_t ebp = g_ebp;

loc_000E20F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0xA02978;
    eax = eax + 0x100;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E211Bu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E211B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E2120
 * Original: 0x000E2120 - 0x000E2149 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2120(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_000E2120: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = 0xA02978;
    eax = eax + 0x128;
    _shift_result = RECOMP_SHIFT(ecx, 3, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2144u); RECOMP_ABI_CALL(0x003BE690u, sub_003BE690); /* call 0x003BE690 */

loc_000E2144: ;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E2150
 * Original: 0x000E2150 - 0x000E2279 (297 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2150(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x960);
    MEM32(ebp + -4) = eax;
    MEM16(ebp + -6) = 0;

loc_000E216B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E21A0; /* jge: greater or equal (signed >=) */

loc_000E2174: ;
    edx = MEM32(ebp + -4);
    eax = MEM32(0x5822C0);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(eax + ecx * 4 + 0x964) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E218Cu); RECOMP_ABI_CALL(0x000E31B0u, sub_000E31B0); /* call 0x000E31B0 */

loc_000E218C: ;
    eax = eax + MEM32(ebp + -4);
    MEM32(ebp + -4) = eax;
    SET_LO16(eax, MEM16(ebp + -6));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -6) = LO16(eax);
    goto loc_000E216B;

loc_000E21A0: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(0x5822C0);
    MEM32(eax + 0x984) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x960);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x512000;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E21CFu); RECOMP_ABI_CALL(0x003BFAD0u, sub_003BFAD0); /* call 0x003BFAD0 */

loc_000E21CF: ;
    esp = esp - 0xC;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x960);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFD;
    MEM32(esp + 8) = 0x500000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E21F3u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E21F3: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x960);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x500000;
    MEM32(esp + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2214u); RECOMP_ABI_CALL(0x003BFAD0u, sub_003BFAD0); /* call 0x003BFAD0 */

loc_000E2214: ;
    esp = esp - 0xC;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x944) = 0x12000;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x960);
    ecx = ecx + 0x512000;
    ecx = ecx + 0xFFFEE000u;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x940) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x940);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x948) = ecx;
    eax = MEM32(ebp + 8);
    eax = eax + 0x990;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFA;
    MEM32(esp + 8) = 0x1C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2274u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E2274: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E2280
 * Original: 0x000E2280 - 0x000E2474 (500 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2280(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x80000000u;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 3;
    MEM32(esp + 0x14) = 0x60000000;
    MEM32(esp + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E22C6u); RECOMP_ABI_CALL(0x003BB140u, sub_003BB140); /* call 0x003BB140 */

loc_000E22C6: ;
    esp = esp - 0x1C;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x990) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x990);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E22EFu); RECOMP_ABI_CALL(0x003BBE80u, sub_003BBE80); /* call 0x003BBE80 */

loc_000E22EF: ;
    esp = esp - 8;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xA94) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xA94);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xA8C) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xA94);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xA90) = ecx;
    eax = MEM32(ebp + 8);
    eax = eax + 0x99C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xDC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2343u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E2343: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xA94)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA94), 0x800 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E2386; /* jae: above or equal (unsigned >=) */

loc_000E2352: ;
    ecx = 0x45BD22;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3C4;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E237Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E237A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2386u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2386: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x994;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E23A8u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E23A8: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x998;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E23CAu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E23CA: ;
    MEM16(ebp + -2) = 0;

loc_000E23D0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E23F8; /* jge: greater or equal (signed >=) */

loc_000E23D9: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM16(eax + ecx * 2 + 0xA78) = 0xFFFF;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000E23D0;

loc_000E23F8: ;
    MEM16(ebp + -4) = 0;

loc_000E23FE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E2426; /* jge: greater or equal (signed >=) */

loc_000E2407: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM16(eax + ecx * 2 + 0xA88) = 0xFFFF;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_000E23FE;

loc_000E2426: ;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xAB8) = 0;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xABA) = 0;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xABE) = 0;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xAC0) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xAB4) = 0;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xABC) = 0xFFFF;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E2480
 * Original: 0x000E2480 - 0x000E24B6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2480(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0x5822C0);
    eax = MEM32(eax + 0x950);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E24A3u); RECOMP_ABI_CALL(0x003BDB50u, sub_003BDB50); /* call 0x003BDB50 */

loc_000E24A3: ;
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E24C0
 * Original: 0x000E24C0 - 0x000E262D (365 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E24C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E24C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xA98) = 0;
    eax = MEM32(ebp + 8);
    eax = eax + 0x104;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x800;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E24F8u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E24F8: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0x104;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x800;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2521u); RECOMP_ABI_CALL(0x000E3100u, sub_000E3100); /* call 0x000E3100 */

loc_000E2521: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E252Cu); RECOMP_ABI_CALL(0x000E31C0u, sub_000E31C0); /* call 0x000E31C0 */

loc_000E252C: ;
    eax = MEM32(0x5822C0);
    _fa = (uint32_t)(MEM32(eax + 0xA98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA98), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E256E; /* je: equal / zero */

loc_000E253A: ;
    ecx = 0x486E4E;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3EB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2562u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E2562: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E256Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E256E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0x104;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x800;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2597u); RECOMP_ABI_CALL(0x000E32E0u, sub_000E32E0); /* call 0x000E32E0 */

loc_000E2597: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E25A2u); RECOMP_ABI_CALL(0x000E3330u, sub_000E3330); /* call 0x000E3330 */

loc_000E25A2: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x104;
    eax = 0x46A25A;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E25C5u); RECOMP_ABI_CALL(0x000E0290u, sub_000E0290); /* call 0x000E0290 */

loc_000E25C5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xA94);
    ecx = ecx - 0x800;
    MEM32(eax + 0xA94) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xAA8) = 0x800;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xAA4) = 0x800;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xAA0) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xAAC) = 0;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xAC2) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xAB0) = 0;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E2630
 * Original: 0x000E2630 - 0x000E2695 (101 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2630(void)
{
    uint32_t ebp = g_ebp;

loc_000E2630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x908) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x90C) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x914) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x918) = 0;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x908;
    eax = 0x46A25F;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2690u); RECOMP_ABI_CALL(0x001F4440u, sub_001F4440); /* call 0x001F4440 */

loc_000E2690: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E26A0
 * Original: 0x000E26A0 - 0x000E26DA (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E26A0(void)
{
    uint32_t ebp = g_ebp;

loc_000E26A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = ebp + -8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E26B4u); RECOMP_ABI_CALL(0x003BE690u, sub_003BE690); /* call 0x003BE690 */

loc_000E26B4: ;
    esp = esp - 4;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    ecx = ecx - MEM32(eax * 8 + 0xA02AA0);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax * 4 + 0xA02A78);
    MEM32(eax * 4 + 0xA02A78) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E26E0
 * Original: 0x000E26E0 - 0x000E27A5 (197 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E26E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_000E26E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -2) = 0;

loc_000E26EF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E27A0; /* jge: greater or equal (signed >=) */

loc_000E26FC: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    edx = ecx;
    edx = RECOMP_SAR(edx, 5, 32, NULL);
    eax = MEM32(eax + edx * 4 + 0x994);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2756; /* je: equal / zero */

loc_000E2722: ;
    ecx = 0x46454E;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x416;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E274Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E274A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2756u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2756: ;
    ecx = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2769u); RECOMP_ABI_CALL(0x000E3860u, sub_000E3860); /* call 0x000E3860 */

loc_000E2769: ;
    ecx = ZX16(MEM16(ebp + -2));
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = RECOMP_SAR(ecx, 5, 32, NULL);
    edx = edx | MEM32(eax + ecx * 4 + 0x994);
    MEM32(eax + ecx * 4 + 0x994) = edx;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000E26EF;

loc_000E27A0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E27B0
 * Original: 0x000E27B0 - 0x000E280F (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E27B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E27B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 0;
    MEM16(ebp + -4) = 0;

loc_000E27C6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E2807; /* jge: greater or equal (signed >=) */

loc_000E27CF: ;
    ecx = ZX8(MEM8(ebp + -1));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000E27EE; /* jne: not equal / not zero */

loc_000E27DD: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_000E27EE: ;
    SET_LO8(eax, MEM8(ebp + -5));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_000E27C6;

loc_000E2807: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E2810
 * Original: 0x000E2810 - 0x000E2BEC (988 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2810(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_000E2810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAB4), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000E292F; /* jle: less or equal (signed <=) */

loc_000E2829: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAB0), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E292F; /* je: equal / zero */

loc_000E2839: ;
    MEM16(ebp + -2) = 0;

loc_000E283F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E292D; /* jge: greater or equal (signed >=) */

loc_000E284C: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = ecx + 9;
    edx = ecx;
    edx = RECOMP_SAR(edx, 5, 32, NULL);
    eax = MEM32(eax + edx * 4 + 0x998);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E291A; /* je: equal / zero */

loc_000E2879: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM16(eax + ecx * 2 + 0xA88) = 0xFFFF;
    ecx = ZX16(MEM16(ebp + -2));
    ecx = ecx + 9;
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    edx = edx ^ 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = ecx + 9;
    ecx = RECOMP_SAR(ecx, 5, 32, NULL);
    edx = edx & MEM32(eax + ecx * 4 + 0x998);
    MEM32(eax + ecx * 4 + 0x998) = edx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xAB4);
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(eax + 0xAB4) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xAB0) = 0;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAB4), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E2918; /* jge: greater or equal (signed >=) */

loc_000E28E4: ;
    ecx = 0x4674FD;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x433;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E290Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E290C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2918u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2918: ;
    goto loc_000E291A;

loc_000E291A: ;
    goto loc_000E291C;

loc_000E291C: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000E283F;

loc_000E292D: ;
    goto loc_000E292F;

loc_000E292F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xA9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA9C), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E2A32; /* je: equal / zero */

loc_000E293F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAB0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAB0), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2A32; /* jne: not equal / not zero */

loc_000E294F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAB4), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000E2A32; /* jle: less or equal (signed <=) */

loc_000E295F: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E2995; /* je: equal / zero */

loc_000E296E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xABC);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0xA88);
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xABE);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000E2A30; /* jle: less or equal (signed <=) */

loc_000E2995: ;
    MEM16(ebp + -2) = 0;

loc_000E299B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E2A2E; /* jge: greater or equal (signed >=) */

loc_000E29A8: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABC);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E2A1B; /* je: equal / zero */

loc_000E29BA: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0xA88);
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xABE);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2A1B; /* jne: not equal / not zero */

loc_000E29D7: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0xA88;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xAB0) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2A04u); RECOMP_ABI_CALL(0x000E3B30u, sub_000E3B30); /* call 0x000E3B30 */

loc_000E2A04: ;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0xABE));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xABE) = LO16(ecx);
    goto loc_000E2A2E;

loc_000E2A1B: ;
    goto loc_000E2A1D;

loc_000E2A1D: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000E299B;

loc_000E2A2E: ;
    goto loc_000E2A30;

loc_000E2A30: ;
    goto loc_000E2A32;

loc_000E2A32: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2BE7; /* jne: not equal / not zero */

loc_000E2A45: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAB4), 1 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E2BE7; /* jge: greater or equal (signed >=) */

loc_000E2A55: ;
    MEM16(ebp + -2) = 0;

loc_000E2A5B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E2B08; /* jge: greater or equal (signed >=) */

loc_000E2A68: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0xA88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2AF5; /* jne: not equal / not zero */

loc_000E2A7C: ;
    eax = MEM32(ebp + 8);
    SET_LO16(edx, MEM16(eax + 0xAC0));
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM16(eax + ecx * 2 + 0xA88) = LO16(edx);
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0xAC0));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xAC0) = LO16(ecx);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xAB4);
    ecx = ecx + 1;
    MEM32(eax + 0xAB4) = ecx;
    SET_LO16(ecx, MEM16(ebp + -2));
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xABC) = LO16(ecx);
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    eax = MEM32(eax + ecx * 4 + 0x984);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x400000;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2AF0u); RECOMP_ABI_CALL(0x003BFAD0u, sub_003BFAD0); /* call 0x003BFAD0 */

loc_000E2AF0: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    goto loc_000E2B08;

loc_000E2AF5: ;
    goto loc_000E2AF7;

loc_000E2AF7: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000E2A5B;

loc_000E2B08: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E2B4B; /* jne: not equal / not zero */

loc_000E2B17: ;
    ecx = 0x478555;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x464;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2B3Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E2B3F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2B4Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2B4B: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAB4), 1 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000E2B8B; /* jle: less or equal (signed <=) */

loc_000E2B57: ;
    ecx = 0x480D26;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x465;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2B7Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E2B7F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2B8Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2B8B: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xABC);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0xA88);
    eax = eax + 1;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xAC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E2BE5; /* je: equal / zero */

loc_000E2BB1: ;
    ecx = 0x45EC85;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x466;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2BD9u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E2BD9: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2BE5u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2BE5: ;
    goto loc_000E2BE7;

loc_000E2BE7: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E2BF0
 * Original: 0x000E2BF0 - 0x000E2F9F (943 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2BF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0x908;
    MEM32(ebp + -8) = eax;

loc_000E2C05: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2C1Bu); RECOMP_ABI_CALL(0x003BE520u, sub_003BE520); /* call 0x003BE520 */

loc_000E2C1B: ;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2C29u); RECOMP_ABI_CALL(0x000E2810u, sub_000E2810); /* call 0x000E2810 */

loc_000E2C29: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2D65; /* jne: not equal / not zero */

loc_000E2C36: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAAC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2C76; /* je: equal / zero */

loc_000E2C42: ;
    ecx = 0x492145;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x47D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2C6Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E2C6A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2C76u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2C76: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax + 0xAC2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xAC2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2CB7; /* je: equal / zero */

loc_000E2C83: ;
    ecx = 0x45BD4E;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x47E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2CABu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E2CAB: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2CB7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2CB7: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABA);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2CD0u); RECOMP_ABI_CALL(0x000E1500u, sub_000E1500); /* call 0x000E1500 */

loc_000E2CD0: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xAAC) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAAC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D5E; /* je: equal / zero */

loc_000E2CE7: ;
    eax = MEM32(ebp + -8);
    MEM32(eax + 4) = 0x20000;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xAAC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2D09u); RECOMP_ABI_CALL(0x000E3AB0u, sub_000E3AB0); /* call 0x000E3AB0 */

loc_000E2D09: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xAC2) = 1;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0x20000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D5C; /* je: equal / zero */

loc_000E2D28: ;
    ecx = 0x486EBC;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x48B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2D50u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E2D50: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2D5Cu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2D5C: ;
    goto loc_000E2D63;

loc_000E2D5E: ;
    goto loc_000E2F99;

loc_000E2D63: ;
    goto loc_000E2D65;

loc_000E2D65: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAAC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2DA5; /* jne: not equal / not zero */

loc_000E2D71: ;
    ecx = 0x45ECF4;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x494;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2D99u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E2D99: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2DA5u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2DA5: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2DB9; /* jne: not equal / not zero */

loc_000E2DB4: ;
    goto loc_000E2F99;

loc_000E2DB9: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2DFD; /* jne: not equal / not zero */

loc_000E2DC2: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABC);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2DDBu); RECOMP_ABI_CALL(0x000E3CB0u, sub_000E3CB0); /* call 0x000E3CB0 */

loc_000E2DDB: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xABC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2DF5u); RECOMP_ABI_CALL(0x000E3D20u, sub_000E3D20); /* call 0x000E3D20 */

loc_000E2DF5: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x10) = ecx;

loc_000E2DFD: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E0F; /* je: equal / zero */

loc_000E2E06: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2E14; /* jne: not equal / not zero */

loc_000E2E0F: ;
    goto loc_000E2C05;

loc_000E2E14: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2E19u); RECOMP_ABI_CALL(0x000E3F90u, sub_000E3F90); /* call 0x000E3F90 */

loc_000E2E19: ;
    MEM32(esp) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2E25u); RECOMP_ABI_CALL(0x000E2120u, sub_000E2120); /* call 0x000E2120 */

loc_000E2E25: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAB4), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E2E3D; /* jle: less or equal (signed <=) */

loc_000E2E31: ;
    MEM32(esp) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2E3Du); RECOMP_ABI_CALL(0x000E2120u, sub_000E2120); /* call 0x000E2120 */

loc_000E2E3D: ;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2E52u); RECOMP_ABI_CALL(0x001F4480u, sub_001F4480); /* call 0x001F4480 */

loc_000E2E52: ;
    MEM32(ebp + -12) = eax;
    MEM32(esp) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2E61u); RECOMP_ABI_CALL(0x000E26A0u, sub_000E26A0); /* call 0x000E26A0 */

loc_000E2E61: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xAB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAB4), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E2E79; /* jle: less or equal (signed <=) */

loc_000E2E6D: ;
    MEM32(esp) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2E79u); RECOMP_ABI_CALL(0x000E26A0u, sub_000E26A0); /* call 0x000E26A0 */

loc_000E2E79: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2E85; /* je: equal / zero */

loc_000E2E7F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2EFD; /* jne: not equal / not zero */

loc_000E2E85: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2EDD; /* jne: not equal / not zero */

loc_000E2E8E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xAAC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2EA6u); RECOMP_ABI_CALL(0x000E3FB0u, sub_000E3FB0); /* call 0x000E3FB0 */

loc_000E2EA6: ;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0xABA));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xABA) = LO16(ecx);
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0xAC2));
    SET_LO16(ecx, LO16(ecx) + 0xFFFFFFFFu);
    MEM16(eax + 0xAC2) = LO16(ecx);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xAAC) = 0;

loc_000E2EDD: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2EEC; /* je: equal / zero */

loc_000E2EE6: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2EF8; /* jne: not equal / not zero */

loc_000E2EEC: ;
    eax = MEM32(ebp + 8);
    MEM16(eax + 0xABC) = 0xFFFF;

loc_000E2EF8: ;
    goto loc_000E2F94;

loc_000E2EFD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2F02u); RECOMP_ABI_CALL(0x000E2480u, sub_000E2480); /* call 0x000E2480 */

loc_000E2F02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2F0B; /* je: equal / zero */

loc_000E2F06: ;
    goto loc_000E2F99;

loc_000E2F0B: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2F25; /* je: equal / zero */

loc_000E2F1A: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -20) = eax;
    goto loc_000E2F30;

loc_000E2F25: ;
    eax = 0x452F3B;
    MEM32(ebp + -20) = eax;
    goto loc_000E2F30;

loc_000E2F30: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -20);
    esi = 0xA02978;
    edx = 0x46A265;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2F56u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000E2F56: ;
    ecx = eax;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4E0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2F7Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E2F7A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2F86u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E2F86: ;
    MEM32(esp) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2F92u); RECOMP_ABI_CALL(0x000E2FA0u, sub_000E2FA0); /* call 0x000E2FA0 */

loc_000E2F92: ;
    goto loc_000E2F99;

loc_000E2F94: ;
    goto loc_000E2C05;

loc_000E2F99: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E2FA0
 * Original: 0x000E2FA0 - 0x000E2FC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2FA0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_000E2FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO16(eax, MEM16(ebp + 8));
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = MEM32(0x5822C0);
    ecx = MEM32(eax + 0x904);
    ecx = ecx | edx;
    MEM32(eax + 0x904) = ecx;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E2FD0
 * Original: 0x000E2FD0 - 0x000E30F9 (297 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2FD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -2) = 0xB;

loc_000E2FDF: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x994;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E2FF7u); RECOMP_ABI_CALL(0x000E27B0u, sub_000E27B0); /* call 0x000E27B0 */

loc_000E2FF7: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E301D; /* je: equal / zero */

loc_000E3004: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(ecx, LO16(eax));
    SET_LO16(ecx, LO16(ecx) + 0xFFFFFFFFu);
    MEM16(ebp + -2) = LO16(ecx);
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_000E301D: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E3026; /* jne: not equal / not zero */

loc_000E3024: ;
    goto loc_000E3082;

loc_000E3026: ;
    MEM32(esp) = 0x1388;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E303Au); RECOMP_ABI_CALL(0x003BE520u, sub_003BE520); /* call 0x003BE520 */

loc_000E303A: ;
    esp = esp - 8;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E307D; /* je: equal / zero */

loc_000E3049: ;
    ecx = 0x4674DD;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x69F;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3071u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3071: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E307Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E307D: ;
    goto loc_000E2FDF;

loc_000E3082: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x994;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E309Au); RECOMP_ABI_CALL(0x000E27B0u, sub_000E27B0); /* call 0x000E27B0 */

loc_000E309A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E30D2; /* je: equal / zero */

loc_000E309E: ;
    ecx = 0x46D1C4;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x6A3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E30C6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E30C6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E30D2u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E30D2: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x998;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E30F4u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E30F4: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3100
 * Original: 0x000E3100 - 0x000E3141 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3100(void)
{
    uint32_t ebp = g_ebp;

loc_000E3100: ;
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
    MEM32(esp + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E313Bu); RECOMP_ABI_CALL(0x000E3D80u, sub_000E3D80); /* call 0x000E3D80 */

loc_000E313B: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3150
 * Original: 0x000E3150 - 0x000E31A2 (82 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3150(void)
{
    uint32_t ebp = g_ebp;

loc_000E3150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0x908;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3169u); RECOMP_ABI_CALL(0x001F41D0u, sub_001F41D0); /* call 0x001F41D0 */

loc_000E3169: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x908) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x90C) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x914) = 0;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x918) = 0;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E31B0
 * Original: 0x000E31B0 - 0x000E31BA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E31B0(void)
{
    uint32_t ebp = g_ebp;

loc_000E31B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x20000;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E31C0
 * Original: 0x000E31C0 - 0x000E32D5 (277 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E31C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E31C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x994);
    eax = eax & 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3210; /* jne: not equal / not zero */

loc_000E31DC: ;
    ecx = 0x45EBF6;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5D6;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3204u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3204: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3210u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3210: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x950);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x1388;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3231u); RECOMP_ABI_CALL(0x003BD8C0u, sub_003BD8C0); /* call 0x003BD8C0 */

loc_000E3231: ;
    esp = esp - 0xC;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x994);
    eax = eax & 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E327E; /* je: equal / zero */

loc_000E324A: ;
    ecx = 0x45EC3D;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5DA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3272u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3272: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E327Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E327E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E32BB; /* je: equal / zero */

loc_000E3287: ;
    ecx = 0x4674DD;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5DB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E32AFu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E32AF: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E32BBu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E32BB: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x994);
    ecx = ecx & 0xFFFFFBFFu;
    MEM32(eax + 0x994) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E32E0
 * Original: 0x000E32E0 - 0x000E3321 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E32E0(void)
{
    uint32_t ebp = g_ebp;

loc_000E32E0: ;
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
    MEM32(esp + 0x10) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E331Bu); RECOMP_ABI_CALL(0x000E3400u, sub_000E3400); /* call 0x000E3400 */

loc_000E331B: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3330
 * Original: 0x000E3330 - 0x000E33FE (206 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3330(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x950);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x1388;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E335Au); RECOMP_ABI_CALL(0x003BD8C0u, sub_003BD8C0); /* call 0x003BD8C0 */

loc_000E335A: ;
    esp = esp - 0xC;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x994);
    eax = eax & 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E33A7; /* je: equal / zero */

loc_000E3373: ;
    ecx = 0x486E75;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5CA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E339Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E339B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E33A7u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E33A7: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E33E4; /* je: equal / zero */

loc_000E33B0: ;
    ecx = 0x4674DD;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5CB;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E33D8u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E33D8: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E33E4u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E33E4: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x994);
    ecx = ecx & 0xFFFFFEFFu;
    MEM32(eax + 0x994) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3400
 * Original: 0x000E3400 - 0x000E35FB (507 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3400(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_000E3400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO16(eax, MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3425u); RECOMP_ABI_CALL(0x000E2120u, sub_000E2120); /* call 0x000E2120 */

loc_000E3425: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x990);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    ecx = ecx + ecx * 4;
    eax = eax + ecx * 4 + 0x99C;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    edx = ecx;
    edx = RECOMP_SAR(edx, 5, 32, NULL);
    eax = MEM32(eax + edx * 4 + 0x994);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E349F; /* je: equal / zero */

loc_000E346B: ;
    ecx = 0x46454E;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x536;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3493u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3493: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E349Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E349F: ;
    ecx = ZX16(MEM16(ebp + 0x18));
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    ecx = RECOMP_SAR(ecx, 5, 32, NULL);
    edx = edx | MEM32(eax + ecx * 4 + 0x994);
    MEM32(eax + ecx * 4 + 0x994) = edx;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + -16);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(ebp + 8);
    eax = eax + 0xAC8;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    _shift_result = RECOMP_SHIFT(ecx, 3, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E34FBu); RECOMP_ABI_CALL(0x003BE690u, sub_003BE690); /* call 0x003BE690 */

loc_000E34FB: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_000E34FE: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3514u); RECOMP_ABI_CALL(0x003BE520u, sub_003BE520); /* call 0x003BE520 */

loc_000E3514: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3525u); RECOMP_ABI_CALL(0x003BD430u, sub_003BD430); /* call 0x003BD430 */

loc_000E3525: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    edi = MEM32(ebp + -12);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -16);
    eax = 0xE3600;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3552u); RECOMP_ABI_CALL(0x003BBAB0u, sub_003BBAB0); /* call 0x003BBAB0 */

loc_000E3552: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x14)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E355Du); RECOMP_ABI_CALL(0x003BD410u, sub_003BD410); /* call 0x003BD410 */

loc_000E355D: ;
    MEM32(ebp + -20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -25) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000E3597; /* jne: not equal / not zero */

loc_000E356B: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x6F8 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -26) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E3591; /* je: equal / zero */

loc_000E3579: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 8 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -26) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E3591; /* je: equal / zero */

loc_000E3584: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x5AA (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -26) = LO8(eax);

loc_000E3591: ;
    SET_LO8(eax, MEM8(ebp + -26));
    MEM8(ebp + -25) = LO8(eax);

loc_000E3597: ;
    SET_LO8(eax, MEM8(ebp + -25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_000E34FE; /* jne: not equal / not zero */

loc_000E35A2: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E35E8; /* jne: not equal / not zero */

loc_000E35A8: ;
    ecx = 0x480D02;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x559;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E35D0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E35D0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E35DCu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E35DC: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E35E8u); RECOMP_ABI_CALL(0x000E2FA0u, sub_000E2FA0); /* call 0x000E2FA0 */

loc_000E35E8: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E35F4u); RECOMP_ABI_CALL(0x000E26A0u, sub_000E26A0); /* call 0x000E26A0 */

loc_000E35F4: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3600
 * Original: 0x000E3600 - 0x000E385F (607 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3600(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_000E3600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x34)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(0x5822C0);
    eax = eax + 0x994;
    MEM32(ebp + -8) = eax;
    eax = MEM32(0x5822C0);
    eax = eax + 0x998;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x5822C0);
    ecx = ecx + 0x99C;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    ecx = 0x14;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E37DE; /* jne: not equal / not zero */

loc_000E3650: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E36A3; /* jl: less (signed <) */

loc_000E3656: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xB (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E36A3; /* jge: greater or equal (signed >=) */

loc_000E365C: ;
    eax = esp;
    ecx = ebp + -24;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3668u); RECOMP_ABI_CALL(0x003BE690u, sub_003BE690); /* call 0x003BE690 */

loc_000E3668: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    ecx = MEM32(ebp + -16);
    eax = ecx;
    edx = MEM32(ebp + -8);
    MEM32(ebp + -28) = edx;
    ecx = RECOMP_SAR(ecx, 5, 32, NULL);
    edx = MEM32(edx + ecx * 4);
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(ebp + -28);
    edx = (edx & ~(1u << (ebx & 31))); /* btr */
    MEM32(eax + ecx * 4) = edx;
    ecx = MEM32(ebp + -16);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    ecx = RECOMP_SAR(ecx, 5, 32, NULL);
    edx = edx | MEM32(eax + ecx * 4);
    MEM32(eax + ecx * 4) = edx;

loc_000E36A3: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E3776; /* jl: less (signed <) */

loc_000E36AD: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 7 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000E3776; /* jg: greater (signed >) */

loc_000E36B7: ;
    eax = MEM32(0x5822C0);
    _fa = (uint32_t)(MEM32(eax + 0xA90)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA90), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000E36F9; /* jg: greater (signed >) */

loc_000E36C5: ;
    ecx = 0x44ACC1;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x50B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E36EDu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E36ED: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E36F9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E36F9: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(0x5822C0);
    ecx = MEM32(eax + 0xA90);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM32(eax + 0xA90) = ecx;
    eax = MEM32(0x5822C0);
    eax = MEM32(eax + 0x958);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3722u); RECOMP_ABI_CALL(0x003BDC60u, sub_003BDC60); /* call 0x003BDC60 */

loc_000E3722: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(0x5822C0);
    eax = MEM32(eax + 0x10C);
    ecx = MEM32(0x5822C0);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ecx + 0xA90))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x5822C0);
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = MEM32(0x5822C0);
    MEMF(eax + 0xAA0) = xmm0.f[0]; /* movss */
    eax = MEM32(0x5822C0);
    eax = MEM32(eax + 0x958);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3771u); RECOMP_ABI_CALL(0x003BDC10u, sub_003BDC10); /* call 0x003BDC10 */

loc_000E3771: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    goto loc_000E37DC;

loc_000E3776: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 9 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E37DA; /* jl: less (signed <) */

loc_000E377C: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 9 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000E37DA; /* jg: greater (signed >) */

loc_000E3782: ;
    eax = MEM32(0x5822C0);
    _fa = (uint32_t)(MEM32(eax + 0xA98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA98), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000E37C4; /* jg: greater (signed >) */

loc_000E3790: ;
    ecx = 0x461788;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x514;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E37B8u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E37B8: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E37C4u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E37C4: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(0x5822C0);
    ecx = MEM32(eax + 0xA98);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(edx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    MEM32(eax + 0xA98) = ecx;

loc_000E37DA: ;
    goto loc_000E37DC;

loc_000E37DC: ;
    goto loc_000E3857;

loc_000E37DE: ;
    eax = MEM32(ebp + 8);
    edx = 0xA02978;
    ecx = 0x48F068;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E37FDu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000E37FD: ;
    ecx = eax;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x51A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3821u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3821: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E382Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E382D: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 9 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E3849; /* jl: less (signed <) */

loc_000E3833: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 9 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000E3849; /* jg: greater (signed >) */

loc_000E3839: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3847u); RECOMP_ABI_CALL(0x000E2FA0u, sub_000E2FA0); /* call 0x000E2FA0 */

loc_000E3847: ;
    goto loc_000E3855;

loc_000E3849: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3855u); RECOMP_ABI_CALL(0x000E2FA0u, sub_000E2FA0); /* call 0x000E2FA0 */

loc_000E3855: ;
    goto loc_000E3857;

loc_000E3857: ;
    esp = esp + 0x34;
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_000E3860
 * Original: 0x000E3860 - 0x000E38E5 (133 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3860(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_000E3860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 0xA78;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3892; /* jl: less (signed <) */

loc_000E3889: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E38C6; /* jl: less (signed <) */

loc_000E3892: ;
    ecx = 0x497FEA;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x619;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E38BAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E38BA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E38C6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E38C6: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E38E0u); RECOMP_ABI_CALL(0x000E38F0u, sub_000E38F0); /* call 0x000E38F0 */

loc_000E38E0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E38F0
 * Original: 0x000E38F0 - 0x000E3AAC (444 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E38F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E38F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    SET_LO16(eax, MEM16(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3913u); RECOMP_ABI_CALL(0x000E3AB0u, sub_000E3AB0); /* call 0x000E3AB0 */

loc_000E3913: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xA94)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA94), 0x20000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E3933; /* jge: greater or equal (signed >=) */

loc_000E3925: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xA94);
    MEM32(ebp + -16) = eax;
    goto loc_000E393D;

loc_000E3933: ;
    eax = 0x20000;
    MEM32(ebp + -16) = eax;
    goto loc_000E393D;

loc_000E393D: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3955; /* jl: less (signed <) */

loc_000E394C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3989; /* jl: less (signed <) */

loc_000E3955: ;
    ecx = 0x497FEA;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5EC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E397Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E397D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3989u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3989: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E39C8; /* je: equal / zero */

loc_000E3994: ;
    ecx = 0x44ACE6;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5ED;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E39BCu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E39BC: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E39C8u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E39C8: ;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0xAB8));
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E39F2u); RECOMP_ABI_CALL(0x003BFAD0u, sub_003BFAD0); /* call 0x003BFAD0 */

loc_000E39F2: ;
    esp = esp - 0xC;
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xAA8);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3A23u); RECOMP_ABI_CALL(0x000E3400u, sub_000E3400); /* call 0x000E3400 */

loc_000E3A23: ;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0xAB8));
    SET_LO16(ecx, LO16(ecx) + 1);
    MEM16(eax + 0xAB8) = LO16(ecx);
    edx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xA94);
    ecx = ecx - edx;
    MEM32(eax + 0xA94) = ecx;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 0xAA8);
    MEM32(eax + 0xAA8) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xAA8);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xA8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xA8C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E3AA6; /* jle: less or equal (signed <=) */

loc_000E3A72: ;
    ecx = 0x447D88;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x601;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3A9Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3A9A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3AA6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3AA6: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3AB0
 * Original: 0x000E3AB0 - 0x000E3B29 (121 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3AB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0xA78;
    eax = eax - ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    MEM16(ebp + -2) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3AE2; /* jl: less (signed <) */

loc_000E3AD9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3B16; /* jl: less (signed <) */

loc_000E3AE2: ;
    ecx = 0x497FEA;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x646;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3B0Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3B0A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3B16u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3B16: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    eax = MEM32(eax + ecx * 4 + 0x964);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3B30
 * Original: 0x000E3B30 - 0x000E3CB0 (384 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3B30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3B30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3B51u); RECOMP_ABI_CALL(0x000E3CB0u, sub_000E3CB0); /* call 0x000E3CB0 */

loc_000E3B51: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xA9C);
    MEM32(ebp + -16) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3B6Cu); RECOMP_ABI_CALL(0x000E3D20u, sub_000E3D20); /* call 0x000E3D20 */

loc_000E3B6C: ;
    ecx = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E3B83; /* jge: greater or equal (signed >=) */

loc_000E3B75: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xA9C);
    MEM32(ebp + -20) = eax;
    goto loc_000E3B92;

loc_000E3B83: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3B8Fu); RECOMP_ABI_CALL(0x000E3D20u, sub_000E3D20); /* call 0x000E3D20 */

loc_000E3B8F: ;
    MEM32(ebp + -20) = eax;

loc_000E3B92: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -12) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3BAA; /* jl: less (signed <) */

loc_000E3BA1: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3BDE; /* jl: less (signed <) */

loc_000E3BAA: ;
    ecx = 0x464595;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x676;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3BD2u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3BD2: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3BDEu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3BDE: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x400000;
    MEM32(esp + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3BF9u); RECOMP_ABI_CALL(0x003BFAD0u, sub_003BFAD0); /* call 0x003BFAD0 */

loc_000E3BF9: ;
    esp = esp - 0xC;
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3C12u); RECOMP_ABI_CALL(0x000E3CB0u, sub_000E3CB0); /* call 0x000E3CB0 */

loc_000E3C12: ;
    edx = eax;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xAA4);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3C3Cu); RECOMP_ABI_CALL(0x000E3D80u, sub_000E3D80); /* call 0x000E3D80 */

loc_000E3C3C: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 0xAA4);
    MEM32(eax + 0xAA4) = ecx;
    edx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xA9C);
    ecx = ecx - edx;
    MEM32(eax + 0xA9C) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xAA4);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E3CAA; /* jle: less or equal (signed <=) */

loc_000E3C76: ;
    ecx = 0x47B1E7;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x682;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3C9Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3C9E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3CAAu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3CAA: ;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3CB0
 * Original: 0x000E3CB0 - 0x000E3D16 (102 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3CB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3CCF; /* jl: less (signed <) */

loc_000E3CC6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3D03; /* jl: less (signed <) */

loc_000E3CCF: ;
    ecx = 0x464595;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x661;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3CF7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3CF7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3D03u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3D03: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    eax = MEM32(eax + ecx * 4 + 0x984);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3D20
 * Original: 0x000E3D20 - 0x000E3D7A (90 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3D20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3D20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3D3C; /* jl: less (signed <) */

loc_000E3D33: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3D70; /* jl: less (signed <) */

loc_000E3D3C: ;
    ecx = 0x464595;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x66A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3D64u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3D64: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3D70u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3D70: ;
    eax = 0x400000;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3D80
 * Original: 0x000E3D80 - 0x000E3F81 (513 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3D80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_000E3D80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO16(eax, MEM16(ebp + 0x18));
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3DA5u); RECOMP_ABI_CALL(0x000E2120u, sub_000E2120); /* call 0x000E2120 */

loc_000E3DA5: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x98C);
    MEM32(ebp + -16) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    eax = eax + 9;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    ecx = ecx + ecx * 4;
    eax = eax + ecx * 4 + 0x99C;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    edx = ecx;
    edx = RECOMP_SAR(edx, 5, 32, NULL);
    eax = MEM32(eax + edx * 4 + 0x994);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E3E27; /* je: equal / zero */

loc_000E3DF3: ;
    ecx = 0x46454E;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x583;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3E1Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3E1B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3E27u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3E27: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    ecx = RECOMP_SAR(ecx, 5, 32, NULL);
    edx = edx | MEM32(eax + ecx * 4 + 0x994);
    MEM32(eax + ecx * 4 + 0x994) = edx;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -20);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + -20);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -20);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(ebp + 8);
    eax = eax + 0xAC8;
    ecx = MEM32(ebp + -12);
    _shift_result = RECOMP_SHIFT(ecx, 3, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3E7Fu); RECOMP_ABI_CALL(0x003BE690u, sub_003BE690); /* call 0x003BE690 */

loc_000E3E7F: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_000E3E82: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3E98u); RECOMP_ABI_CALL(0x003BE520u, sub_003BE520); /* call 0x003BE520 */

loc_000E3E98: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3EA9u); RECOMP_ABI_CALL(0x003BD430u, sub_003BD430); /* call 0x003BD430 */

loc_000E3EA9: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -20);
    eax = 0xE3600;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3ED6u); RECOMP_ABI_CALL(0x003BBC20u, sub_003BBC20); /* call 0x003BBC20 */

loc_000E3ED6: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x14)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM32(ebp + -28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3EE1u); RECOMP_ABI_CALL(0x003BD410u, sub_003BD410); /* call 0x003BD410 */

loc_000E3EE1: ;
    MEM32(ebp + -24) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -29) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000E3F1B; /* jne: not equal / not zero */

loc_000E3EEF: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0x6F8 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -30) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E3F15; /* je: equal / zero */

loc_000E3EFD: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 8 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -30) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E3F15; /* je: equal / zero */

loc_000E3F08: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0x5AA (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -30) = LO8(eax);

loc_000E3F15: ;
    SET_LO8(eax, MEM8(ebp + -30));
    MEM8(ebp + -29) = LO8(eax);

loc_000E3F1B: ;
    SET_LO8(eax, MEM8(ebp + -29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_000E3E82; /* jne: not equal / not zero */

loc_000E3F26: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E3F6E; /* jne: not equal / not zero */

loc_000E3F2C: ;
    ecx = 0x447DB8;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5A1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3F54u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E3F54: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3F60u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E3F60: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3F6Eu); RECOMP_ABI_CALL(0x000E2FA0u, sub_000E2FA0); /* call 0x000E2FA0 */

loc_000E3F6E: ;
    MEM32(esp) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3F7Au); RECOMP_ABI_CALL(0x000E26A0u, sub_000E26A0); /* call 0x000E26A0 */

loc_000E3F7A: ;
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3F90
 * Original: 0x000E3F90 - 0x000E3FAE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3F90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0x5822C0);
    _fa = (uint32_t)(MEM8(eax + 0x988)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x988), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3FA9; /* jne: not equal / not zero */

loc_000E3FA4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E3FA9u); RECOMP_ABI_CALL(0x003BE500u, sub_003BE500); /* call 0x003BE500 */

loc_000E3FA9: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E3FB0
 * Original: 0x000E3FB0 - 0x000E40BB (267 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3FB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_000E3FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0xA78;
    eax = eax - ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    MEM16(ebp + -2) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3FE2; /* jl: less (signed <) */

loc_000E3FD9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E4016; /* jl: less (signed <) */

loc_000E3FE2: ;
    ecx = 0x497FEA;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x652;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E400Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E400A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4016u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E4016: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    edx = ecx;
    edx = RECOMP_SAR(edx, 5, 32, NULL);
    eax = MEM32(eax + edx * 4 + 0x998);
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4070; /* jne: not equal / not zero */

loc_000E403C: ;
    ecx = 0x447DDD;
    eax = 0x44AC67;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x653;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4064u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E4064: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4070u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E4070: ;
    ecx = ZX16(MEM16(ebp + -2));
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    edx = edx ^ 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = ecx + 0;
    ecx = RECOMP_SAR(ecx, 5, 32, NULL);
    edx = edx & MEM32(eax + ecx * 4 + 0x998);
    MEM32(eax + ecx * 4 + 0x998) = edx;
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = 0xFFFF;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E40B6u); RECOMP_ABI_CALL(0x000E40C0u, sub_000E40C0); /* call 0x000E40C0 */

loc_000E40B6: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E40C0
 * Original: 0x000E40C0 - 0x000E40FA (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E40C0(void)
{
    uint32_t ebp = g_ebp;

loc_000E40C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    esi = esi + 0xA78;
    eax = eax - esi;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    eax = SX16(eax); /* cwde */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E40F4u); RECOMP_ABI_CALL(0x000E38F0u, sub_000E38F0); /* call 0x000E38F0 */

loc_000E40F4: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4410
 * Original: 0x000E4410 - 0x000E44B6 (166 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4410(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -10) = 0;

loc_000E441F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E4476; /* jge: greater or equal (signed >=) */

loc_000E442B: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    MEM32(eax) = 1;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4465u); RECOMP_ABI_CALL(0x0039DB50u, sub_0039DB50); /* call 0x0039DB50 */

loc_000E4465: ;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    goto loc_000E441F;

loc_000E4476: ;
    MEM16(ebp + -10) = 0;

loc_000E447C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E44B1; /* jge: greater or equal (signed >=) */

loc_000E4488: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    MEM32(eax) = 0x10001;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    goto loc_000E447C;

loc_000E44B1: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E44C0
 * Original: 0x000E44C0 - 0x000E4606 (326 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E44C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E44C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -18) = 0;

loc_000E44CF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E4565; /* jge: greater or equal (signed >=) */

loc_000E44DF: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4502u); RECOMP_ABI_CALL(0x0039DC40u, sub_0039DC40); /* call 0x0039DC40 */

loc_000E4502: ;
    esp = esp - 4;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4516u); RECOMP_ABI_CALL(0x0039DC30u, sub_0039DC30); /* call 0x0039DC30 */

loc_000E4516: ;
    esp = esp - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4552; /* je: equal / zero */

loc_000E451E: ;
    ecx = 0x46A29C;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x20B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4546u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E4546: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4552u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E4552: ;
    goto loc_000E4554;

loc_000E4554: ;
    SET_LO16(eax, MEM16(ebp + -18));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -18) = LO16(eax);
    goto loc_000E44CF;

loc_000E4565: ;
    MEM16(ebp + -18) = 0;

loc_000E456B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E4601; /* jge: greater or equal (signed >=) */

loc_000E457B: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E459Eu); RECOMP_ABI_CALL(0x0039DC40u, sub_0039DC40); /* call 0x0039DC40 */

loc_000E459E: ;
    esp = esp - 4;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E45B2u); RECOMP_ABI_CALL(0x0039DC30u, sub_0039DC30); /* call 0x0039DC30 */

loc_000E45B2: ;
    esp = esp - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E45EE; /* je: equal / zero */

loc_000E45BA: ;
    ecx = 0x49802B;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x218;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E45E2u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E45E2: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E45EEu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E45EE: ;
    goto loc_000E45F0;

loc_000E45F0: ;
    SET_LO16(eax, MEM16(ebp + -18));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -18) = LO16(eax);
    goto loc_000E456B;

loc_000E4601: ;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4610
 * Original: 0x000E4610 - 0x000E46D8 (200 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4610(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -18) = 0;

loc_000E461F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E4676; /* jge: greater or equal (signed >=) */

loc_000E462B: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    MEM32(eax) = 1;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4665u); RECOMP_ABI_CALL(0x0039DB50u, sub_0039DB50); /* call 0x0039DB50 */

loc_000E4665: ;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + -18));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -18) = LO16(eax);
    goto loc_000E461F;

loc_000E4676: ;
    MEM16(ebp + -18) = 0;

loc_000E467C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E46D3; /* jge: greater or equal (signed >=) */

loc_000E4688: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    MEM32(eax) = 1;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = 0;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E46C2u); RECOMP_ABI_CALL(0x0039DB50u, sub_0039DB50); /* call 0x0039DB50 */

loc_000E46C2: ;
    esp = esp - 8;
    SET_LO16(eax, MEM16(ebp + -18));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -18) = LO16(eax);
    goto loc_000E467C;

loc_000E46D3: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E46E0
 * Original: 0x000E46E0 - 0x000E478C (172 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E46E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E46E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM16(0x5A1F7A) = 0x11;
    MEM16(ebp + -10) = 0;

loc_000E46F8: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E4738; /* jge: greater or equal (signed >=) */

loc_000E4704: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4727u); RECOMP_ABI_CALL(0x0039DC40u, sub_0039DC40); /* call 0x0039DC40 */

loc_000E4727: ;
    esp = esp - 4;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    goto loc_000E46F8;

loc_000E4738: ;
    MEM16(ebp + -10) = 0;

loc_000E473E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E477E; /* jge: greater or equal (signed >=) */

loc_000E474A: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E476Du); RECOMP_ABI_CALL(0x0039DC40u, sub_0039DC40); /* call 0x0039DC40 */

loc_000E476D: ;
    esp = esp - 4;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    goto loc_000E473E;

loc_000E477E: ;
    MEM16(0x5A1F7A) = 0;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4790
 * Original: 0x000E4790 - 0x000E47FB (107 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4790(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = (uint32_t)(int32_t)SMEM16(0xA066A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E47D6; /* je: equal / zero */

loc_000E47A2: ;
    ecx = 0x458F82;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xCF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E47CAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E47CA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E47D6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E47D6: ;
    ecx = MEM32(0xA066B0);
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xD1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E47F6u); RECOMP_ABI_CALL(0x000FCD60u, sub_000FCD60); /* call 0x000FCD60 */

loc_000E47F6: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4800
 * Original: 0x000E4800 - 0x000E481A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4800(void)
{
    uint32_t ebp = g_ebp;

loc_000E4800: ;
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
    PUSH32(esp, 0x000E4815u); RECOMP_ABI_CALL(0x000E0FB0u, sub_000E0FB0); /* call 0x000E0FB0 */

loc_000E4815: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4820
 * Original: 0x000E4820 - 0x000E482A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4820(void)
{
    uint32_t ebp = g_ebp;

loc_000E4820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(0xA06680));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4830
 * Original: 0x000E4830 - 0x000E487F (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4830(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(0xA06682);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4873; /* je: equal / zero */

loc_000E4845: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4850u); RECOMP_ABI_CALL(0x00356EE0u, sub_00356EE0); /* call 0x00356EE0 */

loc_000E4850: ;
    ecx = 0xA03638;
    ecx = ecx + 0x304C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4868u); RECOMP_ABI_CALL(0x000FAA80u, sub_000FAA80); /* call 0x000FAA80 */

loc_000E4868: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4873; /* jne: not equal / not zero */

loc_000E486D: ;
    MEM8(ebp + -1) = 1;
    goto loc_000E4877;

loc_000E4873: ;
    MEM8(ebp + -1) = 0;

loc_000E4877: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4880
 * Original: 0x000E4880 - 0x000E48AD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4880(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4880: ;
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
    PUSH32(esp, 0x000E4894u); RECOMP_ABI_CALL(0x00356EE0u, sub_00356EE0); /* call 0x00356EE0 */

loc_000E4894: ;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E489Cu); RECOMP_ABI_CALL(0x000E48B0u, sub_000E48B0); /* call 0x000E48B0 */

loc_000E489C: ;
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E48B0
 * Original: 0x000E48B0 - 0x000E491D (109 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E48B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E48B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -4) = 0;

loc_000E48BF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E490E; /* jge: greater or equal (signed >=) */

loc_000E48C8: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E48DAu); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E48DA: ;
    ecx = MEM32(ebp + -8);
    eax = eax + 0xC;
    eax = eax + 0x20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E48EFu); RECOMP_ABI_CALL(0x003A4210u, sub_003A4210); /* call 0x003A4210 */

loc_000E48EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E48FE; /* jne: not equal / not zero */

loc_000E48F4: ;
    SET_LO16(eax, MEM16(ebp + -4));
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000E4914;

loc_000E48FE: ;
    goto loc_000E4900;

loc_000E4900: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_000E48BF;

loc_000E490E: ;
    MEM16(ebp + -2) = 0xFFFF;

loc_000E4914: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4920
 * Original: 0x000E4920 - 0x000E4B13 (499 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4920(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x930;
    SET_LO8(eax, MEM8(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E493Cu); RECOMP_ABI_CALL(0x00356EE0u, sub_00356EE0); /* call 0x00356EE0 */

loc_000E493C: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E494Au); RECOMP_ABI_CALL(0x000E4880u, sub_000E4880); /* call 0x000E4880 */

loc_000E494A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4B02; /* jne: not equal / not zero */

loc_000E4952: ;
    ecx = MEM32(ebp + -16);
    eax = ebp + -2064;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4967u); RECOMP_ABI_CALL(0x000E4B20u, sub_000E4B20); /* call 0x000E4B20 */

loc_000E4967: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4AB5; /* je: equal / zero */

loc_000E496F: ;
    eax = ZX8(MEM8(ebp + 0xC));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E497Bu); RECOMP_ABI_CALL(0x000E0F90u, sub_000E0F90); /* call 0x000E0F90 */

loc_000E497B: ;
    MEM32(ebp + -2324) = eax;
    eax = MEM32(ebp + -2324);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E498Fu); RECOMP_ABI_CALL(0x000E8900u, sub_000E8900); /* call 0x000E8900 */

loc_000E498F: ;
    MEM32(ebp + -2328) = eax;
    eax = MEM32(ebp + -2056);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1968);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E49AEu); RECOMP_ABI_CALL(0x000E4C30u, sub_000E4C30); /* call 0x000E4C30 */

loc_000E49AE: ;
    MEM16(ebp + -2330) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2330);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E49C4u); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E49C4: ;
    MEM32(ebp + -2336) = eax;
    eax = MEM32(ebp + -2336);
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x800;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E49EDu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E49ED: ;
    MEM8(0xA06680) = 1;
    SET_LO16(eax, MEM16(ebp + -2330));
    MEM16(0xA06682) = LO16(eax);
    eax = MEM32(ebp + -16);
    ecx = 0xA03638;
    ecx = ecx + 0x304C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4A24u); RECOMP_ABI_CALL(0x000FAD10u, sub_000FAD10); /* call 0x000FAD10 */

loc_000E4A24: ;
    MEM8(0xA066A3) = 0;
    ecx = MEM32(ebp + -16);
    eax = ebp + -2320;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4A40u); RECOMP_ABI_CALL(0x000E4E40u, sub_000E4E40); /* call 0x000E4E40 */

loc_000E4A40: ;
    eax = MEM32(ebp + -16);
    ecx = 0x46751D;
    MEM32(esp) = 2;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4A5Du); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_000E4A5D: ;
    edi = MEM32(ebp + -2328);
    esi = MEM32(ebp + -2324);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2330);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4A78u); RECOMP_ABI_CALL(0x000E4E80u, sub_000E4E80); /* call 0x000E4E80 */

loc_000E4A78: ;
    MEM32(ebp + -2340) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2330);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4A8Du); RECOMP_ABI_CALL(0x000E4EA0u, sub_000E4EA0); /* call 0x000E4EA0 */

loc_000E4A8D: ;
    edx = MEM32(ebp + -2340);
    ecx = eax;
    eax = ebp + -2320;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4AB3u); RECOMP_ABI_CALL(0x000E1060u, sub_000E1060); /* call 0x000E1060 */

loc_000E4AB3: ;
    goto loc_000E4B00;

loc_000E4AB5: ;
    eax = MEM32(ebp + -16);
    ecx = 0x483D34;
    MEM32(esp) = 2;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4AD2u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_000E4AD2: ;
    eax = MEM32(ebp + 8);
    ecx = 0x4452C0;
    MEM32(esp) = 2;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4AEFu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_000E4AEF: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4AFA; /* je: equal / zero */

loc_000E4AF5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4AFAu); RECOMP_ABI_CALL(0x001988F0u, sub_001988F0); /* call 0x001988F0 */

loc_000E4AFA: ;
    MEM8(ebp + -9) = 0;
    goto loc_000E4B06;

loc_000E4B00: ;
    goto loc_000E4B02;

loc_000E4B02: ;
    MEM8(ebp + -9) = 1;

loc_000E4B06: ;
    SET_LO8(eax, MEM8(ebp + -9));
    esp = esp + 0x930;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4B20
 * Original: 0x000E4B20 - 0x000E4C2A (266 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4B20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_000E4B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x134)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -5) = 0;
    ecx = MEM32(ebp + 8);
    eax = ebp + -261;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4B49u); RECOMP_ABI_CALL(0x000E4E40u, sub_000E4E40); /* call 0x000E4E40 */

loc_000E4B49: ;
    eax = ebp + -261;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x80000000u;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 3;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4B89u); RECOMP_ABI_CALL(0x003BB140u, sub_003BB140); /* call 0x003BB140 */

loc_000E4B89: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x1C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM32(ebp + -268) = eax;
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -268)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -268), eax (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E4C1E; /* je: equal / zero */

loc_000E4B9F: ;
    edx = MEM32(ebp + -268);
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -272;
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0x800;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4BD0u); RECOMP_ABI_CALL(0x003BB4C0u, sub_003BB4C0); /* call 0x003BB4C0 */

loc_000E4BD0: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x14)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E4C0D; /* je: equal / zero */

loc_000E4BD8: ;
    _fa = (uint32_t)(MEM32(ebp + -272)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -272), 0x800 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E4C0D; /* jne: not equal / not zero */

loc_000E4BE4: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -261;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4C01u); RECOMP_ABI_CALL(0x000E0290u, sub_000E0290); /* call 0x000E0290 */

loc_000E4C01: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E4C0D; /* je: equal / zero */

loc_000E4C09: ;
    MEM8(ebp + -5) = 1;

loc_000E4C0D: ;
    eax = MEM32(ebp + -268);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4C1Bu); RECOMP_ABI_CALL(0x003BD690u, sub_003BD690); /* call 0x003BD690 */

loc_000E4C1B: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_000E4C1E: ;
    SET_LO8(eax, MEM8(ebp + -5));
    esp = esp + 0x134;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4C30
 * Original: 0x000E4C30 - 0x000E4DC7 (407 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4C30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    MEM16(ebp + -2) = 0xFFFF;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4C64; /* je: equal / zero */

loc_000E4C4E: ;
    goto loc_000E4C50;

loc_000E4C50: ;
    eax = MEM32(ebp + -24);
    eax = eax - 1;
    if ((eax == 0)) goto loc_000E4C72; /* je: equal / zero */

loc_000E4C58: ;
    goto loc_000E4C5A;

loc_000E4C5A: ;
    eax = MEM32(ebp + -24);
    eax = eax - 2;
    if ((eax == 0)) goto loc_000E4C80; /* je: equal / zero */

loc_000E4C62: ;
    goto loc_000E4C8E;

loc_000E4C64: ;
    MEM16(ebp + -10) = 0;
    MEM16(ebp + -12) = 1;
    goto loc_000E4CC2;

loc_000E4C72: ;
    MEM16(ebp + -10) = 3;
    MEM16(ebp + -12) = 5;
    goto loc_000E4CC2;

loc_000E4C80: ;
    MEM16(ebp + -10) = 2;
    MEM16(ebp + -12) = 2;
    goto loc_000E4CC2;

loc_000E4C8E: ;
    eax = 0; /* xor self */
    eax = 0x458F57;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x494;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4CB6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E4CB6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4CC2u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E4CC2: ;
    SET_LO16(eax, MEM16(ebp + -10));
    MEM16(ebp + -14) = LO16(eax);

loc_000E4CCA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E4D7B; /* jg: greater (signed >) */

loc_000E4CDA: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA066A4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4D68; /* je: equal / zero */

loc_000E4CE9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4CF5u); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E4CF5: ;
    MEM32(ebp + -20) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4D04u); RECOMP_ABI_CALL(0x000E4EA0u, sub_000E4EA0); /* call 0x000E4EA0 */

loc_000E4D04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E4D66; /* jle: less or equal (signed <=) */

loc_000E4D09: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4D56; /* je: equal / zero */

loc_000E4D12: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -14);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4D1Eu); RECOMP_ABI_CALL(0x000E4EA0u, sub_000E4EA0); /* call 0x000E4EA0 */

loc_000E4D1E: ;
    MEM32(ebp + -28) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4D2Du); RECOMP_ABI_CALL(0x000E4EA0u, sub_000E4EA0); /* call 0x000E4EA0 */

loc_000E4D2D: ;
    ecx = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E4D56; /* jl: less (signed <) */

loc_000E4D36: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + 4;
    eax = MEM32(ebp + -20);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4D4Eu); RECOMP_ABI_CALL(0x003BE840u, sub_003BE840); /* call 0x003BE840 */

loc_000E4D4E: ;
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E4D64; /* jle: less or equal (signed <=) */

loc_000E4D56: ;
    SET_LO16(eax, MEM16(ebp + -14));
    MEM16(ebp + -2) = LO16(eax);
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;

loc_000E4D64: ;
    goto loc_000E4D66;

loc_000E4D66: ;
    goto loc_000E4D68;

loc_000E4D68: ;
    goto loc_000E4D6A;

loc_000E4D6A: ;
    SET_LO16(eax, MEM16(ebp + -14));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -14) = LO16(eax);
    goto loc_000E4CCA;

loc_000E4D7B: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA066A4);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4DBE; /* jne: not equal / not zero */

loc_000E4D8A: ;
    ecx = 0x47B215;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4B0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4DB2u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E4DB2: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4DBEu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E4DBE: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4DD0
 * Original: 0x000E4DD0 - 0x000E4E37 (103 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4DD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E4DEC; /* jl: less (signed <) */

loc_000E4DE3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E4E20; /* jl: less (signed <) */

loc_000E4DEC: ;
    ecx = 0x458FD3;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4B8;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4E14u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E4E14: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4E20u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E4E20: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = 0xA03638;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x80C);
    eax = eax + ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4E40
 * Original: 0x000E4E40 - 0x000E4E7A (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4E40(void)
{
    uint32_t ebp = g_ebp;

loc_000E4E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4E55u); RECOMP_ABI_CALL(0x000DFC50u, sub_000DFC50); /* call 0x000DFC50 */

loc_000E4E55: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    edx = 0x43FE06;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4E74u); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_000E4E74: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4E80
 * Original: 0x000E4E80 - 0x000E4E9D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4E80(void)
{
    uint32_t ebp = g_ebp;

loc_000E4E80: ;
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
    PUSH32(esp, 0x000E4E96u); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E4E96: ;
    eax = MEM32(eax);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4EA0
 * Original: 0x000E4EA0 - 0x000E4F21 (129 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4EA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4EA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E4EBC; /* jl: less (signed <) */

loc_000E4EB3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E4EF0; /* jl: less (signed <) */

loc_000E4EBC: ;
    ecx = 0x458FD3;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4D0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4EE4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E4EE4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4EF0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E4EF0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E4F02; /* jg: greater (signed >) */

loc_000E4EF9: ;
    MEM32(ebp + -4) = 0x11600000;
    goto loc_000E4F19;

loc_000E4F02: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = 0x2F00000;
    ecx = 0x2300000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) eax = ecx; /* cmovle */
    MEM32(ebp + -4) = eax;

loc_000E4F19: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4F30
 * Original: 0x000E4F30 - 0x000E4FC2 (146 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4F30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4F30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM16(0xA066A4) = 0xFFFF;
    eax = 0; /* xor self */
    eax = 0x458F57;
    MEM32(esp) = 0x4000;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0xBB;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4F67u); RECOMP_ABI_CALL(0x000FCB40u, sub_000FCB40); /* call 0x000FCB40 */

loc_000E4F67: ;
    MEM32(0xA066B0) = eax;
    _fa = (uint32_t)(MEM32(0xA066B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA066B0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4FA9; /* jne: not equal / not zero */

loc_000E4F75: ;
    ecx = 0x46D237;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xBC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4F9Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E4F9D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4FA9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E4FA9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4FAEu); RECOMP_ABI_CALL(0x000E4FD0u, sub_000E4FD0); /* call 0x000E4FD0 */

loc_000E4FAE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4FB3u); RECOMP_ABI_CALL(0x000E50D0u, sub_000E50D0); /* call 0x000E50D0 */

loc_000E4FB3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4FB8u); RECOMP_ABI_CALL(0x000E5250u, sub_000E5250); /* call 0x000E5250 */

loc_000E4FB8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4FBDu); RECOMP_ABI_CALL(0x000E1A00u, sub_000E1A00); /* call 0x000E1A00 */

loc_000E4FBD: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E4FD0
 * Original: 0x000E4FD0 - 0x000E50C3 (243 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4FD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E4FFCu); RECOMP_ABI_CALL(0x003BDB80u, sub_003BDB80); /* call 0x003BDB80 */

loc_000E4FFC: ;
    esp = esp - 0x10;
    MEM32(0xA066A8) = eax;
    _fa = (uint32_t)(MEM32(0xA066A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA066A8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5041; /* jne: not equal / not zero */

loc_000E500D: ;
    ecx = 0x43FDE7;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4E5;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5035u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5035: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5041u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5041: ;
    eax = 0; /* xor self */
    eax = 0xE6490;
    MEM32(esp) = 0;
    MEM32(esp + 4) = 0x4000;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5079u); RECOMP_ABI_CALL(0x003BE020u, sub_003BE020); /* call 0x003BE020 */

loc_000E5079: ;
    esp = esp - 0x18;
    MEM32(0xA066AC) = eax;
    _fa = (uint32_t)(MEM32(0xA066AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA066AC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E50BE; /* jne: not equal / not zero */

loc_000E508A: ;
    ecx = 0x489754;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4E9;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E50B2u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E50B2: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E50BEu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E50BE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E50D0
 * Original: 0x000E50D0 - 0x000E5244 (372 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E50D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E50D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x128;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E50DEu); RECOMP_ABI_CALL(0x003C2730u, sub_003C2730); /* call 0x003C2730 */

loc_000E50DE: ;
    MEM32(ebp + -276) = eax;
    MEM32(ebp + -280) = 0xFFFFFFFFu;
    ecx = ebp + -268;
    eax = 0x464606;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5110u); RECOMP_ABI_CALL(0x003547E0u, sub_003547E0); /* call 0x003547E0 */

loc_000E5110: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E516F; /* je: equal / zero */

loc_000E5115: ;
    eax = ebp + -268;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E512Bu); RECOMP_ABI_CALL(0x00355ED0u, sub_00355ED0); /* call 0x00355ED0 */

loc_000E512B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E516D; /* je: equal / zero */

loc_000E512F: ;
    ecx = ebp + -268;
    eax = ebp + -272;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E514Fu); RECOMP_ABI_CALL(0x00356C50u, sub_00356C50); /* call 0x00356C50 */

loc_000E514F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E515F; /* je: equal / zero */

loc_000E5153: ;
    eax = MEM32(ebp + -272);
    MEM32(ebp + -280) = eax;

loc_000E515F: ;
    eax = ebp + -268;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E516Du); RECOMP_ABI_CALL(0x003568D0u, sub_003568D0); /* call 0x003568D0 */

loc_000E516D: ;
    goto loc_000E516F;

loc_000E516F: ;
    eax = MEM32(ebp + -280);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -276)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -276) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E51B7; /* je: equal / zero */

loc_000E517D: ;
    MEM16(ebp + -282) = 0xFFFF;

loc_000E5186: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -282);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E51B5; /* jge: greater or equal (signed >=) */

loc_000E5192: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -282);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E51A1u); RECOMP_ABI_CALL(0x000E5FE0u, sub_000E5FE0); /* call 0x000E5FE0 */

loc_000E51A1: ;
    SET_LO16(eax, MEM16(ebp + -282));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -282) = LO16(eax);
    goto loc_000E5186;

loc_000E51B5: ;
    goto loc_000E51B7;

loc_000E51B7: ;
    ecx = ebp + -268;
    eax = 0x464606;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E51D9u); RECOMP_ABI_CALL(0x003547E0u, sub_003547E0); /* call 0x003547E0 */

loc_000E51D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E523C; /* je: equal / zero */

loc_000E51DE: ;
    eax = ebp + -268;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E51ECu); RECOMP_ABI_CALL(0x00355AE0u, sub_00355AE0); /* call 0x00355AE0 */

loc_000E51EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E523A; /* je: equal / zero */

loc_000E51F0: ;
    eax = ebp + -268;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5206u); RECOMP_ABI_CALL(0x00355ED0u, sub_00355ED0); /* call 0x00355ED0 */

loc_000E5206: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5238; /* je: equal / zero */

loc_000E520A: ;
    ecx = ebp + -268;
    eax = ebp + -276;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 4;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E522Au); RECOMP_ABI_CALL(0x00356D30u, sub_00356D30); /* call 0x00356D30 */

loc_000E522A: ;
    eax = ebp + -268;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5238u); RECOMP_ABI_CALL(0x003568D0u, sub_003568D0); /* call 0x003568D0 */

loc_000E5238: ;
    goto loc_000E523A;

loc_000E523A: ;
    goto loc_000E523C;

loc_000E523C: ;
    esp = esp + 0x128;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5250
 * Original: 0x000E5250 - 0x000E55E9 (921 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5250(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000E5250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x1150)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM8(ebp + -4381) = 0;
    MEM32(esp) = 6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E526Eu); RECOMP_ABI_CALL(0x000E5FE0u, sub_000E5FE0); /* call 0x000E5FE0 */

loc_000E526E: ;
    MEM16(ebp + -4386) = 0;

loc_000E5277: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4386);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_000E55DF; /* jge: greater or equal (signed >=) */

loc_000E5287: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4386);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5296u); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E5296: ;
    MEM32(ebp + -4392) = eax;
    MEM8(ebp + -4383) = 0;
    SET_LO16(ecx, MEM16(ebp + -4386));
    eax = ebp + -4360;
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E52BFu); RECOMP_ABI_CALL(0x000E6050u, sub_000E6050); /* call 0x000E6050 */

loc_000E52BF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4386);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E52CEu); RECOMP_ABI_CALL(0x000E4EA0u, sub_000E4EA0); /* call 0x000E4EA0 */

loc_000E52CE: ;
    MEM32(ebp + -4396) = eax;
    eax = ebp + -4360;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xC0000000u;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 4;
    MEM32(esp + 0x14) = 0x60000000;
    MEM32(esp + 0x18) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5314u); RECOMP_ABI_CALL(0x003BB140u, sub_003BB140); /* call 0x003BB140 */

loc_000E5314: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x1C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM32(ebp + -4400) = eax;
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4400)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4400), eax (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E54A0; /* je: equal / zero */

loc_000E532E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5333u); RECOMP_ABI_CALL(0x003BD410u, sub_003BD410); /* call 0x003BD410 */

loc_000E5333: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB7 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E5369; /* jne: not equal / not zero */

loc_000E533A: ;
    eax = MEM32(ebp + -4400);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5352u); RECOMP_ABI_CALL(0x003BBE80u, sub_003BBE80); /* call 0x003BBE80 */

loc_000E5352: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4396)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4396) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E5369; /* jne: not equal / not zero */

loc_000E535D: ;
    MEM8(ebp + -4383) = 1;
    goto loc_000E549E;

loc_000E5369: ;
    _fa = (uint32_t)(MEM8(ebp + -4381)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -4381), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E5388; /* jne: not equal / not zero */

loc_000E5372: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4386);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5381u); RECOMP_ABI_CALL(0x000E5FE0u, sub_000E5FE0); /* call 0x000E5FE0 */

loc_000E5381: ;
    MEM8(ebp + -4381) = 1;

loc_000E5388: ;
    MEM8(ebp + -4382) = 0;
    edi = MEM32(ebp + -4400);
    esi = ebp + -4380;
    edx = ebp + -2056;
    eax = 0; /* xor self */
    ecx = ebp + -4382;
    eax = 0xE6100;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = 0x800;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E53D7u); RECOMP_ABI_CALL(0x000E6080u, sub_000E6080); /* call 0x000E6080 */

loc_000E53D7: ;
    eax = ebp + -4382;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E53E5u); RECOMP_ABI_CALL(0x000E61A0u, sub_000E61A0); /* call 0x000E61A0 */

loc_000E53E5: ;
    SET_LO8(eax, MEM8(ebp + -4382));
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E5444; /* je: equal / zero */

loc_000E53F3: ;
    ecx = MEM32(ebp + -4400);
    eax = MEM32(ebp + -4396);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E541Du); RECOMP_ABI_CALL(0x003BBD40u, sub_003BBD40); /* call 0x003BBD40 */

loc_000E541D: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x10)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E5444; /* je: equal / zero */

loc_000E5425: ;
    eax = MEM32(ebp + -4400);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5433u); RECOMP_ABI_CALL(0x003BBF10u, sub_003BBF10); /* call 0x003BBF10 */

loc_000E5433: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E5444; /* je: equal / zero */

loc_000E543B: ;
    MEM8(ebp + -4383) = 1;
    goto loc_000E549C;

loc_000E5444: ;
    MEM8(ebp + -4383) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5450u); RECOMP_ABI_CALL(0x003BD410u, sub_003BD410); /* call 0x003BD410 */

loc_000E5450: ;
    edx = 0x8BEAC0;
    ecx = 0x48C304;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E546Cu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000E546C: ;
    ecx = eax;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x32B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5490u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5490: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E549Cu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E549C: ;
    goto loc_000E549E;

loc_000E549E: ;
    goto loc_000E54F1;

loc_000E54A0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E54A5u); RECOMP_ABI_CALL(0x003BD410u, sub_003BD410); /* call 0x003BD410 */

loc_000E54A5: ;
    edx = 0x8BEAC0;
    ecx = 0x483D56;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E54C1u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000E54C1: ;
    ecx = eax;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x337;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E54E5u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E54E5: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E54F1u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E54F1: ;
    _fa = (uint32_t)(MEM8(ebp + -4383)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -4383), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E5523; /* jne: not equal / not zero */

loc_000E54FA: ;
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4400)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4400), eax (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E5523; /* je: equal / zero */

loc_000E5507: ;
    eax = MEM32(ebp + -4400);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5515u); RECOMP_ABI_CALL(0x003BD690u, sub_003BD690); /* call 0x003BD690 */

loc_000E5515: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -4400) = eax;

loc_000E5523: ;
    ecx = MEM32(ebp + -4400);
    eax = MEM32(ebp + -4392);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM8(ebp + -4383)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -4383), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E55A5; /* je: equal / zero */

loc_000E553A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4386);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5549u); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E5549: ;
    eax = eax + 0xC;
    eax = eax + 0x20;
    MEM32(ebp + -4404) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4386);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5564u); RECOMP_ABI_CALL(0x000E56E0u, sub_000E56E0); /* call 0x000E56E0 */

loc_000E5564: ;
    ecx = MEM32(ebp + -4404);
    eax = ebp + -4104;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E557Cu); RECOMP_ABI_CALL(0x000E4B20u, sub_000E4B20); /* call 0x000E4B20 */

loc_000E557C: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E55A3; /* je: equal / zero */

loc_000E5584: ;
    eax = MEM32(ebp + -4392);
    eax = MEM32(eax + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4004)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4004) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E55A3; /* jne: not equal / not zero */

loc_000E5595: ;
    eax = ZX8(MEM8(ebp + -4383));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E55A3; /* je: equal / zero */

loc_000E55A1: ;
    goto loc_000E55C8;

loc_000E55A3: ;
    goto loc_000E55A5;

loc_000E55A5: ;
    eax = MEM32(ebp + -4392);
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x800;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E55C8u); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E55C8: ;
    SET_LO16(eax, MEM16(ebp + -4386));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4386) = LO16(eax);
    goto loc_000E5277;

loc_000E55DF: ;
    esp = esp + 0x1150;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E55F0
 * Original: 0x000E55F0 - 0x000E5670 (128 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E55F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E55F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM8(0xA06680)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA06680), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5633; /* jne: not equal / not zero */

loc_000E55FF: ;
    ecx = 0x458FAF;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x407;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5627u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5627: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5633u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5633: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5638u); RECOMP_ABI_CALL(0x000E17D0u, sub_000E17D0); /* call 0x000E17D0 */

loc_000E5638: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E563Du); RECOMP_ABI_CALL(0x000E8A50u, sub_000E8A50); /* call 0x000E8A50 */

loc_000E563D: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA06682);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E564Cu); RECOMP_ABI_CALL(0x000E5670u, sub_000E5670); /* call 0x000E5670 */

loc_000E564C: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA06682);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E565Bu); RECOMP_ABI_CALL(0x000E56E0u, sub_000E56E0); /* call 0x000E56E0 */

loc_000E565B: ;
    MEM8(0xA06680) = 0;
    MEM16(0xA06682) = 0xFFFF;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5670
 * Original: 0x000E5670 - 0x000E56DD (109 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5670(void)
{
    uint32_t ebp = g_ebp;

loc_000E5670: ;
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
    PUSH32(esp, 0x000E5686u); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E5686: ;
    MEM32(ebp + -4) = eax;
    eax = ebp + -20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5694u); RECOMP_ABI_CALL(0x003BEAD0u, sub_003BEAD0); /* call 0x003BEAD0 */

loc_000E5694: ;
    esp = esp - 4;
    eax = MEM32(ebp + -4);
    eax = eax + 4;
    ecx = ebp + -20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E56ACu); RECOMP_ABI_CALL(0x003BE8B0u, sub_003BE8B0); /* call 0x003BE8B0 */

loc_000E56AC: ;
    esp = esp - 8;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -4);
    eax = eax + 4;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E56D8u); RECOMP_ABI_CALL(0x003BC0A0u, sub_003BC0A0); /* call 0x003BC0A0 */

loc_000E56D8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E56E0
 * Original: 0x000E56E0 - 0x000E5878 (408 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E56E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E56E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x140;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E56FBu); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E56FB: ;
    MEM32(ebp + -12) = eax;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = ebp + -268;
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5717u); RECOMP_ABI_CALL(0x000E6050u, sub_000E6050); /* call 0x000E6050 */

loc_000E5717: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax);
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5740u); RECOMP_ABI_CALL(0x003BBFC0u, sub_003BBFC0); /* call 0x003BBFC0 */

loc_000E5740: ;
    esp = esp - 0x10;
    MEM8(ebp + -289) = 0;
    eax = MEM32(ebp + -12);
    edi = MEM32(eax);
    edx = MEM32(ebp + -12);
    edx = edx + 0xC;
    esi = ebp + -288;
    eax = 0; /* xor self */
    ecx = ebp + -289;
    eax = 0xE6100;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = 0x800;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5791u); RECOMP_ABI_CALL(0x000E6600u, sub_000E6600); /* call 0x000E6600 */

loc_000E5791: ;
    eax = ebp + -289;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E579Fu); RECOMP_ABI_CALL(0x000E61A0u, sub_000E61A0); /* call 0x000E61A0 */

loc_000E579F: ;
    SET_LO8(eax, MEM8(ebp + -289));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5811; /* je: equal / zero */

loc_000E57A9: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 0xC;
    eax = ebp + -268;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E57CBu); RECOMP_ABI_CALL(0x000E0290u, sub_000E0290); /* call 0x000E0290 */

loc_000E57CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E580F; /* jne: not equal / not zero */

loc_000E57CF: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x800;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E57EFu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E57EF: ;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E580Fu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E580F: ;
    goto loc_000E586E;

loc_000E5811: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5816u); RECOMP_ABI_CALL(0x003BD410u, sub_003BD410); /* call 0x003BD410 */

loc_000E5816: ;
    edx = 0x8BEAC0;
    ecx = 0x475568;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5832u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000E5832: ;
    ecx = eax;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x461;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5856u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5856: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5862u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5862: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E586Eu); RECOMP_ABI_CALL(0x000E5FB0u, sub_000E5FB0); /* call 0x000E5FB0 */

loc_000E586E: ;
    esp = esp + 0x140;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5880
 * Original: 0x000E5880 - 0x000E58CD (77 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5880(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM8(0xA06680)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA06680), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E58C3; /* jne: not equal / not zero */

loc_000E588F: ;
    ecx = 0x458FAF;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3FE;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E58B7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E58B7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E58C3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E58C3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E58C8u); RECOMP_ABI_CALL(0x000E14B0u, sub_000E14B0); /* call 0x000E14B0 */

loc_000E58C8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E58D0
 * Original: 0x000E58D0 - 0x000E5939 (105 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E58D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_000E58D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E58EE; /* jl: less (signed <) */

loc_000E58E3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E5922; /* jl: less (signed <) */

loc_000E58EE: ;
    ecx = 0x447E39;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x266;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5916u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5916: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5922u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5922: ;
    eax = MEM32(0xA066B0);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM8(eax + 0x1C) = 1;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5940
 * Original: 0x000E5940 - 0x000E59F5 (181 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5940(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_000E5940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_000E5946: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E595Cu); RECOMP_ABI_CALL(0x003BE520u, sub_003BE520); /* call 0x003BE520 */

loc_000E595C: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM8(ebp + -1) = 0;
    MEM16(ebp + -4) = 0;

loc_000E5969: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E59E4; /* jge: greater or equal (signed >=) */

loc_000E5974: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E5988; /* jl: less (signed <) */

loc_000E597D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E59BC; /* jl: less (signed <) */

loc_000E5988: ;
    ecx = 0x447E39;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x266;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E59B0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E59B0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E59BCu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E59BC: ;
    eax = MEM32(0xA066B0);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    _fa = (uint32_t)(MEM8(eax + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1D), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E59D4; /* je: equal / zero */

loc_000E59D0: ;
    MEM8(ebp + -1) = 1;

loc_000E59D4: ;
    goto loc_000E59D6;

loc_000E59D6: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_000E5969;

loc_000E59E4: ;
    goto loc_000E59E6;

loc_000E59E6: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E5946; /* jne: not equal / not zero */

loc_000E59F0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5A00
 * Original: 0x000E5A00 - 0x000E5A25 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5A00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = (uint32_t)(int32_t)SMEM16(0xA066A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5A20; /* je: equal / zero */

loc_000E5A12: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5A17u); RECOMP_ABI_CALL(0x000E5A30u, sub_000E5A30); /* call 0x000E5A30 */

loc_000E5A17: ;
    MEM16(0xA066A4) = 0xFFFF;

loc_000E5A20: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5A30
 * Original: 0x000E5A30 - 0x000E5AB7 (135 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5A30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5A30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = (uint32_t)(int32_t)SMEM16(0xA066A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5A76; /* jne: not equal / not zero */

loc_000E5A42: ;
    ecx = 0x4645D9;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x28B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5A6Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5A6A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5A76u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5A76: ;
    MEM16(ebp + -2) = 0;

loc_000E5A7C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E5AB2; /* jge: greater or equal (signed >=) */

loc_000E5A87: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5A93u); RECOMP_ABI_CALL(0x000E5E40u, sub_000E5E40); /* call 0x000E5E40 */

loc_000E5A93: ;
    MEM32(ebp + -8) = eax;

loc_000E5A96: ;
    eax = MEM32(ebp + -8);
    SET_LO8(eax, MEM8(eax + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5AA2; /* je: equal / zero */

loc_000E5AA0: ;
    goto loc_000E5A96;

loc_000E5AA2: ;
    goto loc_000E5AA4;

loc_000E5AA4: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000E5A7C;

loc_000E5AB2: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5AC0
 * Original: 0x000E5AC0 - 0x000E5C28 (360 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5AC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5AC0: ;
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
    PUSH32(esp, 0x000E5AD7u); RECOMP_ABI_CALL(0x000E48B0u, sub_000E48B0); /* call 0x000E48B0 */

loc_000E5AD7: ;
    MEM16(ebp + -2) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5B15; /* jne: not equal / not zero */

loc_000E5AE1: ;
    ecx = 0x44AD09;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xDC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5B09u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5B09: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5B15u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5B15: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5B4F; /* jne: not equal / not zero */

loc_000E5B1B: ;
    ecx = 0x4784C0;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xDD;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5B43u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5B43: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5B4Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5B4F: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA066A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5B8F; /* je: equal / zero */

loc_000E5B5B: ;
    ecx = 0x458F82;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xDF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5B83u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5B83: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5B8Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5B8F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5BCC; /* jne: not equal / not zero */

loc_000E5B98: ;
    ecx = 0x447E7F;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xE0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5BC0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5BC0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5BCCu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5BCC: ;
    eax = MEM32(0xA066B0);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x4000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5BEBu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E5BEB: ;
    SET_LO16(eax, MEM16(ebp + -2));
    MEM16(0xA066A4) = LO16(eax);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5C07u); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E5C07: ;
    ecx = MEM32(ebp + -8);
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x800;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5C21u); RECOMP_ABI_CALL(0x000FB0B0u, sub_000FB0B0); /* call 0x000FB0B0 */

loc_000E5C21: ;
    SET_LO8(eax, 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5C30
 * Original: 0x000E5C30 - 0x000E5DDF (431 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5C4Du); RECOMP_ABI_CALL(0x000E5DE0u, sub_000E5DE0); /* call 0x000E5DE0 */

loc_000E5C4D: ;
    MEM16(ebp + -2) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5C5Du); RECOMP_ABI_CALL(0x000E5E40u, sub_000E5E40); /* call 0x000E5E40 */

loc_000E5C5D: ;
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0xA066A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5CA0; /* jne: not equal / not zero */

loc_000E5C6C: ;
    ecx = 0x4645D9;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x10D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5C94u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5C94: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5CA0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5CA0: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5CDA; /* jne: not equal / not zero */

loc_000E5CA6: ;
    ecx = 0x47B1C3;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x110;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5CCEu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5CCE: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5CDAu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5CDA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5D14; /* jne: not equal / not zero */

loc_000E5CE0: ;
    ecx = 0x49215C;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x111;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5D08u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5D08: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5D14u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5D14: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E5D4E; /* jge: greater or equal (signed >=) */

loc_000E5D1A: ;
    ecx = 0x450B90;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x114;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5D42u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5D42: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5D4Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5D4E: ;
    eax = MEM32(ebp + 0x10);
    eax = eax & 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5D69; /* je: equal / zero */

loc_000E5D5B: ;
    eax = MEM32(ebp + 0x10);
    eax = eax | 0x1FF;
    eax = eax + 1;
    MEM32(ebp + 0x10) = eax;

loc_000E5D69: ;
    eax = MEM32(ebp + 0x18);
    MEM8(eax) = 0;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5D8Cu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E5D8C: ;
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0xC) = 0;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x1D) = 1;
    SET_LO8(ecx, MEM8(ebp + 0x1C));
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x1C) = LO8(ecx);
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x1E) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5DD6u); RECOMP_ABI_CALL(0x000E5EB0u, sub_000E5EB0); /* call 0x000E5EB0 */

loc_000E5DD6: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5DE0
 * Original: 0x000E5DE0 - 0x000E5E32 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5DE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_000E5DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    MEM8(ebp + -1) = 0;

loc_000E5DEA: ;
    MEM16(ebp + -4) = 0;

loc_000E5DF0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E5E26; /* jge: greater or equal (signed >=) */

loc_000E5DFB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5E07u); RECOMP_ABI_CALL(0x000E5E40u, sub_000E5E40); /* call 0x000E5E40 */

loc_000E5E07: ;
    _fa = (uint32_t)(MEM8(eax + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1D), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E5E16; /* jne: not equal / not zero */

loc_000E5E0D: ;
    SET_LO16(eax, MEM16(ebp + -4));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_000E5E16: ;
    goto loc_000E5E18;

loc_000E5E18: ;
    SET_LO16(eax, MEM16(ebp + -4));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -4) = LO16(eax);
    goto loc_000E5DF0;

loc_000E5E26: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E5E30; /* jne: not equal / not zero */

loc_000E5E2C: ;
    MEM8(ebp + -1) = 1;

loc_000E5E30: ;
    goto loc_000E5DEA;

}


/**
 * sub_000E5E40
 * Original: 0x000E5E40 - 0x000E5EA5 (101 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5E40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_000E5E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E5E5E; /* jl: less (signed <) */

loc_000E5E53: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E5E92; /* jl: less (signed <) */

loc_000E5E5E: ;
    ecx = 0x447E39;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x266;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5E86u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5E86: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5E92u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5E92: ;
    eax = MEM32(0xA066B0);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5EB0
 * Original: 0x000E5EB0 - 0x000E5EC8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5EB0(void)
{
    uint32_t ebp = g_ebp;

loc_000E5EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0xA066A8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5EC3u); RECOMP_ABI_CALL(0x003BDC10u, sub_003BDC10); /* call 0x003BDC10 */

loc_000E5EC3: ;
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5ED0
 * Original: 0x000E5ED0 - 0x000E5FA3 (211 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5ED0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E5ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(0xA06680)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA06680), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E5F16; /* jne: not equal / not zero */

loc_000E5EE2: ;
    ecx = 0x458FAF;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3D8;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5F0Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5F0A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5F16u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5F16: ;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5F22u); RECOMP_ABI_CALL(0x000E15C0u, sub_000E15C0); /* call 0x000E15C0 */

loc_000E5F22: ;
    eax = SX16(eax); /* cwde */
    MEM32(ebp + -8) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    if ((!_cf && eax != 0)) goto loc_000E5F66; /* ja: above (unsigned >) */

loc_000E5F2B: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax * 4 + 0x49EEBC);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x000E5F37u) goto loc_000E5F37;
    if (_jt == 0x000E5F3Fu) goto loc_000E5F3F;
    if (_jt == 0x000E5F56u) goto loc_000E5F56;
    if (_jt == 0x000E5F5Eu) goto loc_000E5F5E;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E5F37: ;
    MEM16(ebp + -2) = 2;
    goto loc_000E5F9A;

loc_000E5F3F: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA06682);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5F4Eu); RECOMP_ABI_CALL(0x000E5FB0u, sub_000E5FB0); /* call 0x000E5FB0 */

loc_000E5F4E: ;
    MEM16(ebp + -2) = 2;
    goto loc_000E5F9A;

loc_000E5F56: ;
    MEM16(ebp + -2) = 0;
    goto loc_000E5F9A;

loc_000E5F5E: ;
    MEM16(ebp + -2) = 1;
    goto loc_000E5F9A;

loc_000E5F66: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax = 0x458F57;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3F5;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5F8Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E5F8E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E5F9Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E5F9A: ;
    SET_LO16(eax, MEM16(ebp + -2));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5FB0
 * Original: 0x000E5FB0 - 0x000E5FD2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5FB0(void)
{
    uint32_t ebp = g_ebp;

loc_000E5FB0: ;
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
    PUSH32(esp, 0x000E5FC6u); RECOMP_ABI_CALL(0x000E4DD0u, sub_000E4DD0); /* call 0x000E4DD0 */

loc_000E5FC6: ;
    ecx = 0xFFFFFFFFu;
    MEM32(eax) = ecx;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E5FE0
 * Original: 0x000E5FE0 - 0x000E6041 (97 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5FE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_000E5FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x108)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO16(eax, MEM16(ebp + 8));

loc_000E5FED: ;
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + 8) = LO16(eax);
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000E602B; /* jge: greater or equal (signed >=) */

loc_000E5FFF: ;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = ebp + -256;
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6018u); RECOMP_ABI_CALL(0x000E6050u, sub_000E6050); /* call 0x000E6050 */

loc_000E6018: ;
    eax = ebp + -256;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6026u); RECOMP_ABI_CALL(0x003BC460u, sub_003BC460); /* call 0x003BC460 */

loc_000E6026: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    goto loc_000E5FED;

loc_000E602B: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6039u); RECOMP_ABI_CALL(0x003BD430u, sub_003BD430); /* call 0x003BD430 */

loc_000E6039: ;
    esp = esp + 0x104;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6050
 * Original: 0x000E6050 - 0x000E607F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6050(void)
{
    uint32_t ebp = g_ebp;

loc_000E6050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    edx = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = 0x45ED0A;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E607Au); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_000E607A: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6080
 * Original: 0x000E6080 - 0x000E60F1 (113 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6080(void)
{
    uint32_t ebp = g_ebp;

loc_000E6080: ;
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
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -16) = eax;
    eax = 0x3BBC20;
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
    PUSH32(esp, 0x000E60E9u); RECOMP_ABI_CALL(0x000E61F0u, sub_000E61F0); /* call 0x000E61F0 */

loc_000E60E9: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6100
 * Original: 0x000E6100 - 0x000E6196 (150 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6100: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_000E6149; /* je: equal / zero */

loc_000E6115: ;
    ecx = 0x480D7C;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x57D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E613Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E613D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6149u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6149: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6186; /* jne: not equal / not zero */

loc_000E6152: ;
    ecx = 0x4452D4;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x57E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E617Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E617A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6186u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6186: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x10);
    MEM8(eax) = 1;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_000E61A0
 * Original: 0x000E61A0 - 0x000E61ED (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E61A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000E61A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);

loc_000E61A9: ;
    eax = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_000E61BB; /* jne: not equal / not zero */

loc_000E61B9: ;
    goto loc_000E61DD;

loc_000E61BB: ;
    MEM32(esp) = 0x1388;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E61CFu); RECOMP_ABI_CALL(0x003BE520u, sub_003BE520); /* call 0x003BE520 */

loc_000E61CF: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E61DB; /* je: equal / zero */

loc_000E61D9: ;
    goto loc_000E61DD;

loc_000E61DB: ;
    goto loc_000E61A9;

loc_000E61DD: ;
    eax = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(eax));
    MEM8(ebp + -1) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E61F0
 * Original: 0x000E61F0 - 0x000E6483 (659 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E61F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E61F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x1C;
    eax = MEM32(ebp + 0x24);
    eax = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E624B; /* jne: not equal / not zero */

loc_000E6217: ;
    ecx = 0x46FBE8;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x186;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E623Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E623F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E624Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E624B: ;
    eax = 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6289; /* jne: not equal / not zero */

loc_000E6255: ;
    ecx = 0x46A2CA;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x187;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E627Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E627D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6289u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6289: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E62C3; /* jne: not equal / not zero */

loc_000E628F: ;
    ecx = 0x494C1C;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x188;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E62B7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E62B7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E62C3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E62C3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E62FD; /* jne: not equal / not zero */

loc_000E62C9: ;
    ecx = 0x47B1C3;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x189;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E62F1u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E62F1: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E62FDu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E62FD: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6337; /* jne: not equal / not zero */

loc_000E6303: ;
    ecx = 0x494C27;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x18A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E632Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E632B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6337u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6337: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6371; /* jne: not equal / not zero */

loc_000E633D: ;
    ecx = 0x489741;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x18B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6365u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E6365: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6371u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6371: ;
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E638Eu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000E638E: ;
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0xC) = 0;
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x10) = ecx;

loc_000E63AA: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E63C0u); RECOMP_ABI_CALL(0x003BE520u, sub_003BE520); /* call 0x003BE520 */

loc_000E63C0: ;
    esp = esp - 8;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E63D1u); RECOMP_ABI_CALL(0x003BD430u, sub_003BD430); /* call 0x003BD430 */

loc_000E63D1: ;
    esp = esp - 4;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x24);
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x000E63FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000E63FB: ;
    esp = esp - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6405; /* je: equal / zero */

loc_000E6403: ;
    goto loc_000E647B;

loc_000E6405: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E640Au); RECOMP_ABI_CALL(0x003BD410u, sub_003BD410); /* call 0x003BD410 */

loc_000E640A: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6476; /* je: equal / zero */

loc_000E6413: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x5AA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6476; /* je: equal / zero */

loc_000E641C: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x6F8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6476; /* je: equal / zero */

loc_000E6425: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E642Au); RECOMP_ABI_CALL(0x003BD410u, sub_003BD410); /* call 0x003BD410 */

loc_000E642A: ;
    edx = 0x8BEAC0;
    ecx = 0x480D5C;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6446u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000E6446: ;
    ecx = eax;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1A6;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E646Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E646A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6476u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6476: ;
    goto loc_000E63AA;

loc_000E647B: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6490
 * Original: 0x000E6490 - 0x000E65F9 (361 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6490(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000E6490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x3C)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_000E6499: ;
    goto loc_000E649B;

loc_000E649B: ;
    eax = MEM32(0xA066A8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E64B8u); RECOMP_ABI_CALL(0x003BD8C0u, sub_003BD8C0); /* call 0x003BD8C0 */

loc_000E64B8: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xC)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E64C4; /* jne: not equal / not zero */

loc_000E64C2: ;
    goto loc_000E649B;

loc_000E64C4: ;
    goto loc_000E64C6;

loc_000E64C6: ;
    MEM32(ebp + -16) = 0;
    MEM16(ebp + -18) = 0;

loc_000E64D3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_000E653E; /* jge: greater or equal (signed >=) */

loc_000E64DE: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E64EAu); RECOMP_ABI_CALL(0x000E5E40u, sub_000E5E40); /* call 0x000E5E40 */

loc_000E64EA: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = ZX8(MEM8(eax + 0x1D));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E652E; /* je: equal / zero */

loc_000E64F9: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM8(eax + 0x1E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1E), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E652E; /* jne: not equal / not zero */

loc_000E6502: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E6528; /* je: equal / zero */

loc_000E6508: ;
    eax = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + 0x1C));
    ecx = MEM32(ebp + -28);
    ecx = ZX8(MEM8(ecx + 0x1C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_000E652E; /* jle: less or equal (signed <=) */

loc_000E651A: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_000E652E; /* jbe: below or equal (unsigned <=) */

loc_000E6528: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -16) = eax;

loc_000E652E: ;
    goto loc_000E6530;

loc_000E6530: ;
    SET_LO16(eax, MEM16(ebp + -18));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -18) = LO16(eax);
    goto loc_000E64D3;

loc_000E653E: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E6549; /* jne: not equal / not zero */

loc_000E6544: ;
    goto loc_000E65F4;

loc_000E6549: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA066A4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6558u); RECOMP_ABI_CALL(0x000E4E80u, sub_000E4E80); /* call 0x000E4E80 */

loc_000E6558: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM8(eax + 0x1E)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1E), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E6598; /* je: equal / zero */

loc_000E6564: ;
    ecx = 0x498057;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x52F;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E658Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E658C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6598u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6598: ;
    eax = MEM32(ebp + -16);
    MEM8(eax + 0x1E) = 1;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -36) = eax;
    ebx = MEM32(ebp + -16);
    eax = MEM32(ebp + -16);
    edi = MEM32(eax + 0x18);
    eax = MEM32(ebp + -16);
    esi = MEM32(eax + 0x14);
    eax = MEM32(ebp + -16);
    edx = MEM32(eax + 8);
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax + 0x10);
    eax = 0xE6680;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -36);
    MEM32(esp) = eax;
    eax = MEM32(ebp + -32);
    MEM32(esp + 4) = ebx;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E65EFu); RECOMP_ABI_CALL(0x000E6600u, sub_000E6600); /* call 0x000E6600 */

loc_000E65EF: ;
    goto loc_000E64C6;

loc_000E65F4: ;
    goto loc_000E6499;

}


/**
 * sub_000E6600
 * Original: 0x000E6600 - 0x000E6671 (113 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6600(void)
{
    uint32_t ebp = g_ebp;

loc_000E6600: ;
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
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    ebx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -16) = eax;
    eax = 0x3BBAB0;
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
    PUSH32(esp, 0x000E6669u); RECOMP_ABI_CALL(0x000E61F0u, sub_000E61F0); /* call 0x000E61F0 */

loc_000E6669: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6680
 * Original: 0x000E6680 - 0x000E6769 (233 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6680(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6680: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E66CF; /* je: equal / zero */

loc_000E669B: ;
    ecx = 0x480D7C;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x56B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E66C3u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E66C3: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E66CFu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E66CF: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E670E; /* je: equal / zero */

loc_000E66DA: ;
    ecx = 0x4452E7;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x56C;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6702u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E6702: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E670Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E670E: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E674B; /* jne: not equal / not zero */

loc_000E6717: ;
    ecx = 0x44AD17;
    eax = 0x458F57;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x56D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E673Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E673F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E674Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E674B: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x10);
    MEM8(eax) = 1;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x1D) = 0;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x1E) = 0;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}


/**
 * sub_000E6A80
 * Original: 0x000E6A80 - 0x000E6C3D (445 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6A80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0; /* xor self */
    MEM32(esp) = 0x1000000;
    MEM32(esp + 4) = 0x1A00000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6AACu); RECOMP_ABI_CALL(0x003BF880u, sub_003BF880); /* call 0x003BF880 */

loc_000E6AAC: ;
    esp = esp - 0x10;
    MEM32(0xA066B4) = eax;
    eax = MEM32(0xA066B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81A00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81A00000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6AF4; /* je: equal / zero */

loc_000E6AC0: ;
    ecx = 0x46A2E5;
    eax = 0x45BD71;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x2E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6AE8u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E6AE8: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6AF4u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6AF4: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x1600000;
    MEM32(esp + 4) = 0x3A6000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6B1Au); RECOMP_ABI_CALL(0x003BF880u, sub_003BF880); /* call 0x003BF880 */

loc_000E6B1A: ;
    esp = esp - 0x10;
    MEM32(0xA066B8) = eax;
    eax = MEM32(0xA066B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x803A6000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x803A6000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6B62; /* je: equal / zero */

loc_000E6B2E: ;
    ecx = 0x455F6E;
    eax = 0x45BD71;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x32;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6B56u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E6B56: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6B62u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6B62: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x1600000;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x404;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6B88u); RECOMP_ABI_CALL(0x003BF880u, sub_003BF880); /* call 0x003BF880 */

loc_000E6B88: ;
    esp = esp - 0x10;
    MEM32(0xA066BC) = eax;
    _fa = (uint32_t)(MEM32(0xA066BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA066BC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6BCD; /* jne: not equal / not zero */

loc_000E6B99: ;
    ecx = 0x46753D;
    eax = 0x45BD71;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x37;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6BC1u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E6BC1: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6BCDu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6BCD: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0x400000;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6BF3u); RECOMP_ABI_CALL(0x003BF880u, sub_003BF880); /* call 0x003BF880 */

loc_000E6BF3: ;
    esp = esp - 0x10;
    MEM32(0xA066C0) = eax;
    _fa = (uint32_t)(MEM32(0xA066C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA066C0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6C38; /* jne: not equal / not zero */

loc_000E6C04: ;
    ecx = 0x46461B;
    eax = 0x45BD71;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x3A;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6C2Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E6C2C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6C38u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6C38: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6C40
 * Original: 0x000E6C40 - 0x000E6D35 (245 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6C40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xA066B8);
    MEM32(ebp + -4) = eax;

loc_000E6C4E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(0xA066B8);
    ecx = ecx + 0x1600000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E6CBB; /* jae: above or equal (unsigned >=) */

loc_000E6C61: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6C6Cu); RECOMP_ABI_CALL(0x003BFB10u, sub_003BFB10); /* call 0x003BFB10 */

loc_000E6C6C: ;
    esp = esp - 4;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6CAC; /* je: equal / zero */

loc_000E6C78: ;
    ecx = 0x49806E;
    eax = 0x45BD71;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6CA0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E6CA0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6CACu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6CAC: ;
    goto loc_000E6CAE;

loc_000E6CAE: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x1000;
    MEM32(ebp + -4) = eax;
    goto loc_000E6C4E;

loc_000E6CBB: ;
    eax = MEM32(0xA066B4);
    MEM32(ebp + -4) = eax;

loc_000E6CC3: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(0xA066B4);
    ecx = ecx + 0xFC0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000E6D30; /* jae: above or equal (unsigned >=) */

loc_000E6CD6: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6CE1u); RECOMP_ABI_CALL(0x003BFB10u, sub_003BFB10); /* call 0x003BFB10 */

loc_000E6CE1: ;
    esp = esp - 4;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6D21; /* je: equal / zero */

loc_000E6CED: ;
    ecx = 0x49806E;
    eax = 0x45BD71;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x56;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6D15u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E6D15: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6D21u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E6D21: ;
    goto loc_000E6D23;

loc_000E6D23: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x1000;
    MEM32(ebp + -4) = eax;
    goto loc_000E6CC3;

loc_000E6D30: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6D40
 * Original: 0x000E6D40 - 0x000E6DAF (111 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6D40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_000E6D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(MEM32(0xA066B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA066B4), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E6D5F; /* je: equal / zero */

loc_000E6D4F: ;
    eax = MEM32(0xA066B4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6D5Cu); RECOMP_ABI_CALL(0x003BF920u, sub_003BF920); /* call 0x003BF920 */

loc_000E6D5C: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_000E6D5F: ;
    _fa = (uint32_t)(MEM32(0xA066B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA066B8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E6D78; /* je: equal / zero */

loc_000E6D68: ;
    eax = MEM32(0xA066B8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6D75u); RECOMP_ABI_CALL(0x003BF920u, sub_003BF920); /* call 0x003BF920 */

loc_000E6D75: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_000E6D78: ;
    _fa = (uint32_t)(MEM32(0xA066BC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA066BC), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E6D91; /* je: equal / zero */

loc_000E6D81: ;
    eax = MEM32(0xA066BC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6D8Eu); RECOMP_ABI_CALL(0x003BF920u, sub_003BF920); /* call 0x003BF920 */

loc_000E6D8E: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_000E6D91: ;
    _fa = (uint32_t)(MEM32(0xA066C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA066C0), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E6DAA; /* je: equal / zero */

loc_000E6D9A: ;
    eax = MEM32(0xA066C0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6DA7u); RECOMP_ABI_CALL(0x003BF920u, sub_003BF920); /* call 0x003BF920 */

loc_000E6DA7: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }

loc_000E6DAA: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6DB0
 * Original: 0x000E6DB0 - 0x000E6DBA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6DB0(void)
{
    uint32_t ebp = g_ebp;

loc_000E6DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xA066B4);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6DC0
 * Original: 0x000E6DC0 - 0x000E6DCA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6DC0(void)
{
    uint32_t ebp = g_ebp;

loc_000E6DC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xA066B8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6DD0
 * Original: 0x000E6DD0 - 0x000E6DDA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6DD0(void)
{
    uint32_t ebp = g_ebp;

loc_000E6DD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xA066BC);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6DE0
 * Original: 0x000E6DE0 - 0x000E6DEA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6DE0(void)
{
    uint32_t ebp = g_ebp;

loc_000E6DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0xA066C0);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6DF0
 * Original: 0x000E6DF0 - 0x000E6EBC (204 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6DF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    MEM16(ebp + -2) = 0;

loc_000E6DFF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E6EB7; /* jge: greater or equal (signed >=) */

loc_000E6E0E: ;
    ecx = MEM32(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6E28u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000E6E28: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E6E44; /* je: equal / zero */

loc_000E6E38: ;
    goto loc_000E6E3A;

loc_000E6E3A: ;
    eax = MEM32(ebp + -12);
    eax = eax - 1;
    if ((eax == 0)) goto loc_000E6E96; /* je: equal / zero */

loc_000E6E42: ;
    goto loc_000E6EA4;

loc_000E6E44: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 4);
    MEM32(esp) = 0x6269746D;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6E5Au); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000E6E5A: ;
    ecx = eax;
    ecx = ecx + 0x60;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6E7Au); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000E6E7A: ;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6E94u); RECOMP_ABI_CALL(0x000E9800u, sub_000E9800); /* call 0x000E9800 */

loc_000E6E94: ;
    goto loc_000E6EA4;

loc_000E6E96: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6EA4u); RECOMP_ABI_CALL(0x000E6EC0u, sub_000E6EC0); /* call 0x000E6EC0 */

loc_000E6EA4: ;
    goto loc_000E6EA6;

loc_000E6EA6: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000E6DFF;

loc_000E6EB7: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E6EC0
 * Original: 0x000E6EC0 - 0x000E6FA5 (229 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6EC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6EC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0x736E6421;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6EDCu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000E6EDC: ;
    MEM32(ebp + -4) = eax;
    MEM16(ebp + -10) = 0;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x98), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E6EF6; /* jg: greater (signed >) */

loc_000E6EF1: ;
    goto loc_000E6FA0;

loc_000E6EF6: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0x98;
    MEM32(ebp + -8) = eax;

loc_000E6F01: ;
    ecx = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6F1Cu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000E6F1C: ;
    MEM32(ebp + -16) = eax;
    MEM16(ebp + -18) = 0;

loc_000E6F25: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    ecx = MEM32(ebp + -16);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E6F82; /* jge: greater or equal (signed >=) */

loc_000E6F34: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x3C;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -18);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x7C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6F52u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000E6F52: ;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 1;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E6F74u); RECOMP_ABI_CALL(0x000E7A70u, sub_000E7A70); /* call 0x000E7A70 */

loc_000E6F74: ;
    SET_LO16(eax, MEM16(ebp + -18));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -18) = LO16(eax);
    goto loc_000E6F25;

loc_000E6F82: ;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E6F9E; /* jge: greater or equal (signed >=) */

loc_000E6F99: ;
    goto loc_000E6F01;

loc_000E6F9E: ;
    goto loc_000E6FA0;

loc_000E6FA0: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E72C0
 * Original: 0x000E72C0 - 0x000E72EF (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E72C0(void)
{
    uint32_t ebp = g_ebp;

loc_000E72C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0xA067C4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E72D3u); RECOMP_ABI_CALL(0x001E1410u, sub_001E1410); /* call 0x001E1410 */

loc_000E72D3: ;
    eax = MEM32(0xA067CC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E72E0u); RECOMP_ABI_CALL(0x001E7B60u, sub_001E7B60); /* call 0x001E7B60 */

loc_000E72E0: ;
    MEM32(0xA067C8) = 0;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E72F0
 * Original: 0x000E72F0 - 0x000E7308 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E72F0(void)
{
    uint32_t ebp = g_ebp;

loc_000E72F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0xA067C4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7303u); RECOMP_ABI_CALL(0x001E1740u, sub_001E1740); /* call 0x001E1740 */

loc_000E7303: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7310
 * Original: 0x000E7310 - 0x000E7368 (88 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7310(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xA067CC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7323u); RECOMP_ABI_CALL(0x001E7BD0u, sub_001E7BD0); /* call 0x001E7BD0 */

loc_000E7323: ;
    eax = (uint32_t)(int32_t)SMEM16(0xCDCEF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7363; /* je: equal / zero */

loc_000E732F: ;
    ecx = 0x472C5D;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7357u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E7357: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7363u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7363: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7370
 * Original: 0x000E7370 - 0x000E73DB (107 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7370(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E73B9; /* je: equal / zero */

loc_000E7385: ;
    ecx = 0x46A341;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x9E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E73ADu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E73AD: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E73B9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E73B9: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x2C) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x30) = 0;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x34) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E73E0
 * Original: 0x000E73E0 - 0x000E75A1 (449 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E73E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E73E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x24;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7587; /* je: equal / zero */

loc_000E73F7: ;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E740Fu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E740F: ;
    eax = ZX8(MEM8(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E74B3; /* je: equal / zero */

loc_000E741C: ;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7434u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E7434: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x3C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7442u); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_000E7442: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E745Du); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E745D: ;
    ecx = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    esi = 0x8BEAC0;
    edx = 0x47B251;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7483u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000E7483: ;
    ecx = eax;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAD;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E74A7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E74A7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E74B3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E74B3: ;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E74CBu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E74CB: ;
    eax = ZX8(MEM8(eax + 5));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E756F; /* je: equal / zero */

loc_000E74D8: ;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E74F0u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E74F0: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x3C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E74FEu); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_000E74FE: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7519u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E7519: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(eax + 8);
    esi = 0x8BEAC0;
    edx = 0x48C32A;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E753Fu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000E753F: ;
    ecx = eax;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAE;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7563u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E7563: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E756Fu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E756F: ;
    ecx = MEM32(0xA067CC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7587u); RECOMP_ABI_CALL(0x001E7C00u, sub_001E7C00); /* call 0x001E7C00 */

loc_000E7587: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x2C) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x30) = 0;
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E75B0
 * Original: 0x000E75B0 - 0x000E7656 (166 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E75B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E75B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E75D1u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E75D1: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM8(0xCDD820)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xCDD820), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7608; /* je: equal / zero */

loc_000E75DD: ;
    eax = MEM32(ebp + -4);
    ecx = ZX8(MEM8(eax + 4));
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    edx = 0x44AD3B;
    MEM32(esp) = 2;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7608u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_000E7608: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7645; /* jne: not equal / not zero */

loc_000E7611: ;
    ecx = 0x445311;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x107;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7639u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E7639: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7645u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7645: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 4));
    SET_LO8(ecx, LO8(ecx) + 0xFF);
    MEM8(eax + 4) = LO8(ecx);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7660
 * Original: 0x000E7660 - 0x000E76B7 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_000E7660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x2C);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7681u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E7681: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax + 5));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xFE));
    eax = eax - 0xFE;
    if ((!_cf && eax != 0)) goto loc_000E76A2; /* ja: above (unsigned >) */

loc_000E7692: ;
    goto loc_000E7694;

loc_000E7694: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 5));
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(1)) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 5) = LO8(ecx);
    goto loc_000E76B2;

loc_000E76A2: ;
    SET_LO16(eax, MEM16(0xCDCEF0));
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(1)) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(0xCDCEF0) = LO16(eax);

loc_000E76B2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E76C0
 * Original: 0x000E76C0 - 0x000E7710 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E76C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E76C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E76E1u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E76E1: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E76FB; /* je: equal / zero */

loc_000E76ED: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(ecx, LO8(ecx) + 0xFF);
    MEM8(eax + 5) = LO8(ecx);
    goto loc_000E770B;

loc_000E76FB: ;
    SET_LO16(eax, MEM16(0xCDCEF0));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(0xCDCEF0) = LO16(eax);

loc_000E770B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7710
 * Original: 0x000E7710 - 0x000E783E (302 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7710(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x44DBC1;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x200;
    MEM32(esp + 8) = 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7734u); RECOMP_ABI_CALL(0x001E1390u, sub_001E1390); /* call 0x001E1390 */

loc_000E7734: ;
    MEM32(0xA067C4) = eax;
    _fa = (uint32_t)(MEM32(0xA067C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA067C4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7776; /* jne: not equal / not zero */

loc_000E7742: ;
    ecx = 0x46FBFF;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x45;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E776Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E776A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7776u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7776: ;
    edx = 0x464650;
    ecx = 0xE7840;
    eax = 0xE7960;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x400;
    MEM32(esp + 8) = 0xC;
    MEM32(esp + 0xC) = 0x200;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E77B0u); RECOMP_ABI_CALL(0x001E83B0u, sub_001E83B0); /* call 0x001E83B0 */

loc_000E77B0: ;
    MEM32(0xA067CC) = eax;
    _fa = (uint32_t)(MEM32(0xA067CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA067CC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E77F2; /* jne: not equal / not zero */

loc_000E77BE: ;
    ecx = 0x445337;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x49;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E77E6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E77E6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E77F2u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E77F2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E77F7u); RECOMP_ABI_CALL(0x000E6DE0u, sub_000E6DE0); /* call 0x000E6DE0 */

loc_000E77F7: ;
    MEM32(0xA067C8) = eax;
    _fa = (uint32_t)(MEM32(0xA067C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA067C8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7839; /* jne: not equal / not zero */

loc_000E7805: ;
    ecx = 0x47857C;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x4C;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E782Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E782D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7839u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7839: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7840
 * Original: 0x000E7840 - 0x000E795A (282 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7840(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E785Fu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E785F: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E787A; /* jne: not equal / not zero */

loc_000E786E: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 5));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E78E3; /* je: equal / zero */

loc_000E787A: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x3C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E788Bu); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_000E788B: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    esi = 0x8BEAC0;
    edx = 0x486EE3;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E78B3u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000E78B3: ;
    ecx = eax;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x141;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E78D7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E78D7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E78E3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E78E3: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7925; /* je: equal / zero */

loc_000E78F1: ;
    ecx = 0x4785A2;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x144;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7919u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E7919: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7925u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7925: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    MEM32(eax + 0x2C) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    MEM32(eax + 0x30) = 0;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7954u); RECOMP_ABI_CALL(0x001E1850u, sub_001E1850); /* call 0x001E1850 */

loc_000E7954: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7960
 * Original: 0x000E7960 - 0x000E79BD (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7960(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E797Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E797E: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E79AE; /* je: equal / zero */

loc_000E798D: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E79AE; /* jne: not equal / not zero */

loc_000E7999: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 5));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E79AE; /* jne: not equal / not zero */

loc_000E79A5: ;
    MEM32(ebp + -4) = 0;
    goto loc_000E79B5;

loc_000E79AE: ;
    MEM32(ebp + -4) = 1;

loc_000E79B5: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E79C0
 * Original: 0x000E79C0 - 0x000E7A1A (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E79C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E79C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(0xA067C4);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E79DAu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_000E79DA: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E79E5u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_000E79E5: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7A15; /* je: equal / zero */

loc_000E79ED: ;
    eax = MEM32(ebp + -20);
    eax = ZX8(MEM8(eax + 4));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A13; /* jne: not equal / not zero */

loc_000E79F9: ;
    eax = MEM32(ebp + -20);
    eax = ZX8(MEM8(eax + 5));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A13; /* jne: not equal / not zero */

loc_000E7A05: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7A13u); RECOMP_ABI_CALL(0x000E73E0u, sub_000E73E0); /* call 0x000E73E0 */

loc_000E7A13: ;
    goto loc_000E79DA;

loc_000E7A15: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7A20
 * Original: 0x000E7A20 - 0x000E7A6F (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7A20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(0xA067C4);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7A3Au); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_000E7A3A: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7A45u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_000E7A45: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7A5D; /* je: equal / zero */

loc_000E7A4D: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7A5Bu); RECOMP_ABI_CALL(0x000E73E0u, sub_000E73E0); /* call 0x000E73E0 */

loc_000E7A5B: ;
    goto loc_000E7A3A;

loc_000E7A5D: ;
    eax = MEM32(0xA067C4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7A6Au); RECOMP_ABI_CALL(0x001E1470u, sub_001E1470); /* call 0x001E1470 */

loc_000E7A6A: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7A70
 * Original: 0x000E7A70 - 0x000E7C99 (553 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7A70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000E7A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO8(eax, MEM8(ebp + 0x14));
    SET_LO8(eax, MEM8(ebp + 0x10));
    SET_LO8(eax, MEM8(ebp + 0xC));
    eax = MEM32(ebp + 8);
    MEM8(ebp + -1) = 0;
    eax = ZX8(MEM8(ebp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E7AC9; /* jne: not equal / not zero */

loc_000E7A8F: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7AC9; /* je: equal / zero */

loc_000E7A95: ;
    ecx = 0x4536FB;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xC2;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7ABDu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E7ABD: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7AC9u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7AC9: ;
    eax = ZX8(MEM8(ebp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E7B0C; /* jne: not equal / not zero */

loc_000E7AD2: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B0C; /* je: equal / zero */

loc_000E7AD8: ;
    ecx = 0x46A361;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xC4;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7B00u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E7B00: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7B0Cu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7B0C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E7B49; /* jne: not equal / not zero */

loc_000E7B15: ;
    ecx = 0x46D253;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xC6;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7B3Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E7B3D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7B49u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7B49: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E7B66; /* jne: not equal / not zero */

loc_000E7B52: ;
    eax = ZX8(MEM8(ebp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B66; /* je: equal / zero */

loc_000E7B5B: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7B66u); RECOMP_ABI_CALL(0x000E7CA0u, sub_000E7CA0); /* call 0x000E7CA0 */

loc_000E7B66: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2C), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7C91; /* je: equal / zero */

loc_000E7B73: ;
    ecx = MEM32(0xA067CC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7B8Bu); RECOMP_ABI_CALL(0x001E7D80u, sub_001E7D80); /* call 0x001E7D80 */

loc_000E7B8B: ;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7BA3u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E7BA3: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7C65; /* je: equal / zero */

loc_000E7BB3: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E7BD1; /* jne: not equal / not zero */

loc_000E7BBC: ;
    eax = MEM32(ebp + -8);
    MEM8(eax + 3) = 1;
    eax = MEM32(ebp + -8);
    MEM8(eax + 4) = 0;
    eax = MEM32(ebp + -8);
    MEM8(eax + 5) = 0;

loc_000E7BD1: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7C5F; /* je: equal / zero */

loc_000E7BDB: ;
    _fa = (uint32_t)(MEM8(0xCDD820)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xCDD820), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E7C0F; /* je: equal / zero */

loc_000E7BE4: ;
    eax = MEM32(ebp + -8);
    ecx = ZX8(MEM8(eax + 4));
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    edx = 0x47DECA;
    MEM32(esp) = 2;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7C0Fu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_000E7C0F: ;
    eax = MEM32(ebp + -8);
    eax = ZX8(MEM8(eax + 4));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xFF));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0xFF)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if (_cf) goto loc_000E7C53; /* jb: below (unsigned <) */

loc_000E7C1D: ;
    goto loc_000E7C1F;

loc_000E7C1F: ;
    ecx = 0x45ED1B;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xEC;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7C47u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E7C47: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7C53u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7C53: ;
    eax = MEM32(ebp + -8);
    SET_LO8(ecx, MEM8(eax + 4));
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(1)) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 4) = LO8(ecx);

loc_000E7C5F: ;
    MEM8(ebp + -1) = 1;
    goto loc_000E7C6A;

loc_000E7C65: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7C6Au); RECOMP_ABI_CALL(0x003BE500u, sub_003BE500); /* call 0x003BE500 */

loc_000E7C6A: ;
    goto loc_000E7C6C;

loc_000E7C6C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000E7C84; /* jne: not equal / not zero */

loc_000E7C77: ;
    eax = ZX8(MEM8(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_000E7C84: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7B8B; /* jne: not equal / not zero */

loc_000E7C8F: ;
    goto loc_000E7C91;

loc_000E7C91: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7CA0
 * Original: 0x000E7CA0 - 0x000E7E6E (462 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7CA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x2C;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067CC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x40);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7CC4u); RECOMP_ABI_CALL(0x001E84C0u, sub_001E84C0); /* call 0x001E84C0 */

loc_000E7CC4: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7DC1; /* je: equal / zero */

loc_000E7CD1: ;
    eax = MEM32(0xA067C8);
    MEM32(ebp + -32) = eax;
    ecx = MEM32(0xA067CC);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7CEEu); RECOMP_ABI_CALL(0x001E7DD0u, sub_001E7DD0); /* call 0x001E7DD0 */

loc_000E7CEE: ;
    ecx = eax;
    eax = MEM32(ebp + -32);
    eax = eax + ecx;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7D0Du); RECOMP_ABI_CALL(0x001E1490u, sub_001E1490); /* call 0x001E1490 */

loc_000E7D0D: ;
    MEM32(ebp + -24) = eax;
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7D25u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E7D25: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7D64; /* je: equal / zero */

loc_000E7D30: ;
    ecx = 0x43FE0F;
    eax = 0x492176;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x170;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7D58u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E7D58: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7D64u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E7D64: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -28);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    edi = MEM32(eax + 0x34);
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x48);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x40);
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -28);
    eax = eax + 2;
    ebx = 0; /* xor self */
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7DBCu); RECOMP_ABI_CALL(0x000E5C30u, sub_000E5C30); /* call 0x000E5C30 */

loc_000E7DBC: ;
    goto loc_000E7E66;

loc_000E7DC1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7DC6u); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_000E7DC6: ;
    eax = eax - MEM32(0xA067D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2710 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000E7E64; /* jbe: below or equal (unsigned <=) */

loc_000E7DD7: ;
    ecx = MEM32(0x582414);
    eax = 0x46D26D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7DEFu); RECOMP_ABI_CALL(0x00193F30u, sub_00193F30); /* call 0x00193F30 */

loc_000E7DEF: ;
    eax = 0x4617AE;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7E05u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_000E7E05: ;
    ecx = MEM32(0x582414);
    eax = 0x46D26D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7E1Du); RECOMP_ABI_CALL(0x00193F30u, sub_00193F30); /* call 0x00193F30 */

loc_000E7E1D: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x40);
    edx = MEM32(0xA067CC);
    ebx = 0x44AD4C;
    ecx = 0x3337A0;
    eax = 0xE8350;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7E5Au); RECOMP_ABI_CALL(0x001E8040u, sub_001E8040); /* call 0x001E8040 */

loc_000E7E5A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7E5Fu); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_000E7E5F: ;
    MEM32(0xA067D0) = eax;

loc_000E7E64: ;
    goto loc_000E7E66;

loc_000E7E66: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E7E70
 * Original: 0x000E7E70 - 0x000E8147 (727 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7E70(void)
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
loc_000E7E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x478)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(MEM8(0xCDD7F0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xCDD7F0), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E813F; /* je: equal / zero */

loc_000E7E86: ;
    eax = MEM32(0x5823F0);
    MEM32(ebp + -1080) = eax;
    eax = MEM32(0x5823F4);
    MEM32(ebp + -1076) = eax;
    eax = MEM32(0x5823F8);
    MEM32(ebp + -1072) = eax;
    eax = MEM32(0x582400);
    MEM32(ebp + -1068) = eax;
    ecx = MEM32(0xA067CC);
    eax = ebp + -1024;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E7ECAu); RECOMP_ABI_CALL(0x001E7E80u, sub_001E7E80); /* call 0x001E7E80 */

loc_000E7ECA: ;
    MEM32(ebp + -1096) = 0;

loc_000E7ED4: ;
    _fa = (uint32_t)(MEM32(ebp + -1096)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x280) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1096), 0x280 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_000E813D; /* jge: greater or equal (signed >=) */

loc_000E7EE4: ;
    MEM32(ebp + -1100) = 0;

loc_000E7EEE: ;
    _fa = (uint32_t)(MEM32(ebp + -1100)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1100), 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_000E8127; /* jge: greater or equal (signed >=) */

loc_000E7EFB: ;
    eax = MEM32(ebp + -1096);
    eax = SX16(eax); /* cwde */
    eax = ZX8(MEM8(ebp + eax + -1024));
    ecx = MEM32(ebp + -1100);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E8111; /* je: equal / zero */

loc_000E7F24: ;
    eax = MEM32(ebp + -1100);
    MEM32(ebp + -1124) = eax;
    eax = MEM32(ebp + -1096);
    ecx = 0x280;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    eax = MEM32(ebp + -1124);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA);
    MEM32(ebp + -1104) = eax;
    eax = MEM32(ebp + -1096);
    ecx = 0x280;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + -1056) = xmm0.f[0]; /* movss */
    MEMF(ebp + -1064) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -1104); /* cvtsi2ss */
    MEMF(ebp + -1060) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1104);
    eax = eax + 0xA;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -1052) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DECC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8C0690); /* addss */
    MEMF(ebp + -1112) = xmm0.f[0]; /* movss */
    MEM32(ebp + -1108) = 0;

loc_000E7FBD: ;
    _fa = (uint32_t)(MEM32(ebp + -1108)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1108), 2 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_000E80DD; /* jge: greater or equal (signed >=) */

loc_000E7FCA: ;
    eax = MEM32(ebp + -1108);
    edx = ebp + -1064;
    _shift_result = RECOMP_SHIFT(eax, 3, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    edx = edx + eax;
    ecx = ebp + -1048;
    eax = (uint32_t)((int32_t)MEM32(ebp + -1108) * (int32_t)0xC);
    ecx = ecx + eax;
    eax = ebp + -1092;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8000u); RECOMP_ABI_CALL(0x000E8150u, sub_000E8150); /* call 0x000E8150 */

loc_000E8000: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1112)); /* movss */
    MEMF(ebp + -1128) = xmm0.f[0]; /* movss */
    ecx = 0x8C0644;
    ecx = ecx + 0x10;
    ecx = ecx + 0xC;
    eax = ebp + -1092;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E802Eu); RECOMP_ABI_CALL(0x000E8300u, sub_000E8300); /* call 0x000E8300 */

loc_000E802E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1128)); /* movss */
    MEMF(ebp + -1120) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -1120)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -1116) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1092)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -1116); /* mulss */
    eax = ebp + -1048;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -1108) * (int32_t)0xC);
    eax = eax + ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1088)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -1116); /* mulss */
    eax = ebp + -1048;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -1108) * (int32_t)0xC);
    eax = eax + ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1084)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -1116); /* mulss */
    eax = ebp + -1048;
    ecx = (uint32_t)((int32_t)MEM32(ebp + -1108) * (int32_t)0xC);
    eax = eax + ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1108);
    eax = eax + 1;
    MEM32(ebp + -1108) = eax;
    goto loc_000E7FBD;

loc_000E80DD: ;
    edx = ebp + -1048;
    ecx = ebp + -1048;
    ecx = ecx + 0xC;
    eax = MEM32(ebp + -1100);
    eax = MEM32(ebp + eax * 4 + -1080);
    MEM32(esp) = 1;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8111u); RECOMP_ABI_CALL(0x0031D5A0u, sub_0031D5A0); /* call 0x0031D5A0 */

loc_000E8111: ;
    goto loc_000E8113;

loc_000E8113: ;
    eax = MEM32(ebp + -1100);
    eax = eax + 1;
    MEM32(ebp + -1100) = eax;
    goto loc_000E7EEE;

loc_000E8127: ;
    goto loc_000E8129;

loc_000E8129: ;
    eax = MEM32(ebp + -1096);
    eax = eax + 1;
    MEM32(ebp + -1096) = eax;
    goto loc_000E7ED4;

loc_000E813D: ;
    goto loc_000E813F;

loc_000E813F: ;
    esp = esp + 0x478;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_000E8150
 * Original: 0x000E8150 - 0x000E8300 (432 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8150(void)
{
    uint32_t ebp = g_ebp;

loc_000E8150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D63C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x43D7E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x59CA58);
    eax = MEM32(ebp + 0xC);
    edx = 0x8C0644;
    edx = edx + 0x64;
    edx = edx + 0xE0;
    edx = edx + 0x30;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E81BFu); RECOMP_ABI_CALL(0x000E83C0u, sub_000E83C0); /* call 0x000E83C0 */

loc_000E81BF: ;
    xmm0 = XMM_SCALAR(MEMF(0x8C0794)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C0788); /* subss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C0798)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C078C); /* subss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C079C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C0790); /* subss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C07A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C0788); /* subss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C07A4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C078C); /* subss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C07A8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C0790); /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8C0788); /* addss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8C078C); /* addss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8C0790); /* addss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -44); /* addss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -40); /* addss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -36); /* addss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8300
 * Original: 0x000E8300 - 0x000E834D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8300(void)
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

loc_000E8300: ;
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
 * sub_000E8350
 * Original: 0x000E8350 - 0x000E83B7 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8350(void)
{
    uint32_t ebp = g_ebp;

loc_000E8350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067C4);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E836Fu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E836F: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x3C);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8383u); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_000E8383: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    esi = 0xA066C4;
    edx = 0x45ED53;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E83ABu); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_000E83AB: ;
    eax = 0xA066C4;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E83C0
 * Original: 0x000E83C0 - 0x000E8416 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E83C0(void)
{
    uint32_t ebp = g_ebp;

loc_000E83C0: ;
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
 * sub_000E8730
 * Original: 0x000E8730 - 0x000E8755 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8730(void)
{
    uint32_t ebp = g_ebp;

loc_000E8730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0xA067D8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8743u); RECOMP_ABI_CALL(0x001E1410u, sub_001E1410); /* call 0x001E1410 */

loc_000E8743: ;
    eax = MEM32(0xA067E0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8750u); RECOMP_ABI_CALL(0x001E7B60u, sub_001E7B60); /* call 0x001E7B60 */

loc_000E8750: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8760
 * Original: 0x000E8760 - 0x000E8778 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8760(void)
{
    uint32_t ebp = g_ebp;

loc_000E8760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0xA067D8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8773u); RECOMP_ABI_CALL(0x001E1740u, sub_001E1740); /* call 0x001E1740 */

loc_000E8773: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8780
 * Original: 0x000E8780 - 0x000E8798 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8780(void)
{
    uint32_t ebp = g_ebp;

loc_000E8780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(0xA067E0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8793u); RECOMP_ABI_CALL(0x001E7BD0u, sub_001E7BD0); /* call 0x001E7BD0 */

loc_000E8793: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E87A0
 * Original: 0x000E87A0 - 0x000E8884 (228 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E87A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E87A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax + 0xE));
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E87F1; /* je: equal / zero */

loc_000E87BD: ;
    ecx = 0x48C373;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x9D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E87E5u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E87E5: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E87F1u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E87F1: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax + 0xE));
    ecx = ecx | 0x80;
    MEM16(eax + 0xE) = LO16(ecx);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x2C) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x28) = 0;
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0x6269746D;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8833u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000E8833: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x38);
    eax = MEM32(ebp + 0xC);
    ecx = ecx + MEM32(eax + 0x18);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8850u); RECOMP_ABI_CALL(0x000BC650u, sub_000BC650); /* call 0x000BC650 */

loc_000E8850: ;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x2C) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x28) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8890
 * Original: 0x000E8890 - 0x000E88F8 (104 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8890(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax + 0xE));
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E88F3; /* je: equal / zero */

loc_000E88AA: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E88CE; /* je: equal / zero */

loc_000E88B9: ;
    ecx = MEM32(0xA067E0);
    eax = MEM32(ebp + -4);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E88CEu); RECOMP_ABI_CALL(0x001E7C00u, sub_001E7C00); /* call 0x001E7C00 */

loc_000E88CE: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax + 0xE));
    ecx = ecx & 0xFFFFFF7Fu;
    MEM16(eax + 0xE) = LO16(ecx);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x2C) = 0;

loc_000E88F3: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8900
 * Original: 0x000E8900 - 0x000E8A4B (331 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8900(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_000E8900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0x4000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    eax = 0x4FE;
    eax = eax - MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E892Au); RECOMP_ABI_CALL(0x000E6DD0u, sub_000E6DD0); /* call 0x000E6DD0 */

loc_000E892A: ;
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 0xE, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(eax, 0xE, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    eax = eax + 0x104000;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    eax = eax + 0x104000;
    eax = eax + MEM32(ebp + -16);
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E8991; /* jg: greater (signed >) */

loc_000E895D: ;
    ecx = 0x47B29A;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x13F;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8985u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8985: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8991u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8991: ;
    _fa = (uint32_t)(MEM8(0xA067E4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA067E4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E89CE; /* je: equal / zero */

loc_000E899A: ;
    ecx = 0x459012;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x140;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E89C2u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E89C2: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E89CEu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E89CE: ;
    ecx = MEM32(0xA067E0);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E89E3u); RECOMP_ABI_CALL(0x001E7F80u, sub_001E7F80); /* call 0x001E7F80 */

loc_000E89E3: ;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E89FDu); RECOMP_ABI_CALL(0x003BFAD0u, sub_003BFAD0); /* call 0x003BFAD0 */

loc_000E89FD: ;
    esp = esp - 0xC;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x104000;
    MEM32(esp + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8A1Bu); RECOMP_ABI_CALL(0x003BFAD0u, sub_003BFAD0); /* call 0x003BFAD0 */

loc_000E8A1B: ;
    esp = esp - 0xC;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x104000;
    MEM32(esp + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8A39u); RECOMP_ABI_CALL(0x003BFAD0u, sub_003BFAD0); /* call 0x003BFAD0 */

loc_000E8A39: ;
    esp = esp - 0xC;
    MEM8(0xA067E4) = 1;
    eax = MEM32(ebp + -20);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8A50
 * Original: 0x000E8A50 - 0x000E8AD4 (132 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8A50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM8(0xA067E4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA067E4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8A93; /* jne: not equal / not zero */

loc_000E8A5F: ;
    ecx = 0x43FE38;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x159;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8A87u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8A87: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8A93u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8A93: ;
    eax = MEM32(0xA067E0);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x580;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8AA8u); RECOMP_ABI_CALL(0x001E7F80u, sub_001E7F80); /* call 0x001E7F80 */

loc_000E8AA8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8AADu); RECOMP_ABI_CALL(0x000E6DD0u, sub_000E6DD0); /* call 0x000E6DD0 */

loc_000E8AAD: ;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x1600000;
    MEM32(esp + 8) = 0x404;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8AC5u); RECOMP_ABI_CALL(0x003BFAD0u, sub_003BFAD0); /* call 0x003BFAD0 */

loc_000E8AC5: ;
    esp = esp - 0xC;
    MEM8(0xA067E4) = 0;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8AE0
 * Original: 0x000E8AE0 - 0x000E8BBA (218 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8AE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8AE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = 0x49F6A0;
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E8B09; /* jl: less (signed <) */

loc_000E8B00: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E8B3D; /* jl: less (signed <) */

loc_000E8B09: ;
    ecx = 0x45E8FD;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8B31u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8B31: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8B3Du); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8B3D: ;
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8B7E; /* jne: not equal / not zero */

loc_000E8B4A: ;
    ecx = 0x450B9A;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1E2;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8B72u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8B72: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8B7Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8B7E: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8BA5; /* je: equal / zero */

loc_000E8B8A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8B9C; /* je: equal / zero */

loc_000E8B93: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8BA5; /* jne: not equal / not zero */

loc_000E8B9C: ;
    MEM32(ebp + -4) = 0x33;
    goto loc_000E8BB2;

loc_000E8BA5: ;
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax + ecx * 4);
    MEM32(ebp + -4) = eax;

loc_000E8BB2: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8BC0
 * Original: 0x000E8BC0 - 0x000E8C9D (221 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8BC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = 0x49F6A0;
    eax = eax + 0x48;
    MEM32(ebp + -8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E8BEC; /* jl: less (signed <) */

loc_000E8BE3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E8C20; /* jl: less (signed <) */

loc_000E8BEC: ;
    ecx = 0x45E8FD;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x206;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8C14u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8C14: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8C20u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8C20: ;
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8C61; /* jne: not equal / not zero */

loc_000E8C2D: ;
    ecx = 0x450B9A;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x207;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8C55u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8C55: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8C61u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8C61: ;
    eax = ZX16(MEM16(ebp + 0xC));
    eax = eax & 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8C88; /* je: equal / zero */

loc_000E8C6D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8C7F; /* je: equal / zero */

loc_000E8C76: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8C88; /* jne: not equal / not zero */

loc_000E8C7F: ;
    MEM32(ebp + -4) = 0x36;
    goto loc_000E8C95;

loc_000E8C88: ;
    eax = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax + ecx * 4);
    MEM32(ebp + -4) = eax;

loc_000E8C95: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8CA0
 * Original: 0x000E8CA0 - 0x000E8CD2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8CA0(void)
{
    uint32_t ebp = g_ebp;

loc_000E8CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xC4AD1C);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8CB3u); RECOMP_ABI_CALL(0x003950E0u, sub_003950E0); /* call 0x003950E0 */

loc_000E8CB3: ;
    eax = MEM32(0xC4AD1C);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8CC0u); RECOMP_ABI_CALL(0x003950D0u, sub_003950D0); /* call 0x003950D0 */

loc_000E8CC0: ;
    eax = MEM32(0xA067E0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8CCDu); RECOMP_ABI_CALL(0x001E8460u, sub_001E8460); /* call 0x001E8460 */

loc_000E8CCD: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8CE0
 * Original: 0x000E8CE0 - 0x000E8E0E (302 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8CE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x483D83;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x580;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8D04u); RECOMP_ABI_CALL(0x001E1390u, sub_001E1390); /* call 0x001E1390 */

loc_000E8D04: ;
    MEM32(0xA067D8) = eax;
    _fa = (uint32_t)(MEM32(0xA067D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA067D8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8D46; /* jne: not equal / not zero */

loc_000E8D12: ;
    ecx = 0x44262C;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x62;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8D3Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8D3A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8D46u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8D46: ;
    edx = 0x45ED5B;
    ecx = 0xE8E10;
    eax = 0xE8F00;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x580;
    MEM32(esp + 8) = 0xE;
    MEM32(esp + 0xC) = 0x580;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8D80u); RECOMP_ABI_CALL(0x001E83B0u, sub_001E83B0); /* call 0x001E83B0 */

loc_000E8D80: ;
    MEM32(0xA067E0) = eax;
    _fa = (uint32_t)(MEM32(0xA067E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA067E0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8DC2; /* jne: not equal / not zero */

loc_000E8D8E: ;
    ecx = 0x46A374;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x66;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8DB6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8DB6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8DC2u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8DC2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8DC7u); RECOMP_ABI_CALL(0x000E6DD0u, sub_000E6DD0); /* call 0x000E6DD0 */

loc_000E8DC7: ;
    MEM32(0xA067DC) = eax;
    _fa = (uint32_t)(MEM32(0xA067DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA067DC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E8E09; /* jne: not equal / not zero */

loc_000E8DD5: ;
    ecx = 0x486F25;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x69;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8DFDu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8DFD: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8E09u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8E09: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8E10
 * Original: 0x000E8E10 - 0x000E8EF4 (228 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8E10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000E8E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067D8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8E2Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E8E2E: ;
    MEM32(ebp + -8) = eax;

loc_000E8E31: ;
    ecx = MEM32(0xA067D8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8E46u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E8E46: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + -12);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E8E77; /* je: equal / zero */

loc_000E8E57: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0xC;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8E6Bu); RECOMP_ABI_CALL(0x0039DC30u, sub_0039DC30); /* call 0x0039DC30 */

loc_000E8E6B: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_000E8E77: ;
    SET_LO8(eax, MEM8(ebp + -13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_000E8E31; /* jne: not equal / not zero */

loc_000E8E7E: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E8EC0; /* je: equal / zero */

loc_000E8E8C: ;
    ecx = 0x442650;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x187;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8EB4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8EB4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8EC0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8EC0: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    MEM32(eax + 0x24) = 0xFFFFFFFFu;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    MEM32(eax + 0x2C) = 0;
    ecx = MEM32(0xA067D8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8EEFu); RECOMP_ABI_CALL(0x001E1850u, sub_001E1850); /* call 0x001E1850 */

loc_000E8EEF: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8F00
 * Original: 0x000E8F00 - 0x000E8F5C (92 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8F00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000E8F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067D8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8F1Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E8F1E: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -8);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000E8F4F; /* je: equal / zero */

loc_000E8F2F: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0xC;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8F43u); RECOMP_ABI_CALL(0x0039DC30u, sub_0039DC30); /* call 0x0039DC30 */

loc_000E8F43: ;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(4)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_000E8F4F: ;
    SET_LO8(eax, MEM8(ebp + -9));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8F60
 * Original: 0x000E8F60 - 0x000E8FBA (90 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8F60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    _fa = (uint32_t)(MEM8(0xA067E4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA067E4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8FA3; /* je: equal / zero */

loc_000E8F6F: ;
    ecx = 0x459012;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x85;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8F97u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E8F97: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8FA3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E8FA3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8FA8u); RECOMP_ABI_CALL(0x000E8CA0u, sub_000E8CA0); /* call 0x000E8CA0 */

loc_000E8FA8: ;
    eax = MEM32(0xA067D8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E8FB5u); RECOMP_ABI_CALL(0x001E1470u, sub_001E1470); /* call 0x001E1470 */

loc_000E8FB5: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E8FC0
 * Original: 0x000E8FC0 - 0x000E95B1 (1521 bytes, 297 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8FC0(void)
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
loc_000E8FC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0xA50)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    _fa = (uint32_t)(MEM8(0xA067D4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA067D4), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E934E; /* je: equal / zero */

loc_000E8FD8: ;
    eax = (uint32_t)(int32_t)SMEM16(0x8C068E);
    ecx = (uint32_t)(int32_t)SMEM16(0x8C068A);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM16(ebp + -1482) = LO16(eax);
    eax = MEM32(0x5823F0);
    MEM32(ebp + -1480) = eax;
    eax = MEM32(0x5823F4);
    MEM32(ebp + -1476) = eax;
    eax = MEM32(0x5823F8);
    MEM32(ebp + -1472) = eax;
    MEM32(ebp + -1468) = 0;
    ecx = MEM32(0xA067E0);
    eax = ebp + -1416;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9032u); RECOMP_ABI_CALL(0x001E7E80u, sub_001E7E80); /* call 0x001E7E80 */

loc_000E9032: ;
    MEM32(ebp + -1512) = 0;

loc_000E903C: ;
    _fa = (uint32_t)(MEM32(ebp + -1512)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x580) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1512), 0x580 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_000E934C; /* jge: greater or equal (signed >=) */

loc_000E904C: ;
    eax = (uint32_t)(int32_t)SMEM16(0x8C068A);
    ecx = (uint32_t)(int32_t)SMEM16(0x8C0682);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM16(ebp + -1494) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(0x8C0688);
    ecx = (uint32_t)(int32_t)SMEM16(0x8C0680);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _shift_result = RECOMP_SHIFT(eax, 2, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM16(ebp + -1496) = LO16(eax);
    MEM32(ebp + -1516) = 0;

loc_000E9087: ;
    _fa = (uint32_t)(MEM32(ebp + -1516)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1516), 3 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_000E9336; /* jge: greater or equal (signed >=) */

loc_000E9094: ;
    eax = MEM32(ebp + -1512);
    eax = ZX8(MEM8(ebp + eax + -1416));
    ecx = MEM32(ebp + -1516);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9320; /* je: equal / zero */

loc_000E90BC: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1494);
    MEM32(ebp + -2616) = eax;
    eax = MEM32(ebp + -1512);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -1482);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + -2616);
    eax = eax + edx;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -1456) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1496);
    MEM32(ebp + -2612) = eax;
    ecx = MEM32(ebp + -1516);
    eax = MEM32(ebp + -1512);
    esi = (uint32_t)(int32_t)SMEM16(ebp + -1482);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = eax;
    eax = MEM32(ebp + -2612);
    _shift_result = RECOMP_SHIFT(edx, 2, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = ecx + edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA);
    eax = eax + ecx;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -1452) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1494);
    MEM32(ebp + -2608) = eax;
    eax = MEM32(ebp + -1512);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -1482);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + -2608);
    eax = eax + edx;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -1448) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -1496);
    MEM32(ebp + -2604) = eax;
    ecx = MEM32(ebp + -1516);
    eax = MEM32(ebp + -1512);
    esi = (uint32_t)(int32_t)SMEM16(ebp + -1482);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = eax;
    eax = MEM32(ebp + -2604);
    _shift_result = RECOMP_SHIFT(edx, 2, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = ecx + edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA);
    eax = eax + ecx;
    eax = eax + 0xA;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebp + -1444) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DECC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8C0690); /* addss */
    MEMF(ebp + -1488) = xmm0.f[0]; /* movss */
    eax = ebp + -1440;
    MEM32(ebp + -1460) = eax;
    eax = ebp + -1456;
    MEM32(ebp + -1464) = eax;
    MEM32(ebp + -1520) = 2;

loc_000E91DD: ;
    _fa = (uint32_t)(MEM32(ebp + -1520)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1520), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E92EC; /* je: equal / zero */

loc_000E91EA: ;
    edx = MEM32(ebp + -1464);
    ecx = MEM32(ebp + -1460);
    eax = ebp + -1508;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E920Cu); RECOMP_ABI_CALL(0x000E95C0u, sub_000E95C0); /* call 0x000E95C0 */

loc_000E920C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -1488)); /* movss */
    MEMF(ebp + -2620) = xmm0.f[0]; /* movss */
    ecx = 0x8C0644;
    ecx = ecx + 0x10;
    ecx = ecx + 0xC;
    eax = ebp + -1508;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E923Au); RECOMP_ABI_CALL(0x000E9770u, sub_000E9770); /* call 0x000E9770 */

loc_000E923A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -2620)); /* movss */
    MEMF(ebp + -2600) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -2600)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(ebp + -1492) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1508)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -1492); /* mulss */
    eax = MEM32(ebp + -1460);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1504)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -1492); /* mulss */
    eax = MEM32(ebp + -1460);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -1500)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -1492); /* mulss */
    eax = MEM32(ebp + -1460);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -1464);
    eax = eax + 8;
    MEM32(ebp + -1464) = eax;
    eax = MEM32(ebp + -1460);
    eax = eax + 0xC;
    MEM32(ebp + -1460) = eax;
    eax = MEM32(ebp + -1520);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -1520) = eax;
    goto loc_000E91DD;

loc_000E92EC: ;
    edx = ebp + -1440;
    ecx = ebp + -1440;
    ecx = ecx + 0xC;
    eax = MEM32(ebp + -1516);
    eax = MEM32(ebp + eax * 4 + -1480);
    MEM32(esp) = 1;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9320u); RECOMP_ABI_CALL(0x0031D5A0u, sub_0031D5A0); /* call 0x0031D5A0 */

loc_000E9320: ;
    goto loc_000E9322;

loc_000E9322: ;
    eax = MEM32(ebp + -1516);
    eax = eax + 1;
    MEM32(ebp + -1516) = eax;
    goto loc_000E9087;

loc_000E9336: ;
    goto loc_000E9338;

loc_000E9338: ;
    eax = MEM32(ebp + -1512);
    eax = eax + 1;
    MEM32(ebp + -1512) = eax;
    goto loc_000E903C;

loc_000E934C: ;
    goto loc_000E934E;

loc_000E934E: ;
    _fa = (uint32_t)(MEM8(0xA067D5)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA067D5), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E95A7; /* je: equal / zero */

loc_000E935B: ;
    MEM16(ebp + -2578) = 0;
    eax = MEM32(0xA067D8);
    ecx = ebp + -2560;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E937Bu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_000E937B: ;
    eax = ebp + -2560;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9389u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_000E9389: ;
    MEM32(ebp + -2576) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E93D4; /* je: equal / zero */

loc_000E9394: ;
    eax = MEM32(ebp + -2576);
    eax = MEM32(eax + 8);
    MEM32(ebp + -2592) = eax;
    eax = MEM32(ebp + -2592);
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E93D2; /* je: equal / zero */

loc_000E93AF: ;
    ecx = MEM32(ebp + -2592);
    SET_LO16(eax, MEM16(ebp + -2578));
    SET_LO16(edx, LO16(eax));
    SET_LO16(edx, LO16(edx) + 1);
    MEM16(ebp + -2578) = LO16(edx);
    eax = SX16(eax); /* cwde */
    MEM32(eax * 4 + 0xA067E8) = ecx;

loc_000E93D2: ;
    goto loc_000E937B;

loc_000E93D4: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2578);
    edx = 0xA067E8;
    eax = 0xE97C0;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E93F7u); RECOMP_ABI_CALL(0x00102370u, sub_00102370); /* call 0x00102370 */

loc_000E93F7: ;
    MEM32(esp) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9403u); RECOMP_ABI_CALL(0x001859D0u, sub_001859D0); /* call 0x001859D0 */

loc_000E9403: ;
    MEM32(ebp + -2584) = eax;
    SET_LO16(eax, MEM16(0x5A1F86));
    MEM16(ebp + -2564) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(0x5A1F86);
    eax = eax + 0x6E;
    MEM16(ebp + -2562) = LO16(eax);
    eax = ebp + -2564;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E943Du); RECOMP_ABI_CALL(0x003573E0u, sub_003573E0); /* call 0x003573E0 */

loc_000E943D: ;
    _fa = (uint32_t)(MEM32(ebp + -2584)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -2584), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9454; /* je: equal / zero */

loc_000E9446: ;
    eax = MEM32(ebp + -2584);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9454u); RECOMP_ABI_CALL(0x00357770u, sub_00357770); /* call 0x00357770 */

loc_000E9454: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2578);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -2588) = eax;

loc_000E9464: ;
    _fa = (uint32_t)(MEM32(ebp + -2588)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -2588), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_L(_fas, _fbs)) goto loc_000E95A5; /* jl: less (signed <) */

loc_000E9471: ;
    ecx = MEM32(0xA067E0);
    eax = MEM32(ebp + -2588);
    eax = MEM32(eax * 4 + 0xA067E8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9493u); RECOMP_ABI_CALL(0x001E7E20u, sub_001E7E20); /* call 0x001E7E20 */

loc_000E9493: ;
    edx = ZX8(LO8(eax));
    eax = 0x47DEDC;
    ecx = 0x452F3B;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -2596) = eax;
    edi = ebp + -2544;
    eax = MEM32(ebp + -2588);
    eax = MEM32(eax * 4 + 0xA067E8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E94C9u); RECOMP_ABI_CALL(0x002630E0u, sub_002630E0); /* call 0x002630E0 */

loc_000E94C9: ;
    MEM32(ebp + -2628) = eax;
    eax = MEM32(ebp + -2596);
    MEM32(ebp + -2624) = eax;
    eax = MEM32(ebp + -2588);
    eax = MEM32(eax * 4 + 0xA067E8);
    eax = MEM32(eax + 0x20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E94F3u); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_000E94F3: ;
    edx = MEM32(ebp + -2628);
    ecx = MEM32(ebp + -2624);
    esi = 0x450BAE;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E951Du); RECOMP_ABI_CALL(0x003A5080u, sub_003A5080); /* call 0x003A5080 */

loc_000E951D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2578);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -2588))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA);
    eax = eax + 0x23;
    MEM16(ebp + -2572) = LO16(eax);
    MEM16(ebp + -2570) = 0xA;
    MEM16(ebp + -2566) = 0x7FFF;
    MEM16(ebp + -2568) = 0x7FFF;
    eax = MEM32(0x582400);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E955Fu); RECOMP_ABI_CALL(0x00357540u, sub_00357540); /* call 0x00357540 */

loc_000E955F: ;
    eax = ebp + -2544;
    ecx = ebp + -2572;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9591u); RECOMP_ABI_CALL(0x002650F0u, sub_002650F0); /* call 0x002650F0 */

loc_000E9591: ;
    eax = MEM32(ebp + -2588);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -2588) = eax;
    goto loc_000E9464;

loc_000E95A5: ;
    goto loc_000E95A7;

loc_000E95A7: ;
    esp = esp + 0xA50;
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
 * sub_000E95C0
 * Original: 0x000E95C0 - 0x000E9770 (432 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E95C0(void)
{
    uint32_t ebp = g_ebp;

loc_000E95C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D63C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(0x43D7E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x59CA58);
    eax = MEM32(ebp + 0xC);
    edx = 0x8C0644;
    edx = edx + 0x64;
    edx = edx + 0xE0;
    edx = edx + 0x30;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E962Fu); RECOMP_ABI_CALL(0x000E9C80u, sub_000E9C80); /* call 0x000E9C80 */

loc_000E962F: ;
    xmm0 = XMM_SCALAR(MEMF(0x8C0794)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C0788); /* subss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C0798)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C078C); /* subss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C079C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C0790); /* subss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C07A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C0788); /* subss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C07A4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C078C); /* subss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8C07A8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8C0790); /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8C0788); /* addss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8C078C); /* addss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x8C0790); /* addss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -44); /* addss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -40); /* addss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -36); /* addss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E9770
 * Original: 0x000E9770 - 0x000E97BD (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9770(void)
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

loc_000E9770: ;
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
 * sub_000E97C0
 * Original: 0x000E97C0 - 0x000E9800 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E97C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E97C0: ;
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
    PUSH32(esp, 0x000E97D7u); RECOMP_ABI_CALL(0x002630E0u, sub_002630E0); /* call 0x002630E0 */

loc_000E97D7: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E97E5u); RECOMP_ABI_CALL(0x002630E0u, sub_002630E0); /* call 0x002630E0 */

loc_000E97E5: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    eax = eax - ecx;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E9800
 * Original: 0x000E9800 - 0x000E9AB5 (693 bytes, 182 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9800(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000E9800: ;
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
    SET_LO8(eax, MEM8(ebp + 0x10));
    SET_LO8(eax, MEM8(ebp + 0xC));
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = 0;
    eax = ZX8(MEM8(ebp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E985C; /* jne: not equal / not zero */

loc_000E9822: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E985C; /* je: equal / zero */

loc_000E9828: ;
    ecx = 0x4536FB;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xD2;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9850u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E9850: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E985Cu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E985C: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax + 0xE));
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9990; /* je: equal / zero */

loc_000E9871: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E9896; /* jne: not equal / not zero */

loc_000E987A: ;
    eax = ZX8(MEM8(ebp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9896; /* je: equal / zero */

loc_000E9883: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    eax = ZX8(MEM8(ebp + 0xC));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9896u); RECOMP_ABI_CALL(0x000E9AC0u, sub_000E9AC0); /* call 0x000E9AC0 */

loc_000E9896: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E998E; /* je: equal / zero */

loc_000E98A3: ;
    ecx = MEM32(0xA067D8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E98BBu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E98BB: ;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(0xA067E0);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E98D6u); RECOMP_ABI_CALL(0x001E7D80u, sub_001E7D80); /* call 0x001E7D80 */

loc_000E98D6: ;
    eax = ZX8(MEM8(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9920; /* je: equal / zero */

loc_000E98DF: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E9920; /* jne: not equal / not zero */

loc_000E98E8: ;
    _fa = (uint32_t)(MEM8(0xA067D6)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA067D6), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9911; /* je: equal / zero */

loc_000E98F1: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E98FFu); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_000E98FF: ;
    ecx = 0x463B55;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9911u); RECOMP_ABI_CALL(0x001C30D0u, sub_001C30D0); /* call 0x001C30D0 */

loc_000E9911: ;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9920u); RECOMP_ABI_CALL(0x000E58D0u, sub_000E58D0); /* call 0x000E58D0 */

loc_000E9920: ;
    goto loc_000E9922;

loc_000E9922: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9946; /* je: equal / zero */

loc_000E992B: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E993B; /* jne: not equal / not zero */

loc_000E9934: ;
    eax = MEM32(ebp + -20);
    MEM8(eax + 5) = 1;

loc_000E993B: ;
    eax = MEM32(ebp + -20);
    eax = eax + 0xC;
    MEM32(ebp + -16) = eax;
    goto loc_000E996B;

loc_000E9946: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E994Bu); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_000E994B: ;
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9953u); RECOMP_ABI_CALL(0x0033F9C0u, sub_0033F9C0); /* call 0x0033F9C0 */

loc_000E9953: ;
    ecx = eax;
    eax = MEM32(ebp + -24);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x84 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_000E9966; /* jbe: below or equal (unsigned <=) */

loc_000E9961: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9966u); RECOMP_ABI_CALL(0x00341EE0u, sub_00341EE0); /* call 0x00341EE0 */

loc_000E9966: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E996Bu); RECOMP_ABI_CALL(0x003BE500u, sub_003BE500); /* call 0x003BE500 */

loc_000E996B: ;
    goto loc_000E996D;

loc_000E996D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -25) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000E9985; /* jne: not equal / not zero */

loc_000E9978: ;
    eax = ZX8(MEM8(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -25) = LO8(eax);

loc_000E9985: ;
    SET_LO8(eax, MEM8(ebp + -25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_000E9922; /* jne: not equal / not zero */

loc_000E998C: ;
    goto loc_000E998E;

loc_000E998E: ;
    goto loc_000E9999;

loc_000E9990: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x28);
    MEM32(ebp + -16) = eax;

loc_000E9999: ;
    eax = ZX8(MEM8(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000E9AAA; /* je: equal / zero */

loc_000E99A6: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E9AAA; /* jne: not equal / not zero */

loc_000E99B0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E99B5u); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_000E99B5: ;
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(0xA07DE8))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2710 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_000E9A60; /* jbe: below or equal (unsigned <=) */

loc_000E99C6: ;
    ecx = MEM32(0x582414);
    eax = 0x46D26D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E99DEu); RECOMP_ABI_CALL(0x00193F30u, sub_00193F30); /* call 0x00193F30 */

loc_000E99DE: ;
    eax = 0x49808C;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E99F4u); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_000E99F4: ;
    ecx = MEM32(0x582414);
    eax = 0x46D26D;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9A0Cu); RECOMP_ABI_CALL(0x00193F30u, sub_00193F30); /* call 0x00193F30 */

loc_000E9A0C: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9A1Au); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_000E9A1A: ;
    edi = eax;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x1C);
    edx = MEM32(0xA067E0);
    ebx = 0x44AD4C;
    ecx = 0x3337A0;
    eax = 0xE9C40;
    MEM32(esp) = ebx;
    MEM32(esp + 4) = edi;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9A56u); RECOMP_ABI_CALL(0x001E8040u, sub_001E8040); /* call 0x001E8040 */

loc_000E9A56: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9A5Bu); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_000E9A5B: ;
    MEM32(0xA07DE8) = eax;

loc_000E9A60: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9A6Bu); RECOMP_ABI_CALL(0x00277200u, sub_00277200); /* call 0x00277200 */

loc_000E9A6B: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000E9AA8; /* jne: not equal / not zero */

loc_000E9A74: ;
    ecx = 0x455FC8;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x127;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9A9Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E9A9C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9AA8u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E9AA8: ;
    goto loc_000E9AAA;

loc_000E9AAA: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E9AC0
 * Original: 0x000E9AC0 - 0x000E9C3C (380 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9AC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E9AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    SET_LO8(eax, MEM8(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9AD9u); RECOMP_ABI_CALL(0x002630E0u, sub_002630E0); /* call 0x002630E0 */

loc_000E9AD9: ;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E9AEF; /* jle: less or equal (signed <=) */

loc_000E9AE7: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -36) = eax;
    goto loc_000E9AF8;

loc_000E9AEF: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x1C);
    MEM32(ebp + -36) = eax;

loc_000E9AF8: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -24) = eax;
    ecx = MEM32(0xA067E0);
    eax = MEM32(ebp + -24);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9B13u); RECOMP_ABI_CALL(0x001E84C0u, sub_001E84C0); /* call 0x001E84C0 */

loc_000E9B13: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9C2E; /* je: equal / zero */

loc_000E9B20: ;
    eax = MEM32(0xA067DC);
    MEM32(ebp + -40) = eax;
    ecx = MEM32(0xA067E0);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9B3Du); RECOMP_ABI_CALL(0x001E7DD0u, sub_001E7DD0); /* call 0x001E7DD0 */

loc_000E9B3D: ;
    ecx = eax;
    eax = MEM32(ebp + -40);
    eax = eax + ecx;
    MEM32(ebp + -20) = eax;
    ecx = MEM32(0xA067D8);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9B5Cu); RECOMP_ABI_CALL(0x001E1490u, sub_001E1490); /* call 0x001E1490 */

loc_000E9B5C: ;
    MEM32(ebp + -28) = eax;
    ecx = MEM32(0xA067D8);
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9B74u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E9B74: ;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9BB3; /* je: equal / zero */

loc_000E9B7F: ;
    ecx = 0x45370A;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1AF;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9BA7u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E9BA7: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9BB3u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E9BB3: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -32);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -32);
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9BE3u); RECOMP_ABI_CALL(0x000E9CE0u, sub_000E9CE0); /* call 0x000E9CE0 */

loc_000E9BE3: ;
    eax = MEM32(ebp + 8);
    edi = MEM32(eax + 0x20);
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + 0x18);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -32);
    eax = eax + 4;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    eax = ZX8(MEM8(ebp + 0xC));
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9C1Eu); RECOMP_ABI_CALL(0x000E5C30u, sub_000E5C30); /* call 0x000E5C30 */

loc_000E9C1E: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -32);
    MEM16(eax + 2) = LO16(ecx);
    MEM8(ebp + -9) = 1;
    goto loc_000E9C32;

loc_000E9C2E: ;
    MEM8(ebp + -9) = 0;

loc_000E9C32: ;
    SET_LO8(eax, MEM8(ebp + -9));
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E9C40
 * Original: 0x000E9C40 - 0x000E9C77 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9C40(void)
{
    uint32_t ebp = g_ebp;

loc_000E9C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA067D8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9C5Eu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000E9C5E: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9C72u); RECOMP_ABI_CALL(0x000E0C40u, sub_000E0C40); /* call 0x000E0C40 */

loc_000E9C72: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000E9C80
 * Original: 0x000E9C80 - 0x000E9CD6 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9C80(void)
{
    uint32_t ebp = g_ebp;

loc_000E9C80: ;
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
 * sub_000E9CE0
 * Original: 0x000E9CE0 - 0x000E9F19 (569 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E9CE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_000E9CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9D27; /* jne: not equal / not zero */

loc_000E9CF3: ;
    ecx = 0x47DC73;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x214;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9D1Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E9D1B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9D27u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E9D27: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E9D61; /* jne: not equal / not zero */

loc_000E9D2D: ;
    ecx = 0x472C85;
    eax = 0x49219E;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x215;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9D55u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000E9D55: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9D61u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000E9D61: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 4) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 8) = 0;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x40001;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax + 0xE));
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E9E13; /* je: equal / zero */

loc_000E9D91: ;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0xC));
    eax = MEM32(ebp + 8);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 0xE));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9DAEu); RECOMP_ABI_CALL(0x000E8BC0u, sub_000E8BC0); /* call 0x000E8BC0 */

loc_000E9DAE: ;
    ecx = eax;
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx | 0x10000;
    ecx = ecx | 0x20;
    ecx = ecx | 8;
    ecx = ecx | 1;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9DDDu); RECOMP_ABI_CALL(0x000BE980u, sub_000BE980); /* call 0x000BE980 */

loc_000E9DDD: ;
    ecx = 0x40;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    ecx = ecx - 1;
    _shift_result = RECOMP_SHIFT(ecx, 0x18, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    eax = eax - 1;
    _shift_result = RECOMP_SHIFT(eax, 0xC, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    eax = eax - 1;
    ecx = ecx | eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = ecx;
    goto loc_000E9EF2;

loc_000E9E13: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9E22u); RECOMP_ABI_CALL(0x001CFD20u, sub_001CFD20); /* call 0x001CFD20 */

loc_000E9E22: ;
    eax = SX16(eax); /* cwde */
    _shift_result = RECOMP_SHIFT(eax, 0x1C, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9E38u); RECOMP_ABI_CALL(0x001CFD20u, sub_001CFD20); /* call 0x001CFD20 */

loc_000E9E38: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -28);
    ecx = SX16(LO16(ecx));
    _shift_result = RECOMP_SHIFT(ecx, 0x18, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9E58u); RECOMP_ABI_CALL(0x001CFD20u, sub_001CFD20); /* call 0x001CFD20 */

loc_000E9E58: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -24);
    ecx = SX16(LO16(ecx));
    _shift_result = RECOMP_SHIFT(ecx, 0x14, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0xC));
    eax = MEM32(ebp + 8);
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax + 0xE));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9E86u); RECOMP_ABI_CALL(0x000E8AE0u, sub_000E8AE0); /* call 0x000E8AE0 */

loc_000E9E86: ;
    ecx = eax;
    eax = MEM32(ebp + -20);
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    ecx = MEM32(ebp + 8);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    ecx = 2;
    edx = 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) ecx = edx; /* cmove */
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9EBAu); RECOMP_ABI_CALL(0x00262D70u, sub_00262D70); /* call 0x00262D70 */

loc_000E9EBA: ;
    ecx = MEM32(ebp + -16);
    eax = SX16(eax); /* cwde */
    eax = eax + 1;
    _shift_result = RECOMP_SHIFT(eax, 0x10, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | eax;
    eax = MEM32(ebp + 8);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    eax = 0; /* xor self */
    edx = 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = edx; /* cmove */
    ecx = ecx | eax;
    ecx = ecx | 8;
    ecx = ecx | 1;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = 0;

loc_000E9EF2: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x2C);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -12);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000E9F13u); RECOMP_ABI_CALL(0x0039DB50u, sub_0039DB50); /* call 0x0039DB50 */

loc_000E9F13: ;
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EA230
 * Original: 0x000EA230 - 0x000EA25E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA230(void)
{
    uint32_t ebp = g_ebp;

loc_000EA230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA248u); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_000EA248: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EA260
 * Original: 0x000EA260 - 0x000EAA3A (2010 bytes, 454 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EA260(void)
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

loc_000EA260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x158;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA277u); RECOMP_ABI_CALL(0x000FB890u, sub_000FB890); /* call 0x000FB890 */

loc_000EA277: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA2B4; /* jne: not equal / not zero */

loc_000EA280: ;
    ecx = 0x472C8D;
    eax = 0x464661;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x33;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA2A8u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EA2A8: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA2B4u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EA2B4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EA2EE; /* jne: not equal / not zero */

loc_000EA2BA: ;
    ecx = 0x447966;
    eax = 0x464661;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x34;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA2E2u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EA2E2: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA2EEu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EA2EE: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx - MEM32(ebp + -4);
    eax = MEM32(ebp + 8);
    ecx = ecx + MEM32(eax + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA31Eu); RECOMP_ABI_CALL(0x000EAA40u, sub_000EAA40); /* call 0x000EAA40 */

loc_000EA31E: ;
    ecx = eax;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAA32; /* jge: greater or equal (signed >=) */

loc_000EA32B: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA339u); RECOMP_ABI_CALL(0x00142AD0u, sub_00142AD0); /* call 0x00142AD0 */

loc_000EA339: ;
    MEM32(ebp + -32) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -28;
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA351u); RECOMP_ABI_CALL(0x00141C30u, sub_00141C30); /* call 0x00141C30 */

loc_000EA351: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -16);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0xC) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAA30; /* je: equal / zero */

loc_000EA370: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA399; /* je: equal / zero */

loc_000EA379: ;
    eax = MEM32(ebp + -20);
    eax = eax + 0x4C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA399u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000EA399: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA3A7u); RECOMP_ABI_CALL(0x00142D70u, sub_00142D70); /* call 0x00142D70 */

loc_000EA3A7: ;
    ecx = MEM32(eax);
    MEM32(ebp + -56) = ecx;
    eax = MEM32(eax + 4);
    MEM32(ebp + -52) = eax;
    ecx = MEM32(ebp + -32);
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA3C4u); RECOMP_ABI_CALL(0x0037C0E0u, sub_0037C0E0); /* call 0x0037C0E0 */

loc_000EA3C4: ;
    xmm1 = XMM_SCALAR(MEMF(0x43DB14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DED4)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA3E4u); RECOMP_ABI_CALL(0x000EAA70u, sub_000EAA70); /* call 0x000EAA70 */

loc_000EA3E4: ;
    MEMF(ebp + -80) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DB08)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D76C)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA411u); RECOMP_ABI_CALL(0x000EAA70u, sub_000EAA70); /* call 0x000EAA70 */

loc_000EA411: ;
    MEMF(ebp + -76) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -56); /* addss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = ebp + -56;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA444u); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_000EA444: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA45Cu); RECOMP_ABI_CALL(0x000F4B10u, sub_000F4B10); /* call 0x000F4B10 */

loc_000EA45C: ;
    xmm1 = XMM_SCALAR(MEMF(0x43DB90)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43DDF0)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA47Cu); RECOMP_ABI_CALL(0x000EAA70u, sub_000EAA70); /* call 0x000EAA70 */

loc_000EA47C: ;
    MEMF(ebp + -72) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -72)); /* movss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D804)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA4B6u); RECOMP_ABI_CALL(0x000EAA70u, sub_000EAA70); /* call 0x000EAA70 */

loc_000EA4B6: ;
    MEMF(ebp + -68) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x59CA58);
    edx = MEM32(ecx);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x40) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x44) = ecx;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA4EEu); RECOMP_ABI_CALL(0x000EAAC0u, sub_000EAAC0); /* call 0x000EAAC0 */

loc_000EA4EE: ;
    MEM32(ebp + -36) = eax;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -36); /* cvtsi2ss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    ecx = ecx + 1;
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAA2E; /* je: equal / zero */

loc_000EA52D: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA545u); RECOMP_ABI_CALL(0x000EAB00u, sub_000EAB00); /* call 0x000EAB00 */

loc_000EA545: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA551: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA563u); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EA563: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA56F: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EA588: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000EA59D: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA5AFu); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EA5AF: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA5BB: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EA5D4: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_000EA5E9: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA5FBu); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EA5FB: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA607: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EA620: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_000EA635: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA647u); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EA647: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA653: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EA66C: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_000EA681: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA693u); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EA693: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA69F: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EA6B8: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_000EA6CD: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA6DFu); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EA6DF: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA6EB: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EA704: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x18); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x18)) */

loc_000EA719: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x3C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA727u); RECOMP_ABI_CALL(0x000EABB0u, sub_000EABB0); /* call 0x000EABB0 */

loc_000EA727: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA733: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA745u); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EA745: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA751: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EA765: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000EA776: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA788u); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EA788: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA790: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DECC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EA7A5: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x20); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_000EA7B6: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA7C8u); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EA7C8: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EA7F5; /* je: equal / zero */

loc_000EA7D0: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EA7F5; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EA7E0: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DE88)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x48); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_000EAA2E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x48)) */

loc_000EA7F5: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -176) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -168) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -160) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm7.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm6.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm4.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    eax = MEM32(ebp + -64);
    edx = 0x8BEAC0;
    ecx = 0x4921C8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -168)); /* movsd */
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(esp + 0x18) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    MEMD(esp + 0x28) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -136)); /* movsd */
    MEMD(esp + 0x30) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    MEMD(esp + 0x38) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    MEMD(esp + 0x40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    MEMD(esp + 0x48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    MEMD(esp + 0x50) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    MEMD(esp + 0x58) = xmm7.d[0]; /* movsd */
    MEMD(esp + 0x60) = xmm6.d[0]; /* movsd */
    MEMD(esp + 0x68) = xmm5.d[0]; /* movsd */
    MEMD(esp + 0x70) = xmm4.d[0]; /* movsd */
    MEMD(esp + 0x78) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x80) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x88) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x90) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x98) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EA9FEu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000EA9FE: ;
    ecx = eax;
    eax = 0x464661;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x5F;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAA22u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EAA22: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAA2Eu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EAA2E: ;
    goto loc_000EAA30;

loc_000EAA30: ;
    goto loc_000EAA32;

loc_000EAA32: ;
    esp = esp + 0x158;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_000EAA40
 * Original: 0x000EAA40 - 0x000EAA6B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAA40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EAA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAA57; /* jle: less or equal (signed <=) */

loc_000EAA4D: ;
    eax = 3;
    MEM32(ebp + -4) = eax;
    goto loc_000EAA5D;

loc_000EAA57: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_000EAA5D: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAA70
 * Original: 0x000EAA70 - 0x000EAAB9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAA70(void)
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

loc_000EAA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAA85u); RECOMP_ABI_CALL(0x001D4CA0u, sub_001D4CA0); /* call 0x001D4CA0 */

loc_000EAA85: ;
    ecx = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = esp;
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAAA4u); RECOMP_ABI_CALL(0x001D4EE0u, sub_001D4EE0); /* call 0x001D4EE0 */

loc_000EAAA4: ;
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
 * sub_000EAAC0
 * Original: 0x000EAAC0 - 0x000EAAF3 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAAC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EAAC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000EAADC; /* jle: less or equal (signed <=) */

loc_000EAAD2: ;
    eax = 3;
    MEM32(ebp + -4) = eax;
    goto loc_000EAAE5;

loc_000EAADC: ;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;

loc_000EAAE5: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2710);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAB00
 * Original: 0x000EAB00 - 0x000EAB82 (130 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAB00(void)
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

loc_000EAB00: ;
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
    PUSH32(esp, 0x000EAB17u); RECOMP_ABI_CALL(0x000EAC50u, sub_000EAC50); /* call 0x000EAC50 */

loc_000EAB17: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EAB75; /* je: equal / zero */

loc_000EAB24: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAB2Fu); RECOMP_ABI_CALL(0x000EAC50u, sub_000EAC50); /* call 0x000EAC50 */

loc_000EAB2F: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EAB75; /* je: equal / zero */

loc_000EAB3C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAB4Eu); RECOMP_ABI_CALL(0x000EAD00u, sub_000EAD00); /* call 0x000EAD00 */

loc_000EAB4E: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAB69u); RECOMP_ABI_CALL(0x000EAC90u, sub_000EAC90); /* call 0x000EAC90 */

loc_000EAB69: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_000EAB75: ;
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
 * sub_000EAB90
 * Original: 0x000EAB90 - 0x000EABAF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAB90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EAB90: ;
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
 * sub_000EABB0
 * Original: 0x000EABB0 - 0x000EAC21 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EABB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EABB0: ;
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
    PUSH32(esp, 0x000EABCAu); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EABCA: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EAC14; /* je: equal / zero */

loc_000EABD7: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EABE9u); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EABE9: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EAC14; /* je: equal / zero */

loc_000EABF6: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAC08u); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EAC08: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_000EAC14: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAC30
 * Original: 0x000EAC30 - 0x000EAC37 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC30(void)
{
    uint32_t ebp = g_ebp;

loc_000EAC30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAC40
 * Original: 0x000EAC40 - 0x000EAC47 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC40(void)
{
    uint32_t ebp = g_ebp;

loc_000EAC40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAC50
 * Original: 0x000EAC50 - 0x000EAC89 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC50(void)
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

loc_000EAC50: ;
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
    PUSH32(esp, 0x000EAC64u); RECOMP_ABI_CALL(0x000EAD50u, sub_000EAD50); /* call 0x000EAD50 */

loc_000EAC64: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAC84u); RECOMP_ABI_CALL(0x000EAC90u, sub_000EAC90); /* call 0x000EAC90 */

loc_000EAC84: ;
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
 * sub_000EAC90
 * Original: 0x000EAC90 - 0x000EACFE (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAC90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EAC90: ;
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
    PUSH32(esp, 0x000EACBEu); RECOMP_ABI_CALL(0x000EAB90u, sub_000EAB90); /* call 0x000EAB90 */

loc_000EACBE: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EACF1; /* je: equal / zero */

loc_000EACCB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43DF60)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    MEM8(ebp + -5) = LO8(eax);

loc_000EACF1: ;
    SET_LO8(eax, MEM8(ebp + -5));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAD00
 * Original: 0x000EAD00 - 0x000EAD4D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAD00(void)
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

loc_000EAD00: ;
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
 * sub_000EAD50
 * Original: 0x000EAD50 - 0x000EAD89 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAD50(void)
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

loc_000EAD50: ;
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
 * sub_000EAD90
 * Original: 0x000EAD90 - 0x000EADA7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAD90(void)
{
    uint32_t ebp = g_ebp;

loc_000EAD90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 8));
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(0x5822C8) = LO8(eax);
    MEM8(0x5822C9) = 1;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EADB0
 * Original: 0x000EADB0 - 0x000EAEB3 (259 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EADB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EADB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAEAE; /* je: equal / zero */

loc_000EADC6: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = 0x616E7472;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EADD9u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000EADD9: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x68), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EAEAC; /* jne: not equal / not zero */

loc_000EADE9: ;
    MEM16(ebp + -10) = 0;

loc_000EADEF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EAEAA; /* jge: greater or equal (signed >=) */

loc_000EADFF: ;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x74;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAE1Du); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000EAE1D: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAE32u); RECOMP_ABI_CALL(0x003A4210u, sub_003A4210); /* call 0x003A4210 */

loc_000EAE32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EAE99; /* jne: not equal / not zero */

loc_000EAE37: ;
    MEM16(0x5822CC) = 0xFFFF;
    MEM32(0x5822FC) = 0xFFFFFFFFu;
    MEM16(0x5822CA) = 1;
    MEM8(0x5822C9) = 1;
    SET_LO16(eax, MEM16(ebp + -10));
    MEM16(0x582304) = LO16(eax);
    eax = MEM32(ebp + 8);
    MEM32(0x582300) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x43DE4C)); /* movss */
    MEMF(0x5822F8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    ecx = 0x1E;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x5822D0) = xmm0.f[0]; /* movss */
    goto loc_000EAEAA;

loc_000EAE99: ;
    SET_LO16(eax, MEM16(ebp + -10));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -10) = LO16(eax);
    goto loc_000EADEF;

loc_000EAEAA: ;
    goto loc_000EAEAC;

loc_000EAEAC: ;
    goto loc_000EAEAE;

loc_000EAEAE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAEC0
 * Original: 0x000EAEC0 - 0x000EAF04 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAEC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EAEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAEE9; /* je: equal / zero */

loc_000EAECF: ;
    MEM16(0x5822CA) = 2;
    MEM8(0x5822C9) = 1;
    eax = MEM32(ebp + 8);
    MEM32(0x5822FC) = eax;
    goto loc_000EAEFF;

loc_000EAEE9: ;
    eax = 0x45372F;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAEFFu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_000EAEFF: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAF10
 * Original: 0x000EAF10 - 0x000EAF54 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAF10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EAF10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EAF39; /* je: equal / zero */

loc_000EAF1F: ;
    MEM16(0x5822CA) = 3;
    MEM8(0x5822C9) = 1;
    eax = MEM32(ebp + 8);
    MEM32(0x5822FC) = eax;
    goto loc_000EAF4F;

loc_000EAF39: ;
    eax = 0x45372F;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAF4Fu); RECOMP_ABI_CALL(0x000FD8E0u, sub_000FD8E0); /* call 0x000FD8E0 */

loc_000EAF4F: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAF60
 * Original: 0x000EAF60 - 0x000EAFA4 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAF60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EAF60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(0x5822C8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EAF97; /* je: equal / zero */

loc_000EAF78: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x5822CA);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000EAF97; /* jne: not equal / not zero */

loc_000EAF89: ;
    eax = MEM32(0x5822FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1) = LO8(eax);

loc_000EAF97: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EAFB0
 * Original: 0x000EAFB0 - 0x000EB0C2 (274 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EAFB0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EAFB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAFC6u); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_000EAFC6: ;
    ecx = eax;
    ecx = ecx + 0x4F0;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EAFE6u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000EAFE6: ;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = 0x1E;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -8) = eax;
    MEM16(0x5822CA) = 0;
    MEM8(0x5822C9) = 1;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(0x5822CC) = LO16(eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x28);
    MEM32(0x5822D4) = ecx;
    ecx = MEM32(eax + 0x2C);
    MEM32(0x5822D8) = ecx;
    eax = MEM32(eax + 0x30);
    MEM32(0x5822DC) = eax;
    eax = MEM32(ebp + -4);
    eax = eax + 0x34;
    ecx = 0x5822C8;
    edx = ecx;
    edx = edx + 0x18;
    ecx = ecx + 0x24;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB053u); RECOMP_ABI_CALL(0x001D6390u, sub_001D6390); /* call 0x001D6390 */

loc_000EB053: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_000EB067; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB063: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_000EB067; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB065: ;
    goto loc_000EB079;

loc_000EB067: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    MEMF(0x5822F8) = xmm0.f[0]; /* movss */
    goto loc_000EB089;

loc_000EB079: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DE4C)); /* movss */
    MEMF(0x5822F8) = xmm0.f[0]; /* movss */

loc_000EB089: ;
    eax = MEM32(ebp + 0x10);
    MEM32(0x5822FC) = eax;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -8); /* cvtsi2ss */
    MEMF(0x5822D0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB0ABu); RECOMP_ABI_CALL(0x000EDB20u, sub_000EDB20); /* call 0x000EDB20 */

loc_000EB0AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DDDC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB0BDu); RECOMP_ABI_CALL(0x000F53B0u, sub_000F53B0); /* call 0x000F53B0 */

loc_000EB0BD: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EB0D0
 * Original: 0x000EB0D0 - 0x000EB100 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB0D0(void)
{
    uint32_t ebp = g_ebp;

loc_000EB0D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    eax = ZX16(MEM16(ebp + 0xC));
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB0FBu); RECOMP_ABI_CALL(0x000EAFB0u, sub_000EAFB0); /* call 0x000EAFB0 */

loc_000EB0FB: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EB100
 * Original: 0x000EB100 - 0x000EB1F5 (245 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB100(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EB100: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x1C);
    SET_LO16(eax, MEM16(ebp + 0x18));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM16(0x5822CA) = 0;
    MEM16(0x5822CC) = 0xFFFF;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    MEM32(0x5822D4) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(0x5822D8) = ecx;
    eax = MEM32(eax + 8);
    MEM32(0x5822DC) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    MEM32(0x5822E0) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(0x5822E4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(0x5822E8) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    MEM32(0x5822EC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(0x5822F0) = ecx;
    eax = MEM32(eax + 8);
    MEM32(0x5822F4) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_000EB192; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB18E: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_000EB192; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB190: ;
    goto loc_000EB1A1;

loc_000EB192: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(0x5822F8) = xmm0.f[0]; /* movss */
    goto loc_000EB1B1;

loc_000EB1A1: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DE4C)); /* movss */
    MEMF(0x5822F8) = xmm0.f[0]; /* movss */

loc_000EB1B1: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    ecx = 0x1E;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(0x5822D0) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x1C);
    MEM32(0x5822FC) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB1DEu); RECOMP_ABI_CALL(0x000EDB20u, sub_000EDB20); /* call 0x000EDB20 */

loc_000EB1DE: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DDDC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB1F0u); RECOMP_ABI_CALL(0x000F53B0u, sub_000F53B0); /* call 0x000F53B0 */

loc_000EB1F0: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EB200
 * Original: 0x000EB200 - 0x000EB251 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB200(void)
{
    uint32_t ebp = g_ebp;

loc_000EB200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0x18));
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = ZX16(MEM16(ebp + 0x18));
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB24Cu); RECOMP_ABI_CALL(0x000EB100u, sub_000EB100); /* call 0x000EB100 */

loc_000EB24C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EB260
 * Original: 0x000EB260 - 0x000EB26B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB260(void)
{
    uint32_t ebp = g_ebp;

loc_000EB260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO16(eax, MEM16(0x5822CC));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EB270
 * Original: 0x000EB270 - 0x000EB27A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB270(void)
{
    uint32_t ebp = g_ebp;

loc_000EB270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x5822FC);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EB280
 * Original: 0x000EB280 - 0x000EB29D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB280(void)
{
    uint32_t ebp = g_ebp;

loc_000EB280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(0x5822D0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EB2A0
 * Original: 0x000EB2A0 - 0x000EBD71 (2769 bytes, 631 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EB2A0(void)
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
loc_000EB2A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1A8));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x1A8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(0x59CA3C);
    ecx = MEM32(eax);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -8) = ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB2CDu); RECOMP_ABI_CALL(0x00140B40u, sub_00140B40); /* call 0x00140B40 */

loc_000EB2CD: ;
    MEMF(ebp + -124) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -124)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB2E8u); RECOMP_ABI_CALL(0x001409B0u, sub_001409B0); /* call 0x001409B0 */

loc_000EB2E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EB2F8; /* je: equal / zero */

loc_000EB2EC: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20;
    MEM32(eax) = ecx;
    goto loc_000EB302;

loc_000EB2F8: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFDFu;
    MEM32(eax) = ecx;

loc_000EB302: ;
    eax = (uint32_t)(int32_t)SMEM16(0x5822CA);
    MEM32(ebp + -144) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(3)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((!_cf && eax != 0)) goto loc_000EB7D9; /* ja: above (unsigned >) */

loc_000EB318: ;
    eax = MEM32(ebp + -144);
    eax = MEM32(eax * 4 + 0x49F940);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x000EB327u) goto loc_000EB327;
    if (_jt == 0x000EB5EBu) goto loc_000EB5EB;
    if (_jt == 0x000EB747u) goto loc_000EB747;
    if (_jt == 0x000EB778u) goto loc_000EB778;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000EB327: ;
    _fa = (uint32_t)(MEM32(0x5822FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5822FC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EB368; /* je: equal / zero */

loc_000EB330: ;
    eax = MEM32(0x5822FC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB345u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_000EB345: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000EB353; /* jne: not equal / not zero */

loc_000EB34E: ;
    goto loc_000EB7D9;

loc_000EB353: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax + 0x50);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(eax + 0x54);
    MEM32(ebp + -8) = ecx;
    eax = MEM32(eax + 0x58);
    MEM32(ebp + -4) = eax;

loc_000EB368: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_000EB379; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB375: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_000EB379; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB377: ;
    goto loc_000EB390;

loc_000EB379: ;
    xmm0 = XMM_SCALAR(MEMF(0x5822D0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -16); /* divss */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */
    goto loc_000EB39D;

loc_000EB390: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -148) = xmm0.f[0]; /* movss */
    goto loc_000EB39D;

loc_000EB39D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -148)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5822F8)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x5822E0);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(0x5822E4);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(0x5822E8);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x5822EC);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(0x5822F0);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(0x5822F4);
    MEM32(eax + 0x38) = ecx;
    _fa = (uint32_t)(MEM32(0x5822FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5822FC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EB5BE; /* je: equal / zero */

loc_000EB406: ;
    eax = MEM32(ebp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB426u); RECOMP_ABI_CALL(0x000EBD80u, sub_000EBD80); /* call 0x000EBD80 */

loc_000EB426: ;
    MEMF(ebp + -132) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x24)) >> 32) & 1);
    eax = eax + 0x24;
    ecx = 0x5822C8;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB454u); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_000EB454: ;
    MEMF(ebp + -128) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -128)); /* movss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EB476; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB46E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */

loc_000EB476: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    eax = xmm0.u[0]; /* movd */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(0x5822D4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5822D8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x5822DC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x2C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    MEM8(eax + 0x4C) = 1;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB520u); RECOMP_ABI_CALL(0x000EBE20u, sub_000EBE20); /* call 0x000EBE20 */

loc_000EB520: ;
    MEMF(ebp + -140) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -140)); /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB542u); RECOMP_ABI_CALL(0x000EBE60u, sub_000EBE60); /* call 0x000EBE60 */

loc_000EB542: ;
    MEMF(ebp + -136) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -28); /* mulss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -36); /* addss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -52); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -48); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 1;
    MEM32(eax) = ecx;
    goto loc_000EB5E6;

loc_000EB5BE: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x5822D4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x5822D8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x5822DC);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 1;
    MEM32(eax) = ecx;

loc_000EB5E6: ;
    goto loc_000EB7D9;

loc_000EB5EB: ;
    ecx = MEM32(0x582300);
    eax = esp;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x616E7472;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB601u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000EB601: ;
    MEM32(ebp + -56) = eax;
    ecx = MEM32(ebp + -56);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x74)) >> 32) & 1);
    ecx = ecx + 0x74;
    edx = (uint32_t)(int32_t)SMEM16(0x582304);
    eax = esp;
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB624u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000EB624: ;
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -60);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    MEM32(ebp + -68) = eax;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + -68); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x5822D0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x43D814)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(ebp + -62) = LO16(eax);
    eax = MEM32(ebp + -60);
    MEM32(ebp + -152) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -62);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000EB672; /* jge: greater or equal (signed >=) */

loc_000EB668: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -156) = eax;
    goto loc_000EB6A4;

loc_000EB672: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -62);
    ecx = MEM32(ebp + -68);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000EB68E; /* jle: less or equal (signed <=) */

loc_000EB680: ;
    eax = MEM32(ebp + -68);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -160) = eax;
    goto loc_000EB698;

loc_000EB68E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -62);
    MEM32(ebp + -160) = eax;

loc_000EB698: ;
    eax = MEM32(ebp + -160);
    MEM32(ebp + -156) = eax;

loc_000EB6A4: ;
    edx = MEM32(ebp + -152);
    eax = MEM32(ebp + -156);
    SET_LO16(ecx, LO16(eax));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax = ebp + -120;
    MEM32(esp) = 0;
    MEM32(esp + 4) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB6D3u); RECOMP_ABI_CALL(0x001F8D70u, sub_001F8D70); /* call 0x001F8D70 */

loc_000EB6D3: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -116);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -108);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -92);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(ebp + -88);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(ebp + -84);
    MEM32(eax + 0x38) = ecx;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43D8F0)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -80);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -76);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -72);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 1;
    MEM32(eax) = ecx;
    goto loc_000EB7D9;

loc_000EB747: ;
    eax = MEM32(0x5822FC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB75Cu); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_000EB75C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EB776; /* je: equal / zero */

loc_000EB761: ;
    ecx = MEM32(0x5822FC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB776u); RECOMP_ABI_CALL(0x000F13F0u, sub_000F13F0); /* call 0x000F13F0 */

loc_000EB776: ;
    goto loc_000EB7D9;

loc_000EB778: ;
    eax = MEM32(0x5822FC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB78Du); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_000EB78D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EB7D7; /* je: equal / zero */

loc_000EB792: ;
    _fa = (uint32_t)(MEM8(0x5822C9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5822C9), 0 (8-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EB7BE; /* je: equal / zero */

loc_000EB79B: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(0x5822FC);
    MEM32(esp) = edx;
    ecx = SX16(LO16(ecx));
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB7BEu); RECOMP_ABI_CALL(0x000EC0C0u, sub_000EC0C0); /* call 0x000EC0C0 */

loc_000EB7BE: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB7D7u); RECOMP_ABI_CALL(0x000EC300u, sub_000EC300); /* call 0x000EC300 */

loc_000EB7D7: ;
    goto loc_000EB7D9;

loc_000EB7D9: ;
    xmm1 = XMM_SCALAR(MEMF(0x5822D0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EB807; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB7FA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -164) = xmm0.f[0]; /* movss */
    goto loc_000EB828;

loc_000EB807: ;
    xmm0 = XMM_SCALAR(MEMF(0x5822D0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -164) = xmm0.f[0]; /* movss */

loc_000EB828: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -164)); /* movss */
    MEMF(0x5822D0) = xmm0.f[0]; /* movss */
    MEM8(0x5822C9) = 0;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBD69; /* je: equal / zero */

loc_000EB850: ;
    ecx = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x24)) >> 32) & 1);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB868u); RECOMP_ABI_CALL(0x000EBEA0u, sub_000EBEA0); /* call 0x000EBEA0 */

loc_000EB868: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EB874: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB886u); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EB886: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EB892: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB8AB: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000EB8C0: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB8D2u); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EB8D2: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EB8DE: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB8F7: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_000EB90C: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB91Eu); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EB91E: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EB92A: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB943: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_000EB958: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB96Au); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EB96A: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EB976: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB98F: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_000EB9A4: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EB9B6u); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EB9B6: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EB9C2: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EB9DB: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_000EB9F0: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBA02u); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EBA02: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EBA0E: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EBA27: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x18); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x18)) */

loc_000EBA3C: ;
    eax = MEM32(ebp + 0x10);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3C)) >> 32) & 1);
    eax = eax + 0x3C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBA4Au); RECOMP_ABI_CALL(0x000EBF50u, sub_000EBF50); /* call 0x000EBF50 */

loc_000EBA4A: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EBA56: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBA68u); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EBA68: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EBA74: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EBA88: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000EBA99: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBAABu); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EBAAB: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EBAB3: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DECC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EBAC8: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x20); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_000EBAD9: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBAEBu); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EBAEB: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBB18; /* je: equal / zero */

loc_000EBAF3: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EBB18; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EBB03: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DE88)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x48); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_000EBD69; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x48)) */

loc_000EBB18: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -256) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -248) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -240) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -232) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -224) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -216) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -208) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -200) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -192) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -184) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm7.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm6.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm4.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -176) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -256)); /* movsd */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    edx = 0x8BEAC0;
    ecx = 0x4921C8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -248)); /* movsd */
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -240)); /* movsd */
    MEMD(esp + 0x18) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -232)); /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -224)); /* movsd */
    MEMD(esp + 0x28) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -216)); /* movsd */
    MEMD(esp + 0x30) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -208)); /* movsd */
    MEMD(esp + 0x38) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -200)); /* movsd */
    MEMD(esp + 0x40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -192)); /* movsd */
    MEMD(esp + 0x48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -184)); /* movsd */
    MEMD(esp + 0x50) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    MEMD(esp + 0x58) = xmm7.d[0]; /* movsd */
    MEMD(esp + 0x60) = xmm6.d[0]; /* movsd */
    MEMD(esp + 0x68) = xmm5.d[0]; /* movsd */
    MEMD(esp + 0x70) = xmm4.d[0]; /* movsd */
    MEMD(esp + 0x78) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x80) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x88) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x90) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x98) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBD39u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000EBD39: ;
    ecx = eax;
    eax = 0x467574;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x172;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBD5Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EBD5D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBD69u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EBD69: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1A8)) >> 32) & 1);
    esp = esp + 0x1A8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_000EBD80
 * Original: 0x000EBD80 - 0x000EBDC7 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBD80(void)
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

loc_000EBD80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1.d[0] = (double)xmm1.f[0]; /* cvtss2sd */
    eax = esp;
    MEMD(eax + 8) = xmm1.d[0]; /* movsd */
    MEMD(eax) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBDB2u); RECOMP_ABI_CALL(0x003D71B0u, sub_003D71B0); /* call 0x003D71B0 */

loc_000EBDB2: ;
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
 * sub_000EBDD0
 * Original: 0x000EBDD0 - 0x000EBE1D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBDD0(void)
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

loc_000EBDD0: ;
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
 * sub_000EBE20
 * Original: 0x000EBE20 - 0x000EBE54 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBE20(void)
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

loc_000EBE20: ;
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
    PUSH32(esp, 0x000EBE3Fu); RECOMP_ABI_CALL(0x003DA050u, sub_003DA050); /* call 0x003DA050 */

loc_000EBE3F: ;
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
 * sub_000EBE60
 * Original: 0x000EBE60 - 0x000EBE94 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBE60(void)
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

loc_000EBE60: ;
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
    PUSH32(esp, 0x000EBE7Fu); RECOMP_ABI_CALL(0x003D7580u, sub_003D7580); /* call 0x003D7580 */

loc_000EBE7F: ;
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
 * sub_000EBEA0
 * Original: 0x000EBEA0 - 0x000EBF22 (130 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBEA0(void)
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

loc_000EBEA0: ;
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
    PUSH32(esp, 0x000EBEB7u); RECOMP_ABI_CALL(0x000EBFD0u, sub_000EBFD0); /* call 0x000EBFD0 */

loc_000EBEB7: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBF15; /* je: equal / zero */

loc_000EBEC4: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBECFu); RECOMP_ABI_CALL(0x000EBFD0u, sub_000EBFD0); /* call 0x000EBFD0 */

loc_000EBECF: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBF15; /* je: equal / zero */

loc_000EBEDC: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBEEEu); RECOMP_ABI_CALL(0x000EBDD0u, sub_000EBDD0); /* call 0x000EBDD0 */

loc_000EBEEE: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBF09u); RECOMP_ABI_CALL(0x000EC010u, sub_000EC010); /* call 0x000EC010 */

loc_000EBF09: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_000EBF15: ;
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
 * sub_000EBF30
 * Original: 0x000EBF30 - 0x000EBF4F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBF30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBF30: ;
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
 * sub_000EBF50
 * Original: 0x000EBF50 - 0x000EBFC1 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBF50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EBF50: ;
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
    PUSH32(esp, 0x000EBF6Au); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EBF6A: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBFB4; /* je: equal / zero */

loc_000EBF77: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBF89u); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EBF89: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EBFB4; /* je: equal / zero */

loc_000EBF96: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EBFA8u); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EBFA8: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_000EBFB4: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EBFD0
 * Original: 0x000EBFD0 - 0x000EC009 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EBFD0(void)
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

loc_000EBFD0: ;
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
    PUSH32(esp, 0x000EBFE4u); RECOMP_ABI_CALL(0x000EC080u, sub_000EC080); /* call 0x000EC080 */

loc_000EBFE4: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC004u); RECOMP_ABI_CALL(0x000EC010u, sub_000EC010); /* call 0x000EC010 */

loc_000EC004: ;
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
 * sub_000EC010
 * Original: 0x000EC010 - 0x000EC07E (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC010(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EC010: ;
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
    PUSH32(esp, 0x000EC03Eu); RECOMP_ABI_CALL(0x000EBF30u, sub_000EBF30); /* call 0x000EBF30 */

loc_000EC03E: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EC071; /* je: equal / zero */

loc_000EC04B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43DF60)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    MEM8(ebp + -5) = LO8(eax);

loc_000EC071: ;
    SET_LO8(eax, MEM8(ebp + -5));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EC080
 * Original: 0x000EC080 - 0x000EC0B9 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC080(void)
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

loc_000EC080: ;
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
 * sub_000EC0C0
 * Original: 0x000EC0C0 - 0x000EC2A8 (488 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC0C0(void)
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

loc_000EC0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC0DCu); RECOMP_ABI_CALL(0x000F4950u, sub_000F4950); /* call 0x000F4950 */

loc_000EC0DC: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC119; /* jne: not equal / not zero */

loc_000EC0E5: ;
    ecx = 0x472C8D;
    eax = 0x45903C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x17;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC10Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EC10D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC119u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EC119: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D8F0)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D928)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D804)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC15Fu); RECOMP_ABI_CALL(0x000EC2B0u, sub_000EC2B0); /* call 0x000EC2B0 */

loc_000EC15F: ;
    MEMF(ebp + -24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x43D560)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC18Au); RECOMP_ABI_CALL(0x000EC2B0u, sub_000EC2B0); /* call 0x000EC2B0 */

loc_000EC18A: ;
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DBE0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D640)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC1BAu); RECOMP_ABI_CALL(0x000EC2B0u, sub_000EC2B0); /* call 0x000EC2B0 */

loc_000EC1BA: ;
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x49F950)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC206; /* je: equal / zero */

loc_000EC1F7: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DA2C)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    goto loc_000EC241;

loc_000EC206: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC20Bu); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_000EC20B: ;
    eax = ZX8(LO8(eax));
    xmm0 = XMM_SCALAR(MEMF(0x49F954)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x49F958)); /* movss */
    MEMF(ebp + -32) = xmm1.f[0]; /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000EC237; /* jne: not equal / not zero */

loc_000EC22D: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */

loc_000EC237: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */

loc_000EC241: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC25Au); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_000EC25A: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x20) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC288; /* jne: not equal / not zero */

loc_000EC268: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC280u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000EC280: ;
    eax = MEM32(eax + 0x38);
    MEM32(ebp + -36) = eax;
    goto loc_000EC28E;

loc_000EC288: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -36) = eax;

loc_000EC28E: ;
    ecx = MEM32(ebp + -36);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x28) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x24) = ecx;
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_000EC2B0
 * Original: 0x000EC2B0 - 0x000EC2F9 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC2B0(void)
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

loc_000EC2B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC2C5u); RECOMP_ABI_CALL(0x001D4CA0u, sub_001D4CA0); /* call 0x001D4CA0 */

loc_000EC2C5: ;
    ecx = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    eax = esp;
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC2E4u); RECOMP_ABI_CALL(0x001D4EE0u, sub_001D4EE0); /* call 0x001D4EE0 */

loc_000EC2E4: ;
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
 * sub_000EC300
 * Original: 0x000EC300 - 0x000ECABA (1978 bytes, 477 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EC300(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EC300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x128;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC322; /* jne: not equal / not zero */

loc_000EC31B: ;
    eax = 0; /* xor self */
    MEM32(ebp + -20) = eax;
    goto loc_000EC33B;

loc_000EC322: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x28);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC338u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_000EC338: ;
    MEM32(ebp + -20) = eax;

loc_000EC33B: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC361; /* je: equal / zero */

loc_000EC347: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x58);
    MEM32(eax + 0xC) = ecx;
    goto loc_000EC378;

loc_000EC361: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0xC) = ecx;

loc_000EC378: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC3A0u); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_000EC3A0: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC3B8u); RECOMP_ABI_CALL(0x000F4B10u, sub_000F4B10); /* call 0x000F4B10 */

loc_000EC3B8: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x59CA58);
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x59CA58);
    edx = MEM32(ecx);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x40) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x44) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EC41B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000EC411: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    goto loc_000EC428;

loc_000EC41B: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */

loc_000EC428: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    MEM8(eax + 0x4C) = 3;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x49F950); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_000EC47C; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(0x49F950)) */

loc_000EC458: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_000EC47C; /* jp: parity (xmm0.f[0] vs MEMF(0x49F950)) */

loc_000EC45A: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    MEM8(eax + 0x4E) = 3;

loc_000EC47C: ;
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EC4B7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC4AD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    goto loc_000EC4CC;

loc_000EC4B7: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */

loc_000EC4CC: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x2C); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_000EC5CA; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(eax + 0x2C)) */

loc_000EC4E9: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_000EC5CA; /* jp: parity (xmm0.f[0] vs MEMF(eax + 0x2C)) */

loc_000EC4EF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC4F4u); RECOMP_ABI_CALL(0x001409B0u, sub_001409B0); /* call 0x001409B0 */

loc_000EC4F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EC5CA; /* jne: not equal / not zero */

loc_000EC4FC: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC50Au); RECOMP_ABI_CALL(0x000ECAC0u, sub_000ECAC0); /* call 0x000ECAC0 */

loc_000EC50A: ;
    MEM8(ebp + -13) = LO8(eax);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + -13));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC52Du); RECOMP_ABI_CALL(0x000ECB40u, sub_000ECB40); /* call 0x000ECB40 */

loc_000EC52D: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x24) = ecx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC55C; /* je: equal / zero */

loc_000EC53F: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC554u); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000EC554: ;
    eax = MEM32(eax + 0x34);
    MEM32(ebp + -12) = eax;
    goto loc_000EC562;

loc_000EC55C: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -12) = eax;

loc_000EC562: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC58C; /* je: equal / zero */

loc_000EC56D: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC58C; /* je: equal / zero */

loc_000EC573: ;
    xmm0 = XMM_SCALAR(MEMF(0x49F950)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x28) = ecx;

loc_000EC58C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC591u); RECOMP_ABI_CALL(0x0012B7D0u, sub_0012B7D0); /* call 0x0012B7D0 */

loc_000EC591: ;
    eax = ZX8(LO8(eax));
    xmm0 = XMM_SCALAR(MEMF(0x49F954)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x49F958)); /* movss */
    MEMF(ebp + -36) = xmm1.f[0]; /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000EC5BD; /* jne: not equal / not zero */

loc_000EC5B3: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */

loc_000EC5BD: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */

loc_000EC5CA: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECAB2; /* je: equal / zero */

loc_000EC5DB: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC5F3u); RECOMP_ABI_CALL(0x000ECC30u, sub_000ECC30); /* call 0x000ECC30 */

loc_000EC5F3: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC5FF: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC611u); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000EC611: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC61D: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC636: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000EC64B: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC65Du); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000EC65D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC669: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC682: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_000EC697: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC6A9u); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000EC6A9: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC6B5: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC6CE: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_000EC6E3: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC6F5u); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000EC6F5: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC701: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC71A: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_000EC72F: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC741u); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000EC741: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC74D: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC766: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_000EC77B: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC78Du); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000EC78D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC799: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC7B2: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x18); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x18)) */

loc_000EC7C7: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x3C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC7D5u); RECOMP_ABI_CALL(0x000ECCE0u, sub_000ECCE0); /* call 0x000ECCE0 */

loc_000EC7D5: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC7E1: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC7F3u); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000EC7F3: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC7FF: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC813: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000EC824: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC836u); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000EC836: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC83E: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DECC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC853: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x20); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_000EC864: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EC876u); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000EC876: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EC8A3; /* je: equal / zero */

loc_000EC87E: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000EC8A3; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EC88E: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DE88)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x48); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_000ECAB2; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x48)) */

loc_000EC8A3: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm7.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm6.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm4.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    edx = 0x8BEAC0;
    ecx = 0x4921C8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    MEMD(esp + 0x18) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    MEMD(esp + 0x28) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    MEMD(esp + 0x30) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    MEMD(esp + 0x38) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(esp + 0x40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(esp + 0x48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    MEMD(esp + 0x50) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    MEMD(esp + 0x58) = xmm7.d[0]; /* movsd */
    MEMD(esp + 0x60) = xmm6.d[0]; /* movsd */
    MEMD(esp + 0x68) = xmm5.d[0]; /* movsd */
    MEMD(esp + 0x70) = xmm4.d[0]; /* movsd */
    MEMD(esp + 0x78) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x80) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x88) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x90) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x98) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECA82u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000ECA82: ;
    ecx = eax;
    eax = 0x45903C;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x9E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECAA6u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000ECAA6: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECAB2u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000ECAB2: ;
    esp = esp + 0x128;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECAC0
 * Original: 0x000ECAC0 - 0x000ECB32 (114 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECAC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ECAC0: ;
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
    PUSH32(esp, 0x000ECADEu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000ECADE: ;
    eax = MEM32(eax + 0x20);
    MEM32(ebp + -24) = eax;
    MEM8(ebp + -25) = 0;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECAFCu); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_000ECAFC: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECB07u); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_000ECB07: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECB2A; /* je: equal / zero */

loc_000ECB0F: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ECB28; /* je: equal / zero */

loc_000ECB17: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ECB28; /* jne: not equal / not zero */

loc_000ECB22: ;
    MEM8(ebp + -25) = 1;
    goto loc_000ECB2A;

loc_000ECB28: ;
    goto loc_000ECAFC;

loc_000ECB2A: ;
    SET_LO8(eax, MEM8(ebp + -25));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECB40
 * Original: 0x000ECB40 - 0x000ECC28 (232 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECB40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000ECB40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x38)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(ebp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECB75; /* je: equal / zero */

loc_000ECB58: ;
    ecx = MEM32(0x8BFACC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECB6Du); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000ECB6D: ;
    eax = MEM32(eax + 0x20);
    MEM32(ebp + -36) = eax;
    goto loc_000ECB7F;

loc_000ECB75: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -36) = eax;
    goto loc_000ECB7F;

loc_000ECB7F: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = 0xFFFFFFFFu;
    eax = MEM32(0x8BFACC);
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECBA0u); RECOMP_ABI_CALL(0x001E1910u, sub_001E1910); /* call 0x001E1910 */

loc_000ECBA0: ;
    eax = ebp + -16;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECBABu); RECOMP_ABI_CALL(0x001E19A0u, sub_001E19A0); /* call 0x001E19A0 */

loc_000ECBAB: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECC06; /* je: equal / zero */

loc_000ECBB3: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECC04; /* je: equal / zero */

loc_000ECBBB: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(MEM32(eax + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x34), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECC04; /* je: equal / zero */

loc_000ECBC4: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECBD5; /* je: equal / zero */

loc_000ECBCA: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000ECC04; /* jne: not equal / not zero */

loc_000ECBD5: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000ECBE3; /* jne: not equal / not zero */

loc_000ECBDB: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = eax;
    goto loc_000ECC02;

loc_000ECBE3: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0xFFFF;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_000ECC00; /* jle: less or equal (signed <=) */

loc_000ECBF8: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = eax;
    goto loc_000ECC06;

loc_000ECC00: ;
    goto loc_000ECC02;

loc_000ECC02: ;
    goto loc_000ECC04;

loc_000ECC04: ;
    goto loc_000ECBA0;

loc_000ECC06: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000ECC14; /* jne: not equal / not zero */

loc_000ECC0C: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -40) = eax;
    goto loc_000ECC1A;

loc_000ECC14: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -40) = eax;

loc_000ECC1A: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECC30
 * Original: 0x000ECC30 - 0x000ECCB2 (130 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECC30(void)
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

loc_000ECC30: ;
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
    PUSH32(esp, 0x000ECC47u); RECOMP_ABI_CALL(0x000ECD60u, sub_000ECD60); /* call 0x000ECD60 */

loc_000ECC47: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECCA5; /* je: equal / zero */

loc_000ECC54: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECC5Fu); RECOMP_ABI_CALL(0x000ECD60u, sub_000ECD60); /* call 0x000ECD60 */

loc_000ECC5F: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECCA5; /* je: equal / zero */

loc_000ECC6C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECC7Eu); RECOMP_ABI_CALL(0x000ECE10u, sub_000ECE10); /* call 0x000ECE10 */

loc_000ECC7E: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECC99u); RECOMP_ABI_CALL(0x000ECDA0u, sub_000ECDA0); /* call 0x000ECDA0 */

loc_000ECC99: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_000ECCA5: ;
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
 * sub_000ECCC0
 * Original: 0x000ECCC0 - 0x000ECCDF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECCC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ECCC0: ;
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
 * sub_000ECCE0
 * Original: 0x000ECCE0 - 0x000ECD51 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECCE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ECCE0: ;
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
    PUSH32(esp, 0x000ECCFAu); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000ECCFA: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECD44; /* je: equal / zero */

loc_000ECD07: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECD19u); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000ECD19: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECD44; /* je: equal / zero */

loc_000ECD26: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECD38u); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000ECD38: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_000ECD44: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECD60
 * Original: 0x000ECD60 - 0x000ECD99 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECD60(void)
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

loc_000ECD60: ;
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
    PUSH32(esp, 0x000ECD74u); RECOMP_ABI_CALL(0x000ECE60u, sub_000ECE60); /* call 0x000ECE60 */

loc_000ECD74: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECD94u); RECOMP_ABI_CALL(0x000ECDA0u, sub_000ECDA0); /* call 0x000ECDA0 */

loc_000ECD94: ;
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
 * sub_000ECDA0
 * Original: 0x000ECDA0 - 0x000ECE0E (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECDA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000ECDA0: ;
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
    PUSH32(esp, 0x000ECDCEu); RECOMP_ABI_CALL(0x000ECCC0u, sub_000ECCC0); /* call 0x000ECCC0 */

loc_000ECDCE: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000ECE01; /* je: equal / zero */

loc_000ECDDB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43DF60)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    MEM8(ebp + -5) = LO8(eax);

loc_000ECE01: ;
    SET_LO8(eax, MEM8(ebp + -5));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECE10
 * Original: 0x000ECE10 - 0x000ECE5D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECE10(void)
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

loc_000ECE10: ;
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
 * sub_000ECE60
 * Original: 0x000ECE60 - 0x000ECE99 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECE60(void)
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

loc_000ECE60: ;
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
 * sub_000ECEA0
 * Original: 0x000ECEA0 - 0x000ECED8 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECEA0(void)
{
    uint32_t ebp = g_ebp;

loc_000ECEA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = 0x45BD9C;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECEC6u); RECOMP_ABI_CALL(0x00328600u, sub_00328600); /* call 0x00328600 */

loc_000ECEC6: ;
    MEM32(0xCDD880) = eax;
    eax = MEM32(0xCDD880);
    MEM8(eax) = 0;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECEE0
 * Original: 0x000ECEE0 - 0x000ECEE5 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECEE0(void)
{
    uint32_t ebp = g_ebp;

loc_000ECEE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECEF0
 * Original: 0x000ECEF0 - 0x000ECF56 (102 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECEF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ECEF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM16(ebp + -2) = 0;

loc_000ECEFC: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000ECF49; /* jge: greater or equal (signed >=) */

loc_000ECF05: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECF11u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ECF11: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(eax + 8) = 0;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0xC4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    MEM8(eax + 0xC0) = 0;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000ECEFC;

loc_000ECF49: ;
    eax = MEM32(0xCDD880);
    MEM8(eax) = 0;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECF60
 * Original: 0x000ECF60 - 0x000ECFCA (106 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECF60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ECF60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ECF7C; /* jl: less (signed <) */

loc_000ECF73: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ECFB0; /* jl: less (signed <) */

loc_000ECF7C: ;
    ecx = 0x442680;
    eax = 0x450BC6;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xB3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECFA4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000ECFA4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ECFB0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000ECFB0: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = 0xA07DEC;
    eax = eax + 8;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF8);
    eax = eax + ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECFD0
 * Original: 0x000ECFD0 - 0x000ECFEF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECFD0(void)
{
    uint32_t ebp = g_ebp;

loc_000ECFD0: ;
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
    PUSH32(esp, 0x000ECFE6u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ECFE6: ;
    MEM8(eax + 0x51) = 1;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ECFF0
 * Original: 0x000ECFF0 - 0x000ED00F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ECFF0(void)
{
    uint32_t ebp = g_ebp;

loc_000ECFF0: ;
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
    PUSH32(esp, 0x000ED006u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ED006: ;
    MEM8(eax + 0x52) = 1;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED010
 * Original: 0x000ED010 - 0x000ED02E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED010(void)
{
    uint32_t ebp = g_ebp;

loc_000ED010: ;
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
    PUSH32(esp, 0x000ED026u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ED026: ;
    SET_LO8(eax, MEM8(eax + 0x51));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED030
 * Original: 0x000ED030 - 0x000ED04E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED030(void)
{
    uint32_t ebp = g_ebp;

loc_000ED030: ;
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
    PUSH32(esp, 0x000ED046u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ED046: ;
    SET_LO8(eax, MEM8(eax + 0x52));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED050
 * Original: 0x000ED050 - 0x000ED0DF (143 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED050(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000ED050: ;
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
    PUSH32(esp, 0x000ED066u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ED066: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    ecx = 0xF1C70;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED094; /* jne: not equal / not zero */

loc_000ED077: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_000ED092; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_000ED087: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_000ED092; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_000ED089: ;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x56) = 0;

loc_000ED092: ;
    goto loc_000ED0D3;

loc_000ED094: ;
    eax = MEM32(ebp + -4);
    ecx = 0xF32E0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED0AD; /* jne: not equal / not zero */

loc_000ED0A2: ;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x56) = 1;
    goto loc_000ED0D1;

loc_000ED0AD: ;
    eax = MEM32(ebp + -4);
    ecx = 0xEB2A0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED0C6; /* jne: not equal / not zero */

loc_000ED0BB: ;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x56) = 2;
    goto loc_000ED0CF;

loc_000ED0C6: ;
    eax = MEM32(ebp + -4);
    MEM16(eax + 0x56) = 3;

loc_000ED0CF: ;
    goto loc_000ED0D1;

loc_000ED0D1: ;
    goto loc_000ED0D3;

loc_000ED0D3: ;
    eax = MEM32(ebp + -4);
    SET_LO16(eax, MEM16(eax + 0x56));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED0E0
 * Original: 0x000ED0E0 - 0x000ED24C (364 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED0E0(void)
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
loc_000ED0E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM16(ebp + -2) = 0;
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ED243; /* je: equal / zero */

loc_000ED104: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED117u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_000ED117: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ED225; /* je: equal / zero */

loc_000ED12A: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xCC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED143u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_000ED143: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x64);
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ED21B; /* je: equal / zero */

loc_000ED160: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x756E6974;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED175u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000ED175: ;
    ecx = eax;
    ecx = ecx + 0x17C;
    ecx = ecx + 0x168;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A0);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x11C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED1A1u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000ED1A1: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -13) = LO8(eax);
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ED1CD; /* je: equal / zero */

loc_000ED1C7: ;
    MEM16(ebp + -2) = 1;

loc_000ED1CD: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ED211; /* je: equal / zero */

loc_000ED1D3: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x253);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000ED1EC; /* jne: not equal / not zero */

loc_000ED1E2: ;
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = 1;
    goto loc_000ED20F;

loc_000ED1EC: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x253);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000ED205; /* jne: not equal / not zero */

loc_000ED1FB: ;
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = 3;
    goto loc_000ED20D;

loc_000ED205: ;
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = 2;

loc_000ED20D: ;
    goto loc_000ED20F;

loc_000ED20F: ;
    goto loc_000ED219;

loc_000ED211: ;
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = 2;

loc_000ED219: ;
    goto loc_000ED223;

loc_000ED21B: ;
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = 2;

loc_000ED223: ;
    goto loc_000ED225;

loc_000ED225: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000ED23B; /* je: equal / zero */

loc_000ED230: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000ED241; /* jne: not equal / not zero */

loc_000ED23B: ;
    MEM16(ebp + -2) = 1;

loc_000ED241: ;
    goto loc_000ED243;

loc_000ED243: ;
    SET_LO16(eax, MEM16(ebp + -2));
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED250
 * Original: 0x000ED250 - 0x000ED2C5 (117 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED250(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ED26C; /* jl: less (signed <) */

loc_000ED263: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ED2A0; /* jl: less (signed <) */

loc_000ED26C: ;
    ecx = 0x48C3A1;
    eax = 0x450BC6;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x180;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED294u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000ED294: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED2A0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000ED2A0: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA07DF0);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED2C0; /* je: equal / zero */

loc_000ED2AF: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(0xA07DF0) = LO16(eax);
    MEM8(0xA07DF2) = 1;

loc_000ED2C0: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED2D0
 * Original: 0x000ED2D0 - 0x000ED423 (339 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED2D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED2D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    ecx = 0x47559A;
    eax = 0x48C279;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED2EEu); RECOMP_ABI_CALL(0x003A51D0u, sub_003A51D0); /* call 0x003A51D0 */

loc_000ED2EE: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED41E; /* je: equal / zero */

loc_000ED2FB: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED309u); RECOMP_ABI_CALL(0x000F4950u, sub_000F4950); /* call 0x000F4950 */

loc_000ED309: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = 0x483D90;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x10) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED356u); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_000ED356: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = 0x483D90;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x10) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED3A1u); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_000ED3A1: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = 0x483D90;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x10) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x18) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED3ECu); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_000ED3EC: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = 0x459060;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED413u); RECOMP_ABI_CALL(0x003A5120u, sub_003A5120); /* call 0x003A5120 */

loc_000ED413: ;
    eax = MEM32(ebp + -4);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED41Eu); RECOMP_ABI_CALL(0x00418D80u, sub_00418D80); /* call 0x00418D80 */

loc_000ED41E: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED430
 * Original: 0x000ED430 - 0x000ED60F (479 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED430(void)
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

loc_000ED430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x70;
    ecx = 0x47559A;
    eax = 0x47DDB5;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED450u); RECOMP_ABI_CALL(0x003A51D0u, sub_003A51D0); /* call 0x003A51D0 */

loc_000ED450: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED608; /* je: equal / zero */

loc_000ED45D: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED46Bu); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ED46B: ;
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + -80);
    eax = eax + 0xC;
    MEM32(ebp + -84) = eax;
    edi = MEM32(ebp + -12);
    edx = ebp + -24;
    ecx = ebp + -24;
    ecx = ecx + 4;
    eax = ebp + -24;
    eax = eax + 8;
    esi = 0x483D90;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED4A7u); RECOMP_ABI_CALL(0x0041B680u, sub_0041B680); /* call 0x0041B680 */

loc_000ED4A7: ;
    edi = MEM32(ebp + -12);
    edx = ebp + -36;
    ecx = ebp + -36;
    ecx = ecx + 4;
    eax = ebp + -36;
    eax = eax + 8;
    esi = 0x483D90;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED4D7u); RECOMP_ABI_CALL(0x0041B680u, sub_0041B680); /* call 0x0041B680 */

loc_000ED4D7: ;
    edi = MEM32(ebp + -12);
    edx = ebp + -60;
    ecx = ebp + -60;
    ecx = ecx + 4;
    eax = ebp + -60;
    eax = eax + 8;
    esi = 0x483D90;
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED507u); RECOMP_ABI_CALL(0x0041B680u, sub_0041B680); /* call 0x0041B680 */

loc_000ED507: ;
    edx = MEM32(ebp + -12);
    ecx = 0x459060;
    eax = ebp + -76;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED523u); RECOMP_ABI_CALL(0x0041B680u, sub_0041B680); /* call 0x0041B680 */

loc_000ED523: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED52Eu); RECOMP_ABI_CALL(0x00418D80u, sub_00418D80); /* call 0x00418D80 */

loc_000ED52E: ;
    edx = MEM32(ebp + -84);
    ecx = ebp + -24;
    eax = ebp + -36;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED547u); RECOMP_ABI_CALL(0x000F2050u, sub_000F2050); /* call 0x000F2050 */

loc_000ED547: ;
    ecx = ebp + -36;
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED559u); RECOMP_ABI_CALL(0x000F4B10u, sub_000F4B10); /* call 0x000F4B10 */

loc_000ED559: ;
    ecx = ebp + -60;
    eax = ebp + -48;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED56Bu); RECOMP_ABI_CALL(0x001DB4E0u, sub_001DB4E0); /* call 0x001DB4E0 */

loc_000ED56B: ;
    MEMF(ebp + -92) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -92)); /* movss */
    eax = MEM32(ebp + -84);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    edx = ebp + -60;
    ecx = ebp + -48;
    eax = ebp + -72;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED594u); RECOMP_ABI_CALL(0x000ED610u, sub_000ED610); /* call 0x000ED610 */

loc_000ED594: ;
    ecx = ebp + -72;
    eax = ebp + -36;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED5A6u); RECOMP_ABI_CALL(0x000ED6D0u, sub_000ED6D0); /* call 0x000ED6D0 */

loc_000ED5A6: ;
    MEMF(ebp + -88) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000ED5D3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000ED5B6: ;
    eax = MEM32(ebp + -84);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    eax = MEM32(ebp + -84);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_000ED5D3: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    eax = MEM32(ebp + -84);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    eax = 0xF20A0;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED600u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000ED600: ;
    eax = MEM32(ebp + -80);
    MEM16(eax) = 2;

loc_000ED608: ;
    esp = esp + 0x70;
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
 * sub_000ED610
 * Original: 0x000ED610 - 0x000ED6C4 (180 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED610(void)
{
    uint32_t ebp = g_ebp;

loc_000ED610: ;
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
 * sub_000ED6D0
 * Original: 0x000ED6D0 - 0x000ED71D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED6D0(void)
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

loc_000ED6D0: ;
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
 * sub_000ED720
 * Original: 0x000ED720 - 0x000ED780 (96 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED720(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    SET_LO8(eax, MEM8(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED73Cu); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ED73C: ;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 0xC4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    MEM8(eax + 0xC0) = 0;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED77B; /* je: equal / zero */

loc_000ED76B: ;
    eax = MEM32(ebp + -4);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_000ED77B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED780
 * Original: 0x000ED780 - 0x000ED809 (137 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED780(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 8));
    SET_LO8(ecx, MEM8(ebp + 8));
    eax = MEM32(0xCDD880);
    MEM8(eax) = LO8(ecx);
    MEM16(ebp + -2) = 0;

loc_000ED799: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000ED804; /* jge: greater or equal (signed >=) */

loc_000ED7A2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED7AEu); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ED7AE: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED7D6; /* je: equal / zero */

loc_000ED7B4: ;
    eax = 0xEB2A0;
    ecx = 0; /* xor self */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED7D4u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000ED7D4: ;
    goto loc_000ED7EA;

loc_000ED7D6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED7EAu); RECOMP_ABI_CALL(0x000ED810u, sub_000ED810); /* call 0x000ED810 */

loc_000ED7EA: ;
    eax = ZX8(MEM8(ebp + 8));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED7F6u); RECOMP_ABI_CALL(0x000EAD90u, sub_000EAD90); /* call 0x000EAD90 */

loc_000ED7F6: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000ED799;

loc_000ED804: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED810
 * Original: 0x000ED810 - 0x000ED930 (288 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED810(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED829u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ED829: ;
    MEM32(ebp + -12) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED838u); RECOMP_ABI_CALL(0x00142B00u, sub_00142B00); /* call 0x00142B00 */

loc_000ED838: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -8);
    eax = ebp + -2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED84Du); RECOMP_ABI_CALL(0x000ED0E0u, sub_000ED0E0); /* call 0x000ED0E0 */

loc_000ED84D: ;
    MEM16(ebp + -4) = LO16(eax);
    eax = ZX8(MEM8(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED86D; /* jne: not equal / not zero */

loc_000ED85A: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x54);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ED92B; /* je: equal / zero */

loc_000ED86D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED8CB; /* jne: not equal / not zero */

loc_000ED876: ;
    eax = ZX8(MEM8(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED88D; /* jne: not equal / not zero */

loc_000ED87F: ;
    eax = MEM32(ebp + -12);
    ecx = 0xF1C70;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED8C9; /* jne: not equal / not zero */

loc_000ED88D: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED89Bu); RECOMP_ABI_CALL(0x000F2C90u, sub_000F2C90); /* call 0x000F2C90 */

loc_000ED89B: ;
    SET_LO16(edx, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    ecx = 0xF32E0;
    edx = SX16(LO16(edx));
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED8C9u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000ED8C9: ;
    goto loc_000ED920;

loc_000ED8CB: ;
    eax = ZX8(MEM8(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED8E2; /* jne: not equal / not zero */

loc_000ED8D4: ;
    eax = MEM32(ebp + -12);
    ecx = 0xF32E0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ED91E; /* jne: not equal / not zero */

loc_000ED8E2: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED8F0u); RECOMP_ABI_CALL(0x000F1240u, sub_000F1240); /* call 0x000F1240 */

loc_000ED8F0: ;
    SET_LO16(edx, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    ecx = 0xF1C70;
    edx = SX16(LO16(edx));
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED91Eu); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000ED91E: ;
    goto loc_000ED920;

loc_000ED920: ;
    SET_LO16(ecx, MEM16(ebp + -2));
    eax = MEM32(ebp + -12);
    MEM16(eax + 0x54) = LO16(ecx);

loc_000ED92B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED930
 * Original: 0x000ED930 - 0x000ED9CF (159 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED930(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ED930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED93Bu); RECOMP_ABI_CALL(0x0010AFD0u, sub_0010AFD0); /* call 0x0010AFD0 */

loc_000ED93B: ;
    edx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    ecx = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM16(0xA07DF0) = LO16(eax);
    MEM8(0xA07DF2) = 0;
    MEM16(ebp + -2) = 0;

loc_000ED95E: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000ED9CA; /* jge: greater or equal (signed >=) */

loc_000ED967: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED973u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000ED973: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x50) = 0;
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x4C) = 0;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED9B0u); RECOMP_ABI_CALL(0x000ED9D0u, sub_000ED9D0); /* call 0x000ED9D0 */

loc_000ED9B0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ED9BCu); RECOMP_ABI_CALL(0x000EDA80u, sub_000EDA80); /* call 0x000EDA80 */

loc_000ED9BC: ;
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000ED95E;

loc_000ED9CA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000ED9D0
 * Original: 0x000ED9D0 - 0x000EDA75 (165 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ED9D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_000ED9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    SET_LO8(eax, MEM8(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(0xA07DF0);
    MEM32(ebp + -4) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    if (_cf) goto loc_000EDA05; /* jb: below (unsigned <) */

loc_000ED9EF: ;
    goto loc_000ED9F1;

loc_000ED9F1: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    if ((eax == 0)) goto loc_000EDA28; /* je: equal / zero */

loc_000ED9F9: ;
    goto loc_000ED9FB;

loc_000ED9FB: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    if ((eax == 0)) goto loc_000EDA4B; /* je: equal / zero */

loc_000EDA03: ;
    goto loc_000EDA6E;

loc_000EDA05: ;
    SET_LO16(ecx, MEM16(ebp + 8));
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX8(LO8(eax));
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDA26u); RECOMP_ABI_CALL(0x000EE440u, sub_000EE440); /* call 0x000EE440 */

loc_000EDA26: ;
    goto loc_000EDA70;

loc_000EDA28: ;
    SET_LO16(ecx, MEM16(ebp + 8));
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX8(LO8(eax));
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDA49u); RECOMP_ABI_CALL(0x000EE5C0u, sub_000EE5C0); /* call 0x000EE5C0 */

loc_000EDA49: ;
    goto loc_000EDA70;

loc_000EDA4B: ;
    SET_LO16(ecx, MEM16(ebp + 8));
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX8(LO8(eax));
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + 0x10));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDA6Cu); RECOMP_ABI_CALL(0x000EE640u, sub_000EE640); /* call 0x000EE640 */

loc_000EDA6C: ;
    goto loc_000EDA70;

loc_000EDA6E: ;
    goto loc_000EDA70;

loc_000EDA70: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EDA80
 * Original: 0x000EDA80 - 0x000EDB16 (150 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDA80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EDA80: ;
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
    PUSH32(esp, 0x000EDA96u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000EDA96: ;
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -2) = 0;

loc_000EDA9F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EDB11; /* jge: greater or equal (signed >=) */

loc_000EDAA8: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    eax = 0x58231C;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = eax + ecx;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + -8);
    eax = eax + 0xC8;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    eax = eax + 0xC8;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    eax = eax + 0xC8;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000EDA9F;

loc_000EDB11: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EDB20
 * Original: 0x000EDB20 - 0x000EDDCA (682 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDB20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000EDB20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0xB4;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(0xA07DEC) = xmm0.f[0]; /* movss */
    MEM16(ebp + -6) = 0;

loc_000EDB42: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000EDDC1; /* jge: greater or equal (signed >=) */

loc_000EDB4F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDB5Bu); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_000EDB5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDDAE; /* je: equal / zero */

loc_000EDB64: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDB70u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000EDB70: ;
    MEM32(ebp + -152) = eax;
    eax = MEM32(ebp + -152);
    MEM8(eax + 0x51) = 0;
    eax = MEM32(ebp + -152);
    MEM8(eax + 0x52) = 0;
    eax = ebp + -44;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDB9Du); RECOMP_ABI_CALL(0x000EDDD0u, sub_000EDDD0); /* call 0x000EDDD0 */

loc_000EDB9D: ;
    MEM8(ebp + -7) = LO8(eax);
    SET_LO16(ecx, MEM16(ebp + -6));
    SET_LO8(eax, MEM8(0xA07DF2));
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    eax = ZX8(LO8(eax));
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(ebp + -7));
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDBC3u); RECOMP_ABI_CALL(0x000ED9D0u, sub_000ED9D0); /* call 0x000ED9D0 */

loc_000EDBC3: ;
    MEM8(0xA07DF2) = 0;
    eax = ebp + -148;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDBEAu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000EDBEA: ;
    eax = MEM32(ebp + -152);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDC55; /* je: equal / zero */

loc_000EDBF6: ;
    eax = MEM32(ebp + -152);
    ecx = 0xEB2A0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EDC2D; /* jne: not equal / not zero */

loc_000EDC07: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -6);
    MEM32(ebp + -156) = eax;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDC1Du); RECOMP_ABI_CALL(0x00148F80u, sub_00148F80); /* call 0x00148F80 */

loc_000EDC1D: ;
    SET_LO16(ecx, LO16(eax));
    eax = MEM32(ebp + -156);
    ecx = SX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EDC55; /* jne: not equal / not zero */

loc_000EDC2D: ;
    eax = MEM32(ebp + -152);
    eax = MEM32(eax + 8);
    esi = MEM32(ebp + -152);
    esi = esi + 0xC;
    edx = ebp + -44;
    ecx = ebp + -148;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x000EDC55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EDC55: ;
    eax = MEM32(ebp + -148);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDD83; /* je: equal / zero */

loc_000EDC67: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_000EDC81; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_000EDC7A: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_000EDC81; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_000EDC7C: ;
    goto loc_000EDD5E;

loc_000EDC81: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(0x43D9DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EDCCE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000EDC95: ;
    eax = MEM32(ebp + -152);
    ecx = 0xF1C70;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EDCCE; /* jne: not equal / not zero */

loc_000EDCA6: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -64) = xmm0.f[0]; /* movss */
    MEM8(ebp + -72) = 3;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    MEM8(ebp + -70) = 3;
    goto loc_000EDD0E;

loc_000EDCCE: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    eax = MEM32(ebp + -152);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EDCEE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000EDCDF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    MEMF(ebp + -160) = xmm0.f[0]; /* movss */
    goto loc_000EDD01;

loc_000EDCEE: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(ebp + -160) = xmm0.f[0]; /* movss */

loc_000EDD01: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -160)); /* movss */
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */

loc_000EDD0E: ;
    eax = MEM32(ebp + -152);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 8); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EDD33; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EDD26: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -164) = xmm0.f[0]; /* movss */
    goto loc_000EDD4B;

loc_000EDD33: ;
    eax = MEM32(ebp + -152);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(ebp + -164) = xmm0.f[0]; /* movss */

loc_000EDD4B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -164)); /* movss */
    eax = MEM32(ebp + -152);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_000EDD5E: ;
    ecx = MEM32(ebp + -152);
    ecx = ecx + 0x58;
    eax = ebp + -148;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDD81u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_000EDD81: ;
    goto loc_000EDD92;

loc_000EDD83: ;
    eax = MEM32(ebp + -152);
    ecx = MEM32(eax + 0x58);
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 0x58) = ecx;

loc_000EDD92: ;
    SET_LO16(ecx, MEM16(ebp + -6));
    eax = MEM32(ebp + -152);
    eax = eax + 0x58;
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDDAEu); RECOMP_ABI_CALL(0x000F4D00u, sub_000F4D00); /* call 0x000F4D00 */

loc_000EDDAE: ;
    goto loc_000EDDB0;

loc_000EDDB0: ;
    SET_LO16(eax, MEM16(ebp + -6));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -6) = LO16(eax);
    goto loc_000EDB42;

loc_000EDDC1: ;
    esp = esp + 0xB4;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EDDD0
 * Original: 0x000EDDD0 - 0x000EE3A3 (1491 bytes, 394 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EDDD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EDDD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    MEM8(ebp + -1) = 0;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDDEDu); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000EDDED: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDE0Du); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000EDE0D: ;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + 0xC);
    MEM16(eax) = LO16(ecx);
    xmm0 = XMM_SCALAR(MEMF(0xA07DEC)); /* movss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(0x8BFACC);
    MEM32(ebp + -36) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDE3Bu); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_000EDE3B: ;
    ecx = MEM32(ebp + -36);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDE4Au); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000EDE4A: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE0FD; /* je: equal / zero */

loc_000EDE5B: ;
    eax = MEM32(ebp + -8);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDE67u); RECOMP_ABI_CALL(0x0016B140u, sub_0016B140); /* call 0x0016B140 */

loc_000EDE67: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE0FD; /* je: equal / zero */

loc_000EDE73: ;
    eax = MEM32(ebp + -8);
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDE7Fu); RECOMP_ABI_CALL(0x0016B1B0u, sub_0016B1B0); /* call 0x0016B1B0 */

loc_000EDE7F: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM8(0xA081D4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA081D4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDEA2; /* je: equal / zero */

loc_000EDE8B: ;
    eax = MEM32(ebp + -20);
    eax = ZX8(MEM8(eax + 0x14));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);
    goto loc_000EDF00;

loc_000EDEA2: ;
    eax = MEM32(ebp + -20);
    SET_LO8(eax, MEM8(eax + 0x14));
    MEM8(ebp + -21) = LO8(eax);
    ecx = ZX8(MEM8(ebp + -21));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -37) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_000EDEE7; /* jle: less or equal (signed <=) */

loc_000EDEB9: ;
    eax = ZX8(MEM8(ebp + -21));
    ecx = 0x1E;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM8(ebp + -37) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000EDEE7; /* jne: not equal / not zero */

loc_000EDECF: ;
    eax = ZX8(MEM8(ebp + -21));
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = ZX8(MEM8(ecx + 0xA081D5));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -37) = LO8(eax);

loc_000EDEE7: ;
    SET_LO8(eax, MEM8(ebp + -37));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);
    SET_LO8(ecx, MEM8(ebp + -21));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM8(eax + 0xA081D5) = LO8(ecx);

loc_000EDF00: ;
    eax = MEM32(ebp + -12);
    ecx = 0xF1C70;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE0F8; /* je: equal / zero */

loc_000EDF12: ;
    eax = MEM32(ebp + -12);
    ecx = 0xF32E0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE0F8; /* je: equal / zero */

loc_000EDF24: ;
    eax = MEM32(ebp + -20);
    eax = ZX8(MEM8(eax + 0x1F));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EDF4F; /* jne: not equal / not zero */

loc_000EDF30: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(eax + 0xC0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC0), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -12);
    MEM8(eax + 0xC0) = LO8(ecx);

loc_000EDF4F: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(eax + 0xC0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC0), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE0F6; /* je: equal / zero */

loc_000EDF5F: ;
    MEM32(ebp + -16) = 0;
    eax = MEM32(ebp + -20);
    eax = ZX8(MEM8(eax + 0x17));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDF7D; /* je: equal / zero */

loc_000EDF72: ;
    eax = MEM32(ebp + -16);
    eax = eax | 0x10;
    MEM32(ebp + -16) = eax;
    goto loc_000EDF86;

loc_000EDF7D: ;
    eax = MEM32(ebp + -16);
    eax = eax & 0xFFFFFFEFu;
    MEM32(ebp + -16) = eax;

loc_000EDF86: ;
    eax = MEM32(ebp + -20);
    eax = ZX8(MEM8(eax + 0x16));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EDF9D; /* je: equal / zero */

loc_000EDF92: ;
    eax = MEM32(ebp + -16);
    eax = eax | 0x20;
    MEM32(ebp + -16) = eax;
    goto loc_000EDFA6;

loc_000EDF9D: ;
    eax = MEM32(ebp + -16);
    eax = eax & 0xFFFFFFDFu;
    MEM32(ebp + -16) = eax;

loc_000EDFA6: ;
    ecx = MEM32(ebp + -20);
    eax = ZX8(MEM8(ecx + 0x18));
    eax = eax - 2;
    SET_LO8(eax, (CMP_GE((uint32_t)eax + (uint32_t)2, (uint32_t)2)) ? 1 : 0); /* setge */
    eax = ZX8(LO8(eax));
    ecx = ZX8(MEM8(ecx + 0x19));
    ecx = ecx - 2;
    SET_LO8(ecx, (CMP_GE((uint32_t)ecx + (uint32_t)2, (uint32_t)2)) ? 1 : 0); /* setge */
    ecx = ZX8(LO8(ecx));
    eax = eax - ecx;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DE34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    edx = MEM32(ebp + -16);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    eax = esp;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EDFFDu); RECOMP_ABI_CALL(0x000EE890u, sub_000EE890); /* call 0x000EE890 */

loc_000EDFFD: ;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0xA07DEC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D5D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0xA07DEC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x22);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp + -12);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0xA07DEC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD90)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x20);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp + -12);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0xA07DEC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43DF20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x1C); /* addss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 2) = 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE0EAu); RECOMP_ABI_CALL(0x000ECFF0u, sub_000ECFF0); /* call 0x000ECFF0 */

loc_000EE0EA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE0F6u); RECOMP_ABI_CALL(0x000ECFD0u, sub_000ECFD0); /* call 0x000ECFD0 */

loc_000EE0F6: ;
    goto loc_000EE0F8;

loc_000EE0F8: ;
    goto loc_000EE39B;

loc_000EE0FD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE102u); RECOMP_ABI_CALL(0x0016B120u, sub_0016B120); /* call 0x0016B120 */

loc_000EE102: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE399; /* je: equal / zero */

loc_000EE10B: ;
    MEM32(ebp + -28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE117u); RECOMP_ABI_CALL(0x0016B120u, sub_0016B120); /* call 0x0016B120 */

loc_000EE117: ;
    MEM32(ebp + -32) = eax;
    MEM32(esp) = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE126u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE126: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + -12);
    ecx = 0xF1C70;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE151; /* je: equal / zero */

loc_000EE145: ;
    eax = MEM32(ebp + -32);
    eax = ZX8(MEM8(eax + 0xD));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE169; /* jne: not equal / not zero */

loc_000EE151: ;
    MEM32(esp) = 0x1E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE15Du); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE15D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE397; /* je: equal / zero */

loc_000EE169: ;
    MEM32(esp) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE175u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE175: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE188; /* je: equal / zero */

loc_000EE17D: ;
    eax = MEM32(ebp + -28);
    eax = eax | 1;
    MEM32(ebp + -28) = eax;
    goto loc_000EE191;

loc_000EE188: ;
    eax = MEM32(ebp + -28);
    eax = eax & 0xFFFFFFFEu;
    MEM32(ebp + -28) = eax;

loc_000EE191: ;
    MEM32(esp) = 0x2E;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE19Du); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE19D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE1B0; /* je: equal / zero */

loc_000EE1A5: ;
    eax = MEM32(ebp + -28);
    eax = eax | 2;
    MEM32(ebp + -28) = eax;
    goto loc_000EE1B9;

loc_000EE1B0: ;
    eax = MEM32(ebp + -28);
    eax = eax & 0xFFFFFFFDu;
    MEM32(ebp + -28) = eax;

loc_000EE1B9: ;
    MEM32(esp) = 0x2D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE1C5u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE1C5: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE1D8; /* je: equal / zero */

loc_000EE1CD: ;
    eax = MEM32(ebp + -28);
    eax = eax | 4;
    MEM32(ebp + -28) = eax;
    goto loc_000EE1E1;

loc_000EE1D8: ;
    eax = MEM32(ebp + -28);
    eax = eax & 0xFFFFFFFBu;
    MEM32(ebp + -28) = eax;

loc_000EE1E1: ;
    MEM32(esp) = 0x2F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE1EDu); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE1ED: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE200; /* je: equal / zero */

loc_000EE1F5: ;
    eax = MEM32(ebp + -28);
    eax = eax | 8;
    MEM32(ebp + -28) = eax;
    goto loc_000EE209;

loc_000EE200: ;
    eax = MEM32(ebp + -28);
    eax = eax & 0xFFFFFFF7u;
    MEM32(ebp + -28) = eax;

loc_000EE209: ;
    MEM32(esp) = 0x22;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE215u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE215: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE228; /* je: equal / zero */

loc_000EE21D: ;
    eax = MEM32(ebp + -28);
    eax = eax | 0x10;
    MEM32(ebp + -28) = eax;
    goto loc_000EE231;

loc_000EE228: ;
    eax = MEM32(ebp + -28);
    eax = eax & 0xFFFFFFEFu;
    MEM32(ebp + -28) = eax;

loc_000EE231: ;
    MEM32(esp) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE23Du); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE23D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE250; /* je: equal / zero */

loc_000EE245: ;
    eax = MEM32(ebp + -28);
    eax = eax | 0x20;
    MEM32(ebp + -28) = eax;
    goto loc_000EE259;

loc_000EE250: ;
    eax = MEM32(ebp + -28);
    eax = eax & 0xFFFFFFDFu;
    MEM32(ebp + -28) = eax;

loc_000EE259: ;
    MEM32(esp) = 0x23;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE265u); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE265: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE278; /* je: equal / zero */

loc_000EE26D: ;
    eax = MEM32(ebp + -28);
    eax = eax | 0x40;
    MEM32(ebp + -28) = eax;
    goto loc_000EE281;

loc_000EE278: ;
    eax = MEM32(ebp + -28);
    eax = eax & 0xFFFFFFBFu;
    MEM32(ebp + -28) = eax;

loc_000EE281: ;
    MEM32(esp) = 0x31;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE28Du); RECOMP_ABI_CALL(0x0016B2F0u, sub_0016B2F0); /* call 0x0016B2F0 */

loc_000EE28D: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE2A2; /* je: equal / zero */

loc_000EE295: ;
    eax = MEM32(ebp + -28);
    eax = eax | 0x80;
    MEM32(ebp + -28) = eax;
    goto loc_000EE2AD;

loc_000EE2A2: ;
    eax = MEM32(ebp + -28);
    eax = eax & 0xFFFFFF7Fu;
    MEM32(ebp + -28) = eax;

loc_000EE2AD: ;
    SET_LO16(ecx, MEM16(ebp + 8));
    eax = MEM32(ebp + -28);
    edx = MEM32(ebp + -32);
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 8); /* cvtsi2ss */
    ecx = SX16(LO16(ecx));
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE2D1u); RECOMP_ABI_CALL(0x000EE890u, sub_000EE890); /* call 0x000EE890 */

loc_000EE2D1: ;
    eax = MEM32(ebp + -32);
    xmm0.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD00)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -32);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 4); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x43DD00)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xDC)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -32);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 8); /* cvtsi2ss */
    eax = MEM32(ebp + 0xC);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xE8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x1C); /* addss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 2) = 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE38Bu); RECOMP_ABI_CALL(0x000ECFF0u, sub_000ECFF0); /* call 0x000ECFF0 */

loc_000EE38B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE397u); RECOMP_ABI_CALL(0x000ECFD0u, sub_000ECFD0); /* call 0x000ECFD0 */

loc_000EE397: ;
    goto loc_000EE399;

loc_000EE399: ;
    goto loc_000EE39B;

loc_000EE39B: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EE3B0
 * Original: 0x000EE3B0 - 0x000EE3D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE3B0(void)
{
    uint32_t ebp = g_ebp;

loc_000EE3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE3BBu); RECOMP_ABI_CALL(0x000ED930u, sub_000ED930); /* call 0x000ED930 */

loc_000EE3BB: ;
    eax = MEM32(0xCDD880);
    eax = ZX8(MEM8(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE3CBu); RECOMP_ABI_CALL(0x000ED780u, sub_000ED780); /* call 0x000ED780 */

loc_000EE3CB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EE3D0
 * Original: 0x000EE3D0 - 0x000EE439 (105 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE3D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EE3D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    eax = ebp + -2;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE3F1u); RECOMP_ABI_CALL(0x000ED0E0u, sub_000ED0E0); /* call 0x000ED0E0 */

loc_000EE3F1: ;
    MEM16(ebp + -4) = LO16(eax);
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -4), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE417; /* jne: not equal / not zero */

loc_000EE3FC: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE415u); RECOMP_ABI_CALL(0x000F12A0u, sub_000F12A0); /* call 0x000F12A0 */

loc_000EE415: ;
    goto loc_000EE430;

loc_000EE417: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE430u); RECOMP_ABI_CALL(0x000F2D40u, sub_000F2D40); /* call 0x000F2D40 */

loc_000EE430: ;
    SET_LO16(eax, MEM16(ebp + -4));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EE440
 * Original: 0x000EE440 - 0x000EE5B2 (370 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE440(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EE440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(ebp + 0x10));
    SET_LO8(eax, MEM8(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE45Cu); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000EE45C: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE498; /* je: equal / zero */

loc_000EE465: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE473u); RECOMP_ABI_CALL(0x000F1240u, sub_000F1240); /* call 0x000F1240 */

loc_000EE473: ;
    eax = 0xF1C70;
    ecx = 0; /* xor self */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE493u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000EE493: ;
    goto loc_000EE5AD;

loc_000EE498: ;
    eax = MEM32(0x8BFACC);
    MEM32(ebp + -16) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE4ACu); RECOMP_ABI_CALL(0x00148E20u, sub_00148E20); /* call 0x00148E20 */

loc_000EE4AC: ;
    ecx = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE4BBu); RECOMP_ABI_CALL(0x001E10F0u, sub_001E10F0); /* call 0x001E10F0 */

loc_000EE4BB: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + -8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), 0xFFFFFFFFu (32-bit) */
    MEM8(ebp + -10) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000EE4DF; /* jne: not equal / not zero */

loc_000EE4CC: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xAA);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM8(ebp + -10) = LO8(eax);

loc_000EE4DF: ;
    SET_LO8(eax, MEM8(ebp + -10));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -9) = LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE50E; /* je: equal / zero */

loc_000EE4F0: ;
    eax = 0x49F970;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE50Eu); RECOMP_ABI_CALL(0x000EE6C0u, sub_000EE6C0); /* call 0x000EE6C0 */

loc_000EE50E: ;
    eax = MEM32(0xCDD880);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE5A9; /* jne: not equal / not zero */

loc_000EE51C: ;
    SET_LO16(eax, MEM16(ebp + 8));
    eax = SX16(eax); /* cwde */
    MEM32(esp) = eax;
    eax = ZX8(MEM8(ebp + 0xC));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE531u); RECOMP_ABI_CALL(0x000ED810u, sub_000ED810); /* call 0x000ED810 */

loc_000EE531: ;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -9), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE583; /* je: equal / zero */

loc_000EE537: ;
    eax = MEM32(ebp + -4);
    ecx = 0xEC300;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE581; /* je: equal / zero */

loc_000EE545: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE563u); RECOMP_ABI_CALL(0x000EC0C0u, sub_000EC0C0); /* call 0x000EC0C0 */

loc_000EE563: ;
    eax = 0xEC300;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE581u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000EE581: ;
    goto loc_000EE5A7;

loc_000EE583: ;
    eax = MEM32(ebp + -4);
    ecx = 0xEC300;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE5A5; /* jne: not equal / not zero */

loc_000EE591: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE5A5u); RECOMP_ABI_CALL(0x000ED810u, sub_000ED810); /* call 0x000ED810 */

loc_000EE5A5: ;
    goto loc_000EE5A7;

loc_000EE5A7: ;
    goto loc_000EE5A9;

loc_000EE5A9: ;
    goto loc_000EE5AB;

loc_000EE5AB: ;
    goto loc_000EE5AD;

loc_000EE5AD: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EE5C0
 * Original: 0x000EE5C0 - 0x000EE631 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE5C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EE5C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    SET_LO8(eax, MEM8(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE5DCu); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000EE5DC: ;
    MEM32(ebp + -4) = eax;
    eax = ZX8(MEM8(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EE5F6; /* jne: not equal / not zero */

loc_000EE5E8: ;
    eax = MEM32(ebp + -4);
    ecx = 0xEF840;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE62C; /* je: equal / zero */

loc_000EE5F6: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE60Cu); RECOMP_ABI_CALL(0x000EEC70u, sub_000EEC70); /* call 0x000EEC70 */

loc_000EE60C: ;
    eax = 0xEF840;
    ecx = 0; /* xor self */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE62Cu); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000EE62C: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EE640
 * Original: 0x000EE640 - 0x000EE6C0 (128 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE640(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EE640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO8(eax, MEM8(ebp + 0x10));
    SET_LO8(eax, MEM8(ebp + 0xC));
    SET_LO16(eax, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE695; /* je: equal / zero */

loc_000EE656: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE662u); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000EE662: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE673u); RECOMP_ABI_CALL(0x000F1240u, sub_000F1240); /* call 0x000F1240 */

loc_000EE673: ;
    eax = 0xF1C70;
    ecx = 0; /* xor self */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE693u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000EE693: ;
    goto loc_000EE6BB;

loc_000EE695: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EE6B9; /* je: equal / zero */

loc_000EE69B: ;
    eax = 0x49F976;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE6B9u); RECOMP_ABI_CALL(0x000EE6C0u, sub_000EE6C0); /* call 0x000EE6C0 */

loc_000EE6B9: ;
    goto loc_000EE6BB;

loc_000EE6BB: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EE6C0
 * Original: 0x000EE6C0 - 0x000EE88C (460 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE6C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_000EE6C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE6DEu); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000EE6DE: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -16) = eax;
    eax = (uint32_t)(int32_t)SMEM16(eax);
    eax++;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp + -16);
    SET_LO16(ecx, LO16(edx));
    MEM16(eax) = LO16(ecx);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    MEM16(ebp + -2) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    MEM32(ebp + -12) = eax;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    if ((!_cf && eax != 0)) goto loc_000EE823; /* ja: above (unsigned >) */

loc_000EE71C: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax * 4 + 0x49F95C);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x000EE728u) goto loc_000EE728;
    if (_jt == 0x000EE759u) goto loc_000EE759;
    if (_jt == 0x000EE7A8u) goto loc_000EE7A8;
    if (_jt == 0x000EE7F3u) goto loc_000EE7F3;
    if (_jt == 0x000EE7F5u) goto loc_000EE7F5;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000EE728: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE736u); RECOMP_ABI_CALL(0x000F2C90u, sub_000F2C90); /* call 0x000F2C90 */

loc_000EE736: ;
    eax = 0xF32E0;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE754u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000EE754: ;
    goto loc_000EE857;

loc_000EE759: ;
    ecx = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x58)) >> 32) & 1);
    eax = eax + 0x58;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE785u); RECOMP_ABI_CALL(0x000F8D80u, sub_000F8D80); /* call 0x000F8D80 */

loc_000EE785: ;
    eax = 0xF8DC0;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE7A3u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000EE7A3: ;
    goto loc_000EE857;

loc_000EE7A8: ;
    edx = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xC)) >> 32) & 1);
    edx = edx + 0xC;
    ecx = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x58)) >> 32) & 1);
    ecx = ecx + 0x58;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x58)) >> 32) & 1);
    eax = eax + 0x58;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE7D3u); RECOMP_ABI_CALL(0x000F2050u, sub_000F2050); /* call 0x000F2050 */

loc_000EE7D3: ;
    eax = 0xF20A0;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE7F1u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000EE7F1: ;
    goto loc_000EE857;

loc_000EE7F3: ;
    goto loc_000EE857;

loc_000EE7F5: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE803u); RECOMP_ABI_CALL(0x000F1240u, sub_000F1240); /* call 0x000F1240 */

loc_000EE803: ;
    eax = 0xF1C70;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE821u); RECOMP_ABI_CALL(0x000ED720u, sub_000ED720); /* call 0x000ED720 */

loc_000EE821: ;
    goto loc_000EE857;

loc_000EE823: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax = 0x450BC6;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x200;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE84Bu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EE84B: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE857u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EE857: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2);
    eax = MEM32(eax * 4 + 0x582308);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    ecx = 0x459064;
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE887u); RECOMP_ABI_CALL(0x001C3010u, sub_001C3010); /* call 0x001C3010 */

loc_000EE887: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EE890
 * Original: 0x000EE890 - 0x000EEC6C (988 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EE890(void)
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
loc_000EE890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x58)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(ebp + 8));
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE8AEu); RECOMP_ABI_CALL(0x000ECF60u, sub_000ECF60); /* call 0x000ECF60 */

loc_000EE8AE: ;
    MEM32(ebp + -8) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm1 = XMM_SCALAR_DOUBLE(MEMD(0x43E0A8)); /* movsd */
    MEMD(esp) = xmm1.d[0]; /* movsd */
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EE8D2u); RECOMP_ABI_CALL(0x003D8E90u, sub_003D8E90); /* call 0x003D8E90 */

loc_000EE8D2: ;
    MEMD(ebp + -40) = fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -40)); /* movsd */
    xmm0.f[0] = (float)xmm0.d[0]; /* cvtsd2ss */
    eax = MEM32(ebp + -8);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC4); /* mulss */
    MEMF(eax + 0xC4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(0x43DA88)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EE914; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0xC4)) */

loc_000EE905: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DA88)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    goto loc_000EE955;

loc_000EE914: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8B0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EE93B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EE92C: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D8B0)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    goto loc_000EE94B;

loc_000EE93B: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC4)); /* movss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */

loc_000EE94B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */

loc_000EE955: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    eax = MEM32(ebp + -8);
    MEMF(eax + 0xC4) = xmm0.f[0]; /* movss */
    MEM16(ebp + -2) = 0;

loc_000EE96B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_000EEC67; /* jge: greater or equal (signed >=) */

loc_000EE978: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    eax = 0x58231C;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    eax = eax + ecx;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 0xC8;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -2);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC);
    eax = eax + ecx;
    MEM32(ebp + -16) = eax;
    eax = ZX8(MEM8(0x582334));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000EE9BC; /* je: equal / zero */

loc_000EE9AA: ;
    eax = MEM32(ebp + -8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC4)); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    goto loc_000EE9CB;

loc_000EE9BC: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    goto loc_000EE9CB;

loc_000EE9CB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DB8C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0xA07DEC); /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EE9F7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EE9ED: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    goto loc_000EEA42;

loc_000EE9F7: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DB8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0xA07DEC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EEA23; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EEA14: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */
    goto loc_000EEA38;

loc_000EEA23: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DB8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0xA07DEC); /* mulss */
    MEMF(ebp + -60) = xmm0.f[0]; /* movss */

loc_000EEA38: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */

loc_000EEA42: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -61) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EEA85; /* je: equal / zero */

loc_000EEA68: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -61) = LO8(eax);

loc_000EEA85: ;
    SET_LO8(eax, MEM8(ebp + -61));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -25) = LO8(eax);
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -62) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EEABF; /* je: equal / zero */

loc_000EEAA1: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -62) = LO8(eax);

loc_000EEABF: ;
    SET_LO8(eax, MEM8(ebp + -62));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -26) = LO8(eax);
    eax = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -63) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000EEAF9; /* je: equal / zero */

loc_000EEADB: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -12);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 4);
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -63) = LO8(eax);

loc_000EEAF9: ;
    SET_LO8(eax, MEM8(ebp + -63));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM8(ebp + -27) = LO8(eax);
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = ZX8(MEM8(ebp + -25));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000EEB59; /* je: equal / zero */

loc_000EEB1F: ;
    _fa = (uint32_t)(MEM8(ebp + -26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -26), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000EEB59; /* jne: not equal / not zero */

loc_000EEB25: ;
    eax = MEM32(ebp + -12);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0xA07DEC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -20); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x43D7C0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    goto loc_000EEBB0;

loc_000EEB59: ;
    eax = ZX8(MEM8(ebp + -26));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000EEB98; /* je: equal / zero */

loc_000EEB62: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000EEB98; /* jne: not equal / not zero */

loc_000EEB68: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0xA07DEC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x43D7C0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    goto loc_000EEBAE;

loc_000EEB98: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEB9Du); RECOMP_ABI_CALL(0x0010AFD0u, sub_0010AFD0); /* call 0x0010AFD0 */

loc_000EEB9D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000EEBAC; /* je: equal / zero */

loc_000EEBA1: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_000EEBAC: ;
    goto loc_000EEBAE;

loc_000EEBAE: ;
    goto loc_000EEBB0;

loc_000EEBB0: ;
    xmm0 = XMM_SCALAR(MEMF(0xA07DEC)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 4); /* mulss */
    eax = MEM32(ebp + -16);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(ebp + -27)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -27), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000EEBDF; /* je: equal / zero */

loc_000EEBCE: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + -16);
    MEMF(eax) = xmm0.f[0]; /* movss */
    goto loc_000EEBF2;

loc_000EEBDF: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + -16);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000EEBF2: ;
    eax = MEM32(ebp + -16);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EEC15; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EEC06: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */
    goto loc_000EEC4A;

loc_000EEC15: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + -12);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EEC34; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_000EEC25: ;
    eax = MEM32(ebp + -12);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */
    goto loc_000EEC40;

loc_000EEC34: ;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */

loc_000EEC40: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -72)); /* movss */
    MEMF(ebp + -68) = xmm0.f[0]; /* movss */

loc_000EEC4A: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    eax = MEM32(ebp + -16);
    MEMF(eax) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(ebp + -2));
    SET_LO16(eax, LO16(eax) + 1);
    MEM16(ebp + -2) = LO16(eax);
    goto loc_000EE96B;

loc_000EEC67: ;
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
 * sub_000EEC70
 * Original: 0x000EEC70 - 0x000EED8C (284 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEC70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EEC70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(0xA081DC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA081DC), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EED1D; /* jne: not equal / not zero */

loc_000EEC8A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEC8Fu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_000EEC8F: ;
    _fa = (uint32_t)(MEM32(eax + 0x354)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x354), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EECFB; /* je: equal / zero */

loc_000EEC98: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEC9Du); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_000EEC9D: ;
    _fa = (uint32_t)(MEM32(eax + 0x358)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x358), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EECFB; /* je: equal / zero */

loc_000EECA6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EECABu); RECOMP_ABI_CALL(0x00332680u, sub_00332680); /* call 0x00332680 */

loc_000EECAB: ;
    eax = eax + 0x354;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EECCAu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000EECCA: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax);
    MEM32(0xA081E0) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(0xA081E4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(0xA081E8) = eax;
    eax = MEM32(ebp + -16);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(0xA081EC) = xmm0.f[0]; /* movss */
    goto loc_000EED1B;

loc_000EECFB: ;
    eax = 0xA081E0;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EED1Bu); RECOMP_ABI_CALL(0x000FA8F0u, sub_000FA8F0); /* call 0x000FA8F0 */

loc_000EED1B: ;
    goto loc_000EED1D;

loc_000EED1D: ;
    MEM8(0xA081DC) = 1;
    ecx = ebp + -12;
    eax = 0xA081E0;
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EED3Cu); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_000EED3C: ;
    edx = MEM32(ebp + 8);
    ecx = 0xA081E0;
    eax = ebp + -12;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EED58u); RECOMP_ABI_CALL(0x000F2050u, sub_000F2050); /* call 0x000F2050 */

loc_000EED58: ;
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EED67; /* jne: not equal / not zero */

loc_000EED5F: ;
    eax = MEM32(ebp + 8);
    MEM32(0xA081F4) = eax;

loc_000EED67: ;
    _fa = (uint32_t)(MEM16(0xA081F8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0xA081F8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EED87; /* je: equal / zero */

loc_000EED71: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    eax = MEM32(eax * 8 + 0x582394);
    ecx = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x000EED87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EED87: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EED90
 * Original: 0x000EED90 - 0x000EEE46 (182 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EED90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EED90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EEDD6; /* jne: not equal / not zero */

loc_000EEDA2: ;
    ecx = 0x480D96;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x78;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEDCAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EEDCA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEDD6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EEDD6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EEE10; /* jne: not equal / not zero */

loc_000EEDDC: ;
    ecx = 0x4617F4;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x79;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEE04u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EEE04: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEE10u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EEE10: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0xA081E0);
    MEM32(eax) = ecx;
    ecx = MEM32(0xA081E4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0xA081E8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(0xA081EC);
    MEM32(eax) = ecx;
    ecx = MEM32(0xA081F0);
    MEM32(eax + 4) = ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EEE50
 * Original: 0x000EEE50 - 0x000EEF04 (180 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEE50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EEE50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EEE96; /* jne: not equal / not zero */

loc_000EEE62: ;
    ecx = 0x480D96;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x81;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEE8Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EEE8A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEE96u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EEE96: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EEED0; /* jne: not equal / not zero */

loc_000EEE9C: ;
    ecx = 0x4617F4;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x82;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEEC4u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EEEC4: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEED0u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EEED0: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    MEM32(0xA081E0) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(0xA081E4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(0xA081E8) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    MEM32(0xA081EC) = ecx;
    eax = MEM32(eax + 4);
    MEM32(0xA081F0) = eax;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EEF10
 * Original: 0x000EEF10 - 0x000EEFD8 (200 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEF10(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EEF10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EEF53; /* jne: not equal / not zero */

loc_000EEF1F: ;
    ecx = 0x44D65E;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x8B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEF47u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EEF47: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEF53u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EEF53: ;
    eax = MEM32(0xA081F4);
    eax = eax + 0xC;
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EEF6Au); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_000EEF6A: ;
    eax = MEM32(0xA081F4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D688)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -16); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + -4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D688)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -12); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D688)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EEFE0
 * Original: 0x000EEFE0 - 0x000EF0C3 (227 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EEFE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EEFE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF026; /* jne: not equal / not zero */

loc_000EEFF2: ;
    ecx = 0x44D65E;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x94;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF01Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EF01A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF026u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EF026: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF060; /* jne: not equal / not zero */

loc_000EF02C: ;
    ecx = 0x4617F4;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x95;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF054u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EF054: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF060u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EF060: ;
    eax = MEM32(0xA081F4);
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF089; /* jne: not equal / not zero */

loc_000EF06E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF080u); RECOMP_ABI_CALL(0x000EEE50u, sub_000EEE50); /* call 0x000EEE50 */

loc_000EF080: ;
    MEM8(0xA081DC) = 1;
    goto loc_000EF0BE;

loc_000EF089: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + -4);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_000EF0BE: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF0D0
 * Original: 0x000EF0D0 - 0x000EF358 (648 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF0D0(void)
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

loc_000EF0D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x98;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF119; /* jne: not equal / not zero */

loc_000EF0E5: ;
    ecx = 0x44D65E;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xA9;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF10Du); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EF10D: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF119u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EF119: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF153; /* jne: not equal / not zero */

loc_000EF11F: ;
    ecx = 0x4617F4;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xAA;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF147u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EF147: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF153u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EF153: ;
    _fa = (uint32_t)(MEM32(0xA081F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA081F4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF17A; /* jne: not equal / not zero */

loc_000EF15C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF16Eu); RECOMP_ABI_CALL(0x000EEE50u, sub_000EEE50); /* call 0x000EEE50 */

loc_000EF16E: ;
    MEM8(0xA081DC) = 1;
    goto loc_000EF349;

loc_000EF17A: ;
    eax = MEM32(0xA081F4);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = ebp + -52;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF1C6u); RECOMP_ABI_CALL(0x001D1BA0u, sub_001D1BA0); /* call 0x001D1BA0 */

loc_000EF1C6: ;
    ecx = MEM32(0xA081F4);
    ecx = ecx + 0xC;
    eax = ebp + -52;
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF1E1u); RECOMP_ABI_CALL(0x001DC740u, sub_001DC740); /* call 0x001DC740 */

loc_000EF1E1: ;
    eax = MEM32(0xA081F4);
    eax = eax + 0xC;
    ecx = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF1F8u); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_000EF1F8: ;
    eax = MEM32(0xA081F4);
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + -108) = ecx;
    eax = MEM32(eax + 0x10);
    MEM32(ebp + -104) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -104); /* addss */
    MEMF(ebp + -104) = xmm0.f[0]; /* movss */
    ecx = ebp + -88;
    eax = ebp + -108;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF22Du); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_000EF22D: ;
    eax = ebp + -64;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF238u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_000EF238: ;
    MEMF(ebp + -132) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -132)); /* movss */
    eax = ebp + -88;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF251u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_000EF251: ;
    MEMF(ebp + -128) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -128)); /* movss */
    edx = ebp + -88;
    ecx = ebp + -64;
    eax = ebp + -76;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF272u); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_000EF272: ;
    eax = ebp + -76;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF27Du); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_000EF27D: ;
    MEMF(ebp + -124) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -124)); /* movss */
    ecx = ebp + -52;
    ecx = ecx + 4;
    ecx = ecx + 0x18;
    edx = ebp + -88;
    eax = ebp + -100;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF2A4u); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_000EF2A4: ;
    eax = ebp + -100;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF2AFu); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_000EF2AF: ;
    MEMF(ebp + -120) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -120)); /* movss */
    eax = ebp + -52;
    eax = eax + 4;
    eax = eax + 0x18;
    ecx = ebp + -88;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF2CFu); RECOMP_ABI_CALL(0x001DB4E0u, sub_001DB4E0); /* call 0x001DB4E0 */

loc_000EF2CF: ;
    MEMF(ebp + -116) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -116)); /* movss */
    MEMF(ebp + -136) = xmm0.f[0]; /* movss */
    ecx = ebp + -64;
    eax = ebp + -100;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF2F1u); RECOMP_ABI_CALL(0x000EF4B0u, sub_000EF4B0); /* call 0x000EF4B0 */

loc_000EF2F1: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -136)); /* movss */
    MEMF(ebp + -112) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -112)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = MEM32(0xA081F4);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(0x5823A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5823A0), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF347; /* je: equal / zero */

loc_000EF318: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(0xA081FC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(0xA08200) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(0xA08204) = xmm0.f[0]; /* movss */

loc_000EF347: ;
    goto loc_000EF349;

loc_000EF349: ;
    MEM8(0xA08208) = 1;
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
 * sub_000EF360
 * Original: 0x000EF360 - 0x000EF3EB (139 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF360(void)
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

loc_000EF360: ;
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
    PUSH32(esp, 0x000EF374u); RECOMP_ABI_CALL(0x000EFD70u, sub_000EFD70); /* call 0x000EFD70 */

loc_000EF374: ;
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
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) goto loc_000EF3D1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EF3AA: ;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -4); /* divss */
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF3CFu); RECOMP_ABI_CALL(0x000EFDA0u, sub_000EFDA0); /* call 0x000EFDA0 */

loc_000EF3CF: ;
    goto loc_000EF3D9;

loc_000EF3D1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */

loc_000EF3D9: ;
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
 * sub_000EF3F0
 * Original: 0x000EF3F0 - 0x000EF4A4 (180 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF3F0(void)
{
    uint32_t ebp = g_ebp;

loc_000EF3F0: ;
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
 * sub_000EF4B0
 * Original: 0x000EF4B0 - 0x000EF4FD (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF4B0(void)
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

loc_000EF4B0: ;
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
 * sub_000EF500
 * Original: 0x000EF500 - 0x000EF586 (134 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF500(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(0xA081F4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(0x5823A0) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF521; /* jne: not equal / not zero */

loc_000EF51F: ;
    goto loc_000EF581;

loc_000EF521: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF561; /* je: equal / zero */

loc_000EF527: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF53Au); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_000EF53A: ;
    MEM32(ebp + -8) = eax;
    edx = MEM32(ebp + -8);
    edx = edx + 4;
    edx = edx + 0x4C;
    ecx = MEM32(ebp + -4);
    eax = 0xA081FC;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF55Fu); RECOMP_ABI_CALL(0x000EF590u, sub_000EF590); /* call 0x000EF590 */

loc_000EF55F: ;
    goto loc_000EF57F;

loc_000EF561: ;
    eax = MEM32(0x59CA58);
    ecx = MEM32(eax);
    MEM32(0xA081FC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(0xA08200) = ecx;
    eax = MEM32(eax + 8);
    MEM32(0xA08204) = eax;

loc_000EF57F: ;
    goto loc_000EF581;

loc_000EF581: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF590
 * Original: 0x000EF590 - 0x000EF5E6 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF590(void)
{
    uint32_t ebp = g_ebp;

loc_000EF590: ;
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
 * sub_000EF5F0
 * Original: 0x000EF5F0 - 0x000EF652 (98 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF5F0(void)
{
    uint32_t ebp = g_ebp;

loc_000EF5F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(0xA0820C);
    eax = eax + 1;
    ecx = 5;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(0xA0820C) = edx;
    eax = MEM32(0xA0820C);
    xmm0.f[0] = (float)(int32_t)MEM32(eax * 4 + 0x49F990); /* cvtsi2ss */
    MEMF(0x5823A4) = xmm0.f[0]; /* movss */
    ecx = MEM32(0x5823E4);
    xmm0 = XMM_SCALAR(MEMF(0x5823A4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = 0x44AD5B;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF64Du); RECOMP_ABI_CALL(0x00193F30u, sub_00193F30); /* call 0x00193F30 */

loc_000EF64D: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF660
 * Original: 0x000EF660 - 0x000EF66D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF660(void)
{
    uint32_t ebp = g_ebp;

loc_000EF660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = (int32_t)MEMF(0x5823A4); /* cvttss2si */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF670
 * Original: 0x000EF670 - 0x000EF6AB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF670(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000EF670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 8));
    SET_LO8(eax, MEM8(0xA08210));
    MEM8(ebp + -1) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(0xA08210) = LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_000EF6A3; /* jne: not equal / not zero */

loc_000EF68D: ;
    _fa = (uint32_t)(MEM32(0xA081F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA081F4), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000EF6A3; /* je: equal / zero */

loc_000EF696: ;
    eax = MEM32(0xA081F4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_000EF6A3: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF6B0
 * Original: 0x000EF6B0 - 0x000EF6BA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF6B0(void)
{
    uint32_t ebp = g_ebp;

loc_000EF6B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x5823A0);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF6C0
 * Original: 0x000EF6C0 - 0x000EF6CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF6C0(void)
{
    uint32_t ebp = g_ebp;

loc_000EF6C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO16(eax, MEM16(0xA081F8));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF6D0
 * Original: 0x000EF6D0 - 0x000EF6DA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF6D0(void)
{
    uint32_t ebp = g_ebp;

loc_000EF6D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(0xA08211));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF6E0
 * Original: 0x000EF6E0 - 0x000EF701 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF6E0(void)
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

loc_000EF6E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    xmm0 = XMM_SCALAR(MEMF(eax * 4 + 0x49F9A4)); /* movss */
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
 * sub_000EF710
 * Original: 0x000EF710 - 0x000EF837 (295 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF710(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 8));
    _fa = (uint32_t)(MEM32(0xA081F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA081F4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF80B; /* je: equal / zero */

loc_000EF727: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF80B; /* je: equal / zero */

loc_000EF73A: ;
    _fa = (uint32_t)(MEM16(0xA081F8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0xA081F8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF7A6; /* je: equal / zero */

loc_000EF744: ;
    goto loc_000EF746;

loc_000EF746: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    _fa = (uint32_t)(MEM32(eax * 8 + 0x582390)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x582390), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF78B; /* jne: not equal / not zero */

loc_000EF757: ;
    ecx = 0x486F4D;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x12E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF77Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EF77F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF78Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EF78B: ;
    goto loc_000EF78D;

loc_000EF78D: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    eax = MEM32(eax * 8 + 0x582390);
    ecx = MEM32(0xA081F4);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x000EF7A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EF7A6: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF809; /* je: equal / zero */

loc_000EF7AD: ;
    goto loc_000EF7AF;

loc_000EF7AF: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    _fa = (uint32_t)(MEM32(eax * 8 + 0x582394)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x582394), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF7F1; /* jne: not equal / not zero */

loc_000EF7BD: ;
    ecx = 0x4980D7;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x134;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF7E5u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EF7E5: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF7F1u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EF7F1: ;
    goto loc_000EF7F3;

loc_000EF7F3: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax * 8 + 0x582394);
    ecx = MEM32(0xA081F4);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x000EF809u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EF809: ;
    goto loc_000EF80B;

loc_000EF80B: ;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(0xA081F8) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(eax * 4 + 0x5823A8);
    ecx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF832u); RECOMP_ABI_CALL(0x001C3010u, sub_001C3010); /* call 0x001C3010 */

loc_000EF832: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF840
 * Original: 0x000EF840 - 0x000EF9E7 (423 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF840(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x5823B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x5823B0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF895; /* jne: not equal / not zero */

loc_000EF861: ;
    ecx = 0x46D2B0;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x154;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF889u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EF889: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF895u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EF895: ;
    goto loc_000EF897;

loc_000EF897: ;
    _fa = (uint32_t)(MEM8(0xA08211)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA08211), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF985; /* je: equal / zero */

loc_000EF8A4: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF8CE; /* jne: not equal / not zero */

loc_000EF8AD: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF8C9u); RECOMP_ABI_CALL(0x000EB2A0u, sub_000EB2A0); /* call 0x000EB2A0 */

loc_000EF8C9: ;
    goto loc_000EF9E1;

loc_000EF8CE: ;
    eax = MEM32(0xA081F4);
    ecx = MEM32(0x58238C);
    edx = MEM32(ecx + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0xA081F4);
    ecx = ecx + 0xC;
    eax = MEM32(0x58238C);
    eax = eax + 0x10;
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF90Au); RECOMP_ABI_CALL(0x001DC740u, sub_001DC740); /* call 0x001DC740 */

loc_000EF90A: ;
    eax = MEM32(0x5823A0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF917u); RECOMP_ABI_CALL(0x000EF500u, sub_000EF500); /* call 0x000EF500 */

loc_000EF917: ;
    _fa = (uint32_t)(MEM16(0xA081F8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0xA081F8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF983; /* je: equal / zero */

loc_000EF921: ;
    goto loc_000EF923;

loc_000EF923: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    _fa = (uint32_t)(MEM32(eax * 8 + 0x582390)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x582390), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF968; /* jne: not equal / not zero */

loc_000EF934: ;
    ecx = 0x486F4D;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x164;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF95Cu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EF95C: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EF968u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EF968: ;
    goto loc_000EF96A;

loc_000EF96A: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    eax = MEM32(eax * 8 + 0x582394);
    ecx = MEM32(0xA081F4);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x000EF983u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EF983: ;
    goto loc_000EF985;

loc_000EF985: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    eax = MEM32(eax * 4 + 0x5823B0);
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x000EF9A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EF9A9: ;
    _fa = (uint32_t)(MEM8(0xA08211)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA08211), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF9DF; /* je: equal / zero */

loc_000EF9B2: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax | 1;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax | 8;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;

loc_000EF9DF: ;
    goto loc_000EF9E1;

loc_000EF9E1: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EF9F0
 * Original: 0x000EF9F0 - 0x000EFC49 (601 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF9F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EF9F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x20;
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFB52; /* je: equal / zero */

loc_000EFA05: ;
    _fa = (uint32_t)(MEM16(0xA081F8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0xA081F8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFA71; /* je: equal / zero */

loc_000EFA0F: ;
    goto loc_000EFA11;

loc_000EFA11: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    _fa = (uint32_t)(MEM32(eax * 8 + 0x582390)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x582390), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EFA56; /* jne: not equal / not zero */

loc_000EFA22: ;
    ecx = 0x486F4D;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x183;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFA4Au); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EFA4A: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFA56u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EFA56: ;
    goto loc_000EFA58;

loc_000EFA58: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    eax = MEM32(eax * 8 + 0x582390);
    ecx = MEM32(0xA081F4);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x000EFA71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EFA71: ;
    eax = MEM32(0x58238C);
    eax = eax + 0x10;
    eax = eax + 0xC;
    ecx = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFA8Bu); RECOMP_ABI_CALL(0x001DC740u, sub_001DC740); /* call 0x001DC740 */

loc_000EFA8B: ;
    ecx = MEM32(0x58238C);
    ecx = ecx + 0x10;
    eax = ebp + -16;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFAA3u); RECOMP_ABI_CALL(0x000EEFE0u, sub_000EEFE0); /* call 0x000EEFE0 */

loc_000EFAA3: ;
    _fa = (uint32_t)(MEM32(0x5823A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5823A0), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFAFD; /* je: equal / zero */

loc_000EFAAC: ;
    edx = MEM32(0x58238C);
    edx = edx + 0x10;
    edx = edx + 0xC;
    ecx = MEM32(0x58238C);
    ecx = ecx + 0x10;
    ecx = ecx + 0x18;
    eax = MEM32(0x5823A0);
    esi = 0xA081FC;
    xmm0 = XMM_SCALAR(MEMF(0x43D8F0)); /* movss */
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFAFBu); RECOMP_ABI_CALL(0x000EB100u, sub_000EB100); /* call 0x000EB100 */

loc_000EFAFB: ;
    goto loc_000EFB4D;

loc_000EFAFD: ;
    edx = MEM32(0x58238C);
    edx = edx + 0x10;
    ecx = MEM32(0x58238C);
    ecx = ecx + 0x10;
    ecx = ecx + 0xC;
    eax = MEM32(0x58238C);
    eax = eax + 0x10;
    eax = eax + 0x18;
    xmm0 = XMM_SCALAR(MEMF(0x43D8F0)); /* movss */
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFB4Du); RECOMP_ABI_CALL(0x000EB100u, sub_000EB100); /* call 0x000EB100 */

loc_000EFB4D: ;
    goto loc_000EFC09;

loc_000EFB52: ;
    eax = MEM32(0xA081F4);
    ecx = MEM32(0x58238C);
    edx = MEM32(ecx + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0xA081F4);
    ecx = ecx + 0xC;
    eax = MEM32(0x58238C);
    eax = eax + 0x10;
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFB8Eu); RECOMP_ABI_CALL(0x001DC740u, sub_001DC740); /* call 0x001DC740 */

loc_000EFB8E: ;
    eax = MEM32(0x5823A0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFB9Bu); RECOMP_ABI_CALL(0x000EF500u, sub_000EF500); /* call 0x000EF500 */

loc_000EFB9B: ;
    _fa = (uint32_t)(MEM16(0xA081F8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0xA081F8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFC07; /* je: equal / zero */

loc_000EFBA5: ;
    goto loc_000EFBA7;

loc_000EFBA7: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    _fa = (uint32_t)(MEM32(eax * 8 + 0x582390)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x582390), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EFBEC; /* jne: not equal / not zero */

loc_000EFBB8: ;
    ecx = 0x486F4D;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x19E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFBE0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EFBE0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFBECu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EFBEC: ;
    goto loc_000EFBEE;

loc_000EFBEE: ;
    eax = (uint32_t)(int32_t)SMEM16(0xA081F8);
    eax = MEM32(eax * 8 + 0x582394);
    ecx = MEM32(0xA081F4);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x000EFC07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000EFC07: ;
    goto loc_000EFC09;

loc_000EFC09: ;
    SET_LO8(eax, MEM8(0xA08211));
    MEM8(0xA08212) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(0xA08211) = LO8(eax);
    eax = ZX8(MEM8(ebp + 8));
    eax = MEM32(eax * 4 + 0x5823B8);
    ecx = 0; /* xor self */
    ecx = 0x480D9F;
    MEM32(esp) = 0;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFC42u); RECOMP_ABI_CALL(0x001C3010u, sub_001C3010); /* call 0x001C3010 */

loc_000EFC42: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EFC50
 * Original: 0x000EFC50 - 0x000EFCC9 (121 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFC50(void)
{
    uint32_t ebp = g_ebp;

loc_000EFC50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0xA08214;
    ecx = ecx + 0x20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFC79u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_000EFC79: ;
    MEM8(0xA08250) = 1;
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x58238C);
    edx = MEM32(ecx + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0xC;
    eax = MEM32(0x58238C);
    eax = eax + 0x10;
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFCB7u); RECOMP_ABI_CALL(0x001DC740u, sub_001DC740); /* call 0x001DC740 */

loc_000EFCB7: ;
    eax = MEM32(0x5823A0);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFCC4u); RECOMP_ABI_CALL(0x000EF500u, sub_000EF500); /* call 0x000EF500 */

loc_000EFCC4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EFCD0
 * Original: 0x000EFCD0 - 0x000EFD68 (152 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFCD0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000EFCD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0xA08214;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFCF6u); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_000EFCF6: ;
    _fa = (uint32_t)(MEM8(0xA08250)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA08250), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFD21; /* je: equal / zero */

loc_000EFCFF: ;
    ecx = MEM32(ebp + 8);
    eax = 0xA08214;
    eax = eax + 0x20;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFD1Fu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_000EFD1F: ;
    goto loc_000EFD63;

loc_000EFD21: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0xC;
    eax = MEM32(0x58238C);
    eax = eax + 0x10;
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFD63u); RECOMP_ABI_CALL(0x001DC740u, sub_001DC740); /* call 0x001DC740 */

loc_000EFD63: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000EFD70
 * Original: 0x000EFD70 - 0x000EFD9B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFD70(void)
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

loc_000EFD70: ;
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
    PUSH32(esp, 0x000EFD85u); RECOMP_ABI_CALL(0x000EFE20u, sub_000EFE20); /* call 0x000EFE20 */

loc_000EFD85: ;
    eax = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFD8Eu); RECOMP_ABI_CALL(0x000EFDF0u, sub_000EFDF0); /* call 0x000EFDF0 */

loc_000EFD8E: ;
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
 * sub_000EFDA0
 * Original: 0x000EFDA0 - 0x000EFDF0 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFDA0(void)
{
    uint32_t ebp = g_ebp;

loc_000EFDA0: ;
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
 * sub_000EFDF0
 * Original: 0x000EFDF0 - 0x000EFE17 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFDF0(void)
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

loc_000EFDF0: ;
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
 * sub_000EFE20
 * Original: 0x000EFE20 - 0x000EFE59 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFE20(void)
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

loc_000EFE20: ;
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
 * sub_000EFE60
 * Original: 0x000EFE60 - 0x000F0823 (2499 bytes, 556 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFE60(void)
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

loc_000EFE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x158;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EFEAC; /* jne: not equal / not zero */

loc_000EFE78: ;
    ecx = 0x472C8D;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFEA0u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EFEA0: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFEACu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EFEAC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EFEE6; /* jne: not equal / not zero */

loc_000EFEB2: ;
    ecx = 0x464686;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFEDAu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EFEDA: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFEE6u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EFEE6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EFF20; /* jne: not equal / not zero */

loc_000EFEEC: ;
    ecx = 0x447966;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x1C2;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFF14u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000EFF14: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000EFF20u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000EFF20: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFFF3; /* je: equal / zero */

loc_000EFF2D: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0xC); /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x43DC40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EFF6E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EFF5F: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DC40)); /* movss */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */
    goto loc_000EFFB9;

loc_000EFF6E: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43DF24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000EFF9A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000EFF8B: ;
    xmm0 = XMM_SCALAR(MEMF(0x43DF24)); /* movss */
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */
    goto loc_000EFFAF;

loc_000EFF9A: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(ebp + -76) = xmm0.f[0]; /* movss */

loc_000EFFAF: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    MEMF(ebp + -72) = xmm0.f[0]; /* movss */

loc_000EFFB9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -72)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(0xA08210)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0xA08210), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFFE6; /* je: equal / zero */

loc_000EFFCF: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    goto loc_000EFFF1;

loc_000EFFE6: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_000EFFF1: ;
    goto loc_000EFFF3;

loc_000EFFF3: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCF0)); /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F001Bu); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_000F001B: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    eax = xmm0.u[0]; /* movd */
    eax = eax ^ 0x80000000u;
    xmm0 = XMM_SCALAR_BITS(eax); /* movd to xmm */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = ebp + -12;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0055u); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_000F0055: ;
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_000F0084; /* jne: not equal / not zero (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0065: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_000F0084; /* jp: parity (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0067: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */

loc_000F0084: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    edx = ebp + -12;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F00A3u); RECOMP_ABI_CALL(0x000EF3F0u, sub_000EF3F0); /* call 0x000EF3F0 */

loc_000F00A3: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(ebp + -88) = eax;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x24;
    MEM32(ebp + -84) = eax;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F00C7u); RECOMP_ABI_CALL(0x000F0F30u, sub_000F0F30); /* call 0x000F0F30 */

loc_000F00C7: ;
    MEMF(ebp + -68) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    MEMF(ebp + -80) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F00E6u); RECOMP_ABI_CALL(0x000F0F70u, sub_000F0F70); /* call 0x000F0F70 */

loc_000F00E6: ;
    ecx = MEM32(ebp + -88);
    eax = MEM32(ebp + -84);
    xmm1 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    MEMF(ebp + -64) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0111u); RECOMP_ABI_CALL(0x001D58A0u, sub_001D58A0); /* call 0x001D58A0 */

loc_000F0111: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0123u); RECOMP_ABI_CALL(0x000F0F70u, sub_000F0F70); /* call 0x000F0F70 */

loc_000F0123: ;
    MEMF(ebp + -60) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0142u); RECOMP_ABI_CALL(0x000F0F30u, sub_000F0F30); /* call 0x000F0F30 */

loc_000F0142: ;
    MEMF(ebp + -56) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    eax = ebp + -24;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F01B0u); RECOMP_ABI_CALL(0x000F0FB0u, sub_000F0FB0); /* call 0x000F0FB0 */

loc_000F01B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x5823A4)); /* movss */
    eax = ebp + -24;
    MEM32(esp) = eax;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F01CDu); RECOMP_ABI_CALL(0x000EFDA0u, sub_000EFDA0); /* call 0x000EFDA0 */

loc_000F01CD: ;
    _fa = (uint32_t)(MEM32(0x5823A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5823A0), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0281; /* je: equal / zero */

loc_000F01DA: ;
    eax = MEM32(0x5823A0);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F01EFu); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_000F01EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0281; /* je: equal / zero */

loc_000F01F8: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0xA081FC); /* addss */
    MEMF(0xA081FC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0xA08200); /* addss */
    MEMF(0xA08200) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0xA08204); /* addss */
    MEMF(0xA08204) = xmm0.f[0]; /* movss */
    eax = MEM32(0x5823A0);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F024Cu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_000F024C: ;
    MEM32(ebp + -48) = eax;
    edx = MEM32(ebp + -48);
    edx = edx + 4;
    edx = edx + 0x4C;
    ecx = 0xA081FC;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    eax = ebp + -36;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F027Fu); RECOMP_ABI_CALL(0x000F0FF0u, sub_000F0FF0); /* call 0x000F0FF0 */

loc_000F027F: ;
    goto loc_000F02A8;

loc_000F0281: ;
    edx = MEM32(ebp + 8);
    ecx = ebp + -24;
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    eax = ebp + -36;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F02A8u); RECOMP_ABI_CALL(0x000F0FF0u, sub_000F0FF0); /* call 0x000F0FF0 */

loc_000F02A8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -36);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -36);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -32);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x59CA58);
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DE4C)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F081B; /* je: equal / zero */

loc_000F0320: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0338u); RECOMP_ABI_CALL(0x000F1060u, sub_000F1060); /* call 0x000F1060 */

loc_000F0338: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F0344: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0356u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0356: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F0362: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F037B: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000F0390: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F03A2u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F03A2: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F03AE: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F03C7: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_000F03DC: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F03EEu); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F03EE: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F03FA: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0413: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_000F0428: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F043Au); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F043A: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F0446: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F045F: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_000F0474: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0486u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0486: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F0492: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F04AB: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_000F04C0: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F04D2u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F04D2: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F04DE: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F04F7: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x18); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x18)) */

loc_000F050C: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x3C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F051Au); RECOMP_ABI_CALL(0x000F1110u, sub_000F1110); /* call 0x000F1110 */

loc_000F051A: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F0526: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0538u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0538: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F0544: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0558: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000F0569: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F057Bu); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F057B: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F0583: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DECC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0598: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x20); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_000F05A9: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F05BBu); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F05BB: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F05E8; /* je: equal / zero */

loc_000F05C3: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F05E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F05D3: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DE88)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x48); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_000F081B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x48)) */

loc_000F05E8: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -176) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -168) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -160) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -152) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -144) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -136) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm7.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm6.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm4.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -176)); /* movsd */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    edx = 0x8BEAC0;
    ecx = 0x4921C8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -168)); /* movsd */
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -160)); /* movsd */
    MEMD(esp + 0x18) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -152)); /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -144)); /* movsd */
    MEMD(esp + 0x28) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -136)); /* movsd */
    MEMD(esp + 0x30) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    MEMD(esp + 0x38) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    MEMD(esp + 0x40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    MEMD(esp + 0x48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    MEMD(esp + 0x50) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    MEMD(esp + 0x58) = xmm7.d[0]; /* movsd */
    MEMD(esp + 0x60) = xmm6.d[0]; /* movsd */
    MEMD(esp + 0x68) = xmm5.d[0]; /* movsd */
    MEMD(esp + 0x70) = xmm4.d[0]; /* movsd */
    MEMD(esp + 0x78) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x80) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x88) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x90) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x98) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F07EBu); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000F07EB: ;
    ecx = eax;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x206;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F080Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000F080F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F081Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000F081B: ;
    esp = esp + 0x158;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}


/**
 * sub_000F0830
 * Original: 0x000F0830 - 0x000F0F28 (1784 bytes, 410 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0830(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F0830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x128;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -24;
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0857u); RECOMP_ABI_CALL(0x00141C30u, sub_00141C30); /* call 0x00141C30 */

loc_000F0857: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0920; /* je: equal / zero */

loc_000F0879: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0xC); /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x43D57C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000F08BA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F08AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D57C)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    goto loc_000F0905;

loc_000F08BA: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x43D8F4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000F08E6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F08D7: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D8F4)); /* movss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    goto loc_000F08FB;

loc_000F08E6: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */

loc_000F08FB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */

loc_000F0905: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0920u); RECOMP_ABI_CALL(0x000ECFF0u, sub_000ECFF0); /* call 0x000ECFF0 */

loc_000F0920: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x43DCE8)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x43D7C4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca <= _fcb)) goto loc_000F0974; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F094D: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x43DCE8)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    goto loc_000F0983;

loc_000F0974: ;
    xmm0 = XMM_SCALAR(MEMF(0x43D7C4)); /* movss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    goto loc_000F0983;

loc_000F0983: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F09EE; /* je: equal / zero */

loc_000F0996: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F09AEu); RECOMP_ABI_CALL(0x001DC850u, sub_001DC850); /* call 0x001DC850 */

loc_000F09AE: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F09C6u); RECOMP_ABI_CALL(0x000F4B10u, sub_000F4B10); /* call 0x000F4B10 */

loc_000F09C6: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x3C;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F09E5u); RECOMP_ABI_CALL(0x00224A80u, sub_00224A80); /* call 0x00224A80 */

loc_000F09E5: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;

loc_000F09EE: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x59CA58);
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43D8F0)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43D8E4)); /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0F20; /* je: equal / zero */

loc_000F0A49: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0A61u); RECOMP_ABI_CALL(0x000F1060u, sub_000F1060); /* call 0x000F1060 */

loc_000F0A61: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0A6D: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0A7Fu); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0A7F: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0A8B: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0AA4: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000F0AB9: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0ACBu); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0ACB: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0AD7: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0AF0: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_000F0B05: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0B17u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0B17: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0B23: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0B3C: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_000F0B51: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0B63u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0B63: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0B6F: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0B88: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_000F0B9D: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0BAFu); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0BAF: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0BBB: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0BD4: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_000F0BE9: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0BFBu); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0BFB: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0C07: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0C20: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x18); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x18)) */

loc_000F0C35: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x3C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0C43u); RECOMP_ABI_CALL(0x000F1110u, sub_000F1110); /* call 0x000F1110 */

loc_000F0C43: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0C4F: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0C61u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0C61: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0C6D: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0C81: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000F0C92: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0CA4u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0CA4: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0CAC: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DECC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0CC1: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x20); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_000F0CD2: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0CE4u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F0CE4: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0D11; /* je: equal / zero */

loc_000F0CEC: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F0D11; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F0CFC: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DE88)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x48); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_000F0F20; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x48)) */

loc_000F0D11: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -128) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -120) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -112) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -104) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -96) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -88) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -80) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -72) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -64) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -56) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm7.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm6.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm4.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -128)); /* movsd */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    edx = 0x8BEAC0;
    ecx = 0x4921C8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -120)); /* movsd */
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -112)); /* movsd */
    MEMD(esp + 0x18) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -104)); /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -96)); /* movsd */
    MEMD(esp + 0x28) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -88)); /* movsd */
    MEMD(esp + 0x30) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -80)); /* movsd */
    MEMD(esp + 0x38) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -72)); /* movsd */
    MEMD(esp + 0x40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -64)); /* movsd */
    MEMD(esp + 0x48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -56)); /* movsd */
    MEMD(esp + 0x50) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -48)); /* movsd */
    MEMD(esp + 0x58) = xmm7.d[0]; /* movsd */
    MEMD(esp + 0x60) = xmm6.d[0]; /* movsd */
    MEMD(esp + 0x68) = xmm5.d[0]; /* movsd */
    MEMD(esp + 0x70) = xmm4.d[0]; /* movsd */
    MEMD(esp + 0x78) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x80) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x88) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x90) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x98) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0EF0u); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000F0EF0: ;
    ecx = eax;
    eax = 0x447E94;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x23B;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0F14u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000F0F14: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F0F20u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000F0F20: ;
    esp = esp + 0x128;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000F0F30
 * Original: 0x000F0F30 - 0x000F0F64 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0F30(void)
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

loc_000F0F30: ;
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
    PUSH32(esp, 0x000F0F4Fu); RECOMP_ABI_CALL(0x003DA050u, sub_003DA050); /* call 0x003DA050 */

loc_000F0F4F: ;
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
 * sub_000F0F70
 * Original: 0x000F0F70 - 0x000F0FA4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0F70(void)
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

loc_000F0F70: ;
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
    PUSH32(esp, 0x000F0F8Fu); RECOMP_ABI_CALL(0x003D7580u, sub_003D7580); /* call 0x003D7580 */

loc_000F0F8F: ;
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
 * sub_000F0FB0
 * Original: 0x000F0FB0 - 0x000F0FF0 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0FB0(void)
{
    uint32_t ebp = g_ebp;

loc_000F0FB0: ;
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
 * sub_000F0FF0
 * Original: 0x000F0FF0 - 0x000F105A (106 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0FF0(void)
{
    uint32_t ebp = g_ebp;

loc_000F0FF0: ;
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
 * sub_000F1060
 * Original: 0x000F1060 - 0x000F10E2 (130 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1060(void)
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

loc_000F1060: ;
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
    PUSH32(esp, 0x000F1077u); RECOMP_ABI_CALL(0x000F1190u, sub_000F1190); /* call 0x000F1190 */

loc_000F1077: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000F10D5; /* je: equal / zero */

loc_000F1084: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F108Fu); RECOMP_ABI_CALL(0x000F1190u, sub_000F1190); /* call 0x000F1190 */

loc_000F108F: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000F10D5; /* je: equal / zero */

loc_000F109C: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F10AEu); RECOMP_ABI_CALL(0x000EF4B0u, sub_000EF4B0); /* call 0x000EF4B0 */

loc_000F10AE: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F10C9u); RECOMP_ABI_CALL(0x000F11D0u, sub_000F11D0); /* call 0x000F11D0 */

loc_000F10C9: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_000F10D5: ;
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
 * sub_000F10F0
 * Original: 0x000F10F0 - 0x000F110F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F10F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F10F0: ;
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
 * sub_000F1110
 * Original: 0x000F1110 - 0x000F1181 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1110(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1110: ;
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
    PUSH32(esp, 0x000F112Au); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F112A: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000F1174; /* je: equal / zero */

loc_000F1137: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1149u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F1149: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000F1174; /* je: equal / zero */

loc_000F1156: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1168u); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F1168: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_000F1174: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000F1190
 * Original: 0x000F1190 - 0x000F11C9 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1190(void)
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

loc_000F1190: ;
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
    PUSH32(esp, 0x000F11A4u); RECOMP_ABI_CALL(0x000EFE20u, sub_000EFE20); /* call 0x000EFE20 */

loc_000F11A4: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F11C4u); RECOMP_ABI_CALL(0x000F11D0u, sub_000F11D0); /* call 0x000F11D0 */

loc_000F11C4: ;
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
 * sub_000F11D0
 * Original: 0x000F11D0 - 0x000F123E (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F11D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F11D0: ;
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
    PUSH32(esp, 0x000F11FEu); RECOMP_ABI_CALL(0x000F10F0u, sub_000F10F0); /* call 0x000F10F0 */

loc_000F11FE: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000F1231; /* je: equal / zero */

loc_000F120B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    xmm0 = XMM_MEM(0x43EC00); /* movaps */
    xmm1 = XMM_AND(xmm1, xmm0); /* pand */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(0x43DF60)); /* movsd */
    _fca = xmm0.d[0]; _fcb = xmm1.d[0]; /* ucomisd */
    SET_LO8(eax, (((!(isnan(_fca) || isnan(_fcb))) && _fca > _fcb)) ? 1 : 0); /* seta */
    MEM8(ebp + -5) = LO8(eax);

loc_000F1231: ;
    SET_LO8(eax, MEM8(ebp + -5));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000F1240
 * Original: 0x000F1240 - 0x000F1292 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1240(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1283; /* jne: not equal / not zero */

loc_000F124F: ;
    ecx = 0x472C8D;
    eax = 0x494C37;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x18;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1277u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000F1277: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1283u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000F1283: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000F12A0
 * Original: 0x000F12A0 - 0x000F13ED (333 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F12A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_000F12A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x98)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F12C5u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_000F12C5: ;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F12DAu); RECOMP_ABI_CALL(0x0037C0E0u, sub_0037C0E0); /* call 0x0037C0E0 */

loc_000F12DA: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    edx = MEM32(ecx + 0x1EC);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x1F0);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x1F4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000F13E5; /* je: equal / zero */

loc_000F130A: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0xCC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1323u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_000F1323: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000F13E3; /* je: equal / zero */

loc_000F1330: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1345u); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000F1345: ;
    MEM32(ebp + -12) = eax;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 0x17C;
    ecx = ecx + 0x168;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2A0);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x11C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1375u); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000F1375: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000F13E1; /* je: equal / zero */

loc_000F1387: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0xCC);
    ecx = 0x4755A8;
    eax = ebp + -124;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F13B1u); RECOMP_ABI_CALL(0x00225CA0u, sub_00225CA0); /* call 0x00225CA0 */

loc_000F13B1: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_000F13DF; /* je: equal / zero */

loc_000F13B7: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -28);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -64);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -60);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -56);
    MEM32(eax + 8) = ecx;

loc_000F13DF: ;
    goto loc_000F13E1;

loc_000F13E1: ;
    goto loc_000F13E3;

loc_000F13E3: ;
    goto loc_000F13E5;

loc_000F13E5: ;
    esp = esp + 0x98;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000F13F0
 * Original: 0x000F13F0 - 0x000F1439 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F13F0(void)
{
    uint32_t ebp = g_ebp;

loc_000F13F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F140Fu); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_000F140F: ;
    MEM32(ebp + -4) = eax;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x1A4;
    ecx = ecx + 0x48;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1434u); RECOMP_ABI_CALL(0x000F1440u, sub_000F1440); /* call 0x000F1440 */

loc_000F1434: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000F1440
 * Original: 0x000F1440 - 0x000F1C63 (2083 bytes, 479 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1440(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F1440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x1B4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x59CA58);
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43D8F0)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F14CBu); RECOMP_ABI_CALL(0x000F4B10u, sub_000F4B10); /* call 0x000F4B10 */

loc_000F14CB: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F14E3u); RECOMP_ABI_CALL(0x000F1D90u, sub_000F1D90); /* call 0x000F1D90 */

loc_000F14E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F151B; /* jne: not equal / not zero */

loc_000F14E7: ;
    ecx = 0x4426CC;
    eax = 0x494C37;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x52;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F150Fu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000F150F: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F151Bu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000F151B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1730; /* je: equal / zero */

loc_000F1525: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1538u); RECOMP_ABI_CALL(0x00222210u, sub_00222210); /* call 0x00222210 */

loc_000F1538: ;
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1550u); RECOMP_ABI_CALL(0x0037C0E0u, sub_0037C0E0); /* call 0x0037C0E0 */

loc_000F1550: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x3C;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F156Fu); RECOMP_ABI_CALL(0x00224A80u, sub_00224A80); /* call 0x00224A80 */

loc_000F156F: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xCC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1727; /* je: equal / zero */

loc_000F157F: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0xCC);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1598u); RECOMP_ABI_CALL(0x002221B0u, sub_002221B0); /* call 0x002221B0 */

loc_000F1598: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1725; /* je: equal / zero */

loc_000F15A5: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(esp) = 0x76656869;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F15BAu); RECOMP_ABI_CALL(0x000E0A50u, sub_000E0A50); /* call 0x000E0A50 */

loc_000F15BA: ;
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
    PUSH32(esp, 0x000F15EAu); RECOMP_ABI_CALL(0x003570E0u, sub_003570E0); /* call 0x003570E0 */

loc_000F15EA: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1670; /* je: equal / zero */

loc_000F15FC: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 0xCC);
    ecx = 0x4755A8;
    eax = ebp + -128;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1626u); RECOMP_ABI_CALL(0x00225CA0u, sub_00225CA0); /* call 0x00225CA0 */

loc_000F1626: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F166B; /* je: equal / zero */

loc_000F162C: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -32);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -68);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -64);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + -60);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -44);
    MEM32(eax + 0x30) = ecx;
    ecx = MEM32(ebp + -40);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(ebp + -36);
    MEM32(eax + 0x38) = ecx;

loc_000F166B: ;
    goto loc_000F1723;

loc_000F1670: ;
    edx = MEM32(ebp + -12);
    edx = edx + 4;
    edx = edx + 8;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    ecx = ecx + 0x20;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    eax = eax + 0x2C;
    esi = ebp + -180;
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F16A5u); RECOMP_ABI_CALL(0x001D2020u, sub_001D2020); /* call 0x001D2020 */

loc_000F16A5: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x24;
    edx = ebp + -180;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F16C7u); RECOMP_ABI_CALL(0x001D27D0u, sub_001D27D0); /* call 0x001D27D0 */

loc_000F16C7: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F16DFu); RECOMP_ABI_CALL(0x000F4B10u, sub_000F4B10); /* call 0x000F4B10 */

loc_000F16DF: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x24;
    edx = ebp + -180;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1701u); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_000F1701: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x30;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    edx = ebp + -180;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1723u); RECOMP_ABI_CALL(0x001D26E0u, sub_001D26E0); /* call 0x001D26E0 */

loc_000F1723: ;
    goto loc_000F1725;

loc_000F1725: ;
    goto loc_000F1727;

loc_000F1727: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;

loc_000F1730: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1C5A; /* je: equal / zero */

loc_000F1741: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0x24;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x30;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1759u); RECOMP_ABI_CALL(0x000F1D90u, sub_000F1D90); /* call 0x000F1D90 */

loc_000F1759: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F1765: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1777u); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F1777: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F1783: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F179C: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000F17B1: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F17C3u); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F17C3: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F17CF: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F17E8: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_000F17FD: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F180Fu); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F180F: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F181B: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F1834: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_000F1849: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F185Bu); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F185B: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F1867: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F1880: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_000F1895: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F18A7u); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F18A7: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F18B3: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F18CC: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_000F18E1: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F18F3u); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F18F3: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F18FF: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43D864)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F1918: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x18); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x18)) */

loc_000F192D: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x3C;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F193Bu); RECOMP_ABI_CALL(0x000F1E40u, sub_000F1E40); /* call 0x000F1E40 */

loc_000F193B: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F1947: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1959u); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F1959: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F1965: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F1979: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DCAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000F198A: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F199Cu); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F199C: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F19A4: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x43DECC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F19B9: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DA38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x20); /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_000F19CA: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F19DCu); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F19DC: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A09; /* je: equal / zero */

loc_000F19E4: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    if (((isnan(_fca) || isnan(_fcb)) || _fca < _fcb)) goto loc_000F1A09; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F19F4: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DE88)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x48); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca >= _fcb)) goto loc_000F1C5A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x48)) */

loc_000F1A09: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -272) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -264) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -256) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -248) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -240) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -232) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -224) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -216) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -208) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -200) = xmm0.d[0]; /* movsd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm7.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm6.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm5.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm4.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm2.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.d[0] = (double)xmm0.f[0]; /* cvtss2sd */
    MEMD(ebp + -192) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -272)); /* movsd */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    edx = 0x8BEAC0;
    ecx = 0x4921C8;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEMD(esp + 8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -264)); /* movsd */
    MEMD(esp + 0x10) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -256)); /* movsd */
    MEMD(esp + 0x18) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -248)); /* movsd */
    MEMD(esp + 0x20) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -240)); /* movsd */
    MEMD(esp + 0x28) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -232)); /* movsd */
    MEMD(esp + 0x30) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -224)); /* movsd */
    MEMD(esp + 0x38) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -216)); /* movsd */
    MEMD(esp + 0x40) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -208)); /* movsd */
    MEMD(esp + 0x48) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -200)); /* movsd */
    MEMD(esp + 0x50) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -192)); /* movsd */
    MEMD(esp + 0x58) = xmm7.d[0]; /* movsd */
    MEMD(esp + 0x60) = xmm6.d[0]; /* movsd */
    MEMD(esp + 0x68) = xmm5.d[0]; /* movsd */
    MEMD(esp + 0x70) = xmm4.d[0]; /* movsd */
    MEMD(esp + 0x78) = xmm3.d[0]; /* movsd */
    MEMD(esp + 0x80) = xmm2.d[0]; /* movsd */
    MEMD(esp + 0x88) = xmm1.d[0]; /* movsd */
    MEMD(esp + 0x90) = xmm0.d[0]; /* movsd */
    MEM32(esp + 0x98) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1C2Au); RECOMP_ABI_CALL(0x000FA610u, sub_000FA610); /* call 0x000FA610 */

loc_000F1C2A: ;
    ecx = eax;
    eax = 0x494C37;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x85;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1C4Eu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000F1C4E: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1C5Au); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000F1C5A: ;
    esp = esp + 0x1B4;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000F1C70
 * Original: 0x000F1C70 - 0x000F1D8F (287 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1C70(void)
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

loc_000F1C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1C8Du); RECOMP_ABI_CALL(0x00142B00u, sub_00142B00); /* call 0x00142B00 */

loc_000F1C8D: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1CCA; /* jne: not equal / not zero */

loc_000F1C96: ;
    ecx = 0x472C8D;
    eax = 0x494C37;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x9D;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1CBEu); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000F1CBE: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1CCAu); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000F1CCA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1D04; /* jne: not equal / not zero */

loc_000F1CD0: ;
    ecx = 0x447966;
    eax = 0x494C37;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x9E;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1CF8u); RECOMP_ABI_CALL(0x000FA650u, sub_000FA650); /* call 0x000FA650 */

loc_000F1CF8: ;
    MEM32(esp) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1D04u); RECOMP_ABI_CALL(0x000FB7A0u, sub_000FB7A0); /* call 0x000FB7A0 */

loc_000F1D04: ;
    ecx = MEM32(ebp + 0xC);
    eax = ebp + -16;
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1D19u); RECOMP_ABI_CALL(0x00142E70u, sub_00142E70); /* call 0x00142E70 */

loc_000F1D19: ;
    edx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0x10);
    ecx = ebp + -16;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1D32u); RECOMP_ABI_CALL(0x000F1440u, sub_000F1440); /* call 0x000F1440 */

loc_000F1D32: ;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1D40u); RECOMP_ABI_CALL(0x00141B50u, sub_00141B50); /* call 0x00141B50 */

loc_000F1D40: ;
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(ebp + 0x10);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x20); /* ucomiss */
    if (((!(isnan(_fca) || isnan(_fcb))) && _fca != _fcb)) goto loc_000F1D64; /* jne: not equal / not zero (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_000F1D60: ;
    if ((isnan(_fca) || isnan(_fcb))) goto loc_000F1D64; /* jp: parity (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_000F1D62: ;
    goto loc_000F1D8A;

loc_000F1D64: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x43DD94)); /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x10);
    MEM8(eax + 0x4F) = 1;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000F1D8A: ;
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
 * sub_000F1D90
 * Original: 0x000F1D90 - 0x000F1E12 (130 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1D90(void)
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

loc_000F1D90: ;
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
    PUSH32(esp, 0x000F1DA7u); RECOMP_ABI_CALL(0x000F1EC0u, sub_000F1EC0); /* call 0x000F1EC0 */

loc_000F1DA7: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000F1E05; /* je: equal / zero */

loc_000F1DB4: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1DBFu); RECOMP_ABI_CALL(0x000F1EC0u, sub_000F1EC0); /* call 0x000F1EC0 */

loc_000F1DBF: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000F1E05; /* je: equal / zero */

loc_000F1DCC: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1DDEu); RECOMP_ABI_CALL(0x000F1F70u, sub_000F1F70); /* call 0x000F1F70 */

loc_000F1DDE: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1DF9u); RECOMP_ABI_CALL(0x000F1F00u, sub_000F1F00); /* call 0x000F1F00 */

loc_000F1DF9: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_000F1E05: ;
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
 * sub_000F1E20
 * Original: 0x000F1E20 - 0x000F1E3F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1E20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1E20: ;
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
 * sub_000F1E40
 * Original: 0x000F1E40 - 0x000F1EB1 (113 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1E40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1E40: ;
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
    PUSH32(esp, 0x000F1E5Au); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F1E5A: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000F1EA4; /* je: equal / zero */

loc_000F1E67: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1E79u); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F1E79: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000F1EA4; /* je: equal / zero */

loc_000F1E86: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1E98u); RECOMP_ABI_CALL(0x000F1E20u, sub_000F1E20); /* call 0x000F1E20 */

loc_000F1E98: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_000F1EA4: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_000F1EC0
 * Original: 0x000F1EC0 - 0x000F1EF9 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1EC0(void)
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

loc_000F1EC0: ;
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
    PUSH32(esp, 0x000F1ED4u); RECOMP_ABI_CALL(0x000F1FC0u, sub_000F1FC0); /* call 0x000F1FC0 */

loc_000F1ED4: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x43D624)); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1EF4u); RECOMP_ABI_CALL(0x000F1F00u, sub_000F1F00); /* call 0x000F1F00 */

loc_000F1EF4: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

