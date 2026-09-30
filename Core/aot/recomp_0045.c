/* Generated ELF translation shard 45: 256 functions. */

#define RECOMP_GENERATED_CODE

#include "recomp_funcs.h"

#include <math.h>



/**
 * sub_0042A580
 * Original: 0x0042A580 - 0x0042A6B2 (306 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A580(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0042A580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x38)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = ebp + -40;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042A5AFu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0042A5AF: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042A5C3; /* jne: not equal / not zero */

loc_0042A5B7: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042A6AA;

loc_0042A5C3: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042A5FB; /* jne: not equal / not zero */

loc_0042A5CC: ;
    goto loc_0042A5CE;

loc_0042A5CE: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042A5EB; /* jne: not equal / not zero */

loc_0042A5DE: ;
    goto loc_0042A5E0;

loc_0042A5E0: ;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_0042A5CE;

loc_0042A5EB: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_0042A6AA;

loc_0042A5FB: ;
    goto loc_0042A5FD;

loc_0042A5FD: ;
    eax = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -41) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042A637; /* je: equal / zero */

loc_0042A60D: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(eax));
    ecx = ecx & 0x1F;
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(ecx));
    _shift_result = RECOMP_SHIFT(ecx, 5, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | MEM32(ebp + ecx * 4 + -40);
    MEM32(ebp + ecx * 4 + -40) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -41) = LO8(eax);

loc_0042A637: ;
    SET_LO8(eax, MEM8(ebp + -41));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042A640; /* jne: not equal / not zero */

loc_0042A63E: ;
    goto loc_0042A64D;

loc_0042A640: ;
    goto loc_0042A642;

loc_0042A642: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 1;
    MEM32(ebp + 0xC) = eax;
    goto loc_0042A5FD;

loc_0042A64D: ;
    goto loc_0042A64F;

loc_0042A64F: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -42) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042A689; /* je: equal / zero */

loc_0042A65F: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = MEM32(ebp + eax * 4 + -40);
    ecx = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx));
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -42) = LO8(eax);

loc_0042A689: ;
    SET_LO8(eax, MEM8(ebp + -42));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042A692; /* jne: not equal / not zero */

loc_0042A690: ;
    goto loc_0042A69F;

loc_0042A692: ;
    goto loc_0042A694;

loc_0042A694: ;
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;
    goto loc_0042A64F;

loc_0042A69F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;

loc_0042A6AA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042A6C0
 * Original: 0x0042A6C0 - 0x0042A7C7 (263 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A6C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0042A6C0: ;
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
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042A6DF; /* jne: not equal / not zero */

loc_0042A6D4: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0042A7BF;

loc_0042A6DF: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042A6F4u); RECOMP_ABI_CALL(0x004299A0u, sub_004299A0); /* call 0x004299A0 */

loc_0042A6F4: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042A706; /* je: equal / zero */

loc_0042A6FD: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042A711; /* jne: not equal / not zero */

loc_0042A706: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0042A7BF;

loc_0042A711: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042A726; /* jne: not equal / not zero */

loc_0042A71A: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042A7BF;

loc_0042A726: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042A746; /* jne: not equal / not zero */

loc_0042A72F: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042A741u); RECOMP_ABI_CALL(0x0042A7D0u, sub_0042A7D0); /* call 0x0042A7D0 */

loc_0042A741: ;
    MEM32(ebp + -4) = eax;
    goto loc_0042A7BF;

loc_0042A746: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042A758; /* jne: not equal / not zero */

loc_0042A74F: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042A7BF;

loc_0042A758: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042A778; /* jne: not equal / not zero */

loc_0042A761: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042A773u); RECOMP_ABI_CALL(0x0042A880u, sub_0042A880); /* call 0x0042A880 */

loc_0042A773: ;
    MEM32(ebp + -4) = eax;
    goto loc_0042A7BF;

loc_0042A778: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042A78A; /* jne: not equal / not zero */

loc_0042A781: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042A7BF;

loc_0042A78A: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042A7AA; /* jne: not equal / not zero */

loc_0042A793: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042A7A5u); RECOMP_ABI_CALL(0x0042A950u, sub_0042A950); /* call 0x0042A950 */

loc_0042A7A5: ;
    MEM32(ebp + -4) = eax;
    goto loc_0042A7BF;

loc_0042A7AA: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042A7BCu); RECOMP_ABI_CALL(0x0042AA30u, sub_0042AA30); /* call 0x0042AA30 */

loc_0042A7BC: ;
    MEM32(ebp + -4) = eax;

loc_0042A7BF: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042A7D0
 * Original: 0x0042A7D0 - 0x0042A87F (175 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A7D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042A7D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(eax));
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(ecx + 1));
    eax = eax | ecx;
    MEM16(ebp + -2) = LO16(eax);
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx + 1));
    eax = eax | ecx;
    MEM16(ebp + -4) = LO16(eax);
    eax = MEM32(ebp + 8);
    eax = eax + 1;
    MEM32(ebp + 8) = eax;

loc_0042A811: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042A831; /* je: equal / zero */

loc_0042A821: ;
    eax = ZX16(MEM16(ebp + -4));
    ecx = ZX16(MEM16(ebp + -2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_0042A831: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042A83A; /* jne: not equal / not zero */

loc_0042A838: ;
    goto loc_0042A85A;

loc_0042A83A: ;
    goto loc_0042A83C;

loc_0042A83C: ;
    eax = ZX16(MEM16(ebp + -4));
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + 8) = edx;
    ecx = ZX8(MEM8(ecx + 1));
    eax = eax | ecx;
    MEM16(ebp + -4) = LO16(eax);
    goto loc_0042A811;

loc_0042A85A: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A870; /* je: equal / zero */

loc_0042A865: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -12) = eax;
    goto loc_0042A877;

loc_0042A870: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_0042A877;

loc_0042A877: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042A880
 * Original: 0x0042A880 - 0x0042A945 (197 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A880(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042A880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(eax));
    _shift_result = RECOMP_SHIFT(eax, 0x18, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(ecx + 1));
    _shift_result = RECOMP_SHIFT(ecx, 0x10, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    ecx = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(ecx + 2));
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    MEM32(ebp + -4) = eax;
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
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;

loc_0042A8DD: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042A8F9; /* je: equal / zero */

loc_0042A8ED: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_0042A8F9: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042A902; /* jne: not equal / not zero */

loc_0042A900: ;
    goto loc_0042A920;

loc_0042A902: ;
    goto loc_0042A904;

loc_0042A904: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + 8) = edx;
    ecx = ZX8(MEM8(ecx + 1));
    eax = eax | ecx;
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -8) = eax;
    goto loc_0042A8DD;

loc_0042A920: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A936; /* je: equal / zero */

loc_0042A92B: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xFFFFFFFEu;
    MEM32(ebp + -16) = eax;
    goto loc_0042A93D;

loc_0042A936: ;
    eax = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    goto loc_0042A93D;

loc_0042A93D: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042A950
 * Original: 0x0042A950 - 0x0042AA27 (215 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A950(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042A950: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(eax));
    _shift_result = RECOMP_SHIFT(eax, 0x18, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(ecx + 1));
    _shift_result = RECOMP_SHIFT(ecx, 0x10, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    ecx = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(ecx + 2));
    _shift_result = RECOMP_SHIFT(ecx, 8, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax | ecx;
    ecx = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(ecx + 3));
    eax = eax | ecx;
    MEM32(ebp + -4) = eax;
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
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 3;
    MEM32(ebp + 8) = eax;

loc_0042A9BF: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042A9DB; /* je: equal / zero */

loc_0042A9CF: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_0042A9DB: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042A9E4; /* jne: not equal / not zero */

loc_0042A9E2: ;
    goto loc_0042AA02;

loc_0042A9E4: ;
    goto loc_0042A9E6;

loc_0042A9E6: ;
    eax = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(eax, 8, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx + 1;
    MEM32(ebp + 8) = edx;
    ecx = ZX8(MEM8(ecx + 1));
    eax = eax | ecx;
    MEM32(ebp + -8) = eax;
    goto loc_0042A9BF;

loc_0042AA02: ;
    eax = MEM32(ebp + 8);
    eax = ZX8(MEM8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042AA18; /* je: equal / zero */

loc_0042AA0D: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xFFFFFFFDu;
    MEM32(ebp + -16) = eax;
    goto loc_0042AA1F;

loc_0042AA18: ;
    eax = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    goto loc_0042AA1F;

loc_0042AA1F: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x10;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042AA30
 * Original: 0x0042AA30 - 0x0042AF66 (1334 bytes, 387 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042AA30(void)
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
loc_0042AA30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x478)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + -76;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042AA5Cu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0042AA5C: ;
    MEM32(ebp + -12) = 0;

loc_0042AA63: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -12);
    ecx = ZX8(MEM8(eax + ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -1109) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042AA90; /* je: equal / zero */

loc_0042AA7A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    eax = ZX8(MEM8(eax + ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1109) = LO8(eax);

loc_0042AA90: ;
    SET_LO8(eax, MEM8(ebp + -1109));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042AA9C; /* jne: not equal / not zero */

loc_0042AA9A: ;
    goto loc_0042AAEC;

loc_0042AA9C: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -12);
    ecx = ZX8(MEM8(eax + ecx));
    ecx = ecx & 0x1F;
    eax = 1;
    _shift_result = RECOMP_SHIFT(eax, LO8(ecx), 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -12);
    eax = ZX8(MEM8(eax + edx));
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx | MEM32(ebp + eax * 4 + -76);
    MEM32(ebp + eax * 4 + -76) = ecx;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 1;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -12);
    eax = ZX8(MEM8(eax + edx));
    MEM32(ebp + eax * 4 + -1100) = ecx;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0042AA63;

loc_0042AAEC: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042AB04; /* je: equal / zero */

loc_0042AAF8: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042AF5B;

loc_0042AB04: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    MEM32(ebp + -20) = 0;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -24) = 1;

loc_0042AB20: ;
    eax = MEM32(ebp + -20);
    eax = eax + MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0042ABCE; /* jae: above or equal (unsigned >=) */

loc_0042AB2F: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    ecx = ecx + MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -20);
    edx = edx + MEM32(ebp + -24);
    ecx = ZX8(MEM8(ecx + edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042AB72; /* jne: not equal / not zero */

loc_0042AB4D: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042AB67; /* jne: not equal / not zero */

loc_0042AB55: ;
    eax = MEM32(ebp + -28);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 1;
    goto loc_0042AB70;

loc_0042AB67: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;

loc_0042AB70: ;
    goto loc_0042ABC9;

loc_0042AB72: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    ecx = ecx + MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -20);
    edx = edx + MEM32(ebp + -24);
    ecx = ZX8(MEM8(ecx + edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0042ABAB; /* jle: less or equal (signed <=) */

loc_0042AB90: ;
    eax = MEM32(ebp + -24);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 1;
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -16))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -28) = eax;
    goto loc_0042ABC7;

loc_0042ABAB: ;
    eax = MEM32(ebp + -20);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -24) = 1;

loc_0042ABC7: ;
    goto loc_0042ABC9;

loc_0042ABC9: ;
    goto loc_0042AB20;

loc_0042ABCE: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    MEM32(ebp + -20) = 0;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -24) = 1;

loc_0042ABF6: ;
    eax = MEM32(ebp + -20);
    eax = eax + MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0042ACA4; /* jae: above or equal (unsigned >=) */

loc_0042AC05: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    ecx = ecx + MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -20);
    edx = edx + MEM32(ebp + -24);
    ecx = ZX8(MEM8(ecx + edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042AC48; /* jne: not equal / not zero */

loc_0042AC23: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042AC3D; /* jne: not equal / not zero */

loc_0042AC2B: ;
    eax = MEM32(ebp + -28);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 1;
    goto loc_0042AC46;

loc_0042AC3D: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;

loc_0042AC46: ;
    goto loc_0042AC9F;

loc_0042AC48: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    ecx = ecx + MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -20);
    edx = edx + MEM32(ebp + -24);
    ecx = ZX8(MEM8(ecx + edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0042AC81; /* jge: greater or equal (signed >=) */

loc_0042AC66: ;
    eax = MEM32(ebp + -24);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 1;
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -16))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -28) = eax;
    goto loc_0042AC9D;

loc_0042AC81: ;
    eax = MEM32(ebp + -20);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -24) = 1;

loc_0042AC9D: ;
    goto loc_0042AC9F;

loc_0042AC9F: ;
    goto loc_0042ABF6;

loc_0042ACA4: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    ecx = MEM32(ebp + -32);
    ecx = ecx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0042ACBC; /* jbe: below or equal (unsigned <=) */

loc_0042ACB4: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -32) = eax;
    goto loc_0042ACC2;

loc_0042ACBC: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -28) = eax;

loc_0042ACC2: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + MEM32(ebp + -28);
    eax = MEM32(ebp + -32);
    eax = eax + 1;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042ACE1u); RECOMP_ABI_CALL(0x00428000u, sub_00428000); /* call 0x00428000 */

loc_0042ACE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042AD25; /* je: equal / zero */

loc_0042ACE6: ;
    MEM32(ebp + -44) = 0;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -32))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0042AD08; /* jbe: below or equal (unsigned <=) */

loc_0042ACFD: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -1116) = eax;
    goto loc_0042AD17;

loc_0042AD08: ;
    eax = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -32))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -1116) = eax;

loc_0042AD17: ;
    eax = MEM32(ebp + -1116);
    eax = eax + 1;
    MEM32(ebp + -28) = eax;
    goto loc_0042AD2E;

loc_0042AD25: ;
    eax = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -28))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -44) = eax;

loc_0042AD2E: ;
    MEM32(ebp + -40) = 0;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;

loc_0042AD3B: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0042ADB4; /* jae: above or equal (unsigned >=) */

loc_0042AD48: ;
    eax = MEM32(ebp + -12);
    eax = eax | 0x3F;
    MEM32(ebp + -1104) = eax;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -1104);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042AD73u); RECOMP_ABI_CALL(0x00427EC0u, sub_00427EC0); /* call 0x00427EC0 */

loc_0042AD73: ;
    MEM32(ebp + -1108) = eax;
    _fa = (uint32_t)(MEM32(ebp + -1108)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1108), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042ADA6; /* je: equal / zero */

loc_0042AD82: ;
    eax = MEM32(ebp + -1108);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0042ADA4; /* jae: above or equal (unsigned >=) */

loc_0042AD98: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042AF5B;

loc_0042ADA4: ;
    goto loc_0042ADB2;

loc_0042ADA6: ;
    eax = MEM32(ebp + -1104);
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;

loc_0042ADB2: ;
    goto loc_0042ADB4;

loc_0042ADB4: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = ZX8(MEM8(eax + ecx));
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    eax = MEM32(ebp + eax * 4 + -76);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    ecx = ZX8(MEM8(ecx + edx));
    ecx = ecx & 0x1F;
    edx = 1;
    _shift_result = RECOMP_SHIFT(edx, LO8(ecx), 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042AE2D; /* je: equal / zero */

loc_0042ADE8: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    ecx = ZX8(MEM8(ecx + edx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + ecx * 4 + -1100))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042AE2B; /* je: equal / zero */

loc_0042AE08: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0042AE16; /* jae: above or equal (unsigned >=) */

loc_0042AE10: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -24) = eax;

loc_0042AE16: ;
    eax = MEM32(ebp + -24);
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -40) = 0;
    goto loc_0042AD3B;

loc_0042AE2B: ;
    goto loc_0042AE42;

loc_0042AE2D: ;
    eax = MEM32(ebp + -12);
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -40) = 0;
    goto loc_0042AD3B;

loc_0042AE42: ;
    eax = MEM32(ebp + -32);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0042AE5B; /* jbe: below or equal (unsigned <=) */

loc_0042AE4D: ;
    eax = MEM32(ebp + -32);
    eax = eax + 1;
    MEM32(ebp + -1120) = eax;
    goto loc_0042AE64;

loc_0042AE5B: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -1120) = eax;

loc_0042AE64: ;
    eax = MEM32(ebp + -1120);
    MEM32(ebp + -24) = eax;

loc_0042AE6D: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    ecx = ZX8(MEM8(eax + ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -1121) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042AEA3; /* je: equal / zero */

loc_0042AE84: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -24);
    ecx = ZX8(MEM8(ecx + edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1121) = LO8(eax);

loc_0042AEA3: ;
    SET_LO8(eax, MEM8(ebp + -1121));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042AEAF; /* jne: not equal / not zero */

loc_0042AEAD: ;
    goto loc_0042AEBC;

loc_0042AEAF: ;
    goto loc_0042AEB1;

loc_0042AEB1: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_0042AE6D;

loc_0042AEBC: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM8(eax + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ecx), 0 (8-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042AEE0; /* je: equal / zero */

loc_0042AEC8: ;
    eax = MEM32(ebp + -24);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -32))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -40) = 0;
    goto loc_0042AD3B;

loc_0042AEE0: ;
    eax = MEM32(ebp + -32);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;

loc_0042AEE9: ;
    ecx = MEM32(ebp + -24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -1122) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_0042AF1E; /* jbe: below or equal (unsigned <=) */

loc_0042AEF9: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = ZX8(MEM8(eax + ecx));
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -24);
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    ecx = ZX8(MEM8(ecx + edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1122) = LO8(eax);

loc_0042AF1E: ;
    SET_LO8(eax, MEM8(ebp + -1122));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042AF2A; /* jne: not equal / not zero */

loc_0042AF28: ;
    goto loc_0042AF37;

loc_0042AF2A: ;
    goto loc_0042AF2C;

loc_0042AF2C: ;
    eax = MEM32(ebp + -24);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;
    goto loc_0042AEE9;

loc_0042AF37: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_A(_fa, _fb)) goto loc_0042AF47; /* ja: above (unsigned >) */

loc_0042AF3F: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0042AF5B;

loc_0042AF47: ;
    eax = MEM32(ebp + -28);
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -40) = eax;
    goto loc_0042AD3B;

loc_0042AF5B: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x478;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042AF70
 * Original: 0x0042AF70 - 0x0042B029 (185 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042AF70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042AF70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042AF9B; /* jne: not equal / not zero */

loc_0042AF82: ;
    eax = MEM32(0xDFCBC4);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042AF9B; /* jne: not equal / not zero */

loc_0042AF8F: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042B021;

loc_0042AF9B: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042AFADu); RECOMP_ABI_CALL(0x0042A580u, sub_0042A580); /* call 0x0042A580 */

loc_0042AFAD: ;
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042AFCE; /* jne: not equal / not zero */

loc_0042AFBB: ;
    MEM32(0xDFCBC4) = 0;
    MEM32(ebp + -4) = 0;
    goto loc_0042B021;

loc_0042AFCE: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042AFE6u); RECOMP_ABI_CALL(0x00429BC0u, sub_00429BC0); /* call 0x00429BC0 */

loc_0042AFE6: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    eax = eax + ecx;
    MEM32(0xDFCBC4) = eax;
    eax = MEM32(0xDFCBC4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B011; /* je: equal / zero */

loc_0042AFFC: ;
    eax = MEM32(0xDFCBC4);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(0xDFCBC4) = ecx;
    MEM8(eax) = 0;
    goto loc_0042B01B;

loc_0042B011: ;
    MEM32(0xDFCBC4) = 0;

loc_0042B01B: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_0042B021: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B030
 * Original: 0x0042B030 - 0x0042B0E1 (177 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B030(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B030: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0042B05B; /* jne: not equal / not zero */

loc_0042B045: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042B05B; /* jne: not equal / not zero */

loc_0042B052: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042B0D9;

loc_0042B05B: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B06Du); RECOMP_ABI_CALL(0x0042A580u, sub_0042A580); /* call 0x0042A580 */

loc_0042B06D: ;
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042B08D; /* jne: not equal / not zero */

loc_0042B07B: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    MEM32(ebp + -4) = 0;
    goto loc_0042B0D9;

loc_0042B08D: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B0A5u); RECOMP_ABI_CALL(0x00429BC0u, sub_00429BC0); /* call 0x00429BC0 */

loc_0042B0A5: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B0CA; /* je: equal / zero */

loc_0042B0B9: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = eax;
    edx = edx + 1;
    MEM32(ecx) = edx;
    MEM8(eax) = 0;
    goto loc_0042B0D3;

loc_0042B0CA: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;

loc_0042B0D3: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_0042B0D9: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B0F0
 * Original: 0x0042B0F0 - 0x0042B344 (596 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B0F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0042B0F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -16) = 0;
    MEM32(ebp + -20) = 0;

loc_0042B11D: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + ecx));
    ecx = MEM32(ebp + -12);
    edx = MEM32(ebp + -16);
    ecx = ZX8(MEM8(ecx + edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B1AA; /* jne: not equal / not zero */

loc_0042B135: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + ecx));
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B154; /* jne: not equal / not zero */

loc_0042B148: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042B33C;

loc_0042B154: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042B15C; /* jne: not equal / not zero */

loc_0042B15A: ;
    goto loc_0042B16E;

loc_0042B15C: ;
    eax = MEM32(ebp + -32);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B167u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_0042B167: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B18B; /* jne: not equal / not zero */

loc_0042B16C: ;
    goto loc_0042B179;

loc_0042B16E: ;
    eax = MEM32(ebp + -32);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_B(_fa, _fb)) goto loc_0042B18B; /* jb: below (unsigned <) */

loc_0042B179: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -28) = 1;
    goto loc_0042B19A;

loc_0042B18B: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0x30 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B198; /* je: equal / zero */

loc_0042B191: ;
    MEM32(ebp + -28) = 0;

loc_0042B198: ;
    goto loc_0042B19A;

loc_0042B19A: ;
    goto loc_0042B19C;

loc_0042B19C: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    goto loc_0042B11D;

loc_0042B1AA: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -20);
    eax = ZX8(MEM8(eax + ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x31)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0042B27E; /* jae: above or equal (unsigned >=) */

loc_0042B1C0: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -20);
    eax = ZX8(MEM8(eax + ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x31)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0042B27E; /* jae: above or equal (unsigned >=) */

loc_0042B1D6: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -24) = eax;

loc_0042B1DC: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0042B23A; /* jae: above or equal (unsigned >=) */

loc_0042B1EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042B1F6; /* jne: not equal / not zero */

loc_0042B1F4: ;
    goto loc_0042B20F;

loc_0042B1F6: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B208u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_0042B208: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B22D; /* jne: not equal / not zero */

loc_0042B20D: ;
    goto loc_0042B221;

loc_0042B20F: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_B(_fa, _fb)) goto loc_0042B22D; /* jb: below (unsigned <) */

loc_0042B221: ;
    MEM32(ebp + -4) = 1;
    goto loc_0042B33C;

loc_0042B22D: ;
    goto loc_0042B22F;

loc_0042B22F: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_0042B1DC;

loc_0042B23A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042B242; /* jne: not equal / not zero */

loc_0042B240: ;
    goto loc_0042B25B;

loc_0042B242: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B254u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_0042B254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B26D; /* jne: not equal / not zero */

loc_0042B259: ;
    goto loc_0042B279;

loc_0042B25B: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -24);
    eax = ZX8(MEM8(eax + ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0042B279; /* jae: above or equal (unsigned >=) */

loc_0042B26D: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0042B33C;

loc_0042B279: ;
    goto loc_0042B323;

loc_0042B27E: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B321; /* je: equal / zero */

loc_0042B288: ;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0042B321; /* jae: above or equal (unsigned >=) */

loc_0042B294: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042B29C; /* jne: not equal / not zero */

loc_0042B29A: ;
    goto loc_0042B2B5;

loc_0042B29C: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + ecx));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B2AEu); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_0042B2AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B2FA; /* jne: not equal / not zero */

loc_0042B2B3: ;
    goto loc_0042B2C7;

loc_0042B2B5: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_B(_fa, _fb)) goto loc_0042B2FA; /* jb: below (unsigned <) */

loc_0042B2C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042B2CF; /* jne: not equal / not zero */

loc_0042B2CD: ;
    goto loc_0042B2E8;

loc_0042B2CF: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + ecx));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B2E1u); RECOMP_ABI_CALL(0x003DABD0u, sub_003DABD0); /* call 0x003DABD0 */

loc_0042B2E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B2FA; /* jne: not equal / not zero */

loc_0042B2E6: ;
    goto loc_0042B321;

loc_0042B2E8: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0042B321; /* jae: above or equal (unsigned >=) */

loc_0042B2FA: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = ZX8(LO8(eax));
    ecx = MEM32(ebp + -12);
    edx = MEM32(ebp + -16);
    ecx = ZX8(MEM8(ecx + edx));
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    ecx = ZX8(LO8(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;
    goto loc_0042B33C;

loc_0042B321: ;
    goto loc_0042B323;

loc_0042B323: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    eax = ZX8(MEM8(eax + ecx));
    ecx = MEM32(ebp + -12);
    edx = MEM32(ebp + -16);
    ecx = ZX8(MEM8(ecx + edx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;

loc_0042B33C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B350
 * Original: 0x0042B350 - 0x0042B3A9 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B350(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0042B350: ;
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
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;

loc_0042B36B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 1 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0042B3A4; /* jle: less or equal (signed <=) */

loc_0042B371: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 1));
    eax = MEM32(ebp + -8);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax));
    eax = MEM32(ebp + -8);
    MEM8(eax + 1) = LO8(ecx);
    eax = MEM32(ebp + -8);
    eax = eax + 2;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -4);
    eax = eax + 2;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0x10);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(2)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + 0x10) = eax;
    goto loc_0042B36B;

loc_0042B3A4: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B3B0
 * Original: 0x0042B3B0 - 0x0042B3EA (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B3B0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042B3B0: ;
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
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B3CEu); RECOMP_ABI_CALL(0x0042B620u, sub_0042B620); /* call 0x0042B620 */

loc_0042B3CE: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B3DCu); RECOMP_ABI_CALL(0x0042B7A0u, sub_0042B7A0); /* call 0x0042B7A0 */

loc_0042B3DC: ;
    ecx = eax;
    eax = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B3F0
 * Original: 0x0042B3F0 - 0x0042B43B (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B3F0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042B3F0: ;
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
    PUSH32(esp, 0x0042B418u); RECOMP_ABI_CALL(0x0042BA70u, sub_0042BA70); /* call 0x0042BA70 */

loc_0042B418: ;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B42Du); RECOMP_ABI_CALL(0x0042BB00u, sub_0042BB00); /* call 0x0042BB00 */

loc_0042B42D: ;
    ecx = eax;
    eax = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B440
 * Original: 0x0042B440 - 0x0042B46B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B440(void)
{
    uint32_t ebp = g_ebp;

loc_0042B440: ;
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
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B466u); RECOMP_ABI_CALL(0x0042B7E0u, sub_0042B7E0); /* call 0x0042B7E0 */

loc_0042B466: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B470
 * Original: 0x0042B470 - 0x0042B496 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B470(void)
{
    uint32_t ebp = g_ebp;

loc_0042B470: ;
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
    PUSH32(esp, 0x0042B491u); RECOMP_ABI_CALL(0x0042B440u, sub_0042B440); /* call 0x0042B440 */

loc_0042B491: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B4A0
 * Original: 0x0042B4A0 - 0x0042B4DB (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B4A0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042B4A0: ;
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
    PUSH32(esp, 0x0042B4BDu); RECOMP_ABI_CALL(0x0042B7A0u, sub_0042B7A0); /* call 0x0042B7A0 */

loc_0042B4BD: ;
    ecx = MEM32(ebp + -4);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B4D3u); RECOMP_ABI_CALL(0x0042B620u, sub_0042B620); /* call 0x0042B620 */

loc_0042B4D3: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B4E0
 * Original: 0x0042B4E0 - 0x0042B575 (149 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B4E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042B4E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(ebp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0xC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042B513; /* jne: not equal / not zero */

loc_0042B4F4: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B505u); RECOMP_ABI_CALL(0x0042B7A0u, sub_0042B7A0); /* call 0x0042B7A0 */

loc_0042B505: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;
    goto loc_0042B56D;

loc_0042B513: ;
    goto loc_0042B515;

loc_0042B515: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B537; /* je: equal / zero */

loc_0042B525: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = ZX16(MEM16(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_0042B537: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042B540; /* jne: not equal / not zero */

loc_0042B53E: ;
    goto loc_0042B54D;

loc_0042B540: ;
    goto loc_0042B542;

loc_0042B542: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_0042B515;

loc_0042B54D: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B560; /* je: equal / zero */

loc_0042B558: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    goto loc_0042B567;

loc_0042B560: ;
    eax = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    goto loc_0042B567;

loc_0042B567: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -4) = eax;

loc_0042B56D: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B580
 * Original: 0x0042B580 - 0x0042B61A (154 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B580(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_0042B58C: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = MEM32(ebp + 0xC);
    edx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042B5C0; /* jne: not equal / not zero */

loc_0042B5A1: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B5C0; /* je: equal / zero */

loc_0042B5B1: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_0042B5C0: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042B5C9; /* jne: not equal / not zero */

loc_0042B5C7: ;
    goto loc_0042B5DF;

loc_0042B5C9: ;
    goto loc_0042B5CB;

loc_0042B5CB: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_0042B58C;

loc_0042B5DF: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042B5F9; /* jge: greater or equal (signed >=) */

loc_0042B5EF: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    goto loc_0042B612;

loc_0042B5F9: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;

loc_0042B612: ;
    eax = MEM32(ebp + -8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B620
 * Original: 0x0042B620 - 0x0042B65C (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B620(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_0042B630: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(eax, MEM16(eax));
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx + 2;
    MEM32(ebp + 8) = edx;
    MEM16(ecx) = LO16(eax);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B654; /* je: equal / zero */

loc_0042B652: ;
    goto loc_0042B630;

loc_0042B654: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B660
 * Original: 0x0042B660 - 0x0042B738 (216 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042B688; /* jne: not equal / not zero */

loc_0042B675: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B680u); RECOMP_ABI_CALL(0x0042B7A0u, sub_0042B7A0); /* call 0x0042B7A0 */

loc_0042B680: ;
    MEM32(ebp + -4) = eax;
    goto loc_0042B730;

loc_0042B688: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042B6D7; /* jne: not equal / not zero */

loc_0042B692: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -8) = ecx;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B6AAu); RECOMP_ABI_CALL(0x0042B4E0u, sub_0042B4E0); /* call 0x0042B4E0 */

loc_0042B6AA: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B6C1; /* je: equal / zero */

loc_0042B6B2: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = eax - ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    MEM32(ebp + -12) = eax;
    goto loc_0042B6CF;

loc_0042B6C1: ;
    eax = MEM32(ebp + -8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B6CCu); RECOMP_ABI_CALL(0x0042B7A0u, sub_0042B7A0); /* call 0x0042B7A0 */

loc_0042B6CC: ;
    MEM32(ebp + -12) = eax;

loc_0042B6CF: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;
    goto loc_0042B730;

loc_0042B6D7: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;

loc_0042B6DD: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B70D; /* je: equal / zero */

loc_0042B6ED: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B702u); RECOMP_ABI_CALL(0x0042B4E0u, sub_0042B4E0); /* call 0x0042B4E0 */

loc_0042B702: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -13) = LO8(eax);

loc_0042B70D: ;
    SET_LO8(eax, MEM8(ebp + -13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042B716; /* jne: not equal / not zero */

loc_0042B714: ;
    goto loc_0042B723;

loc_0042B716: ;
    goto loc_0042B718;

loc_0042B718: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_0042B6DD;

loc_0042B723: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = eax - ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    MEM32(ebp + -4) = eax;

loc_0042B730: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B740
 * Original: 0x0042B740 - 0x0042B7A0 (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B740(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042B740: ;
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
    PUSH32(esp, 0x0042B754u); RECOMP_ABI_CALL(0x0042B7A0u, sub_0042B7A0); /* call 0x0042B7A0 */

loc_0042B754: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B767u); RECOMP_ABI_CALL(0x003E64B0u, sub_003E64B0); /* call 0x003E64B0 */

loc_0042B767: ;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042B779; /* jne: not equal / not zero */

loc_0042B770: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042B798;

loc_0042B779: ;
    edx = MEM32(ebp + -12);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B795u); RECOMP_ABI_CALL(0x0042C350u, sub_0042C350); /* call 0x0042C350 */

loc_0042B795: ;
    MEM32(ebp + -4) = eax;

loc_0042B798: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B7A0
 * Original: 0x0042B7A0 - 0x0042B7D2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B7A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B7A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_0042B7AD: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B7C3; /* je: equal / zero */

loc_0042B7B6: ;
    goto loc_0042B7B8;

loc_0042B7B8: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_0042B7AD;

loc_0042B7C3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    eax = eax - ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B7E0
 * Original: 0x0042B7E0 - 0x0042B8DB (251 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B7E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0042B7E0: ;
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
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B80B; /* jne: not equal / not zero */

loc_0042B7FF: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042B8D3;

loc_0042B80B: ;
    goto loc_0042B80D;

loc_0042B80D: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B87F; /* je: equal / zero */

loc_0042B81D: ;
    eax = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B87F; /* je: equal / zero */

loc_0042B82D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B87F; /* je: equal / zero */

loc_0042B838: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = MEM32(ebp + 0xC);
    edx = ZX16(MEM16(eax));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _zf = (_fa == _fb);
    MEM8(ebp + -6) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B879; /* je: equal / zero */

loc_0042B84D: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B85Bu); RECOMP_ABI_CALL(0x003DB650u, sub_003DB650); /* call 0x003DB650 */

loc_0042B85B: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B86Cu); RECOMP_ABI_CALL(0x003DB650u, sub_003DB650); /* call 0x003DB650 */

loc_0042B86C: ;
    ecx = eax;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -6) = LO8(eax);

loc_0042B879: ;
    SET_LO8(eax, MEM8(ebp + -6));
    MEM8(ebp + -5) = LO8(eax);

loc_0042B87F: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042B888; /* jne: not equal / not zero */

loc_0042B886: ;
    goto loc_0042B8AA;

loc_0042B888: ;
    goto loc_0042B88A;

loc_0042B88A: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    goto loc_0042B80D;

loc_0042B8AA: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B8B8u); RECOMP_ABI_CALL(0x003DB650u, sub_003DB650); /* call 0x003DB650 */

loc_0042B8B8: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B8C9u); RECOMP_ABI_CALL(0x003DB650u, sub_003DB650); /* call 0x003DB650 */

loc_0042B8C9: ;
    ecx = eax;
    eax = MEM32(ebp + -16);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -4) = eax;

loc_0042B8D3: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B8E0
 * Original: 0x0042B8E0 - 0x0042B910 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B8E0(void)
{
    uint32_t ebp = g_ebp;

loc_0042B8E0: ;
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
    PUSH32(esp, 0x0042B90Bu); RECOMP_ABI_CALL(0x0042B7E0u, sub_0042B7E0); /* call 0x0042B7E0 */

loc_0042B90B: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B910
 * Original: 0x0042B910 - 0x0042B99A (138 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B910(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042B910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042B930u); RECOMP_ABI_CALL(0x0042B7A0u, sub_0042B7A0); /* call 0x0042B7A0 */

loc_0042B930: ;
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;

loc_0042B938: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B952; /* je: equal / zero */

loc_0042B943: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_0042B952: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042B95B; /* jne: not equal / not zero */

loc_0042B959: ;
    goto loc_0042B982;

loc_0042B95B: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + 8);
    edx = eax;
    edx = edx + 2;
    MEM32(ebp + 8) = edx;
    MEM16(eax) = LO16(ecx);
    goto loc_0042B938;

loc_0042B982: ;
    eax = MEM32(ebp + 8);
    ecx = eax;
    ecx = ecx + 2;
    MEM32(ebp + 8) = ecx;
    MEM16(eax) = 0;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042B9A0
 * Original: 0x0042B9A0 - 0x0042BA66 (198 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B9A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B9A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_0042B9AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B9EE; /* je: equal / zero */

loc_0042B9BA: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = MEM32(ebp + 0xC);
    edx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042B9EE; /* jne: not equal / not zero */

loc_0042B9CF: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042B9EE; /* je: equal / zero */

loc_0042B9DF: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_0042B9EE: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042B9F7; /* jne: not equal / not zero */

loc_0042B9F5: ;
    goto loc_0042BA16;

loc_0042B9F7: ;
    goto loc_0042B9F9;

loc_0042B9F9: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_0042B9AF;

loc_0042BA16: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BA57; /* je: equal / zero */

loc_0042BA1C: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042BA36; /* jge: greater or equal (signed >=) */

loc_0042BA2C: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    goto loc_0042BA4F;

loc_0042BA36: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;

loc_0042BA4F: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -12) = eax;
    goto loc_0042BA5E;

loc_0042BA57: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_0042BA5E;

loc_0042BA5E: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042BA70
 * Original: 0x0042BA70 - 0x0042BAF3 (131 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BA70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BA70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_0042BA85: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042BA9F; /* je: equal / zero */

loc_0042BA90: ;
    eax = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_0042BA9F: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042BAA8; /* jne: not equal / not zero */

loc_0042BAA6: ;
    goto loc_0042BACF;

loc_0042BAA8: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + 8);
    edx = eax;
    edx = edx + 2;
    MEM32(ebp + 8) = edx;
    MEM16(eax) = LO16(ecx);
    goto loc_0042BA85;

loc_0042BACF: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042BAEBu); RECOMP_ABI_CALL(0x0042C440u, sub_0042C440); /* call 0x0042C440 */

loc_0042BAEB: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042BB00
 * Original: 0x0042BB00 - 0x0042BB46 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BB00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BB00: ;
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
    PUSH32(esp, 0x0042BB28u); RECOMP_ABI_CALL(0x0042C230u, sub_0042C230); /* call 0x0042C230 */

loc_0042BB28: ;
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BB3E; /* je: equal / zero */

loc_0042BB31: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    eax = eax - ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    MEM32(ebp + 0xC) = eax;

loc_0042BB3E: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042BB50
 * Original: 0x0042BB50 - 0x0042BB98 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BB50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042BB50: ;
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
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042BB6Eu); RECOMP_ABI_CALL(0x0042B660u, sub_0042B660); /* call 0x0042B660 */

loc_0042BB6E: ;
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BB89; /* je: equal / zero */

loc_0042BB81: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0042BB90;

loc_0042BB89: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    goto loc_0042BB90;

loc_0042BB90: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042BBA0
 * Original: 0x0042BBA0 - 0x0042BC1E (126 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BBA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042BBA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042BBBEu); RECOMP_ABI_CALL(0x0042B7A0u, sub_0042B7A0); /* call 0x0042B7A0 */

loc_0042BBBE: ;
    ecx = eax;
    eax = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(ebp + -4) = eax;

loc_0042BBCA: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_0042BBE9; /* jb: below (unsigned <) */

loc_0042BBD7: ;
    eax = MEM32(ebp + -4);
    eax = ZX16(MEM16(eax));
    ecx = ZX16(MEM16(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_0042BBE9: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042BBF2; /* jne: not equal / not zero */

loc_0042BBF0: ;
    goto loc_0042BBFF;

loc_0042BBF2: ;
    goto loc_0042BBF4;

loc_0042BBF4: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0xFFFFFFFEu;
    MEM32(ebp + -4) = eax;
    goto loc_0042BBCA;

loc_0042BBFF: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042BC0F; /* jb: below (unsigned <) */

loc_0042BC07: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    goto loc_0042BC16;

loc_0042BC0F: ;
    eax = 0; /* xor self */
    MEM32(ebp + -16) = eax;
    goto loc_0042BC16;

loc_0042BC16: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042BC20
 * Original: 0x0042BC20 - 0x0042BC85 (101 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BC20(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BC20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_0042BC32: ;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -5) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042BC60; /* je: equal / zero */

loc_0042BC42: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042BC57u); RECOMP_ABI_CALL(0x0042B4E0u, sub_0042B4E0); /* call 0x0042B4E0 */

loc_0042BC57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -5) = LO8(eax);

loc_0042BC60: ;
    SET_LO8(eax, MEM8(ebp + -5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042BC69; /* jne: not equal / not zero */

loc_0042BC67: ;
    goto loc_0042BC76;

loc_0042BC69: ;
    goto loc_0042BC6B;

loc_0042BC6B: ;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_0042BC32;

loc_0042BC76: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    eax = eax - ecx;
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042BC90
 * Original: 0x0042BC90 - 0x0042BD1F (143 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BC90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0042BC90: ;
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
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042BCAD; /* jne: not equal / not zero */

loc_0042BCA5: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0042BD17;

loc_0042BCAD: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042BCBF; /* jne: not equal / not zero */

loc_0042BCB6: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042BD17;

loc_0042BCBF: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    eax = ZX16(MEM16(eax));
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042BCD4u); RECOMP_ABI_CALL(0x0042B4E0u, sub_0042B4E0); /* call 0x0042B4E0 */

loc_0042BCD4: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042BCE7; /* je: equal / zero */

loc_0042BCDD: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042BCEF; /* jne: not equal / not zero */

loc_0042BCE7: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0042BD17;

loc_0042BCEF: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042BD02; /* jne: not equal / not zero */

loc_0042BCF9: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042BD17;

loc_0042BD02: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042BD14u); RECOMP_ABI_CALL(0x0042BD20u, sub_0042BD20); /* call 0x0042BD20 */

loc_0042BD14: ;
    MEM32(ebp + -4) = eax;

loc_0042BD17: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042BD20
 * Original: 0x0042BD20 - 0x0042C133 (1043 bytes, 328 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BD20(void)
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
loc_0042BD20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x58)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = 0;

loc_0042BD33: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -12);
    ecx = ZX16(MEM16(eax + ecx * 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -53) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042BD5A; /* je: equal / zero */

loc_0042BD47: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    eax = ZX16(MEM16(eax + ecx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -53) = LO8(eax);

loc_0042BD5A: ;
    SET_LO8(eax, MEM8(ebp + -53));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042BD63; /* jne: not equal / not zero */

loc_0042BD61: ;
    goto loc_0042BD70;

loc_0042BD63: ;
    goto loc_0042BD65;

loc_0042BD65: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0042BD33;

loc_0042BD70: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM16(eax + ecx * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + ecx * 2), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042BD89; /* je: equal / zero */

loc_0042BD7D: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042C12B;

loc_0042BD89: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    MEM32(ebp + -20) = 0;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -24) = 1;

loc_0042BDA5: ;
    eax = MEM32(ebp + -20);
    eax = eax + MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0042BE53; /* jae: above or equal (unsigned >=) */

loc_0042BDB4: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    ecx = ecx + MEM32(ebp + -24);
    eax = ZX16(MEM16(eax + ecx * 2));
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -20);
    edx = edx + MEM32(ebp + -24);
    ecx = ZX16(MEM16(ecx + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042BDF7; /* jne: not equal / not zero */

loc_0042BDD2: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042BDEC; /* jne: not equal / not zero */

loc_0042BDDA: ;
    eax = MEM32(ebp + -28);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 1;
    goto loc_0042BDF5;

loc_0042BDEC: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;

loc_0042BDF5: ;
    goto loc_0042BE4E;

loc_0042BDF7: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    ecx = ecx + MEM32(ebp + -24);
    eax = ZX16(MEM16(eax + ecx * 2));
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -20);
    edx = edx + MEM32(ebp + -24);
    ecx = ZX16(MEM16(ecx + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_LE(_fas, _fbs)) goto loc_0042BE30; /* jle: less or equal (signed <=) */

loc_0042BE15: ;
    eax = MEM32(ebp + -24);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 1;
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -16))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -28) = eax;
    goto loc_0042BE4C;

loc_0042BE30: ;
    eax = MEM32(ebp + -20);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -24) = 1;

loc_0042BE4C: ;
    goto loc_0042BE4E;

loc_0042BE4E: ;
    goto loc_0042BDA5;

loc_0042BE53: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    MEM32(ebp + -20) = 0;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -24) = 1;

loc_0042BE7B: ;
    eax = MEM32(ebp + -20);
    eax = eax + MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0042BF29; /* jae: above or equal (unsigned >=) */

loc_0042BE8A: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    ecx = ecx + MEM32(ebp + -24);
    eax = ZX16(MEM16(eax + ecx * 2));
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -20);
    edx = edx + MEM32(ebp + -24);
    ecx = ZX16(MEM16(ecx + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042BECD; /* jne: not equal / not zero */

loc_0042BEA8: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -28) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042BEC2; /* jne: not equal / not zero */

loc_0042BEB0: ;
    eax = MEM32(ebp + -28);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 1;
    goto loc_0042BECB;

loc_0042BEC2: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;

loc_0042BECB: ;
    goto loc_0042BF24;

loc_0042BECD: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -16);
    ecx = ecx + MEM32(ebp + -24);
    eax = ZX16(MEM16(eax + ecx * 2));
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -20);
    edx = edx + MEM32(ebp + -24);
    ecx = ZX16(MEM16(ecx + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_GE(_fas, _fbs)) goto loc_0042BF06; /* jge: greater or equal (signed >=) */

loc_0042BEEB: ;
    eax = MEM32(ebp + -24);
    eax = eax + MEM32(ebp + -20);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = 1;
    eax = MEM32(ebp + -20);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -16))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -28) = eax;
    goto loc_0042BF22;

loc_0042BF06: ;
    eax = MEM32(ebp + -20);
    ecx = eax;
    ecx = ecx + 1;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -24) = 1;

loc_0042BF22: ;
    goto loc_0042BF24;

loc_0042BF24: ;
    goto loc_0042BE7B;

loc_0042BF29: ;
    eax = MEM32(ebp + -16);
    eax = eax + 1;
    ecx = MEM32(ebp + -32);
    ecx = ecx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0042BF41; /* jbe: below or equal (unsigned <=) */

loc_0042BF39: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -32) = eax;
    goto loc_0042BF47;

loc_0042BF41: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -28) = eax;

loc_0042BF47: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + -32);
    eax = eax + 1;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042BF6Au); RECOMP_ABI_CALL(0x0042C2A0u, sub_0042C2A0); /* call 0x0042C2A0 */

loc_0042BF6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042BFA5; /* je: equal / zero */

loc_0042BF6F: ;
    MEM32(ebp + -44) = 0;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(ebp + -32))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0042BF8E; /* jbe: below or equal (unsigned <=) */

loc_0042BF86: ;
    eax = MEM32(ebp + -32);
    MEM32(ebp + -60) = eax;
    goto loc_0042BF9A;

loc_0042BF8E: ;
    eax = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -32))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -60) = eax;

loc_0042BF9A: ;
    eax = MEM32(ebp + -60);
    eax = eax + 1;
    MEM32(ebp + -28) = eax;
    goto loc_0042BFAE;

loc_0042BFA5: ;
    eax = MEM32(ebp + -12);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -28))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -44) = eax;

loc_0042BFAE: ;
    MEM32(ebp + -40) = 0;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;

loc_0042BFBB: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0042C028; /* jae: above or equal (unsigned >=) */

loc_0042BFCA: ;
    eax = MEM32(ebp + -12);
    eax = eax | 0x3F;
    MEM32(ebp + -48) = eax;
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -48);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042BFEFu); RECOMP_ABI_CALL(0x0042C230u, sub_0042C230); /* call 0x0042C230 */

loc_0042BFEF: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042C01B; /* je: equal / zero */

loc_0042BFF8: ;
    eax = MEM32(ebp + -52);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    eax = RECOMP_SAR(eax, 1, 32, NULL);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_AE(_fa, _fb)) goto loc_0042C019; /* jae: above or equal (unsigned >=) */

loc_0042C00D: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042C12B;

loc_0042C019: ;
    goto loc_0042C026;

loc_0042C01B: ;
    eax = MEM32(ebp + -48);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + -8) = eax;

loc_0042C026: ;
    goto loc_0042C028;

loc_0042C028: ;
    eax = MEM32(ebp + -32);
    eax = eax + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_BE(_fa, _fb)) goto loc_0042C03E; /* jbe: below or equal (unsigned <=) */

loc_0042C033: ;
    eax = MEM32(ebp + -32);
    eax = eax + 1;
    MEM32(ebp + -64) = eax;
    goto loc_0042C044;

loc_0042C03E: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -64) = eax;

loc_0042C044: ;
    eax = MEM32(ebp + -64);
    MEM32(ebp + -24) = eax;

loc_0042C04A: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    ecx = ZX16(MEM16(eax + ecx * 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -65) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042C07A; /* je: equal / zero */

loc_0042C05E: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    eax = ZX16(MEM16(eax + ecx * 2));
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -24);
    ecx = ZX16(MEM16(ecx + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -65) = LO8(eax);

loc_0042C07A: ;
    SET_LO8(eax, MEM8(ebp + -65));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042C083; /* jne: not equal / not zero */

loc_0042C081: ;
    goto loc_0042C090;

loc_0042C083: ;
    goto loc_0042C085;

loc_0042C085: ;
    eax = MEM32(ebp + -24);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;
    goto loc_0042C04A;

loc_0042C090: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM16(eax + ecx * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + ecx * 2), 0 (16-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042C0B7; /* je: equal / zero */

loc_0042C09D: ;
    eax = MEM32(ebp + -24);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -32))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -40) = 0;
    goto loc_0042BFBB;

loc_0042C0B7: ;
    eax = MEM32(ebp + -32);
    eax = eax + 1;
    MEM32(ebp + -24) = eax;

loc_0042C0C0: ;
    ecx = MEM32(ebp + -24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -66) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_0042C0EF; /* jbe: below or equal (unsigned <=) */

loc_0042C0CD: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = ZX16(MEM16(eax + ecx * 2));
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + -24);
    { uint32_t _zr = ((uint32_t)(edx) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    edx = _zr; }
    ecx = ZX16(MEM16(ecx + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -66) = LO8(eax);

loc_0042C0EF: ;
    SET_LO8(eax, MEM8(ebp + -66));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042C0F8; /* jne: not equal / not zero */

loc_0042C0F6: ;
    goto loc_0042C105;

loc_0042C0F8: ;
    goto loc_0042C0FA;

loc_0042C0FA: ;
    eax = MEM32(ebp + -24);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;
    goto loc_0042C0C0;

loc_0042C105: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_A(_fa, _fb)) goto loc_0042C115; /* ja: above (unsigned >) */

loc_0042C10D: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0042C12B;

loc_0042C115: ;
    eax = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + -44);
    MEM32(ebp + -40) = eax;
    goto loc_0042BFBB;

loc_0042C12B: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C140
 * Original: 0x0042C140 - 0x0042C1FC (188 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C140(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042C140: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0042C16E; /* jne: not equal / not zero */

loc_0042C155: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042C16E; /* jne: not equal / not zero */

loc_0042C162: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042C1F4;

loc_0042C16E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C180u); RECOMP_ABI_CALL(0x0042BC20u, sub_0042BC20); /* call 0x0042BC20 */

loc_0042C180: ;
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042C1A3; /* jne: not equal / not zero */

loc_0042C191: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    MEM32(ebp + -4) = 0;
    goto loc_0042C1F4;

loc_0042C1A3: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C1BBu); RECOMP_ABI_CALL(0x0042B660u, sub_0042B660); /* call 0x0042B660 */

loc_0042C1BB: ;
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(eax, 1, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C1E5; /* je: equal / zero */

loc_0042C1D2: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = eax;
    edx = edx + 2;
    MEM32(ecx) = edx;
    MEM16(eax) = 0;
    goto loc_0042C1EE;

loc_0042C1E5: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;

loc_0042C1EE: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_0042C1F4: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C200
 * Original: 0x0042C200 - 0x0042C223 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C200(void)
{
    uint32_t ebp = g_ebp;

loc_0042C200: ;
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
    PUSH32(esp, 0x0042C21Eu); RECOMP_ABI_CALL(0x0042BC90u, sub_0042BC90); /* call 0x0042BC90 */

loc_0042C21E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C230
 * Original: 0x0042C230 - 0x0042C299 (105 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C230(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);

loc_0042C240: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042C25D; /* je: equal / zero */

loc_0042C24B: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = ZX16(MEM16(ebp + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_0042C25D: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042C266; /* jne: not equal / not zero */

loc_0042C264: ;
    goto loc_0042C27C;

loc_0042C266: ;
    goto loc_0042C268;

loc_0042C268: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    goto loc_0042C240;

loc_0042C27C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C28A; /* je: equal / zero */

loc_0042C282: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    goto loc_0042C291;

loc_0042C28A: ;
    eax = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    goto loc_0042C291;

loc_0042C291: ;
    eax = MEM32(ebp + -8);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C2A0
 * Original: 0x0042C2A0 - 0x0042C346 (166 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C2A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C2A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_0042C2AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042C2CE; /* je: equal / zero */

loc_0042C2BA: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -1) = LO8(eax);

loc_0042C2CE: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042C2D7; /* jne: not equal / not zero */

loc_0042C2D5: ;
    goto loc_0042C2F6;

loc_0042C2D7: ;
    goto loc_0042C2D9;

loc_0042C2D9: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 2;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + 2;
    MEM32(ebp + 0xC) = eax;
    goto loc_0042C2AF;

loc_0042C2F6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C337; /* je: equal / zero */

loc_0042C2FC: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042C316; /* jge: greater or equal (signed >=) */

loc_0042C30C: ;
    eax = 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    goto loc_0042C32F;

loc_0042C316: ;
    eax = MEM32(ebp + 8);
    eax = ZX16(MEM16(eax));
    ecx = MEM32(ebp + 0xC);
    ecx = ZX16(MEM16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;

loc_0042C32F: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -12) = eax;
    goto loc_0042C33E;

loc_0042C337: ;
    eax = 0; /* xor self */
    MEM32(ebp + -12) = eax;
    goto loc_0042C33E;

loc_0042C33E: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0xC;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C350
 * Original: 0x0042C350 - 0x0042C399 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C350(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C350: ;
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

loc_0042C363: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C391; /* je: equal / zero */

loc_0042C373: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + 8);
    edx = eax;
    edx = edx + 2;
    MEM32(ebp + 8) = edx;
    MEM16(eax) = LO16(ecx);
    goto loc_0042C363;

loc_0042C391: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C3A0
 * Original: 0x0042C3A0 - 0x0042C440 (160 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C3A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042C3A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042C3C5; /* jne: not equal / not zero */

loc_0042C3BD: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    goto loc_0042C438;

loc_0042C3C5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = eax - ecx;
    ecx = MEM32(ebp + 0x10);
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0042C400; /* jae: above or equal (unsigned >=) */

loc_0042C3D6: ;
    goto loc_0042C3D8;

loc_0042C3D8: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C3FE; /* je: equal / zero */

loc_0042C3E8: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    SET_LO16(edx, MEM16(eax + ecx * 2));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    MEM16(eax + ecx * 2) = LO16(edx);
    goto loc_0042C3D8;

loc_0042C3FE: ;
    goto loc_0042C432;

loc_0042C400: ;
    goto loc_0042C402;

loc_0042C402: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C430; /* je: equal / zero */

loc_0042C412: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax;
    ecx = ecx + 2;
    MEM32(ebp + 0xC) = ecx;
    SET_LO16(ecx, MEM16(eax));
    eax = MEM32(ebp + 8);
    edx = eax;
    edx = edx + 2;
    MEM32(ebp + 8) = edx;
    MEM16(eax) = LO16(ecx);
    goto loc_0042C402;

loc_0042C430: ;
    goto loc_0042C432;

loc_0042C432: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;

loc_0042C438: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C440
 * Original: 0x0042C440 - 0x0042C480 (64 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C440(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    SET_LO16(eax, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;

loc_0042C454: ;
    eax = MEM32(ebp + 0x10);
    ecx = eax;
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C478; /* je: equal / zero */

loc_0042C464: ;
    SET_LO16(ecx, MEM16(ebp + 0xC));
    eax = MEM32(ebp + 8);
    edx = eax;
    edx = edx + 2;
    MEM32(ebp + 8) = edx;
    MEM16(eax) = LO16(ecx);
    goto loc_0042C454;

loc_0042C478: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C480
 * Original: 0x0042C480 - 0x0042C507 (135 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C480(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042C480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = esp;
    ecx = ebp + -20;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C49Cu); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_0042C49C: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -12);
    eax = eax + ecx;
    MEM32(ebp + -28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C4ACu); RECOMP_ABI_CALL(0x0042C510u, sub_0042C510); /* call 0x0042C510 */

loc_0042C4AC: ;
    ecx = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ecx + 0x18);
    edx = ecx;
    _shift_result = RECOMP_SHIFT(edx, 0x10, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    ecx = ecx + edx;
    eax = eax + ecx;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -4) = 0;

loc_0042C4C7: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042C4FF; /* jge: greater or equal (signed >=) */

loc_0042C4CD: ;
    eax = MEM32(ebp + -24);
    eax = eax & 0xF;
    eax = eax + 0x41;
    ecx = MEM32(ebp + -24);
    ecx = ecx & 0x10;
    _shift_result = RECOMP_SHIFT(ecx, 1, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    SET_LO8(edx, LO8(eax));
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM8(eax + ecx) = LO8(edx);
    eax = MEM32(ebp + -4);
    eax = eax + 1;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -24);
    _shift_result = RECOMP_SHIFT(eax, 5, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    MEM32(ebp + -24) = eax;
    goto loc_0042C4C7;

loc_0042C4FF: ;
    eax = MEM32(ebp + 8);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C510
 * Original: 0x0042C510 - 0x0042C520 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C510(void)
{
    uint32_t ebp = g_ebp;

loc_0042C510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C51Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0042C51B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C520
 * Original: 0x0042C520 - 0x0042C653 (307 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C520(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0042C520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x28)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(0xDFBFF7));
    eax = SX8(LO8(eax));
    MEM32(ebp + -4) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042C53F; /* jne: not equal / not zero */

loc_0042C53A: ;
    goto loc_0042C64E;

loc_0042C53F: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80000001u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C55Cu); RECOMP_ABI_CALL(0x0042C660u, sub_0042C660); /* call 0x0042C660 */

loc_0042C55C: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0042C56C; /* jge: greater or equal (signed >=) */

loc_0042C565: ;
    MEM8(0xDFBFF7) = 0;

loc_0042C56C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042C577; /* jne: not equal / not zero */

loc_0042C572: ;
    goto loc_0042C64E;

loc_0042C577: ;
    MEM32(ebp + -12) = 0;

loc_0042C57E: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0xA (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0042C5D7; /* jae: above or equal (unsigned >=) */

loc_0042C584: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0042C595; /* jge: greater or equal (signed >=) */

loc_0042C58A: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x80000001u)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -8) = eax;

loc_0042C595: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    eax = eax + 0x80000000u;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C5B6u); RECOMP_ABI_CALL(0x0042C660u, sub_0042C660); /* call 0x0042C660 */

loc_0042C5B6: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042C5C6; /* jne: not equal / not zero */

loc_0042C5C1: ;
    goto loc_0042C64E;

loc_0042C5C6: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    goto loc_0042C57E;

loc_0042C5D7: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C5EAu); RECOMP_ABI_CALL(0x0042C690u, sub_0042C690); /* call 0x0042C690 */

loc_0042C5EA: ;
    eax = eax + 1;
    MEM32(ebp + -8) = eax;

loc_0042C5F0: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0042C61B; /* jge: greater or equal (signed >=) */

loc_0042C5F6: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C610u); RECOMP_ABI_CALL(0x0042C6B0u, sub_0042C6B0); /* call 0x0042C6B0 */

loc_0042C610: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(0x80000001u)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -8) = eax;

loc_0042C61B: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -8);
    eax = eax + 0x80000000u;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C639u); RECOMP_ABI_CALL(0x0042C660u, sub_0042C660); /* call 0x0042C660 */

loc_0042C639: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042C646; /* jne: not equal / not zero */

loc_0042C644: ;
    goto loc_0042C64E;

loc_0042C646: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    goto loc_0042C5F0;

loc_0042C64E: ;
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C660
 * Original: 0x0042C660 - 0x0042C681 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C660(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C660: ;
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
 * sub_0042C690
 * Original: 0x0042C690 - 0x0042C6AB (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C690(void)
{
    uint32_t ebp = g_ebp;

loc_0042C690: ;
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
 * sub_0042C6B0
 * Original: 0x0042C6B0 - 0x0042C78D (221 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C6B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C6B0: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0042C6CF; /* je: equal / zero */

loc_0042C6C8: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0042C6CF: ;
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
    PUSH32(esp, 0x0042C721u); RECOMP_ABI_CALL(0x0042C8C0u, sub_0042C8C0); /* call 0x0042C8C0 */

loc_0042C721: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042C782; /* jne: not equal / not zero */

loc_0042C72D: ;
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
    PUSH32(esp, 0x0042C779u); RECOMP_ABI_CALL(0x0042C8C0u, sub_0042C8C0); /* call 0x0042C8C0 */

loc_0042C779: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_0042C782: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C790
 * Original: 0x0042C790 - 0x0042C7DF (79 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C790(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042C7DA; /* jge: greater or equal (signed >=) */

loc_0042C7A3: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x7FFFFFFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C7B6u); RECOMP_ABI_CALL(0x0042C690u, sub_0042C690); /* call 0x0042C690 */

loc_0042C7B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000001u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C7D8; /* je: equal / zero */

loc_0042C7BD: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042C7D8u); RECOMP_ABI_CALL(0x0042C7E0u, sub_0042C7E0); /* call 0x0042C7E0 */

loc_0042C7D8: ;
    goto loc_0042C7DA;

loc_0042C7DA: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C7E0
 * Original: 0x0042C7E0 - 0x0042C8B1 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C7E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C7E0: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0042C7FF; /* je: equal / zero */

loc_0042C7F8: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0042C7FF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042C80C; /* jge: greater or equal (signed >=) */

loc_0042C805: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0042C80C: ;
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
    PUSH32(esp, 0x0042C853u); RECOMP_ABI_CALL(0x0042C970u, sub_0042C970); /* call 0x0042C970 */

loc_0042C853: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042C8A6; /* jne: not equal / not zero */

loc_0042C85F: ;
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
    PUSH32(esp, 0x0042C89Du); RECOMP_ABI_CALL(0x0042C970u, sub_0042C970); /* call 0x0042C970 */

loc_0042C89D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_0042C8A6: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C8C0
 * Original: 0x0042C8C0 - 0x0042C96B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C8C0(void)
{
    uint32_t ebp = g_ebp;

loc_0042C8C0: ;
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
    PUSH32(esp, 0x0042C963u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042C963: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042C970
 * Original: 0x0042C970 - 0x0042CA0B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C970(void)
{
    uint32_t ebp = g_ebp;

loc_0042C970: ;
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
    PUSH32(esp, 0x0042CA03u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042CA03: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042CA10
 * Original: 0x0042CA10 - 0x0042CADB (203 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CA10(void)
{
    uint32_t ebp = g_ebp;

loc_0042CA10: ;
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
    PUSH32(esp, 0x0042CAD3u); RECOMP_ABI_CALL(0x0042CBB0u, sub_0042CBB0); /* call 0x0042CBB0 */

loc_0042CAD3: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042CAE0
 * Original: 0x0042CAE0 - 0x0042CBAB (203 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CAE0(void)
{
    uint32_t ebp = g_ebp;

loc_0042CAE0: ;
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
    PUSH32(esp, 0x0042CBA3u); RECOMP_ABI_CALL(0x0042CA10u, sub_0042CA10); /* call 0x0042CA10 */

loc_0042CBA3: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042CBB0
 * Original: 0x0042CBB0 - 0x0042CC7B (203 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CBB0(void)
{
    uint32_t ebp = g_ebp;

loc_0042CBB0: ;
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
    PUSH32(esp, 0x0042CC73u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042CC73: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042CC80
 * Original: 0x0042CC80 - 0x0042CDB3 (307 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CC80(void)
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
loc_0042CC80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34));
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x34)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -32) = 0;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042CCAA; /* je: equal / zero */

loc_0042CCA3: ;
    MEM32(ebp + 0x18) = 0x80;

loc_0042CCAA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042CD48; /* je: equal / zero */

loc_0042CCB4: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B9ACA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0x3B9ACA00 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0042CCCC; /* jb: below (unsigned <) */

loc_0042CCC0: ;
    MEM32(ebp + -8) = 0x16;
    goto loc_0042CDAA;

loc_0042CCCC: ;
    ecx = MEM32(ebp + 0x10);
    eax = ebp + -28;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042CCDEu); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_0042CCDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042CCEF; /* je: equal / zero */

loc_0042CCE3: ;
    MEM32(ebp + -8) = 0x16;
    goto loc_0042CDAA;

loc_0042CCEF: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    esi = MEM32(ebp + -28);
    edx = MEM32(ebp + -24);
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
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(eax + 8);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -20)));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(MEM32(ebp + -20))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0042CD30; /* jge: greater or equal (signed >=) */

loc_0042CD18: ;
    eax = MEM32(ebp + -24);
    _cf = (int)((((uint64_t)(MEM32(ebp + -28)) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    MEM32(ebp + -28) = MEM32(ebp + -28) + 0xFFFFFFFFu;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -20);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3B9ACA00)) >> 32) & 1);
    eax = eax + 0x3B9ACA00;
    MEM32(ebp + -20) = eax;

loc_0042CD30: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int32_t)(_fa & _fb) < 0);
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_0042CD42; /* jns: not sign (positive) */

loc_0042CD37: ;
    goto loc_0042CD39;

loc_0042CD39: ;
    MEM32(ebp + -8) = 0x6E;
    goto loc_0042CDAA;

loc_0042CD42: ;
    eax = ebp + -28;
    MEM32(ebp + -32) = eax;

loc_0042CD48: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0x18);
    _cf = 0; /* logical op clears CF */
    edx = edx | 0;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -32);
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042CD6Bu); RECOMP_ABI_CALL(0x0042CDC0u, sub_0042CDC0); /* call 0x0042CDC0 */

loc_0042CD6B: ;
    ecx = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(ecx)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042CD8D; /* je: equal / zero */

loc_0042CD7A: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x6E (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042CD8D; /* je: equal / zero */

loc_0042CD80: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x7D (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042CD8D; /* je: equal / zero */

loc_0042CD86: ;
    MEM32(ebp + -12) = 0;

loc_0042CD8D: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042CDA4; /* jne: not equal / not zero */

loc_0042CD93: ;
    eax = MEM32(0xDFC374);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042CDA4; /* jne: not equal / not zero */

loc_0042CD9D: ;
    MEM32(ebp + -12) = 0;

loc_0042CDA4: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -8) = eax;

loc_0042CDAA: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34)) >> 32) & 1);
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042CDC0
 * Original: 0x0042CDC0 - 0x0042CEEB (299 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CDC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CDC0: ;
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
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ebx = MEM32(ebp + 0x10);
    eax = ebx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -32) = eax;
    ecx = edx;
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
    MEM32(eax + 0x34) = 0;
    MEM32(eax + 0x30) = 0;
    MEM32(eax + 0x2C) = 0;
    MEM32(eax + 0x28) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042CE4Cu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0042CE4C: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0xFFFFFFDAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042CE60; /* je: equal / zero */

loc_0042CE55: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;
    goto loc_0042CEE0;

loc_0042CE60: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -40) = eax;
    edx = 0; /* xor self */
    edi = MEM32(ebp + 0xC);
    esi = edi;
    esi = esi & 0xFFFFFF7Fu;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ebx = MEM32(ebp + 0x10);
    eax = ebx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -48) = eax;
    ecx = edx;
    eax = esp;
    MEM32(ebp + -52) = eax;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -48);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(ebp + -44);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -40);
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
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042CEDDu); RECOMP_ABI_CALL(0x0042CAE0u, sub_0042CAE0); /* call 0x0042CAE0 */

loc_0042CEDD: ;
    MEM32(ebp + -16) = eax;

loc_0042CEE0: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x6C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042CEF0
 * Original: 0x0042CEF0 - 0x0042CF63 (115 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CEF0(void)
{
    uint32_t ebp = g_ebp;

loc_0042CEF0: ;
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
    eax = ebp + -12;
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042CF1Au); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_0042CF1A: ;
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
    PUSH32(esp, 0x0042CF41u); RECOMP_ABI_CALL(0x0042CC80u, sub_0042CC80); /* call 0x0042CC80 */

loc_0042CF41: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042CF59u); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_0042CF59: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042CF70
 * Original: 0x0042CF70 - 0x0042D0E7 (375 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CF70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CF70: ;
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
    MEM32(ebp + -16) = 0x64;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042CF99; /* je: equal / zero */

loc_0042CF92: ;
    MEM32(ebp + 0x14) = 0x80;

loc_0042CF99: ;
    goto loc_0042CF9B;

loc_0042CF9B: ;
    ecx = MEM32(ebp + -16);
    eax = ecx;
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -16) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -17) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042CFD1; /* je: equal / zero */

loc_0042CFB0: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM8(ebp + -18) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042CFCB; /* je: equal / zero */

loc_0042CFBB: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -18) = LO8(eax);

loc_0042CFCB: ;
    SET_LO8(eax, MEM8(ebp + -18));
    MEM8(ebp + -17) = LO8(eax);

loc_0042CFD1: ;
    SET_LO8(eax, MEM8(ebp + -17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042CFDA; /* jne: not equal / not zero */

loc_0042CFD8: ;
    goto loc_0042CFF2;

loc_0042CFDA: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042CFEB; /* jne: not equal / not zero */

loc_0042CFE4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042CFE9u); RECOMP_ABI_CALL(0x0042D1E0u, sub_0042D1E0); /* call 0x0042D1E0 */

loc_0042CFE9: ;
    goto loc_0042CFF0;

loc_0042CFEB: ;
    goto loc_0042D0DF;

loc_0042CFF0: ;
    goto loc_0042CF9B;

loc_0042CFF2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D003; /* je: equal / zero */

loc_0042CFF8: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D003u); RECOMP_ABI_CALL(0x0042D0F0u, sub_0042D0F0); /* call 0x0042D0F0 */

loc_0042D003: ;
    goto loc_0042D005;

loc_0042D005: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042D0CE; /* jne: not equal / not zero */

loc_0042D013: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0x14);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ebx = MEM32(ebp + 0x10);
    ecx = ebx;
    ecx = RECOMP_SAR(ecx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -28) = eax;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(ebp + -24);
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
    PUSH32(esp, 0x0042D065u); RECOMP_ABI_CALL(0x0042D110u, sub_0042D110); /* call 0x0042D110 */

loc_0042D065: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -19) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042D0C6; /* jne: not equal / not zero */

loc_0042D071: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0x10);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(ebp + -32) = eax;
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
    PUSH32(esp, 0x0042D0BDu); RECOMP_ABI_CALL(0x0042D110u, sub_0042D110); /* call 0x0042D110 */

loc_0042D0BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -19) = LO8(eax);

loc_0042D0C6: ;
    SET_LO8(eax, MEM8(ebp + -19));
    goto loc_0042D005;

loc_0042D0CE: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D0DF; /* je: equal / zero */

loc_0042D0D4: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D0DFu); RECOMP_ABI_CALL(0x0042D1C0u, sub_0042D1C0); /* call 0x0042D1C0 */

loc_0042D0DF: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D0F0
 * Original: 0x0042D0F0 - 0x0042D101 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D0F0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D0F0: ;
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
 * sub_0042D110
 * Original: 0x0042D110 - 0x0042D1BB (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D110(void)
{
    uint32_t ebp = g_ebp;

loc_0042D110: ;
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
    PUSH32(esp, 0x0042D1B3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042D1B3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D1C0
 * Original: 0x0042D1C0 - 0x0042D1D1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D1C0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D1C0: ;
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
 * sub_0042D1E0
 * Original: 0x0042D1E0 - 0x0042D1E7 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D1E0(void)
{
    uint32_t ebp = g_ebp;

loc_0042D1E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    (void)0; /* pause: cache/ordering hint, nothing to model */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D1F0
 * Original: 0x0042D1F0 - 0x0042D206 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D1F0(void)
{
    uint32_t ebp = g_ebp;

loc_0042D1F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0xFFFFFFDAu;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D210
 * Original: 0x0042D210 - 0x0042D229 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D210(void)
{
    uint32_t ebp = g_ebp;

loc_0042D210: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0xDFCBCC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D224u); RECOMP_ABI_CALL(0x004314E0u, sub_004314E0); /* call 0x004314E0 */

loc_0042D224: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D230
 * Original: 0x0042D230 - 0x0042D249 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D230(void)
{
    uint32_t ebp = g_ebp;

loc_0042D230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0xDFCBCC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D244u); RECOMP_ABI_CALL(0x00430D90u, sub_00430D90); /* call 0x00430D90 */

loc_0042D244: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D250
 * Original: 0x0042D250 - 0x0042D269 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D250(void)
{
    uint32_t ebp = g_ebp;

loc_0042D250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = 0xDFCBCC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D264u); RECOMP_ABI_CALL(0x00431280u, sub_00431280); /* call 0x00431280 */

loc_0042D264: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D270
 * Original: 0x0042D270 - 0x0042D27A (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D270(void)
{
    uint32_t ebp = g_ebp;

loc_0042D270: ;
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
 * sub_0042D280
 * Original: 0x0042D280 - 0x0042D298 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D280(void)
{
    uint32_t ebp = g_ebp;

loc_0042D280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D2A0
 * Original: 0x0042D2A0 - 0x0042D2B8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D2A0(void)
{
    uint32_t ebp = g_ebp;

loc_0042D2A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D2C0
 * Original: 0x0042D2C0 - 0x0042D2D8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D2C0(void)
{
    uint32_t ebp = g_ebp;

loc_0042D2C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D2E0
 * Original: 0x0042D2E0 - 0x0042D2F8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D2E0(void)
{
    uint32_t ebp = g_ebp;

loc_0042D2E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D300
 * Original: 0x0042D300 - 0x0042D318 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D300(void)
{
    uint32_t ebp = g_ebp;

loc_0042D300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D320
 * Original: 0x0042D320 - 0x0042D336 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D320(void)
{
    uint32_t ebp = g_ebp;

loc_0042D320: ;
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
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D340
 * Original: 0x0042D340 - 0x0042D388 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D340(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0042D340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042D35F; /* jne: not equal / not zero */

loc_0042D356: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0042D380;

loc_0042D35F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    eax = MEM32(ebp + 0x10);
    { uint32_t _zr = ((uint32_t)(ecx) - (uint32_t)(MEM32(eax))) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    ecx = _zr; }
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0042D380: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D390
 * Original: 0x0042D390 - 0x0042D3A7 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D390(void)
{
    uint32_t ebp = g_ebp;

loc_0042D390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D3B0
 * Original: 0x0042D3B0 - 0x0042D3D4 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D3B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D3B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D3E0
 * Original: 0x0042D3E0 - 0x0042D3FD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D3E0(void)
{
    uint32_t ebp = g_ebp;

loc_0042D3E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0x7FFFFFFF;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D400
 * Original: 0x0042D400 - 0x0042D41A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D400(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042D400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _shift_result = RECOMP_SHIFT(ecx, 0x1F, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D420
 * Original: 0x0042D420 - 0x0042D43D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D420(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042D420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _shift_result = RECOMP_SHIFT(ecx, 3, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx & 1;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D440
 * Original: 0x0042D440 - 0x0042D45D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D440(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042D440: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx & 1;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D460
 * Original: 0x0042D460 - 0x0042D47D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D460(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042D460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    _shift_result = RECOMP_SHIFT(ecx, 2, 32, 1, NULL, &_shift_of);
    ecx = _shift_result;
    ecx = ecx & 1;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D480
 * Original: 0x0042D480 - 0x0042D49A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D480(void)
{
    uint32_t ebp = g_ebp;

loc_0042D480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 3;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D4A0
 * Original: 0x0042D4A0 - 0x0042D4B7 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D4A0(void)
{
    uint32_t ebp = g_ebp;

loc_0042D4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D4C0
 * Original: 0x0042D4C0 - 0x0042D51B (91 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D4C0(void)
{
    uint32_t ebp = g_ebp;

loc_0042D4C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -24, xmm0); /* movaps */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    MEM32(ebp + -8) = 0;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x20) = ecx;
    xmm0 = XMM_MEM(ebp + -40); /* movups */
    xmm1 = XMM_MEM(ebp + -24); /* movups */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D4F8u); RECOMP_ABI_CALL(0x0042D230u, sub_0042D230); /* call 0x0042D230 */

loc_0042D4F8: ;
    ecx = MEM32(0x838F68);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(0x838F6C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D514u); RECOMP_ABI_CALL(0x0042D250u, sub_0042D250); /* call 0x0042D250 */

loc_0042D514: ;
    eax = 0; /* xor self */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D520
 * Original: 0x0042D520 - 0x0042D551 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D520(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042D539; /* jbe: below or equal (unsigned <=) */

loc_0042D530: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0042D549;

loc_0042D539: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = ecx;
    MEM32(ebp + -4) = 0;

loc_0042D549: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D560
 * Original: 0x0042D560 - 0x0042D594 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D560(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x1FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042D57C; /* jbe: below or equal (unsigned <=) */

loc_0042D573: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0042D58C;

loc_0042D57C: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(ebp + -4) = 0;

loc_0042D58C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D5A0
 * Original: 0x0042D5A0 - 0x0042D5D1 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D5A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D5A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042D5B9; /* jbe: below or equal (unsigned <=) */

loc_0042D5B0: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0042D5C9;

loc_0042D5B9: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    MEM32(ebp + -4) = 0;

loc_0042D5C9: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D5E0
 * Original: 0x0042D5E0 - 0x0042D5F8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D5E0(void)
{
    uint32_t ebp = g_ebp;

loc_0042D5E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x18) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D600
 * Original: 0x0042D600 - 0x0042D616 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D600(void)
{
    uint32_t ebp = g_ebp;

loc_0042D600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = ecx;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D620
 * Original: 0x0042D620 - 0x0042D663 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D620(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_0042D620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(8)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _zf = ((_fa & _fb) == 0);
    if (TEST_Z(_fa, _fb)) goto loc_0042D642; /* je: equal / zero */

loc_0042D636: ;
    goto loc_0042D638;

loc_0042D638: ;
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    if ((eax == 0)) goto loc_0042D64B; /* je: equal / zero */

loc_0042D640: ;
    goto loc_0042D654;

loc_0042D642: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042D65B;

loc_0042D64B: ;
    MEM32(ebp + -4) = 0x5F;
    goto loc_0042D65B;

loc_0042D654: ;
    MEM32(ebp + -4) = 0x16;

loc_0042D65B: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D670
 * Original: 0x0042D670 - 0x0042D6B8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D670(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    eax = eax - 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042D695; /* jbe: below or equal (unsigned <=) */

loc_0042D68C: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0042D6B0;

loc_0042D695: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0042D6B0: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D6C0
 * Original: 0x0042D6C0 - 0x0042D703 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D6C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D6C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = eax - 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042D6E2; /* jbe: below or equal (unsigned <=) */

loc_0042D6D9: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0042D6FB;

loc_0042D6E2: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = 0;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0042D6FB: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D710
 * Original: 0x0042D710 - 0x0042D785 (117 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D710(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D710: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042D77E; /* jge: greater or equal (signed >=) */

loc_0042D722: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D779; /* je: equal / zero */

loc_0042D72C: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x80000000u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D73Fu); RECOMP_ABI_CALL(0x0042D790u, sub_0042D790); /* call 0x0042D790 */

loc_0042D73F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D777; /* je: equal / zero */

loc_0042D751: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -4);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D775u); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_0042D775: ;
    goto loc_0042D73F;

loc_0042D777: ;
    goto loc_0042D779;

loc_0042D779: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D77Eu); RECOMP_ABI_CALL(0x00432B80u, sub_00432B80); /* call 0x00432B80 */

loc_0042D77E: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D790
 * Original: 0x0042D790 - 0x0042D7A4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D790(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D790: ;
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
 * sub_0042D7B0
 * Original: 0x0042D7B0 - 0x0042D840 (144 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D7B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D7B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    eax = eax - 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFE (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042D7D6; /* jbe: below or equal (unsigned <=) */

loc_0042D7CD: ;
    MEM32(ebp + -8) = 0x16;
    goto loc_0042D837;

loc_0042D7D6: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -52) = eax;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    MEM32(ebp + -24) = 0;
    eax = ebp + -40;
    eax = eax + 8;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + 0x10);
    eax = eax - 1;
    MEM32(ebp + -44) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D80C; /* je: equal / zero */

loc_0042D802: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    MEM32(ebp + -56) = eax;
    goto loc_0042D813;

loc_0042D80C: ;
    eax = 0; /* xor self */
    MEM32(ebp + -56) = eax;
    goto loc_0042D813;

loc_0042D813: ;
    eax = MEM32(ebp + -52);
    ecx = MEM32(ebp + -48);
    edx = MEM32(ebp + -44);
    esi = MEM32(ebp + -56);
    edx = edx | esi;
    MEM32(ecx) = edx;
    ecx = MEM32(ebp + -24);
    MEM32(eax + 0x10) = ecx;
    xmm0 = XMM_MEM(ebp + -40); /* movaps */
    XMM_STORE(eax, xmm0); /* movups */
    MEM32(ebp + -8) = 0;

loc_0042D837: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042D840
 * Original: 0x0042D840 - 0x0042DBB9 (889 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D840(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x58;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042D864; /* jne: not equal / not zero */

loc_0042D858: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0042DBB1;

loc_0042D864: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042D87D; /* jge: greater or equal (signed >=) */

loc_0042D86A: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D875u); RECOMP_ABI_CALL(0x0042DBC0u, sub_0042DBC0); /* call 0x0042DBC0 */

loc_0042D875: ;
    MEM32(ebp + -4) = eax;
    goto loc_0042DBB1;

loc_0042D87D: ;
    goto loc_0042D87F;

loc_0042D87F: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D892u); RECOMP_ABI_CALL(0x0042DE60u, sub_0042DE60); /* call 0x0042DE60 */

loc_0042D892: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D8BE; /* je: equal / zero */

loc_0042D897: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 1;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D8BCu); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_0042D8BC: ;
    goto loc_0042D87F;

loc_0042D8BE: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DA5B; /* jne: not equal / not zero */

loc_0042D8D1: ;
    eax = ebp + -28;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D8EEu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0042D8EE: ;
    MEM32(ebp + -32) = 0xC8;
    eax = ebp + -28;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -28;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D919u); RECOMP_ABI_CALL(0x0042DE80u, sub_0042DE80); /* call 0x0042DE80 */

loc_0042D919: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D93F; /* je: equal / zero */

loc_0042D924: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D93Fu); RECOMP_ABI_CALL(0x0042DEA0u, sub_0042DEA0); /* call 0x0042DEA0 */

loc_0042D93F: ;
    goto loc_0042D941;

loc_0042D941: ;
    ecx = MEM32(ebp + -32);
    eax = ecx;
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -32) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -33) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042D967; /* je: equal / zero */

loc_0042D956: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -33) = LO8(eax);

loc_0042D967: ;
    SET_LO8(eax, MEM8(ebp + -33));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042D970; /* jne: not equal / not zero */

loc_0042D96E: ;
    goto loc_0042D977;

loc_0042D970: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D975u); RECOMP_ABI_CALL(0x0042E140u, sub_0042E140); /* call 0x0042E140 */

loc_0042D975: ;
    goto loc_0042D941;

loc_0042D977: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D985u); RECOMP_ABI_CALL(0x0042DF80u, sub_0042DF80); /* call 0x0042DF80 */

loc_0042D985: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DA4F; /* jne: not equal / not zero */

loc_0042D994: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 0xC;
    edx = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -40) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 1;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x80;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042D9E3u); RECOMP_ABI_CALL(0x0042DFA0u, sub_0042DFA0); /* call 0x0042DFA0 */

loc_0042D9E3: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -34) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042DA47; /* jne: not equal / not zero */

loc_0042D9EF: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 0xC;
    edx = 0; /* xor self */
    eax = esp;
    MEM32(ebp + -44) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 1;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DA3Eu); RECOMP_ABI_CALL(0x0042DFA0u, sub_0042DFA0); /* call 0x0042DFA0 */

loc_0042DA3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -34) = LO8(eax);

loc_0042DA47: ;
    SET_LO8(eax, MEM8(ebp + -34));
    goto loc_0042D985;

loc_0042DA4F: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_0042DBB1;

loc_0042DA5B: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ecx);
    eax = eax + 1;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DAF4; /* jne: not equal / not zero */

loc_0042DA6E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = 0;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DA8Du); RECOMP_ABI_CALL(0x0042DE80u, sub_0042DE80); /* call 0x0042DE80 */

loc_0042DA8D: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DAB3; /* je: equal / zero */

loc_0042DA98: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DAB3u); RECOMP_ABI_CALL(0x0042DEA0u, sub_0042DEA0); /* call 0x0042DEA0 */

loc_0042DAB3: ;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DAC9u); RECOMP_ABI_CALL(0x0042DE80u, sub_0042DE80); /* call 0x0042DE80 */

loc_0042DAC9: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DAF2; /* je: equal / zero */

loc_0042DAD4: ;
    eax = MEM32(ebp + -12);
    eax = eax + 4;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DAF2u); RECOMP_ABI_CALL(0x0042DEA0u, sub_0042DEA0); /* call 0x0042DEA0 */

loc_0042DAF2: ;
    goto loc_0042DB59;

loc_0042DAF4: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DB09u); RECOMP_ABI_CALL(0x0042DE80u, sub_0042DE80); /* call 0x0042DE80 */

loc_0042DB09: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DB2F; /* je: equal / zero */

loc_0042DB14: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DB2Fu); RECOMP_ABI_CALL(0x0042DEA0u, sub_0042DEA0); /* call 0x0042DEA0 */

loc_0042DB2F: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx + 4;
    eax = MEM32(ebp + -12);
    eax = eax + 8;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DB59u); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_0042DB59: ;
    eax = MEM32(ebp + -12);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DB6Cu); RECOMP_ABI_CALL(0x0042E050u, sub_0042E050); /* call 0x0042E050 */

loc_0042DB6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DBAA; /* jne: not equal / not zero */

loc_0042DB71: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DB87u); RECOMP_ABI_CALL(0x0042E050u, sub_0042E050); /* call 0x0042E050 */

loc_0042DB87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DBAA; /* je: equal / zero */

loc_0042DB8C: ;
    eax = MEM32(ebp + -12);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DBAAu); RECOMP_ABI_CALL(0x0042DEA0u, sub_0042DEA0); /* call 0x0042DEA0 */

loc_0042DBAA: ;
    MEM32(ebp + -4) = 0;

loc_0042DBB1: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x58;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042DBC0
 * Original: 0x0042DBC0 - 0x0042DE5E (670 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DBC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x34;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    eax = eax & 0x7FFFFFFF;
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DBF4; /* jne: not equal / not zero */

loc_0042DBE8: ;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_0042DE55;

loc_0042DBF4: ;
    goto loc_0042DBF6;

loc_0042DBF6: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + -12);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DC12u); RECOMP_ABI_CALL(0x0042E070u, sub_0042E070); /* call 0x0042E070 */

loc_0042DC12: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DC42; /* je: equal / zero */

loc_0042DC1A: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 4;
    eax = MEM32(ebp + -20);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DC40u); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_0042DC40: ;
    goto loc_0042DBF6;

loc_0042DC42: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0xC);
    eax = eax + 1;
    MEM32(ecx + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DC9F; /* jne: not equal / not zero */

loc_0042DC53: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DC6Bu); RECOMP_ABI_CALL(0x0042DE80u, sub_0042DE80); /* call 0x0042DE80 */

loc_0042DC6B: ;
    MEM32(ebp + -16) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DC9D; /* je: equal / zero */

loc_0042DC7D: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DC9Du); RECOMP_ABI_CALL(0x0042DEA0u, sub_0042DEA0); /* call 0x0042DEA0 */

loc_0042DC9D: ;
    goto loc_0042DD19;

loc_0042DC9F: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DCB4u); RECOMP_ABI_CALL(0x0042DE80u, sub_0042DE80); /* call 0x0042DE80 */

loc_0042DCB4: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DCDC; /* je: equal / zero */

loc_0042DCBF: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DCDCu); RECOMP_ABI_CALL(0x0042DEA0u, sub_0042DEA0); /* call 0x0042DEA0 */

loc_0042DCDC: ;
    goto loc_0042DCDE;

loc_0042DCDE: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042DD17; /* jle: less or equal (signed <=) */

loc_0042DCEC: ;
    edx = MEM32(ebp + 8);
    edx = edx + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -20);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DD15u); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_0042DD15: ;
    goto loc_0042DCDE;

loc_0042DD17: ;
    goto loc_0042DD19;

loc_0042DD19: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DD1Eu); RECOMP_ABI_CALL(0x00432BC0u, sub_00432BC0); /* call 0x00432BC0 */

loc_0042DD1E: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DD34u); RECOMP_ABI_CALL(0x0042E050u, sub_0042E050); /* call 0x0042E050 */

loc_0042DD34: ;
    ecx = 1;
    ecx = ecx - MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DD85; /* jne: not equal / not zero */

loc_0042DD40: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DD58u); RECOMP_ABI_CALL(0x0042DE80u, sub_0042DE80); /* call 0x0042DE80 */

loc_0042DD58: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DD83; /* je: equal / zero */

loc_0042DD63: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DD83u); RECOMP_ABI_CALL(0x0042DEA0u, sub_0042DEA0); /* call 0x0042DEA0 */

loc_0042DD83: ;
    goto loc_0042DDC2;

loc_0042DD85: ;
    goto loc_0042DD87;

loc_0042DD87: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DDC0; /* je: equal / zero */

loc_0042DD95: ;
    edx = MEM32(ebp + 8);
    edx = edx + 0xC;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -20);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DDBEu); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_0042DDBE: ;
    goto loc_0042DD87;

loc_0042DDC0: ;
    goto loc_0042DDC2;

loc_0042DDC2: ;
    goto loc_0042DDC4;

loc_0042DDC4: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x80000001u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DDF1; /* jne: not equal / not zero */

loc_0042DDEA: ;
    eax = 0; /* xor self */
    MEM32(ebp + -36) = eax;
    goto loc_0042DDFA;

loc_0042DDF1: ;
    eax = MEM32(ebp + -20);
    eax = eax - 1;
    MEM32(ebp + -36) = eax;

loc_0042DDFA: ;
    ecx = MEM32(ebp + -28);
    edx = MEM32(ebp + -32);
    eax = MEM32(ebp + -36);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DE13u); RECOMP_ABI_CALL(0x0042E070u, sub_0042E070); /* call 0x0042E070 */

loc_0042DE13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DDC4; /* jne: not equal / not zero */

loc_0042DE18: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x80000001u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DE2D; /* je: equal / zero */

loc_0042DE21: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042DE4A; /* jne: not equal / not zero */

loc_0042DE27: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DE4A; /* je: equal / zero */

loc_0042DE2D: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DE4Au); RECOMP_ABI_CALL(0x0042DEA0u, sub_0042DEA0); /* call 0x0042DEA0 */

loc_0042DE4A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042DE4Fu); RECOMP_ABI_CALL(0x00432C00u, sub_00432C00); /* call 0x00432C00 */

loc_0042DE4F: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -8) = eax;

loc_0042DE55: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x34;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042DE60
 * Original: 0x0042DE60 - 0x0042DE79 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DE60(void)
{
    uint32_t ebp = g_ebp;

loc_0042DE60: ;
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
 * sub_0042DE80
 * Original: 0x0042DE80 - 0x0042DE98 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DE80(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DE80: ;
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
 * sub_0042DEA0
 * Original: 0x0042DEA0 - 0x0042DF71 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DEA0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DEA0: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0042DEBF; /* je: equal / zero */

loc_0042DEB8: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0042DEBF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042DECC; /* jge: greater or equal (signed >=) */

loc_0042DEC5: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0042DECC: ;
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
    PUSH32(esp, 0x0042DF13u); RECOMP_ABI_CALL(0x0042E0A0u, sub_0042E0A0); /* call 0x0042E0A0 */

loc_0042DF13: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042DF66; /* jne: not equal / not zero */

loc_0042DF1F: ;
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
    PUSH32(esp, 0x0042DF5Du); RECOMP_ABI_CALL(0x0042E0A0u, sub_0042E0A0); /* call 0x0042E0A0 */

loc_0042DF5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_0042DF66: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042DF80
 * Original: 0x0042DF80 - 0x0042DF91 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DF80(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DF80: ;
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
 * sub_0042DFA0
 * Original: 0x0042DFA0 - 0x0042E04B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DFA0(void)
{
    uint32_t ebp = g_ebp;

loc_0042DFA0: ;
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
    PUSH32(esp, 0x0042E043u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042E043: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E050
 * Original: 0x0042E050 - 0x0042E06B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E050(void)
{
    uint32_t ebp = g_ebp;

loc_0042E050: ;
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
 * sub_0042E070
 * Original: 0x0042E070 - 0x0042E091 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E070(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E070: ;
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
 * sub_0042E0A0
 * Original: 0x0042E0A0 - 0x0042E13B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E0A0(void)
{
    uint32_t ebp = g_ebp;

loc_0042E0A0: ;
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
    PUSH32(esp, 0x0042E133u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042E133: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E140
 * Original: 0x0042E140 - 0x0042E147 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E140(void)
{
    uint32_t ebp = g_ebp;

loc_0042E140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    (void)0; /* pause: cache/ordering hint, nothing to model */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E150
 * Original: 0x0042E150 - 0x0042E158 (8 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E150(void)
{
    uint32_t ebp = g_ebp;

loc_0042E150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E160
 * Original: 0x0042E160 - 0x0042E190 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E160(void)
{
    uint32_t ebp = g_ebp;

loc_0042E160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E18Bu); RECOMP_ABI_CALL(0x0042E150u, sub_0042E150); /* call 0x0042E150 */

loc_0042E18B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E190
 * Original: 0x0042E190 - 0x0042E1C2 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E190(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E190: ;
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
    PUSH32(esp, 0x0042E1A7u); RECOMP_ABI_CALL(0x0042E150u, sub_0042E150); /* call 0x0042E150 */

loc_0042E1A7: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E1BD; /* je: equal / zero */

loc_0042E1AD: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 4);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0042E1BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0042E1BD: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E1D0
 * Original: 0x0042E1D0 - 0x0042E24A (122 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E1D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E1D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E1F9; /* jne: not equal / not zero */

loc_0042E1E1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E1F4u); RECOMP_ABI_CALL(0x0042F0C0u, sub_0042F0C0); /* call 0x0042F0C0 */

loc_0042E1F4: ;
    MEM32(ebp + -4) = eax;
    goto loc_0042E242;

loc_0042E1F9: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E20D; /* jne: not equal / not zero */

loc_0042E204: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042E242;

loc_0042E20D: ;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E21Bu); RECOMP_ABI_CALL(0x0042E250u, sub_0042E250); /* call 0x0042E250 */

loc_0042E21B: ;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E23Bu); RECOMP_ABI_CALL(0x0042E270u, sub_0042E270); /* call 0x0042E270 */

loc_0042E23B: ;
    MEM32(ebp + -4) = 0;

loc_0042E242: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E250
 * Original: 0x0042E250 - 0x0042E261 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E250(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E250: ;
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
 * sub_0042E270
 * Original: 0x0042E270 - 0x0042E341 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E270(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E270: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0042E28F; /* je: equal / zero */

loc_0042E288: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0042E28F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042E29C; /* jge: greater or equal (signed >=) */

loc_0042E295: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0042E29C: ;
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
    PUSH32(esp, 0x0042E2E3u); RECOMP_ABI_CALL(0x0042E350u, sub_0042E350); /* call 0x0042E350 */

loc_0042E2E3: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042E336; /* jne: not equal / not zero */

loc_0042E2EF: ;
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
    PUSH32(esp, 0x0042E32Du); RECOMP_ABI_CALL(0x0042E350u, sub_0042E350); /* call 0x0042E350 */

loc_0042E32D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_0042E336: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E350
 * Original: 0x0042E350 - 0x0042E3EB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E350(void)
{
    uint32_t ebp = g_ebp;

loc_0042E350: ;
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
    PUSH32(esp, 0x0042E3E3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042E3E3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E3F0
 * Original: 0x0042E3F0 - 0x0042E49D (173 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E3F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E3F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E496; /* je: equal / zero */

loc_0042E405: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E496; /* je: equal / zero */

loc_0042E414: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x80000000u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E42Au); RECOMP_ABI_CALL(0x0042E4A0u, sub_0042E4A0); /* call 0x0042E4A0 */

loc_0042E42A: ;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E438u); RECOMP_ABI_CALL(0x0042E4C0u, sub_0042E4C0); /* call 0x0042E4C0 */

loc_0042E438: ;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E458u); RECOMP_ABI_CALL(0x0042E4E0u, sub_0042E4E0); /* call 0x0042E4E0 */

loc_0042E458: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -4) = eax;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E494; /* je: equal / zero */

loc_0042E46B: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0xC;
    eax = MEM32(ebp + -4);
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E492u); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_0042E492: ;
    goto loc_0042E458;

loc_0042E494: ;
    goto loc_0042E496;

loc_0042E496: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E4A0
 * Original: 0x0042E4A0 - 0x0042E4B4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E4A0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E4A0: ;
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
 * sub_0042E4C0
 * Original: 0x0042E4C0 - 0x0042E4D1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E4C0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E4C0: ;
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
 * sub_0042E4E0
 * Original: 0x0042E4E0 - 0x0042E5B1 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E4E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E4E0: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0042E4FF; /* je: equal / zero */

loc_0042E4F8: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0042E4FF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042E50C; /* jge: greater or equal (signed >=) */

loc_0042E505: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0042E50C: ;
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
    PUSH32(esp, 0x0042E553u); RECOMP_ABI_CALL(0x0042E5C0u, sub_0042E5C0); /* call 0x0042E5C0 */

loc_0042E553: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042E5A6; /* jne: not equal / not zero */

loc_0042E55F: ;
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
    PUSH32(esp, 0x0042E59Du); RECOMP_ABI_CALL(0x0042E5C0u, sub_0042E5C0); /* call 0x0042E5C0 */

loc_0042E59D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_0042E5A6: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E5C0
 * Original: 0x0042E5C0 - 0x0042E65B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E5C0(void)
{
    uint32_t ebp = g_ebp;

loc_0042E5C0: ;
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
    PUSH32(esp, 0x0042E653u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042E653: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E660
 * Original: 0x0042E660 - 0x0042E6CC (108 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E660(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042E660: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x38;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -24, xmm0); /* movaps */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    XMM_STORE(ebp + -56, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebp + -24); /* movups */
    XMM_STORE(eax + 0x20, xmm0); /* movups */
    xmm0 = XMM_MEM(ebp + -56); /* movups */
    xmm1 = XMM_MEM(ebp + -40); /* movups */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E6C5; /* je: equal / zero */

loc_0042E69B: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    ecx = ecx & 0x7FFFFFFF;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    _shift_result = RECOMP_SHIFT(eax, 0x1F, 32, 1, NULL, &_shift_of);
    eax = _shift_result;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E6C3; /* je: equal / zero */

loc_0042E6B9: ;
    eax = MEM32(ebp + 8);
    ecx = 0xFFFFFFFFu;
    MEM32(eax) = ecx;

loc_0042E6C3: ;
    goto loc_0042E6C5;

loc_0042E6C5: ;
    eax = 0; /* xor self */
    esp = esp + 0x38;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E6D0
 * Original: 0x0042E6D0 - 0x0042E74A (122 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E6D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E6D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E6F9; /* jne: not equal / not zero */

loc_0042E6E1: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E6F4u); RECOMP_ABI_CALL(0x0042F0C0u, sub_0042F0C0); /* call 0x0042F0C0 */

loc_0042E6F4: ;
    MEM32(ebp + -4) = eax;
    goto loc_0042E742;

loc_0042E6F9: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E70D; /* jne: not equal / not zero */

loc_0042E704: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042E742;

loc_0042E70D: ;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E71Bu); RECOMP_ABI_CALL(0x0042E750u, sub_0042E750); /* call 0x0042E750 */

loc_0042E71B: ;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E73Bu); RECOMP_ABI_CALL(0x0042E770u, sub_0042E770); /* call 0x0042E770 */

loc_0042E73B: ;
    MEM32(ebp + -4) = 0;

loc_0042E742: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E750
 * Original: 0x0042E750 - 0x0042E761 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E750(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E750: ;
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
 * sub_0042E770
 * Original: 0x0042E770 - 0x0042E841 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E770(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E770: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0042E78F; /* je: equal / zero */

loc_0042E788: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0042E78F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042E79C; /* jge: greater or equal (signed >=) */

loc_0042E795: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0042E79C: ;
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
    PUSH32(esp, 0x0042E7E3u); RECOMP_ABI_CALL(0x0042E850u, sub_0042E850); /* call 0x0042E850 */

loc_0042E7E3: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042E836; /* jne: not equal / not zero */

loc_0042E7EF: ;
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
    PUSH32(esp, 0x0042E82Du); RECOMP_ABI_CALL(0x0042E850u, sub_0042E850); /* call 0x0042E850 */

loc_0042E82D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_0042E836: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E850
 * Original: 0x0042E850 - 0x0042E8EB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E850(void)
{
    uint32_t ebp = g_ebp;

loc_0042E850: ;
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
    PUSH32(esp, 0x0042E8E3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042E8E3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042E8F0
 * Original: 0x0042E8F0 - 0x0042ED2D (1085 bytes, 314 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E8F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E8F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x60;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = ebp + -32;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E91Eu); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_0042E91E: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -52) = 0;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E964; /* je: equal / zero */

loc_0042E93B: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -72) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E94Eu); RECOMP_ABI_CALL(0x0042ED30u, sub_0042ED30); /* call 0x0042ED30 */

loc_0042E94E: ;
    ecx = eax;
    eax = MEM32(ebp + -72);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E964; /* je: equal / zero */

loc_0042E958: ;
    MEM32(ebp + -12) = 1;
    goto loc_0042ED23;

loc_0042E964: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E982; /* je: equal / zero */

loc_0042E96A: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B9ACA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0x3B9ACA00 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042E982; /* jb: below (unsigned <) */

loc_0042E976: ;
    MEM32(ebp + -12) = 0x16;
    goto loc_0042ED23;

loc_0042E982: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E987u); RECOMP_ABI_CALL(0x00431930u, sub_00431930); /* call 0x00431930 */

loc_0042E987: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E9B8; /* je: equal / zero */

loc_0042E98F: ;
    MEM32(ebp + -52) = 1;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E9B6u); RECOMP_ABI_CALL(0x0042ED40u, sub_0042ED40); /* call 0x0042ED40 */

loc_0042E9B6: ;
    goto loc_0042EA20;

loc_0042E9B8: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042E9C6u); RECOMP_ABI_CALL(0x0042ED60u, sub_0042ED60); /* call 0x0042ED60 */

loc_0042E9C6: ;
    MEM32(ebp + -20) = 2;
    MEM32(ebp + -40) = 2;
    eax = ebp + -32;
    eax = eax + 0xC;
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -24) = 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    ecx = ebp + -32;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EA0A; /* jne: not equal / not zero */

loc_0042E9FF: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -32;
    MEM32(eax + 0x14) = ecx;
    goto loc_0042EA12;

loc_0042EA0A: ;
    eax = MEM32(ebp + -28);
    ecx = ebp + -32;
    MEM32(eax) = ecx;

loc_0042EA12: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EA20u); RECOMP_ABI_CALL(0x0042EE00u, sub_0042EE00); /* call 0x0042EE00 */

loc_0042EA20: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EA2Bu); RECOMP_ABI_CALL(0x004300D0u, sub_004300D0); /* call 0x004300D0 */

loc_0042EA2B: ;
    eax = ebp + -48;
    MEM32(esp) = 2;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EA3Eu); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_0042EA3E: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EA59; /* jne: not equal / not zero */

loc_0042EA44: ;
    eax = MEM32(ebp + -48);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EA59u); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_0042EA59: ;
    goto loc_0042EA5B;

loc_0042EA5B: ;
    edi = MEM32(ebp + -64);
    esi = MEM32(ebp + -40);
    edx = MEM32(ebp + -44);
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    MEM32(esp) = edi;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EA8Du); RECOMP_ABI_CALL(0x0042CC80u, sub_0042CC80); /* call 0x0042CC80 */

loc_0042EA8D: ;
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + -64);
    ecx = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -40) (32-bit) */
    MEM8(ebp + -73) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042EABA; /* jne: not equal / not zero */

loc_0042EA9F: ;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    MEM8(ebp + -74) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042EAB4; /* je: equal / zero */

loc_0042EAAA: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + -74) = LO8(eax);

loc_0042EAB4: ;
    SET_LO8(eax, MEM8(ebp + -74));
    MEM8(ebp + -73) = LO8(eax);

loc_0042EABA: ;
    SET_LO8(eax, MEM8(ebp + -73));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042EA5B; /* jne: not equal / not zero */

loc_0042EAC1: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EACE; /* jne: not equal / not zero */

loc_0042EAC7: ;
    MEM32(ebp + -36) = 0;

loc_0042EACE: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EB35; /* je: equal / zero */

loc_0042EAD4: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0x7D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EAEC; /* jne: not equal / not zero */

loc_0042EADA: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EAEC; /* je: equal / zero */

loc_0042EAE5: ;
    MEM32(ebp + -36) = 0;

loc_0042EAEC: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EB02u); RECOMP_ABI_CALL(0x0042EE50u, sub_0042EE50); /* call 0x0042EE50 */

loc_0042EB02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000001u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EB29; /* jne: not equal / not zero */

loc_0042EB09: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0xC;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EB29u); RECOMP_ABI_CALL(0x0042EE70u, sub_0042EE70); /* call 0x0042EE70 */

loc_0042EB29: ;
    MEM32(ebp + -56) = 0;
    goto loc_0042EC18;

loc_0042EB35: ;
    eax = ebp + -32;
    eax = eax + 8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EB55u); RECOMP_ABI_CALL(0x0042EF50u, sub_0042EF50); /* call 0x0042EF50 */

loc_0042EB55: ;
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC08; /* jne: not equal / not zero */

loc_0042EB62: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EB70u); RECOMP_ABI_CALL(0x0042ED60u, sub_0042ED60); /* call 0x0042ED60 */

loc_0042EB70: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -32;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EB86; /* jne: not equal / not zero */

loc_0042EB7B: ;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    goto loc_0042EB97;

loc_0042EB86: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EB95; /* je: equal / zero */

loc_0042EB8C: ;
    ecx = MEM32(ebp + -28);
    eax = MEM32(ebp + -32);
    MEM32(eax + 4) = ecx;

loc_0042EB95: ;
    goto loc_0042EB97;

loc_0042EB97: ;
    eax = MEM32(ebp + 8);
    ecx = ebp + -32;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EBAD; /* jne: not equal / not zero */

loc_0042EBA2: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = ecx;
    goto loc_0042EBBD;

loc_0042EBAD: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EBBB; /* je: equal / zero */

loc_0042EBB3: ;
    ecx = MEM32(ebp + -32);
    eax = MEM32(ebp + -28);
    MEM32(eax) = ecx;

loc_0042EBBB: ;
    goto loc_0042EBBD;

loc_0042EBBD: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EBCBu); RECOMP_ABI_CALL(0x0042EE00u, sub_0042EE00); /* call 0x0042EE00 */

loc_0042EBCB: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EC06; /* je: equal / zero */

loc_0042EBD1: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EBE4u); RECOMP_ABI_CALL(0x0042EE50u, sub_0042EE50); /* call 0x0042EE50 */

loc_0042EBE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC04; /* jne: not equal / not zero */

loc_0042EBE9: ;
    eax = MEM32(ebp + -16);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EC04u); RECOMP_ABI_CALL(0x0042EE70u, sub_0042EE70); /* call 0x0042EE70 */

loc_0042EC04: ;
    goto loc_0042EC06;

loc_0042EC06: ;
    goto loc_0042EC16;

loc_0042EC08: ;
    eax = ebp + -32;
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EC16u); RECOMP_ABI_CALL(0x0042ED60u, sub_0042ED60); /* call 0x0042ED60 */

loc_0042EC16: ;
    goto loc_0042EC18;

loc_0042EC18: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EC23u); RECOMP_ABI_CALL(0x0042F600u, sub_0042F600); /* call 0x0042F600 */

loc_0042EC23: ;
    MEM32(ebp + -60) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EC31; /* je: equal / zero */

loc_0042EC2B: ;
    eax = MEM32(ebp + -60);
    MEM32(ebp + -36) = eax;

loc_0042EC31: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC3C; /* jne: not equal / not zero */

loc_0042EC37: ;
    goto loc_0042ECE7;

loc_0042EC3C: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC5D; /* jne: not equal / not zero */

loc_0042EC42: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC5D; /* jne: not equal / not zero */

loc_0042EC4F: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EC5Du); RECOMP_ABI_CALL(0x0042ED40u, sub_0042ED40); /* call 0x0042ED40 */

loc_0042EC5D: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042ECBB; /* je: equal / zero */

loc_0042EC63: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -68), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042EC93; /* jle: less or equal (signed <=) */

loc_0042EC72: ;
    edx = MEM32(ebp + 0xC);
    edx = edx + 4;
    ecx = MEM32(ebp + -68);
    eax = MEM32(ebp + -68);
    eax = eax | 0x80000000u;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EC93u); RECOMP_ABI_CALL(0x0042EF50u, sub_0042EF50); /* call 0x0042EF50 */

loc_0042EC93: ;
    edx = MEM32(ebp + -32);
    edx = edx + 0xC;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + 4;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 0x88;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042ECB9u); RECOMP_ABI_CALL(0x0042EF80u, sub_0042EF80); /* call 0x0042EF80 */

loc_0042ECB9: ;
    goto loc_0042ECD8;

loc_0042ECBB: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042ECD6; /* jne: not equal / not zero */

loc_0042ECC8: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042ECD6u); RECOMP_ABI_CALL(0x0042F0A0u, sub_0042F0A0); /* call 0x0042F0A0 */

loc_0042ECD6: ;
    goto loc_0042ECD8;

loc_0042ECD8: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0x7D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042ECE5; /* jne: not equal / not zero */

loc_0042ECDE: ;
    MEM32(ebp + -36) = 0;

loc_0042ECE5: ;
    goto loc_0042ECE7;

loc_0042ECE7: ;
    eax = MEM32(ebp + -48);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042ECFCu); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_0042ECFC: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0x7D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042ED1D; /* jne: not equal / not zero */

loc_0042ED02: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042ED07u); RECOMP_ABI_CALL(0x00431930u, sub_00431930); /* call 0x00431930 */

loc_0042ED07: ;
    eax = 0; /* xor self */
    MEM32(esp) = 1;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042ED1Du); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_0042ED1D: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -12) = eax;

loc_0042ED23: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x60;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042ED30
 * Original: 0x0042ED30 - 0x0042ED40 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042ED30(void)
{
    uint32_t ebp = g_ebp;

loc_0042ED30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042ED3Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0042ED3B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042ED40
 * Original: 0x0042ED40 - 0x0042ED51 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042ED40(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042ED40: ;
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
 * sub_0042ED60
 * Original: 0x0042ED60 - 0x0042EDF4 (148 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042ED60(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042ED60: ;
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
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042ED86u); RECOMP_ABI_CALL(0x0042EF50u, sub_0042EF50); /* call 0x0042EF50 */

loc_0042ED86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EDEF; /* je: equal / zero */

loc_0042ED8B: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EDA6u); RECOMP_ABI_CALL(0x0042EF50u, sub_0042EF50); /* call 0x0042EF50 */

loc_0042EDA6: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 2;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EDCBu); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_0042EDCB: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EDE8u); RECOMP_ABI_CALL(0x0042EF50u, sub_0042EF50); /* call 0x0042EF50 */

loc_0042EDE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EDA6; /* jne: not equal / not zero */

loc_0042EDED: ;
    goto loc_0042EDEF;

loc_0042EDEF: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042EE00
 * Original: 0x0042EE00 - 0x0042EE43 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EE00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EE00: ;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EE1Eu); RECOMP_ABI_CALL(0x0042F200u, sub_0042F200); /* call 0x0042F200 */

loc_0042EE1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EE3E; /* jne: not equal / not zero */

loc_0042EE23: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EE3Eu); RECOMP_ABI_CALL(0x0042EE70u, sub_0042EE70); /* call 0x0042EE70 */

loc_0042EE3E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042EE50
 * Original: 0x0042EE50 - 0x0042EE6B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EE50(void)
{
    uint32_t ebp = g_ebp;

loc_0042EE50: ;
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
 * sub_0042EE70
 * Original: 0x0042EE70 - 0x0042EF41 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EE70(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EE70: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0042EE8F; /* je: equal / zero */

loc_0042EE88: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0042EE8F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042EE9C; /* jge: greater or equal (signed >=) */

loc_0042EE95: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0042EE9C: ;
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
    PUSH32(esp, 0x0042EEE3u); RECOMP_ABI_CALL(0x0042F220u, sub_0042F220); /* call 0x0042F220 */

loc_0042EEE3: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042EF36; /* jne: not equal / not zero */

loc_0042EEEF: ;
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
    PUSH32(esp, 0x0042EF2Du); RECOMP_ABI_CALL(0x0042F220u, sub_0042F220); /* call 0x0042F220 */

loc_0042EF2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_0042EF36: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042EF50
 * Original: 0x0042EF50 - 0x0042EF71 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EF50(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EF50: ;
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
 * sub_0042EF80
 * Original: 0x0042EF80 - 0x0042F099 (281 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EF80(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EFA6u); RECOMP_ABI_CALL(0x0042F2C0u, sub_0042F2C0); /* call 0x0042F2C0 */

loc_0042EFA6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EFCC; /* je: equal / zero */

loc_0042EFAC: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042EFC7u); RECOMP_ABI_CALL(0x0042EE70u, sub_0042EE70); /* call 0x0042EE70 */

loc_0042EFC7: ;
    goto loc_0042F092;

loc_0042EFCC: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    eax = esp;
    MEM32(ebp + -16) = eax;
    MEM32(eax + 0x2C) = edi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 1;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x83;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F023u); RECOMP_ABI_CALL(0x0042F2E0u, sub_0042F2E0); /* call 0x0042F2E0 */

loc_0042F023: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0042F08F; /* jne: not equal / not zero */

loc_0042F02F: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = edx;
    eax = esp;
    MEM32(ebp + -20) = eax;
    MEM32(eax + 0x2C) = edi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 1;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 3;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F086u); RECOMP_ABI_CALL(0x0042F2E0u, sub_0042F2E0); /* call 0x0042F2E0 */

loc_0042F086: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_0042F08F: ;
    SET_LO8(eax, MEM8(ebp + -9));

loc_0042F092: ;
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F0A0
 * Original: 0x0042F0A0 - 0x0042F0B1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F0A0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F0A0: ;
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
 * sub_0042F0C0
 * Original: 0x0042F0C0 - 0x0042F1FF (319 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F0C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = 0;
    MEM32(ebp + -12) = 0;
    eax = MEM32(ebp + 8);
    eax = eax + 0x20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F0E8u); RECOMP_ABI_CALL(0x0042ED60u, sub_0042ED60); /* call 0x0042ED60 */

loc_0042F0E8: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x14);
    MEM32(ebp + -4) = eax;

loc_0042F0F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM8(ebp + -17) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F106; /* je: equal / zero */

loc_0042F0FC: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -17) = LO8(eax);

loc_0042F106: ;
    SET_LO8(eax, MEM8(ebp + -17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0042F10F; /* jne: not equal / not zero */

loc_0042F10D: ;
    goto loc_0042F16B;

loc_0042F10F: ;
    eax = MEM32(ebp + -4);
    eax = eax + 8;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F12Fu); RECOMP_ABI_CALL(0x0042EF50u, sub_0042EF50); /* call 0x0042EF50 */

loc_0042F12F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F148; /* je: equal / zero */

loc_0042F134: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -4);
    ecx = ebp + -12;
    MEM32(eax + 0x10) = ecx;
    goto loc_0042F15F;

loc_0042F148: ;
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + 0xC) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F15D; /* jne: not equal / not zero */

loc_0042F157: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = eax;

loc_0042F15D: ;
    goto loc_0042F15F;

loc_0042F15F: ;
    goto loc_0042F161;

loc_0042F161: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;
    goto loc_0042F0F1;

loc_0042F16B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F192; /* je: equal / zero */

loc_0042F171: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F186; /* je: equal / zero */

loc_0042F17A: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 4);
    MEM32(eax) = 0;

loc_0042F186: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 4) = 0;
    goto loc_0042F19C;

loc_0042F192: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0;

loc_0042F19C: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(ebp + 8);
    eax = eax + 0x20;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F1B3u); RECOMP_ABI_CALL(0x0042EE00u, sub_0042EE00); /* call 0x0042EE00 */

loc_0042F1B3: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F1E4; /* je: equal / zero */

loc_0042F1BE: ;
    eax = MEM32(ebp + -16);
    ecx = ebp + -12;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F1E2u); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_0042F1E2: ;
    goto loc_0042F1B3;

loc_0042F1E4: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F1F8; /* je: equal / zero */

loc_0042F1EA: ;
    eax = MEM32(ebp + -8);
    eax = eax + 0xC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F1F8u); RECOMP_ABI_CALL(0x0042EE00u, sub_0042EE00); /* call 0x0042EE00 */

loc_0042F1F8: ;
    eax = 0; /* xor self */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F200
 * Original: 0x0042F200 - 0x0042F219 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F200(void)
{
    uint32_t ebp = g_ebp;

loc_0042F200: ;
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
 * sub_0042F220
 * Original: 0x0042F220 - 0x0042F2BB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F220(void)
{
    uint32_t ebp = g_ebp;

loc_0042F220: ;
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
    PUSH32(esp, 0x0042F2B3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042F2B3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F2C0
 * Original: 0x0042F2C0 - 0x0042F2D8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F2C0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F2C0: ;
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
 * sub_0042F2E0
 * Original: 0x0042F2E0 - 0x0042F39B (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F2E0(void)
{
    uint32_t ebp = g_ebp;

loc_0042F2E0: ;
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
    PUSH32(esp, 0x0042F393u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042F393: ;
    esp = esp + 0x5C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F3A0
 * Original: 0x0042F3A0 - 0x0042F3CD (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F3A0(void)
{
    uint32_t ebp = g_ebp;

loc_0042F3A0: ;
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
    PUSH32(esp, 0x0042F3C8u); RECOMP_ABI_CALL(0x0042E8F0u, sub_0042E8F0); /* call 0x0042E8F0 */

loc_0042F3C8: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F3D0
 * Original: 0x0042F3D0 - 0x0042F3DA (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F3D0(void)
{
    uint32_t ebp = g_ebp;

loc_0042F3D0: ;
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
 * sub_0042F3E0
 * Original: 0x0042F3E0 - 0x0042F3FD (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F3E0(void)
{
    uint32_t ebp = g_ebp;

loc_0042F3E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F400
 * Original: 0x0042F400 - 0x0042F44A (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F400(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0042F41B; /* jl: less (signed <) */

loc_0042F410: ;
    eax = MEM32(ebp + 0xC);
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0042F424; /* jae: above or equal (unsigned >=) */

loc_0042F41B: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0042F442;

loc_0042F424: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0x80000000u;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = ecx | MEM32(eax);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0042F442: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F450
 * Original: 0x0042F450 - 0x0042F492 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F450(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_0042F450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042F469; /* jbe: below or equal (unsigned <=) */

loc_0042F460: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0042F48A;

loc_0042F469: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0x7FFFFFFF;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(ecx, 0x1F, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 8);
    ecx = ecx | MEM32(eax);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_0042F48A: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F4A0
 * Original: 0x0042F4A0 - 0x0042F4B9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F4A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) & 1);
    eax = ZX8(LO8(eax));
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F4C0
 * Original: 0x0042F4C0 - 0x0042F549 (137 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F4C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F4C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax & 0x3FFFFFFF;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F4FD; /* je: equal / zero */

loc_0042F4EA: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F4FD; /* je: equal / zero */

loc_0042F4F0: ;
    eax = MEM32(ebp + -8);
    eax = eax & 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F506; /* jne: not equal / not zero */

loc_0042F4FD: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_0042F541;

loc_0042F506: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F511u); RECOMP_ABI_CALL(0x0042F550u, sub_0042F550); /* call 0x0042F550 */

loc_0042F511: ;
    ecx = eax;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F524; /* je: equal / zero */

loc_0042F51B: ;
    MEM32(ebp + -4) = 1;
    goto loc_0042F541;

loc_0042F524: ;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xBFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F53Au); RECOMP_ABI_CALL(0x0042F560u, sub_0042F560); /* call 0x0042F560 */

loc_0042F53A: ;
    MEM32(ebp + -4) = 0;

loc_0042F541: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F550
 * Original: 0x0042F550 - 0x0042F560 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F550(void)
{
    uint32_t ebp = g_ebp;

loc_0042F550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F55Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0042F55B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F560
 * Original: 0x0042F560 - 0x0042F574 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F560(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    { uint32_t _old = RECOMP_ATOMIC_AND32(XBOX_PTR(eax), ecx);
      uint32_t _new = _old & (uint32_t)(ecx);
      _fa = _new; _fb = 0; _fas = (int32_t)_new; _fbs = 0; } /* lock and */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F580
 * Original: 0x0042F580 - 0x0042F5A0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F580(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042F599; /* jle: less or equal (signed <=) */

loc_0042F594: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F599u); RECOMP_ABI_CALL(0x00432B80u, sub_00432B80); /* call 0x00432B80 */

loc_0042F599: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F5A0
 * Original: 0x0042F5A0 - 0x0042F5B0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F5A0(void)
{
    uint32_t ebp = g_ebp;

loc_0042F5A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0x16;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F5B0
 * Original: 0x0042F5B0 - 0x0042F5F6 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F5B0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F5B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMD(ebp + -8) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -24, xmm0); /* movaps */
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -8)); /* movsd */
    MEMD(eax + 0x10) = xmm0.d[0]; /* movsd */
    xmm0 = XMM_MEM(ebp + -24); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F5EF; /* je: equal / zero */

loc_0042F5E5: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;

loc_0042F5EF: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F600
 * Original: 0x0042F600 - 0x0042F664 (100 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F600(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F644; /* jne: not equal / not zero */

loc_0042F616: ;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F636u); RECOMP_ABI_CALL(0x0042F670u, sub_0042F670); /* call 0x0042F670 */

loc_0042F636: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F644; /* jne: not equal / not zero */

loc_0042F63B: ;
    MEM32(ebp + -4) = 0;
    goto loc_0042F65C;

loc_0042F644: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F659u); RECOMP_ABI_CALL(0x0042F6C0u, sub_0042F6C0); /* call 0x0042F6C0 */

loc_0042F659: ;
    MEM32(ebp + -4) = eax;

loc_0042F65C: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F670
 * Original: 0x0042F670 - 0x0042F691 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F670(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F670: ;
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
 * sub_0042F6A0
 * Original: 0x0042F6A0 - 0x0042F6B3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F6A0(void)
{
    uint32_t ebp = g_ebp;

loc_0042F6A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = 0x16;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F6C0
 * Original: 0x0042F6C0 - 0x0042F8BD (509 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F6C0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_0042F6C0: ;
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
    eax = MEM32(eax);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042F70C; /* jne: not equal / not zero */

loc_0042F6DB: ;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F6FBu); RECOMP_ABI_CALL(0x0042F8C0u, sub_0042F8C0); /* call 0x0042F8C0 */

loc_0042F6FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042F70C; /* jne: not equal / not zero */

loc_0042F700: ;
    MEM32(ebp + -12) = 0;
    goto loc_0042F8B3;

loc_0042F70C: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = eax & 0x80;
    eax = eax ^ 0x80;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F72Fu); RECOMP_ABI_CALL(0x00430070u, sub_00430070); /* call 0x00430070 */

loc_0042F72F: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x10 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F743; /* je: equal / zero */

loc_0042F738: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -12) = eax;
    goto loc_0042F8B3;

loc_0042F743: ;
    eax = MEM32(ebp + -16);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F768; /* je: equal / zero */

loc_0042F74E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F760u); RECOMP_ABI_CALL(0x0042F8F0u, sub_0042F8F0); /* call 0x0042F8F0 */

loc_0042F760: ;
    MEM32(ebp + -12) = eax;
    goto loc_0042F8B3;

loc_0042F768: ;
    MEM32(ebp + -32) = 0x64;

loc_0042F76F: ;
    ecx = MEM32(ebp + -32);
    eax = ecx;
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -32) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -37) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F7A5; /* je: equal / zero */

loc_0042F784: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -37) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F7A5; /* je: equal / zero */

loc_0042F794: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -37) = LO8(eax);

loc_0042F7A5: ;
    SET_LO8(eax, MEM8(ebp + -37));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_0042F7AE; /* jne: not equal / not zero */

loc_0042F7AC: ;
    goto loc_0042F7B5;

loc_0042F7AE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F7B3u); RECOMP_ABI_CALL(0x0042FCE0u, sub_0042FCE0); /* call 0x0042FCE0 */

loc_0042F7B3: ;
    goto loc_0042F76F;

loc_0042F7B5: ;
    goto loc_0042F7B7;

loc_0042F7B7: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F7C2u); RECOMP_ABI_CALL(0x00430070u, sub_00430070); /* call 0x00430070 */

loc_0042F7C2: ;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042F8AD; /* jne: not equal / not zero */

loc_0042F7CE: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    eax = eax & 0x3FFFFFFF;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042F7FB; /* jne: not equal / not zero */

loc_0042F7E8: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F7F9; /* je: equal / zero */

loc_0042F7EE: ;
    eax = MEM32(ebp + -16);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F7FB; /* je: equal / zero */

loc_0042F7F9: ;
    goto loc_0042F7B7;

loc_0042F7FB: ;
    eax = MEM32(ebp + -16);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042F827; /* jne: not equal / not zero */

loc_0042F806: ;
    eax = MEM32(ebp + -36);
    MEM32(ebp + -44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F811u); RECOMP_ABI_CALL(0x0042FAB0u, sub_0042FAB0); /* call 0x0042FAB0 */

loc_0042F811: ;
    ecx = eax;
    eax = MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0042F827; /* jne: not equal / not zero */

loc_0042F81B: ;
    MEM32(ebp + -12) = 0x23;
    goto loc_0042F8B3;

loc_0042F827: ;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F835u); RECOMP_ABI_CALL(0x0042FAC0u, sub_0042FAC0); /* call 0x0042FAC0 */

loc_0042F835: ;
    eax = MEM32(ebp + -20);
    eax = eax | 0x80000000u;
    MEM32(ebp + -24) = eax;
    edx = MEM32(ebp + 8);
    edx = edx + 4;
    ecx = MEM32(ebp + -20);
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F85Cu); RECOMP_ABI_CALL(0x0042F8C0u, sub_0042F8C0); /* call 0x0042F8C0 */

loc_0042F85C: ;
    esi = MEM32(ebp + 8);
    esi = esi + 4;
    edx = MEM32(ebp + -24);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -28);
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F889u); RECOMP_ABI_CALL(0x0042CEF0u, sub_0042CEF0); /* call 0x0042CEF0 */

loc_0042F889: ;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F89Au); RECOMP_ABI_CALL(0x0042FAE0u, sub_0042FAE0); /* call 0x0042FAE0 */

loc_0042F89A: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F8A8; /* je: equal / zero */

loc_0042F8A0: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F8A8; /* je: equal / zero */

loc_0042F8A6: ;
    goto loc_0042F8AD;

loc_0042F8A8: ;
    goto loc_0042F7B7;

loc_0042F8AD: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -12) = eax;

loc_0042F8B3: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042F8C0
 * Original: 0x0042F8C0 - 0x0042F8E1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F8C0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F8C0: ;
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
 * sub_0042F8F0
 * Original: 0x0042F8F0 - 0x0042FAA5 (437 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F8F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F8F0: ;
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
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = eax & 0x80;
    eax = eax ^ 0x80;
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F91Bu); RECOMP_ABI_CALL(0x0042FAB0u, sub_0042FAB0); /* call 0x0042FAB0 */

loc_0042F91B: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F930; /* jne: not equal / not zero */

loc_0042F924: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -24);
    MEM32(eax + 0x54) = ecx;

loc_0042F930: ;
    goto loc_0042F932;

loc_0042F932: ;
    edx = MEM32(ebp + 8);
    edx = edx + 4;
    ecx = MEM32(ebp + -20);
    ecx = ecx | 6;
    eax = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F95Bu); RECOMP_ABI_CALL(0x0042FB00u, sub_0042FB00); /* call 0x0042FB00 */

loc_0042F95B: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F932; /* je: equal / zero */

loc_0042F96A: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F97A; /* je: equal / zero */

loc_0042F970: ;
    eax = MEM32(ebp + -24);
    MEM32(eax + 0x54) = 0;

loc_0042F97A: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042F9A5; /* je: equal / zero */

loc_0042F984: ;
    goto loc_0042F986;

loc_0042F986: ;
    eax = MEM32(ebp + -36);
    eax = eax - 0x23;
    if ((eax == 0)) goto loc_0042FA42; /* je: equal / zero */

loc_0042F992: ;
    goto loc_0042F994;

loc_0042F994: ;
    eax = MEM32(ebp + -36);
    eax = eax - 0x6E;
    if ((eax == 0)) goto loc_0042FA3A; /* je: equal / zero */

loc_0042F9A0: ;
    goto loc_0042FA57;

loc_0042F9A5: ;
    eax = MEM32(ebp + -16);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FA20; /* jne: not equal / not zero */

loc_0042F9B0: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax & 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F9CB; /* jne: not equal / not zero */

loc_0042F9C0: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FA20; /* je: equal / zero */

loc_0042F9CB: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 8;
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042F9E1u); RECOMP_ABI_CALL(0x0042FB80u, sub_0042FB80); /* call 0x0042FB80 */

loc_0042F9E1: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 4;
    edx = 0; /* xor self */
    edi = MEM32(ebp + -20);
    esi = edi;
    esi = esi | 7;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FA14u); RECOMP_ABI_CALL(0x0042FBA0u, sub_0042FBA0); /* call 0x0042FBA0 */

loc_0042FA14: ;
    eax = MEM32(ebp + -24);
    MEM32(eax + 0x54) = 0;
    goto loc_0042FA57;

loc_0042FA20: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FA35u); RECOMP_ABI_CALL(0x00430070u, sub_00430070); /* call 0x00430070 */

loc_0042FA35: ;
    MEM32(ebp + -12) = eax;
    goto loc_0042FA9B;

loc_0042FA3A: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -12) = eax;
    goto loc_0042FA9B;

loc_0042FA42: ;
    eax = MEM32(ebp + -16);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FA55; /* jne: not equal / not zero */

loc_0042FA4D: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -12) = eax;
    goto loc_0042FA9B;

loc_0042FA55: ;
    goto loc_0042FA57;

loc_0042FA57: ;
    goto loc_0042FA59;

loc_0042FA59: ;
    MEM32(ebp + -32) = 0;
    eax = MEM32(ebp + 0xC);
    ecx = ebp + -32;
    edx = 0; /* xor self */
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FA8Cu); RECOMP_ABI_CALL(0x0042CEF0u, sub_0042CEF0); /* call 0x0042CEF0 */

loc_0042FA8C: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x6E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FA59; /* jne: not equal / not zero */

loc_0042FA95: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -12) = eax;

loc_0042FA9B: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042FAB0
 * Original: 0x0042FAB0 - 0x0042FAC0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FAB0(void)
{
    uint32_t ebp = g_ebp;

loc_0042FAB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FABBu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0042FABB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042FAC0
 * Original: 0x0042FAC0 - 0x0042FAD1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FAC0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042FAC0: ;
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
 * sub_0042FAE0
 * Original: 0x0042FAE0 - 0x0042FAF1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FAE0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042FAE0: ;
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
 * sub_0042FB00
 * Original: 0x0042FB00 - 0x0042FB75 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FB00(void)
{
    uint32_t ebp = g_ebp;

loc_0042FB00: ;
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
    MEM32(ebp + -16) = eax;
    edx = 0; /* xor self */
    esi = MEM32(ebp + 0xC);
    edi = esi;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    ebx = MEM32(ebp + 0x10);
    eax = ebx;
    eax = RECOMP_SAR(eax, 0x1F, 32, NULL);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    ecx = edx;
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
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FB6Du); RECOMP_ABI_CALL(0x0042FC30u, sub_0042FC30); /* call 0x0042FC30 */

loc_0042FB6D: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042FB80
 * Original: 0x0042FB80 - 0x0042FB98 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FB80(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042FB80: ;
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
 * sub_0042FBA0
 * Original: 0x0042FBA0 - 0x0042FC2B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FBA0(void)
{
    uint32_t ebp = g_ebp;

loc_0042FBA0: ;
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
    PUSH32(esp, 0x0042FC23u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042FC23: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042FC30
 * Original: 0x0042FC30 - 0x0042FCDB (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FC30(void)
{
    uint32_t ebp = g_ebp;

loc_0042FC30: ;
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
    PUSH32(esp, 0x0042FCD3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_0042FCD3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042FCE0
 * Original: 0x0042FCE0 - 0x0042FCE7 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FCE0(void)
{
    uint32_t ebp = g_ebp;

loc_0042FCE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    (void)0; /* pause: cache/ordering hint, nothing to model */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042FCF0
 * Original: 0x0042FCF0 - 0x0042FFA0 (688 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FCF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042FCF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FD08u); RECOMP_ABI_CALL(0x0042FFA0u, sub_0042FFA0); /* call 0x0042FFA0 */

loc_0042FD08: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0x18);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    eax = eax & 0x3FFFFFFF;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FD9B; /* jne: not equal / not zero */

loc_0042FD30: ;
    eax = MEM32(ebp + -24);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FD5E; /* je: equal / zero */

loc_0042FD3B: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0042FD5E; /* jge: greater or equal (signed >=) */

loc_0042FD44: ;
    eax = MEM32(ebp + -16);
    eax = eax & 0x40000000;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = 0;
    goto loc_0042FEAE;

loc_0042FD5E: ;
    eax = MEM32(ebp + -24);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FD99; /* jne: not equal / not zero */

loc_0042FD69: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x7FFFFFFF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042FD81; /* jb: below (unsigned <) */

loc_0042FD75: ;
    MEM32(ebp + -12) = 0xB;
    goto loc_0042FF96;

loc_0042FD81: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    ecx = ecx + 1;
    MEM32(eax + 0x14) = ecx;
    MEM32(ebp + -12) = 0;
    goto loc_0042FF96;

loc_0042FD99: ;
    goto loc_0042FD9B;

loc_0042FD9B: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FDB0; /* jne: not equal / not zero */

loc_0042FDA4: ;
    MEM32(ebp + -12) = 0x83;
    goto loc_0042FF96;

loc_0042FDB0: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FDC7; /* jne: not equal / not zero */

loc_0042FDB6: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FDD3; /* je: equal / zero */

loc_0042FDBC: ;
    eax = MEM32(ebp + -24);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FDD3; /* jne: not equal / not zero */

loc_0042FDC7: ;
    MEM32(ebp + -12) = 0x10;
    goto loc_0042FF96;

loc_0042FDD3: ;
    eax = MEM32(ebp + -24);
    eax = eax & 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FE45; /* je: equal / zero */

loc_0042FDE0: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FE23; /* jne: not equal / not zero */

loc_0042FDE9: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x50) = 0xFFFFFFF4u;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x4C;
    edx = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0xC;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x63;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FE23u); RECOMP_ABI_CALL(0x0042FFB0u, sub_0042FFB0); /* call 0x0042FFB0 */

loc_0042FE23: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FE39; /* je: equal / zero */

loc_0042FE2E: ;
    eax = MEM32(ebp + -32);
    eax = eax | 0x80000000u;
    MEM32(ebp + -32) = eax;

loc_0042FE39: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = ecx;

loc_0042FE45: ;
    eax = MEM32(ebp + -16);
    eax = eax & 0x40000000;
    eax = eax | MEM32(ebp + -32);
    MEM32(ebp + -32) = eax;
    edx = MEM32(ebp + 8);
    edx = edx + 4;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -32);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FE6Fu); RECOMP_ABI_CALL(0x00430040u, sub_00430040); /* call 0x00430040 */

loc_0042FE6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FEAC; /* je: equal / zero */

loc_0042FE74: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0;
    eax = MEM32(ebp + -24);
    eax = eax & 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FEA0; /* jne: not equal / not zero */

loc_0042FE89: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FEA0; /* je: equal / zero */

loc_0042FE94: ;
    MEM32(ebp + -12) = 0x83;
    goto loc_0042FF96;

loc_0042FEA0: ;
    MEM32(ebp + -12) = 0x10;
    goto loc_0042FF96;

loc_0042FEAC: ;
    goto loc_0042FEAE;

loc_0042FEAE: ;
    eax = MEM32(ebp + -24);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FF29; /* je: equal / zero */

loc_0042FEB9: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FF29; /* je: equal / zero */

loc_0042FEC4: ;
    eax = MEM32(ebp + -24);
    eax = ~eax;
    eax = eax & 0x80;
    MEM32(ebp + -36) = eax;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 4;
    edx = 0; /* xor self */
    edi = MEM32(ebp + -36);
    esi = edi;
    esi = esi | 7;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FF04u); RECOMP_ABI_CALL(0x0042FFB0u, sub_0042FFB0); /* call 0x0042FFB0 */

loc_0042FF04: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0;
    edx = MEM32(ebp + -24);
    edx = edx & 4;
    eax = 0x10;
    ecx = 0x83;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) eax = ecx; /* cmovne */
    MEM32(ebp + -12) = eax;
    goto loc_0042FF96;

loc_0042FF29: ;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + 0x4C);
    MEM32(ebp + -40) = eax;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x4C;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(ebp + -40);
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FF60; /* je: equal / zero */

loc_0042FF54: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -40);
    MEM32(eax + -4) = ecx;

loc_0042FF60: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x4C) = ecx;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FF8F; /* je: equal / zero */

loc_0042FF7C: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x14) = 0;
    MEM32(ebp + -12) = 0x82;
    goto loc_0042FF96;

loc_0042FF8F: ;
    MEM32(ebp + -12) = 0;

loc_0042FF96: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042FFA0
 * Original: 0x0042FFA0 - 0x0042FFB0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FFA0(void)
{
    uint32_t ebp = g_ebp;

loc_0042FFA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042FFABu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0042FFAB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_0042FFB0
 * Original: 0x0042FFB0 - 0x0043003B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FFB0(void)
{
    uint32_t ebp = g_ebp;

loc_0042FFB0: ;
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
    PUSH32(esp, 0x00430033u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00430033: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430040
 * Original: 0x00430040 - 0x00430061 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430040(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430040: ;
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
 * sub_00430070
 * Original: 0x00430070 - 0x004300C4 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430070(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430070: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004300AE; /* jne: not equal / not zero */

loc_00430086: ;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004300A6u); RECOMP_ABI_CALL(0x00430040u, sub_00430040); /* call 0x00430040 */

loc_004300A6: ;
    eax = eax & 0x10;
    MEM32(ebp + -4) = eax;
    goto loc_004300BC;

loc_004300AE: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004300B9u); RECOMP_ABI_CALL(0x0042FCF0u, sub_0042FCF0); /* call 0x0042FCF0 */

loc_004300B9: ;
    MEM32(ebp + -4) = eax;

loc_004300BC: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004300D0
 * Original: 0x004300D0 - 0x004302DB (523 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004300D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004300D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x50;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 0xF;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = eax & 0x80;
    eax = eax ^ 0x80;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -36) = 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004301D9; /* je: equal / zero */

loc_00430112: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430117u); RECOMP_ABI_CALL(0x004302E0u, sub_004302E0); /* call 0x004302E0 */

loc_00430117: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + -40);
    eax = eax & 0x3FFFFFFF;
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + -44);
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430145; /* je: equal / zero */

loc_00430139: ;
    MEM32(ebp + -12) = 1;
    goto loc_004302D1;

loc_00430145: ;
    eax = MEM32(ebp + -28);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430171; /* jne: not equal / not zero */

loc_00430150: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430171; /* je: equal / zero */

loc_00430159: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    ecx = ecx + 0xFFFFFFFFu;
    MEM32(eax + 0x14) = ecx;
    MEM32(ebp + -12) = 0;
    goto loc_004302D1;

loc_00430171: ;
    eax = MEM32(ebp + -28);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430190; /* je: equal / zero */

loc_0043017C: ;
    eax = MEM32(ebp + -40);
    eax = eax & 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430190; /* je: equal / zero */

loc_00430189: ;
    MEM32(ebp + -36) = 0x7FFFFFFF;

loc_00430190: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004301A7; /* jne: not equal / not zero */

loc_00430196: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x10;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x54) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004301A7u); RECOMP_ABI_CALL(0x00432BC0u, sub_00432BC0); /* call 0x00432BC0 */

loc_004301A7: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x10);
    MEM32(ebp + -52) = eax;
    ecx = MEM32(ebp + -52);
    eax = MEM32(ebp + -48);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -52);
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004301D7; /* je: equal / zero */

loc_004301CE: ;
    ecx = MEM32(ebp + -48);
    eax = MEM32(ebp + -52);
    MEM32(eax + -4) = ecx;

loc_004301D7: ;
    goto loc_004301D9;

loc_004301D9: ;
    eax = MEM32(ebp + -28);
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043026E; /* je: equal / zero */

loc_004301E8: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043020F; /* jl: less (signed <) */

loc_004301EE: ;
    edx = MEM32(ebp + 8);
    edx = edx + 4;
    ecx = MEM32(ebp + -40);
    eax = MEM32(ebp + -36);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043020Au); RECOMP_ABI_CALL(0x004302F0u, sub_004302F0); /* call 0x004302F0 */

loc_0043020A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043025E; /* je: equal / zero */

loc_0043020F: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043022B; /* je: equal / zero */

loc_00430215: ;
    eax = MEM32(ebp + 8);
    eax = eax + 8;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043022Bu); RECOMP_ABI_CALL(0x00430320u, sub_00430320); /* call 0x00430320 */

loc_0043022B: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 4;
    edx = 0; /* xor self */
    edi = MEM32(ebp + -32);
    esi = edi;
    esi = esi | 7;
    edi = RECOMP_SAR(edi, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043025Eu); RECOMP_ABI_CALL(0x00430340u, sub_00430340); /* call 0x00430340 */

loc_0043025E: ;
    MEM32(ebp + -24) = 0;
    MEM32(ebp + -20) = 0;
    goto loc_00430286;

loc_0043026E: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 4;
    eax = MEM32(ebp + -36);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430283u); RECOMP_ABI_CALL(0x004303D0u, sub_004303D0); /* call 0x004303D0 */

loc_00430283: ;
    MEM32(ebp + -24) = eax;

loc_00430286: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004302A1; /* je: equal / zero */

loc_0043028C: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004302A1; /* jne: not equal / not zero */

loc_00430292: ;
    eax = MEM32(ebp + -16);
    MEM32(eax + 0x54) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004302A1u); RECOMP_ABI_CALL(0x00432C00u, sub_00432C00); /* call 0x00432C00 */

loc_004302A1: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004302AD; /* jne: not equal / not zero */

loc_004302A7: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004302CA; /* jge: greater or equal (signed >=) */

loc_004302AD: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 4;
    eax = MEM32(ebp + -32);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004302CAu); RECOMP_ABI_CALL(0x004303F0u, sub_004303F0); /* call 0x004303F0 */

loc_004302CA: ;
    MEM32(ebp + -12) = 0;

loc_004302D1: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x50;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004302E0
 * Original: 0x004302E0 - 0x004302F0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004302E0(void)
{
    uint32_t ebp = g_ebp;

loc_004302E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004302EBu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_004302EB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004302F0
 * Original: 0x004302F0 - 0x00430311 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004302F0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004302F0: ;
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
 * sub_00430320
 * Original: 0x00430320 - 0x00430338 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430320(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430320: ;
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
 * sub_00430340
 * Original: 0x00430340 - 0x004303CB (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430340(void)
{
    uint32_t ebp = g_ebp;

loc_00430340: ;
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
    PUSH32(esp, 0x004303C3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004303C3: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004303D0
 * Original: 0x004303D0 - 0x004303E9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004303D0(void)
{
    uint32_t ebp = g_ebp;

loc_004303D0: ;
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
 * sub_004303F0
 * Original: 0x004303F0 - 0x004304C1 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004303F0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004303F0: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0043040F; /* je: equal / zero */

loc_00430408: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0043040F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043041C; /* jge: greater or equal (signed >=) */

loc_00430415: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0043041C: ;
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
    PUSH32(esp, 0x00430463u); RECOMP_ABI_CALL(0x004304D0u, sub_004304D0); /* call 0x004304D0 */

loc_00430463: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_004304B6; /* jne: not equal / not zero */

loc_0043046F: ;
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
    PUSH32(esp, 0x004304ADu); RECOMP_ABI_CALL(0x004304D0u, sub_004304D0); /* call 0x004304D0 */

loc_004304AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_004304B6: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004304D0
 * Original: 0x004304D0 - 0x0043056B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004304D0(void)
{
    uint32_t ebp = g_ebp;

loc_004304D0: ;
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
    PUSH32(esp, 0x00430563u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00430563: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430570
 * Original: 0x00430570 - 0x0043057A (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430570(void)
{
    uint32_t ebp = g_ebp;

loc_00430570: ;
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
 * sub_00430580
 * Original: 0x00430580 - 0x0043059D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430580(void)
{
    uint32_t ebp = g_ebp;

loc_00430580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004305A0
 * Original: 0x004305A0 - 0x004306A1 (257 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004305A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004305A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004305D3; /* je: equal / zero */

loc_004305B6: ;
    goto loc_004305B8;

loc_004305B8: ;
    eax = MEM32(ebp + -16);
    eax = eax - 1;
    if ((eax == 0)) goto loc_004305E9; /* je: equal / zero */

loc_004305C0: ;
    goto loc_004305C2;

loc_004305C2: ;
    eax = MEM32(ebp + -16);
    eax = eax - 2;
    if ((eax == 0)) goto loc_00430689; /* je: equal / zero */

loc_004305CE: ;
    goto loc_00430692;

loc_004305D3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFF7u;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;
    goto loc_00430699;

loc_004305E9: ;
    eax = MEM32(0x838F70);
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00430668; /* jge: greater or equal (signed >=) */

loc_004305F7: ;
    MEM32(ebp + -12) = 0;
    edx = 0; /* xor self */
    ecx = ebp + -12;
    eax = esp;
    MEM32(ebp + -20) = eax;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 0;
    MEM32(eax + 0x1C) = 0;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 6;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x62;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043064Au); RECOMP_ABI_CALL(0x004306B0u, sub_004306B0); /* call 0x004306B0 */

loc_0043064A: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    ecx = 0x838F70;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430668u); RECOMP_ABI_CALL(0x00430760u, sub_00430760); /* call 0x00430760 */

loc_00430668: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430676; /* je: equal / zero */

loc_0043066E: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -4) = eax;
    goto loc_00430699;

loc_00430676: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 8;
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;
    goto loc_00430699;

loc_00430689: ;
    MEM32(ebp + -4) = 0x5F;
    goto loc_00430699;

loc_00430692: ;
    MEM32(ebp + -4) = 0x16;

loc_00430699: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x48;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004306B0
 * Original: 0x004306B0 - 0x0043075B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004306B0(void)
{
    uint32_t ebp = g_ebp;

loc_004306B0: ;
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
    PUSH32(esp, 0x00430753u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00430753: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430760
 * Original: 0x00430760 - 0x00430778 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430760(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430760: ;
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
 * sub_00430780
 * Original: 0x00430780 - 0x004307C2 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430780(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00430780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00430799; /* jbe: below or equal (unsigned <=) */

loc_00430790: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_004307BA;

loc_00430799: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFF7Fu;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0xC);
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 8);
    ecx = ecx | MEM32(eax);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_004307BA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004307D0
 * Original: 0x004307D0 - 0x0043089D (205 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004307D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004307D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x40;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004307F0; /* jbe: below or equal (unsigned <=) */

loc_004307E4: ;
    MEM32(ebp + -12) = 0x16;
    goto loc_00430893;

loc_004307F0: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430882; /* je: equal / zero */

loc_004307FA: ;
    eax = MEM32(0x838F74);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00430861; /* jge: greater or equal (signed >=) */

loc_00430808: ;
    edx = 0; /* xor self */
    ecx = ebp + -20;
    edi = edx;
    esi = ebp + -24;
    eax = esp;
    MEM32(ebp + -28) = eax;
    MEM32(eax + 0x1C) = edi;
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430843u); RECOMP_ABI_CALL(0x004308A0u, sub_004308A0); /* call 0x004308A0 */

loc_00430843: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -16);
    ecx = 0x838F74;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430861u); RECOMP_ABI_CALL(0x00430940u, sub_00430940); /* call 0x00430940 */

loc_00430861: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043086F; /* je: equal / zero */

loc_00430867: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_00430893;

loc_0043086F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx | 4;
    MEM32(eax) = ecx;
    MEM32(ebp + -12) = 0;
    goto loc_00430893;

loc_00430882: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFBu;
    MEM32(eax) = ecx;
    MEM32(ebp + -12) = 0;

loc_00430893: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x40;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004308A0
 * Original: 0x004308A0 - 0x0043093B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004308A0(void)
{
    uint32_t ebp = g_ebp;

loc_004308A0: ;
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
    PUSH32(esp, 0x00430933u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00430933: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430940
 * Original: 0x00430940 - 0x00430958 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430940(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430940: ;
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
 * sub_00430960
 * Original: 0x00430960 - 0x00430998 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430960(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00430979; /* jbe: below or equal (unsigned <=) */

loc_00430970: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_00430990;

loc_00430979: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFCu;
    ecx = ecx | MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_00430990: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004309A0
 * Original: 0x004309A0 - 0x00430AAD (269 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004309A0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004309A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);

loc_004309AC: ;
    ecx = MEM32(ebp + 8);
    eax = esp;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = 1;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004309C6u); RECOMP_ABI_CALL(0x00430AB0u, sub_00430AB0); /* call 0x00430AB0 */

loc_004309C6: ;
    ecx = eax;
    MEM32(ebp + -20) = ecx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((!_cf && eax != 0)) goto loc_00430AA0; /* ja: above (unsigned >) */

loc_004309D4: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax * 4 + 0x508C94);
    { uint32_t _jt = eax; /* recovered local computed goto */
    if (_jt == 0x004309E0u) goto loc_004309E0;
    if (_jt == 0x00430A52u) goto loc_00430A52;
    if (_jt == 0x00430A6Du) goto loc_00430A6D;
    if (_jt == 0x00430A97u) goto loc_00430A97;
    g_ebp = g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004309E0: ;
    goto loc_004309E2;

loc_004309E2: ;
    eax = MEM32(ebp + 8);
    edx = ebp + -16;
    ecx = 0x430AE0;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004309FEu); RECOMP_ABI_CALL(0x0042E160u, sub_0042E160); /* call 0x0042E160 */

loc_004309FE: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x00430A01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00430A01: ;
    eax = ebp + -16;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430A16u); RECOMP_ABI_CALL(0x0042E190u, sub_0042E190); /* call 0x0042E190 */

loc_00430A16: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430A29u); RECOMP_ABI_CALL(0x00430B30u, sub_00430B30); /* call 0x00430B30 */

loc_00430A29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00430A49; /* jne: not equal / not zero */

loc_00430A2E: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430A49u); RECOMP_ABI_CALL(0x00430B50u, sub_00430B50); /* call 0x00430B50 */

loc_00430A49: ;
    MEM32(ebp + -4) = 0;
    goto loc_00430AA5;

loc_00430A52: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430A6Du); RECOMP_ABI_CALL(0x00430AB0u, sub_00430AB0); /* call 0x00430AB0 */

loc_00430A6D: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 3;
    MEM32(esp + 0xC) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430A92u); RECOMP_ABI_CALL(0x0042CF70u, sub_0042CF70); /* call 0x0042CF70 */

loc_00430A92: ;
    goto loc_004309AC;

loc_00430A97: ;
    MEM32(ebp + -4) = 0;
    goto loc_00430AA5;

loc_00430AA0: ;
    goto loc_004309AC;

loc_00430AA5: ;
    eax = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430AB0
 * Original: 0x00430AB0 - 0x00430AD1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430AB0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430AB0: ;
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
 * sub_00430AE0
 * Original: 0x00430AE0 - 0x00430B23 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430AE0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430AE0: ;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430AFEu); RECOMP_ABI_CALL(0x00430B30u, sub_00430B30); /* call 0x00430B30 */

loc_00430AFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430B1E; /* jne: not equal / not zero */

loc_00430B03: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430B1Eu); RECOMP_ABI_CALL(0x00430B50u, sub_00430B50); /* call 0x00430B50 */

loc_00430B1E: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430B30
 * Original: 0x00430B30 - 0x00430B49 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430B30(void)
{
    uint32_t ebp = g_ebp;

loc_00430B30: ;
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
 * sub_00430B50
 * Original: 0x00430B50 - 0x00430C21 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430B50(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430B50: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_00430B6F; /* je: equal / zero */

loc_00430B68: ;
    MEM32(ebp + 0x10) = 0x80;

loc_00430B6F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00430B7C; /* jge: greater or equal (signed >=) */

loc_00430B75: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_00430B7C: ;
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
    PUSH32(esp, 0x00430BC3u); RECOMP_ABI_CALL(0x00430C80u, sub_00430C80); /* call 0x00430C80 */

loc_00430BC3: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00430C16; /* jne: not equal / not zero */

loc_00430BCF: ;
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
    PUSH32(esp, 0x00430C0Du); RECOMP_ABI_CALL(0x00430C80u, sub_00430C80); /* call 0x00430C80 */

loc_00430C0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_00430C16: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430C30
 * Original: 0x00430C30 - 0x00430C71 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430C30(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430C54; /* jne: not equal / not zero */

loc_00430C46: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430C4Bu); RECOMP_ABI_CALL(0x00430D20u, sub_00430D20); /* call 0x00430D20 */

loc_00430C4B: ;
    MEM32(ebp + -4) = 0;
    goto loc_00430C69;

loc_00430C54: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430C66u); RECOMP_ABI_CALL(0x004309A0u, sub_004309A0); /* call 0x004309A0 */

loc_00430C66: ;
    MEM32(ebp + -4) = eax;

loc_00430C69: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430C80
 * Original: 0x00430C80 - 0x00430D1B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430C80(void)
{
    uint32_t ebp = g_ebp;

loc_00430C80: ;
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
    PUSH32(esp, 0x00430D13u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00430D13: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430D20
 * Original: 0x00430D20 - 0x00430D25 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430D20(void)
{
    uint32_t ebp = g_ebp;

loc_00430D20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430D30
 * Original: 0x00430D30 - 0x00430D3A (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430D30(void)
{
    uint32_t ebp = g_ebp;

loc_00430D30: ;
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
 * sub_00430D40
 * Original: 0x00430D40 - 0x00430D84 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430D40(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00430D40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(ebp + -24, xmm0); /* movaps */
    XMM_STORE(ebp + -40, xmm0); /* movaps */
    xmm0 = XMM_MEM(ebp + -40); /* movups */
    xmm1 = XMM_MEM(ebp + -24); /* movups */
    XMM_STORE(eax + 0x10, xmm1); /* movups */
    XMM_STORE(eax, xmm0); /* movups */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430D7D; /* je: equal / zero */

loc_00430D6F: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    _shift_result = RECOMP_SHIFT(ecx, 7, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;

loc_00430D7D: ;
    eax = 0; /* xor self */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430D90
 * Original: 0x00430D90 - 0x00430DB3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430D90(void)
{
    uint32_t ebp = g_ebp;

loc_00430D90: ;
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
    PUSH32(esp, 0x00430DAEu); RECOMP_ABI_CALL(0x00430DC0u, sub_00430DC0); /* call 0x00430DC0 */

loc_00430DAE: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430DC0
 * Original: 0x00430DC0 - 0x00430F0E (334 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430DC0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00430DC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430DD9u); RECOMP_ABI_CALL(0x00431150u, sub_00431150); /* call 0x00431150 */

loc_00430DD9: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x10 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00430DED; /* je: equal / zero */

loc_00430DE2: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_00430F04;

loc_00430DED: ;
    MEM32(ebp + -24) = 0x64;

loc_00430DF4: ;
    ecx = MEM32(ebp + -24);
    eax = ecx;
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -25) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00430E29; /* je: equal / zero */

loc_00430E09: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -25) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00430E29; /* je: equal / zero */

loc_00430E18: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -25) = LO8(eax);

loc_00430E29: ;
    SET_LO8(eax, MEM8(ebp + -25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_00430E32; /* jne: not equal / not zero */

loc_00430E30: ;
    goto loc_00430E39;

loc_00430E32: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430E37u); RECOMP_ABI_CALL(0x00430F80u, sub_00430F80); /* call 0x00430F80 */

loc_00430E37: ;
    goto loc_00430DF4;

loc_00430E39: ;
    goto loc_00430E3B;

loc_00430E3B: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430E46u); RECOMP_ABI_CALL(0x00431150u, sub_00431150); /* call 0x00431150 */

loc_00430E46: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00430EFE; /* jne: not equal / not zero */

loc_00430E52: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00430E6E; /* je: equal / zero */

loc_00430E5F: ;
    eax = MEM32(ebp + -16);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00430E70; /* je: equal / zero */

loc_00430E6E: ;
    goto loc_00430E3B;

loc_00430E70: ;
    eax = MEM32(ebp + -16);
    eax = eax | 0x80000000u;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430E89u); RECOMP_ABI_CALL(0x00430F10u, sub_00430F10); /* call 0x00430F10 */

loc_00430E89: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -20);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430EA2u); RECOMP_ABI_CALL(0x00430F30u, sub_00430F30); /* call 0x00430F30 */

loc_00430EA2: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -20);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    eax = eax ^ 0x80;
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430ED4u); RECOMP_ABI_CALL(0x0042CEF0u, sub_0042CEF0); /* call 0x0042CEF0 */

loc_00430ED4: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430EE5u); RECOMP_ABI_CALL(0x00430F60u, sub_00430F60); /* call 0x00430F60 */

loc_00430EE5: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00430EF9; /* je: equal / zero */

loc_00430EEB: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00430EF9; /* je: equal / zero */

loc_00430EF1: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_00430F04;

loc_00430EF9: ;
    goto loc_00430E3B;

loc_00430EFE: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;

loc_00430F04: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430F10
 * Original: 0x00430F10 - 0x00430F21 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430F10(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430F10: ;
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
 * sub_00430F30
 * Original: 0x00430F30 - 0x00430F51 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430F30(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430F30: ;
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
 * sub_00430F60
 * Original: 0x00430F60 - 0x00430F71 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430F60(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430F60: ;
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
 * sub_00430F80
 * Original: 0x00430F80 - 0x00430F87 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430F80(void)
{
    uint32_t ebp = g_ebp;

loc_00430F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    (void)0; /* pause: cache/ordering hint, nothing to model */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00430F90
 * Original: 0x00430F90 - 0x004310CF (319 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430F90(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00430F90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x30)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00430FA9u); RECOMP_ABI_CALL(0x00431200u, sub_00431200); /* call 0x00431200 */

loc_00430FA9: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x10 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00430FBD; /* je: equal / zero */

loc_00430FB2: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_004310C5;

loc_00430FBD: ;
    MEM32(ebp + -24) = 0x64;

loc_00430FC4: ;
    ecx = MEM32(ebp + -24);
    eax = ecx;
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -24) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -25) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00430FF9; /* je: equal / zero */

loc_00430FD9: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -25) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00430FF9; /* je: equal / zero */

loc_00430FE8: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -25) = LO8(eax);

loc_00430FF9: ;
    SET_LO8(eax, MEM8(ebp + -25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_00431002; /* jne: not equal / not zero */

loc_00431000: ;
    goto loc_00431009;

loc_00431002: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431007u); RECOMP_ABI_CALL(0x00431140u, sub_00431140); /* call 0x00431140 */

loc_00431007: ;
    goto loc_00430FC4;

loc_00431009: ;
    goto loc_0043100B;

loc_0043100B: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431016u); RECOMP_ABI_CALL(0x00431200u, sub_00431200); /* call 0x00431200 */

loc_00431016: ;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_004310BF; /* jne: not equal / not zero */

loc_00431022: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_00431031; /* jne: not equal / not zero */

loc_0043102F: ;
    goto loc_0043100B;

loc_00431031: ;
    eax = MEM32(ebp + -16);
    eax = eax | 0x80000000u;
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043104Au); RECOMP_ABI_CALL(0x004310D0u, sub_004310D0); /* call 0x004310D0 */

loc_0043104A: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -20);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431063u); RECOMP_ABI_CALL(0x004310F0u, sub_004310F0); /* call 0x004310F0 */

loc_00431063: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(ebp + -20);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    eax = eax ^ 0x80;
    edi = 0; /* xor self */
    MEM32(esp) = esi;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431095u); RECOMP_ABI_CALL(0x0042CEF0u, sub_0042CEF0); /* call 0x0042CEF0 */

loc_00431095: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004310A6u); RECOMP_ABI_CALL(0x00431120u, sub_00431120); /* call 0x00431120 */

loc_004310A6: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004310BA; /* je: equal / zero */

loc_004310AC: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_004310BA; /* je: equal / zero */

loc_004310B2: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;
    goto loc_004310C5;

loc_004310BA: ;
    goto loc_0043100B;

loc_004310BF: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -12) = eax;

loc_004310C5: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x30;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004310D0
 * Original: 0x004310D0 - 0x004310E1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004310D0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004310D0: ;
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
 * sub_004310F0
 * Original: 0x004310F0 - 0x00431111 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004310F0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004310F0: ;
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
 * sub_00431120
 * Original: 0x00431120 - 0x00431131 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431120(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431120: ;
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
 * sub_00431140
 * Original: 0x00431140 - 0x00431147 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431140(void)
{
    uint32_t ebp = g_ebp;

loc_00431140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    (void)0; /* pause: cache/ordering hint, nothing to model */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431150
 * Original: 0x00431150 - 0x004311C2 (114 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431150(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00431150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);

loc_00431159: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -8);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x7FFFFFFF (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043117E; /* jne: not equal / not zero */

loc_00431175: ;
    MEM32(ebp + -4) = 0x10;
    goto loc_004311BA;

loc_0043117E: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0x7FFFFFFE (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00431190; /* jne: not equal / not zero */

loc_00431187: ;
    MEM32(ebp + -4) = 0xB;
    goto loc_004311BA;

loc_00431190: ;
    goto loc_00431192;

loc_00431192: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004311AEu); RECOMP_ABI_CALL(0x004311D0u, sub_004311D0); /* call 0x004311D0 */

loc_004311AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00431159; /* jne: not equal / not zero */

loc_004311B3: ;
    MEM32(ebp + -4) = 0;

loc_004311BA: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004311D0
 * Original: 0x004311D0 - 0x004311F1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004311D0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004311D0: ;
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
 * sub_00431200
 * Original: 0x00431200 - 0x00431243 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431200(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431200: ;
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
    MEM32(esp + 8) = 0x7FFFFFFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431226u); RECOMP_ABI_CALL(0x00431250u, sub_00431250); /* call 0x00431250 */

loc_00431226: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431234; /* je: equal / zero */

loc_0043122B: ;
    MEM32(ebp + -4) = 0x10;
    goto loc_0043123B;

loc_00431234: ;
    MEM32(ebp + -4) = 0;

loc_0043123B: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431250
 * Original: 0x00431250 - 0x00431271 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431250(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431250: ;
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
 * sub_00431280
 * Original: 0x00431280 - 0x00431328 (168 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431280(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    eax = eax ^ 0x80;
    MEM32(ebp + -20) = eax;

loc_00431297: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -4);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -12) = eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004312C2; /* je: equal / zero */

loc_004312BC: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004312C9; /* jne: not equal / not zero */

loc_004312C2: ;
    eax = 0; /* xor self */
    MEM32(ebp + -24) = eax;
    goto loc_004312D2;

loc_004312C9: ;
    eax = MEM32(ebp + -4);
    eax = eax - 1;
    MEM32(ebp + -24) = eax;

loc_004312D2: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -16) = eax;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -16);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004312F1u); RECOMP_ABI_CALL(0x00431330u, sub_00431330); /* call 0x00431330 */

loc_004312F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431297; /* jne: not equal / not zero */

loc_004312F6: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431321; /* jne: not equal / not zero */

loc_004312FC: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431308; /* jne: not equal / not zero */

loc_00431302: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00431321; /* jge: greater or equal (signed >=) */

loc_00431308: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -20);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431321u); RECOMP_ABI_CALL(0x00431360u, sub_00431360); /* call 0x00431360 */

loc_00431321: ;
    eax = 0; /* xor self */
    esp = esp + 0x28;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431330
 * Original: 0x00431330 - 0x00431351 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431330(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431330: ;
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
 * sub_00431360
 * Original: 0x00431360 - 0x00431431 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431360(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431360: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0043137F; /* je: equal / zero */

loc_00431378: ;
    MEM32(ebp + 0x10) = 0x80;

loc_0043137F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043138C; /* jge: greater or equal (signed >=) */

loc_00431385: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_0043138C: ;
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
    PUSH32(esp, 0x004313D3u); RECOMP_ABI_CALL(0x00431440u, sub_00431440); /* call 0x00431440 */

loc_004313D3: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00431426; /* jne: not equal / not zero */

loc_004313DF: ;
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
    PUSH32(esp, 0x0043141Du); RECOMP_ABI_CALL(0x00431440u, sub_00431440); /* call 0x00431440 */

loc_0043141D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_00431426: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431440
 * Original: 0x00431440 - 0x004314DB (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431440(void)
{
    uint32_t ebp = g_ebp;

loc_00431440: ;
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
    PUSH32(esp, 0x004314D3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004314D3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004314E0
 * Original: 0x004314E0 - 0x00431503 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004314E0(void)
{
    uint32_t ebp = g_ebp;

loc_004314E0: ;
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
    PUSH32(esp, 0x004314FEu); RECOMP_ABI_CALL(0x00430F90u, sub_00430F90); /* call 0x00430F90 */

loc_004314FE: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431510
 * Original: 0x00431510 - 0x0043151A (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431510(void)
{
    uint32_t ebp = g_ebp;

loc_00431510: ;
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
 * sub_00431520
 * Original: 0x00431520 - 0x00431572 (82 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431520(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    ecx = ebp + -8;
    MEM32(ebp + -8) = 0;
    eax = ecx;
    eax = eax + 4;
    ecx = ecx + 8;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;

loc_00431547: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    MEM32(eax) = 0;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00431547; /* jne: not equal / not zero */

loc_0043155D: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    esp = esp + 0x14;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431580
 * Original: 0x00431580 - 0x004315B0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431580(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00431599; /* jbe: below or equal (unsigned <=) */

loc_00431590: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_004315A8;

loc_00431599: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    MEM32(ebp + -4) = 0;

loc_004315A8: ;
    eax = MEM32(ebp + -4);
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004315B0
 * Original: 0x004315B0 - 0x004315C0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004315B0(void)
{
    uint32_t ebp = g_ebp;

loc_004315B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004315BBu); RECOMP_ABI_CALL(0x004315C0u, sub_004315C0); /* call 0x004315C0 */

loc_004315BB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004315C0
 * Original: 0x004315C0 - 0x004315D0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004315C0(void)
{
    uint32_t ebp = g_ebp;

loc_004315C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004315CBu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_004315CB: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004315D0
 * Original: 0x004315D0 - 0x00431621 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004315D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004315D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004315EB; /* jbe: below or equal (unsigned <=) */

loc_004315E2: ;
    MEM32(ebp + -4) = 0x16;
    goto loc_00431619;

loc_004315EB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004315F0u); RECOMP_ABI_CALL(0x00431630u, sub_00431630); /* call 0x00431630 */

loc_004315F0: ;
    MEM32(ebp + -8) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431607; /* je: equal / zero */

loc_004315F9: ;
    eax = MEM32(ebp + -8);
    SET_LO8(eax, MEM8(eax + 0x28));
    ecx = ZX8(LO8(eax));
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;

loc_00431607: ;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -8);
    MEM8(eax + 0x28) = LO8(ecx);
    MEM32(ebp + -4) = 0;

loc_00431619: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431630
 * Original: 0x00431630 - 0x00431640 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431630(void)
{
    uint32_t ebp = g_ebp;

loc_00431630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043163Bu); RECOMP_ABI_CALL(0x00392190u, sub_00392190); /* call 0x00392190 */

loc_0043163B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431640
 * Original: 0x00431640 - 0x004316FB (187 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431640(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431640: ;
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
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043166F; /* je: equal / zero */

loc_00431658: ;
    eax = MEM32(ebp + 8);
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0043166F; /* jbe: below or equal (unsigned <=) */

loc_00431663: ;
    MEM32(ebp + -16) = 0x16;
    goto loc_004316F0;

loc_0043166F: ;
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
    MEM32(eax + 0x24) = 0;
    MEM32(eax + 0x20) = 8;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x87;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004316BCu); RECOMP_ABI_CALL(0x00431700u, sub_00431700); /* call 0x00431700 */

loc_004316BC: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004316EA; /* jne: not equal / not zero */

loc_004316CB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004316EA; /* je: equal / zero */

loc_004316D1: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    ecx = ecx & 0x7FFFFFFF;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFFFFFCu;
    MEM32(eax + 4) = ecx;

loc_004316EA: ;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -16) = eax;

loc_004316F0: ;
    eax = MEM32(ebp + -16);
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431700
 * Original: 0x00431700 - 0x004317AB (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431700(void)
{
    uint32_t ebp = g_ebp;

loc_00431700: ;
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
    PUSH32(esp, 0x004317A3u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_004317A3: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004317B0
 * Original: 0x004317B0 - 0x004317BA (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004317B0(void)
{
    uint32_t ebp = g_ebp;

loc_004317B0: ;
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
 * sub_004317C0
 * Original: 0x004317C0 - 0x004317D6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004317C0(void)
{
    uint32_t ebp = g_ebp;

loc_004317C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004317E0
 * Original: 0x004317E0 - 0x00431835 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004317E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004317E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);

loc_004317E9: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0043181E; /* jne: not equal / not zero */

loc_004317F8: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431815u); RECOMP_ABI_CALL(0x00431840u, sub_00431840); /* call 0x00431840 */

loc_00431815: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -1) = LO8(eax);

loc_0043181E: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00431827; /* jne: not equal / not zero */

loc_00431825: ;
    goto loc_0043182E;

loc_00431827: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043182Cu); RECOMP_ABI_CALL(0x00431870u, sub_00431870); /* call 0x00431870 */

loc_0043182C: ;
    goto loc_004317E9;

loc_0043182E: ;
    eax = 0; /* xor self */
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431840
 * Original: 0x00431840 - 0x00431861 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431840(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431840: ;
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
 * sub_00431870
 * Original: 0x00431870 - 0x00431877 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431870(void)
{
    uint32_t ebp = g_ebp;

loc_00431870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    (void)0; /* pause: cache/ordering hint, nothing to model */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431880
 * Original: 0x00431880 - 0x004318AB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431880(void)
{
    uint32_t ebp = g_ebp;

loc_00431880: ;
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
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004318A6u); RECOMP_ABI_CALL(0x004318B0u, sub_004318B0); /* call 0x004318B0 */

loc_004318A6: ;
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004318B0
 * Original: 0x004318B0 - 0x004318D1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004318B0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004318B0: ;
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
 * sub_004318E0
 * Original: 0x004318E0 - 0x00431905 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004318E0(void)
{
    uint32_t ebp = g_ebp;

loc_004318E0: ;
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
    PUSH32(esp, 0x004318FEu); RECOMP_ABI_CALL(0x00431910u, sub_00431910); /* call 0x00431910 */

loc_004318FE: ;
    eax = 0; /* xor self */
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431910
 * Original: 0x00431910 - 0x00431928 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431910(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431910: ;
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
 * sub_00431930
 * Original: 0x00431930 - 0x00431940 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431930(void)
{
    uint32_t ebp = g_ebp;

loc_00431930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043193Bu); RECOMP_ABI_CALL(0x00431940u, sub_00431940); /* call 0x00431940 */

loc_0043193B: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431940
 * Original: 0x00431940 - 0x00431945 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431940(void)
{
    uint32_t ebp = g_ebp;

loc_00431940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431950
 * Original: 0x00431950 - 0x0043195A (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431950(void)
{
    uint32_t ebp = g_ebp;

loc_00431950: ;
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
 * sub_00431960
 * Original: 0x00431960 - 0x00431987 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431960(void)
{
    uint32_t ebp = g_ebp;

loc_00431960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + -4);
    ecx = ecx & 0x7FFFFFFF;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    esp = esp + 4;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431990
 * Original: 0x00431990 - 0x004319F3 (99 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431990(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431990: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x7FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004319BC; /* jbe: below or equal (unsigned <=) */

loc_004319A8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004319ADu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_004319AD: ;
    MEM32(eax) = 0x16;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_004319EB;

loc_004319BC: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0;
    edx = MEM32(ebp + 0xC);
    ecx = 0x80;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) ecx = eax; /* cmovne */
    eax = MEM32(ebp + 8);
    MEM32(eax + 8) = ecx;
    MEM32(ebp + -4) = 0;

loc_004319EB: ;
    eax = MEM32(ebp + -4);
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431A00
 * Original: 0x00431A00 - 0x00431FE3 (1507 bytes, 374 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431A00(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00431A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esp = esp - 0x254;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -40) = 1;
    ecx = MEM32(ebp + 8);
    eax = ebp + -557;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431A2Cu); RECOMP_ABI_CALL(0x004100F0u, sub_004100F0); /* call 0x004100F0 */

loc_00431A2C: ;
    MEM32(ebp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431A40; /* jne: not equal / not zero */

loc_00431A34: ;
    MEM32(ebp + -8) = 0;
    goto loc_00431FD7;

loc_00431A40: ;
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431A4Eu); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00431A4E: ;
    _fa = (uint32_t)(MEM32(0xDFCBF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFCBF0), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431A8F; /* jne: not equal / not zero */

loc_00431A57: ;
    MEM32(esp) = 0x10;
    MEM32(esp + 4) = 0x100;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431A6Bu); RECOMP_ABI_CALL(0x003E6010u, sub_003E6010); /* call 0x003E6010 */

loc_00431A6B: ;
    MEM32(0xDFCBF0) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431A8F; /* jne: not equal / not zero */

loc_00431A75: ;
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431A83u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00431A83: ;
    MEM32(ebp + -8) = 0;
    goto loc_00431FD7;

loc_00431A8F: ;
    MEM32(ebp + -36) = 0xFFFFFFFFu;
    MEM32(ebp + -28) = 0;
    MEM32(ebp + -44) = 0;

loc_00431AA4: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00431AEF; /* jge: greater or equal (signed >=) */

loc_00431AAD: ;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 0xC);
    eax = eax + MEM32(ebp + -44);
    MEM32(ebp + -44) = eax;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431AE2; /* jne: not equal / not zero */

loc_00431AD6: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00431AE2; /* jge: greater or equal (signed >=) */

loc_00431ADC: ;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -36) = eax;

loc_00431AE2: ;
    goto loc_00431AE4;

loc_00431AE4: ;
    eax = MEM32(ebp + -28);
    eax = eax + 1;
    MEM32(ebp + -28) = eax;
    goto loc_00431AA4;

loc_00431AEF: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0x7FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431AFE; /* je: equal / zero */

loc_00431AF8: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00431B23; /* jge: greater or equal (signed >=) */

loc_00431AFE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431B03u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00431B03: ;
    MEM32(eax) = 0x18;
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431B17u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00431B17: ;
    MEM32(ebp + -8) = 0;
    goto loc_00431FD7;

loc_00431B23: ;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    ecx = 0xFFFFFFFFu;
    MEM32(eax + 8) = ecx;
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431B46u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00431B46: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0xC0;
    MEM32(ebp + 0xC) = eax;
    eax = ebp + -48;
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431B64u); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_00431B64: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431B97; /* jne: not equal / not zero */

loc_00431B6D: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431B82u); RECOMP_ABI_CALL(0x00438850u, sub_00438850); /* call 0x00438850 */

loc_00431B82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431B97; /* jne: not equal / not zero */

loc_00431B87: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431B8Cu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00431B8C: ;
    MEM32(eax) = 0x11;
    goto loc_00431F8B;

loc_00431B97: ;
    goto loc_00431B99;

loc_00431B99: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431C51; /* je: equal / zero */

loc_00431BA6: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xA0802;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431BB9u); RECOMP_ABI_CALL(0x003DD880u, sub_003DD880); /* call 0x003DD880 */

loc_00431BB9: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00431C40; /* jl: less (signed <) */

loc_00431BC2: ;
    ecx = MEM32(ebp + -24);
    eax = ebp + -292;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431BD7u); RECOMP_ABI_CALL(0x00415EB0u, sub_00415EB0); /* call 0x00415EB0 */

loc_00431BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00431C20; /* jl: less (signed <) */

loc_00431BDC: ;
    ecx = MEM32(ebp + -24);
    eax = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0xC) = 1;
    MEM32(eax + 8) = 3;
    MEM32(eax + 4) = 0x10;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431C14u); RECOMP_ABI_CALL(0x0040F7B0u, sub_0040F7B0); /* call 0x0040F7B0 */

loc_00431C14: ;
    MEM32(ebp + -68) = eax;
    ecx = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431C30; /* jne: not equal / not zero */

loc_00431C20: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431C2Bu); RECOMP_ABI_CALL(0x00438CA0u, sub_00438CA0); /* call 0x00438CA0 */

loc_00431C2B: ;
    goto loc_00431F8B;

loc_00431C30: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431C3Bu); RECOMP_ABI_CALL(0x00438CA0u, sub_00438CA0); /* call 0x00438CA0 */

loc_00431C3B: ;
    goto loc_00431E6C;

loc_00431C40: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431C45u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00431C45: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431C4F; /* je: equal / zero */

loc_00431C4A: ;
    goto loc_00431F8B;

loc_00431C4F: ;
    goto loc_00431C51;

loc_00431C51: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431C61; /* jne: not equal / not zero */

loc_00431C5C: ;
    goto loc_00431F8B;

loc_00431C61: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431CCC; /* je: equal / zero */

loc_00431C67: ;
    MEM32(ebp + -40) = 0;
    eax = ebp + 0x10;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -12);
    ecx = eax;
    ecx = ecx + 4;
    MEM32(ebp + -12) = ecx;
    eax = MEM32(eax);
    eax = eax & 0x1B6;
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    ecx = eax;
    ecx = ecx + 4;
    MEM32(ebp + -12) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -20) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0x7FFFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00431CB2; /* jbe: below or equal (unsigned <=) */

loc_00431CA2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431CA7u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00431CA7: ;
    MEM32(eax) = 0x16;
    goto loc_00431F8B;

loc_00431CB2: ;
    eax = MEM32(ebp + -20);
    ecx = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431CCCu); RECOMP_ABI_CALL(0x00431990u, sub_00431990); /* call 0x00431990 */

loc_00431CCC: ;
    eax = 0; /* xor self */
    eax = ebp + -148;
    MEM32(esp) = 0;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431CE4u); RECOMP_ABI_CALL(0x004351E0u, sub_004351E0); /* call 0x004351E0 */

loc_00431CE4: ;
    edx = ebp + -132;
    eax = MEM32(ebp + -140);
    ecx = 0x47A7BA;
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x40;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431D0Eu); RECOMP_ABI_CALL(0x0041EA80u, sub_0041EA80); /* call 0x0041EA80 */

loc_00431D0E: ;
    ecx = ebp + -132;
    eax = MEM32(ebp + -16);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = 0xA08C2;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431D2Bu); RECOMP_ABI_CALL(0x003DD880u, sub_003DD880); /* call 0x003DD880 */

loc_00431D2B: ;
    MEM32(ebp + -24) = eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00431D48; /* jge: greater or equal (signed >=) */

loc_00431D34: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431D39u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00431D39: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431D43; /* jne: not equal / not zero */

loc_00431D3E: ;
    goto loc_00431B99;

loc_00431D43: ;
    goto loc_00431F8B;

loc_00431D48: ;
    ecx = MEM32(ebp + -24);
    eax = ebp + -64;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431D62u); RECOMP_ABI_CALL(0x0043CED0u, sub_0043CED0); /* call 0x0043CED0 */

loc_00431D62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431DC5; /* jne: not equal / not zero */

loc_00431D67: ;
    ecx = MEM32(ebp + -24);
    eax = ebp + -292;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431D7Cu); RECOMP_ABI_CALL(0x00415EB0u, sub_00415EB0); /* call 0x00415EB0 */

loc_00431D7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00431DC5; /* jl: less (signed <) */

loc_00431D81: ;
    ecx = MEM32(ebp + -24);
    eax = 0; /* xor self */
    eax = esp;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0xC) = 1;
    MEM32(eax + 8) = 3;
    MEM32(eax + 4) = 0x10;
    MEM32(eax) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431DB9u); RECOMP_ABI_CALL(0x0040F7B0u, sub_0040F7B0); /* call 0x0040F7B0 */

loc_00431DB9: ;
    MEM32(ebp + -68) = eax;
    ecx = 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431DE3; /* jne: not equal / not zero */

loc_00431DC5: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431DD0u); RECOMP_ABI_CALL(0x00438CA0u, sub_00438CA0); /* call 0x00438CA0 */

loc_00431DD0: ;
    eax = ebp + -132;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431DDEu); RECOMP_ABI_CALL(0x0043CC60u, sub_0043CC60); /* call 0x0043CC60 */

loc_00431DDE: ;
    goto loc_00431F8B;

loc_00431DE3: ;
    eax = MEM32(ebp + -24);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431DEEu); RECOMP_ABI_CALL(0x00438CA0u, sub_00438CA0); /* call 0x00438CA0 */

loc_00431DEE: ;
    ecx = ebp + -132;
    eax = MEM32(ebp + 8);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431E03u); RECOMP_ABI_CALL(0x0043AD50u, sub_0043AD50); /* call 0x0043AD50 */

loc_00431E03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431E17; /* je: equal / zero */

loc_00431E08: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431E0Du); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00431E0D: ;
    eax = MEM32(eax);
    MEM32(ebp + -564) = eax;
    goto loc_00431E21;

loc_00431E17: ;
    eax = 0; /* xor self */
    MEM32(ebp + -564) = eax;
    goto loc_00431E21;

loc_00431E21: ;
    eax = MEM32(ebp + -564);
    MEM32(ebp + -32) = eax;
    eax = ebp + -132;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431E38u); RECOMP_ABI_CALL(0x0043CC60u, sub_0043CC60); /* call 0x0043CC60 */

loc_00431E38: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431E40; /* jne: not equal / not zero */

loc_00431E3E: ;
    goto loc_00431E6C;

loc_00431E40: ;
    eax = MEM32(ebp + -68);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431E53u); RECOMP_ABI_CALL(0x0040FEF0u, sub_0040FEF0); /* call 0x0040FEF0 */

loc_00431E53: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431E62; /* jne: not equal / not zero */

loc_00431E59: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00431E67; /* jne: not equal / not zero */

loc_00431E62: ;
    goto loc_00431F8B;

loc_00431E67: ;
    goto loc_00431B99;

loc_00431E6C: ;
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431E7Au); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00431E7A: ;
    MEM32(ebp + -28) = 0;

loc_00431E81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x100 (32-bit) */
    MEM8(ebp + -565) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_00431EC0; /* jge: greater or equal (signed >=) */

loc_00431E92: ;
    ecx = MEM32(0xDFCBF0);
    edx = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(edx, 4, 32, 0, NULL, &_shift_of);
    edx = _shift_result;
    eax = MEM32(ecx + edx);
    ecx = MEM32(ecx + edx + 4);
    edx = MEM32(ebp + -204);
    esi = MEM32(ebp + -200);
    ecx = ecx ^ esi;
    eax = eax ^ edx;
    eax = eax | ecx;
    SET_LO8(eax, ((eax != 0)) ? 1 : 0); /* setne */
    MEM8(ebp + -565) = LO8(eax);

loc_00431EC0: ;
    SET_LO8(eax, MEM8(ebp + -565));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00431ECC; /* jne: not equal / not zero */

loc_00431ECA: ;
    goto loc_00431ED9;

loc_00431ECC: ;
    goto loc_00431ECE;

loc_00431ECE: ;
    eax = MEM32(ebp + -28);
    eax = eax + 1;
    MEM32(ebp + -28) = eax;
    goto loc_00431E81;

loc_00431ED9: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00431F22; /* jge: greater or equal (signed >=) */

loc_00431EE2: ;
    eax = MEM32(ebp + -68);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431EF5u); RECOMP_ABI_CALL(0x0040FEF0u, sub_0040FEF0); /* call 0x0040FEF0 */

loc_00431EF5: ;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(eax + 8) = 0;
    eax = MEM32(ebp + -28);
    MEM32(ebp + -36) = eax;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -28);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 8);
    MEM32(ebp + -68) = eax;

loc_00431F22: ;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    edx = MEM32(eax + ecx + 0xC);
    edx++;
    MEM32(eax + ecx + 0xC) = edx;
    edx = MEM32(ebp + -68);
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    MEM32(eax + ecx + 8) = edx;
    xmm0 = XMM_SCALAR_DOUBLE(MEMD(ebp + -204)); /* movsd */
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    MEMD(eax + ecx) = xmm0.d[0]; /* movsd */
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431F6Eu); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00431F6E: ;
    eax = MEM32(ebp + -48);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431F83u); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_00431F83: ;
    eax = MEM32(ebp + -68);
    MEM32(ebp + -8) = eax;
    goto loc_00431FD7;

loc_00431F8B: ;
    eax = MEM32(ebp + -48);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431FA0u); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_00431FA0: ;
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431FAEu); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00431FAE: ;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -36);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    MEM32(eax + 8) = 0;
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00431FD0u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00431FD0: ;
    MEM32(ebp + -8) = 0;

loc_00431FD7: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x254;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00431FF0
 * Original: 0x00431FF0 - 0x004320DB (235 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431FF0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    uint32_t _shift_result = 0; (void)_shift_result;
    int _shift_of = 0; (void)_shift_of;

loc_00431FF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432007u); RECOMP_ABI_CALL(0x0042C520u, sub_0042C520); /* call 0x0042C520 */

loc_00432007: ;
    MEM32(ebp + -8) = 0;

loc_0043200E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x100 (32-bit) */
    MEM8(ebp + -9) = LO8(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_00432035; /* jge: greater or equal (signed >=) */

loc_0043201C: ;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    eax = eax + ecx;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -9) = LO8(eax);

loc_00432035: ;
    SET_LO8(eax, MEM8(ebp + -9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0043203E; /* jne: not equal / not zero */

loc_0043203C: ;
    goto loc_0043204B;

loc_0043203E: ;
    goto loc_00432040;

loc_00432040: ;
    eax = MEM32(ebp + -8);
    eax = eax + 1;
    MEM32(ebp + -8) = eax;
    goto loc_0043200E;

loc_0043204B: ;
    ecx = MEM32(0xDFCBF0);
    eax = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(eax, 4, 32, 0, NULL, &_shift_of);
    eax = _shift_result;
    ecx = ecx + eax;
    eax = MEM32(ecx + 0xC);
    eax = eax + 0xFFFFFFFFu;
    MEM32(ecx + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043207E; /* je: equal / zero */

loc_00432067: ;
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432075u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_00432075: ;
    MEM32(ebp + -4) = 0;
    goto loc_004320D3;

loc_0043207E: ;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    MEM32(eax + ecx + 8) = 0;
    eax = MEM32(0xDFCBF0);
    ecx = MEM32(ebp + -8);
    _shift_result = RECOMP_SHIFT(ecx, 4, 32, 0, NULL, &_shift_of);
    ecx = _shift_result;
    MEM32(eax + ecx + 4) = 0;
    MEM32(eax + ecx) = 0;
    eax = 0xDFCBEC;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004320B9u); RECOMP_ABI_CALL(0x0042C790u, sub_0042C790); /* call 0x0042C790 */

loc_004320B9: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004320CCu); RECOMP_ABI_CALL(0x0040FEF0u, sub_0040FEF0); /* call 0x0040FEF0 */

loc_004320CC: ;
    MEM32(ebp + -4) = 0;

loc_004320D3: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004320E0
 * Original: 0x004320E0 - 0x004321A0 (192 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004320E0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_004320E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x24)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -24) = eax;

loc_004320F3: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + -12);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00432127; /* jne: not equal / not zero */

loc_00432113: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432118u); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_00432118: ;
    MEM32(eax) = 0x4B;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_00432197;

loc_00432127: ;
    eax = MEM32(ebp + -12);
    eax = eax + 1;
    MEM32(ebp + -16) = eax;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 1 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00432141; /* jg: greater (signed >) */

loc_00432136: ;
    eax = MEM32(ebp + -16);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -16) = eax;

loc_00432141: ;
    goto loc_00432143;

loc_00432143: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -16);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043215Cu); RECOMP_ABI_CALL(0x004321A0u, sub_004321A0); /* call 0x004321A0 */

loc_0043215C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004320F3; /* jne: not equal / not zero */

loc_00432161: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00432190; /* jge: greater or equal (signed >=) */

loc_00432167: ;
    edx = MEM32(ebp + 8);
    esi = MEM32(ebp + -20);
    ecx = 0xFFFFFFFFu;
    eax = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    eax = MEM32(ebp + -24);
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432190u); RECOMP_ABI_CALL(0x004321D0u, sub_004321D0); /* call 0x004321D0 */

loc_00432190: ;
    MEM32(ebp + -8) = 0;

loc_00432197: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x24;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004321A0
 * Original: 0x004321A0 - 0x004321C1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004321A0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004321A0: ;
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
 * sub_004321D0
 * Original: 0x004321D0 - 0x004322A1 (209 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004321D0(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004321D0: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_004321EF; /* je: equal / zero */

loc_004321E8: ;
    MEM32(ebp + 0x10) = 0x80;

loc_004321EF: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004321FC; /* jge: greater or equal (signed >=) */

loc_004321F5: ;
    MEM32(ebp + 0xC) = 0x7FFFFFFF;

loc_004321FC: ;
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
    PUSH32(esp, 0x00432243u); RECOMP_ABI_CALL(0x004322B0u, sub_004322B0); /* call 0x004322B0 */

loc_00432243: ;
    ecx = eax;
    SET_LO8(eax, 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFDAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFDAu (32-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00432296; /* jne: not equal / not zero */

loc_0043224F: ;
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
    PUSH32(esp, 0x0043228Du); RECOMP_ABI_CALL(0x004322B0u, sub_004322B0); /* call 0x004322B0 */

loc_0043228D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + -13) = LO8(eax);

loc_00432296: ;
    SET_LO8(eax, MEM8(ebp + -13));
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004322B0
 * Original: 0x004322B0 - 0x0043234B (155 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004322B0(void)
{
    uint32_t ebp = g_ebp;

loc_004322B0: ;
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
    PUSH32(esp, 0x00432343u); RECOMP_ABI_CALL(0x003920C0u, sub_003920C0); /* call 0x003920C0 */

loc_00432343: ;
    esp = esp + 0x4C;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432350
 * Original: 0x00432350 - 0x004324AE (350 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432350(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
    int _slt = 0; /* captured CMP/TEST SF xor OF */
loc_00432350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x44)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432362u); RECOMP_ABI_CALL(0x00431930u, sub_00431930); /* call 0x00431930 */

loc_00432362: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043236Du); RECOMP_ABI_CALL(0x00432550u, sub_00432550); /* call 0x00432550 */

loc_0043236D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_NE(_fa, _fb)) goto loc_0043237E; /* jne: not equal / not zero */

loc_00432372: ;
    MEM32(ebp + -8) = 0;
    goto loc_004324A5;

loc_0043237E: ;
    MEM32(ebp + -12) = 0x64;

loc_00432385: ;
    ecx = MEM32(ebp + -12);
    eax = ecx;
    eax = eax + 0xFFFFFFFFu;
    MEM32(ebp + -12) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -33) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004323C0; /* je: equal / zero */

loc_0043239A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0x7FFFFFFF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    MEM8(ebp + -33) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_004323C0; /* jne: not equal / not zero */

loc_004323AF: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ 0xFF);
    MEM8(ebp + -33) = LO8(eax);

loc_004323C0: ;
    SET_LO8(eax, MEM8(ebp + -33));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _zf = ((_fa & _fb) == 0);
    _slt = ((int32_t)(int8_t)(_fa & _fb) < 0);
    if (TEST_NZ(_fa, _fb)) goto loc_004323C9; /* jne: not equal / not zero */

loc_004323C7: ;
    goto loc_004323D0;

loc_004323C9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004323CEu); RECOMP_ABI_CALL(0x00432520u, sub_00432520); /* call 0x00432520 */

loc_004323CE: ;
    goto loc_00432385;

loc_004323D0: ;
    goto loc_004323D2;

loc_004323D2: ;
    eax = MEM32(ebp + 8);
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004323DDu); RECOMP_ABI_CALL(0x00432550u, sub_00432550); /* call 0x00432550 */

loc_004323DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_0043249E; /* je: equal / zero */

loc_004323E6: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004323FDu); RECOMP_ABI_CALL(0x004324B0u, sub_004324B0); /* call 0x004324B0 */

loc_004323FD: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0x80000000u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043241Au); RECOMP_ABI_CALL(0x004324D0u, sub_004324D0); /* call 0x004324D0 */

loc_0043241A: ;
    eax = MEM32(ebp + 8);
    eax = eax + 4;
    edx = ebp + -32;
    ecx = 0x432500;
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432439u); RECOMP_ABI_CALL(0x0042E160u, sub_0042E160); /* call 0x0042E160 */

loc_00432439: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -20);
    esi = 0; /* xor self */
    MEM32(esp) = edx;
    MEM32(esp + 4) = 0x80000000u;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432464u); RECOMP_ABI_CALL(0x0042CC80u, sub_0042CC80); /* call 0x0042CC80 */

loc_00432464: ;
    MEM32(ebp + -16) = eax;
    eax = ebp + -32;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043247Au); RECOMP_ABI_CALL(0x0042E190u, sub_0042E190); /* call 0x0042E190 */

loc_0043247A: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _zf = (_fa == _fb);
    _slt = (_fas < _fbs);
    if (CMP_EQ(_fa, _fb)) goto loc_00432499; /* je: equal / zero */

loc_00432480: ;
    eax = MEM32(ebp + -16);
    MEM32(ebp + -40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043248Bu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043248B: ;
    ecx = MEM32(ebp + -40);
    MEM32(eax) = ecx;
    MEM32(ebp + -8) = 0xFFFFFFFFu;
    goto loc_004324A5;

loc_00432499: ;
    goto loc_004323D2;

loc_0043249E: ;
    MEM32(ebp + -8) = 0;

loc_004324A5: ;
    eax = MEM32(ebp + -8);
    esp = esp + 0x44;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004324B0
 * Original: 0x004324B0 - 0x004324C1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004324B0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004324B0: ;
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
 * sub_004324D0
 * Original: 0x004324D0 - 0x004324F1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004324D0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004324D0: ;
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
 * sub_00432500
 * Original: 0x00432500 - 0x00432519 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432500(void)
{
    uint32_t ebp = g_ebp;

loc_00432500: ;
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
    PUSH32(esp, 0x00432514u); RECOMP_ABI_CALL(0x00432530u, sub_00432530); /* call 0x00432530 */

loc_00432514: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432520
 * Original: 0x00432520 - 0x00432527 (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432520(void)
{
    uint32_t ebp = g_ebp;

loc_00432520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    (void)0; /* pause: cache/ordering hint, nothing to model */
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432530
 * Original: 0x00432530 - 0x00432541 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432530(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432530: ;
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
 * sub_00432550
 * Original: 0x00432550 - 0x004325B1 (97 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432550(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

    int _zf = 0; /* captured CMP/TEST/DEC/SUB zero flag */
loc_00432550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _zr = ((uint32_t)(esp) - (uint32_t)(0x18)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    esp = _zr; }
    eax = MEM32(ebp + 8);

loc_00432559: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -8) = eax;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00432597; /* je: equal / zero */

loc_0043256B: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    eax = MEM32(ebp + -8);
    { uint32_t _zr = ((uint32_t)(eax) - (uint32_t)(1)) & 0xFFFFFFFFu;
    _zf = (_zr == 0);
    eax = _zr; }
    MEM32(esp) = edx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432587u); RECOMP_ABI_CALL(0x004325C0u, sub_004325C0); /* call 0x004325C0 */

loc_00432587: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _zf = (_fa == _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00432595; /* jne: not equal / not zero */

loc_0043258C: ;
    MEM32(ebp + -4) = 0;
    goto loc_004325A9;

loc_00432595: ;
    goto loc_00432559;

loc_00432597: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043259Cu); RECOMP_ABI_CALL(0x003DCB00u, sub_003DCB00); /* call 0x003DCB00 */

loc_0043259C: ;
    MEM32(eax) = 0xB;
    MEM32(ebp + -4) = 0xFFFFFFFFu;

loc_004325A9: ;
    eax = MEM32(ebp + -4);
    esp = esp + 0x18;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_004325C0
 * Original: 0x004325C0 - 0x004325E1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004325C0(void)
{
    uint32_t ebp = g_ebp;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004325C0: ;
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
 * sub_004325F0
 * Original: 0x004325F0 - 0x00432609 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004325F0(void)
{
    uint32_t ebp = g_ebp;

loc_004325F0: ;
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
    PUSH32(esp, 0x00432604u); RECOMP_ABI_CALL(0x004102A0u, sub_004102A0); /* call 0x004102A0 */

loc_00432604: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432610
 * Original: 0x00432610 - 0x00432633 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432610(void)
{
    uint32_t ebp = g_ebp;

loc_00432610: ;
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
    PUSH32(esp, 0x0043262Eu); RECOMP_ABI_CALL(0x00432350u, sub_00432350); /* call 0x00432350 */

loc_0043262E: ;
    esp = esp + 8;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432640
 * Original: 0x00432640 - 0x00432645 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432640(void)
{
    uint32_t ebp = g_ebp;

loc_00432640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}


/**
 * sub_00432650
 * Original: 0x00432650 - 0x004329BB (875 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432650(void)
{
    uint32_t ebp = g_ebp;
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x148;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    ecx = ebp + -280;
    eax = 0x508CA8;
    MEM32(esp) = ecx;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0x8C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043267Fu); RECOMP_ABI_CALL(0x00428090u, sub_00428090); /* call 0x00428090 */

loc_0043267F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432684u); RECOMP_ABI_CALL(0x00432A50u, sub_00432A50); /* call 0x00432A50 */

loc_00432684: ;
    MEM32(ebp + -284) = eax;
    MEM32(ebp + -292) = 0;
    eax = ebp + -128;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043269Fu); RECOMP_ABI_CALL(0x00413C30u, sub_00413C30); /* call 0x00413C30 */

loc_0043269F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004326A4u); RECOMP_ABI_CALL(0x00432640u, sub_00432640); /* call 0x00432640 */

loc_004326A4: ;
    eax = 0; /* xor self */
    MEM32(esp) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004326B2u); RECOMP_ABI_CALL(0x00413B20u, sub_00413B20); /* call 0x00413B20 */

loc_004326B2: ;
    eax = ebp + -132;
    MEM32(esp) = 1;
    MEM32(esp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004326C8u); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_004326C8: ;
    eax = 0xDFCBF4;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004326E8u); RECOMP_ABI_CALL(0x00431990u, sub_00431990); /* call 0x00431990 */

loc_004326E8: ;
    eax = 0xDFCC04;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432708u); RECOMP_ABI_CALL(0x00431990u, sub_00431990); /* call 0x00431990 */

loc_00432708: ;
    eax = 0xDFCC14;
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432728u); RECOMP_ABI_CALL(0x00431990u, sub_00431990); /* call 0x00431990 */

loc_00432728: ;
    _fa = (uint32_t)(MEM32(0xDFBFF8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xDFBFF8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00432750; /* je: equal / zero */

loc_00432731: ;
    eax = esp;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0xB2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432745u); RECOMP_ABI_CALL(0x00432A60u, sub_00432A60); /* call 0x00432A60 */

loc_00432745: ;
    ecx = MEM32(ebp + -284);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00432755; /* je: equal / zero */

loc_00432750: ;
    goto loc_004328E8;

loc_00432755: ;
    eax = MEM32(ebp + 8);
    MEM32(0xDFCC24) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(0xDFCC28) = eax;
    eax = ebp + -280;
    eax = eax + 4;
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0xFFFFFFFFu;
    MEM32(esp + 8) = 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432786u); RECOMP_ABI_CALL(0x00429300u, sub_00429300); /* call 0x00429300 */

loc_00432786: ;
    eax = ebp + -280;
    ecx = 0; /* xor self */
    MEM32(esp) = 0x22;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004327A6u); RECOMP_ABI_CALL(0x004143E0u, sub_004143E0); /* call 0x004143E0 */

loc_004327A6: ;
    eax = MEM32(ebp + -284);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -288) = eax;

loc_004327B5: ;
    eax = MEM32(ebp + -288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -284)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -284) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043286E; /* je: equal / zero */

loc_004327C7: ;
    eax = MEM32(ebp + -288);
    eax = MEM32(eax + 0x18);
    MEM32(0xDFCC2C) = eax;

loc_004327D5: ;
    eax = MEM32(ebp + -288);
    ecx = MEM32(eax + 0x18);
    edx = ecx;
    edx = RECOMP_SAR(edx, 0x1F, 32, NULL);
    eax = esp;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0x22;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x82;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043280Bu); RECOMP_ABI_CALL(0x00432AE0u, sub_00432AE0); /* call 0x00432AE0 */

loc_0043280B: ;
    ecx = eax;
    eax = 0; /* xor self */
    eax = eax - ecx;
    MEM32(ebp + -140) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043281E; /* jne: not equal / not zero */

loc_0043281C: ;
    goto loc_004327D5;

loc_0043281E: ;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -140), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043283D; /* je: equal / zero */

loc_00432827: ;
    eax = 0x432B70;
    MEM32(ebp + 8) = eax;
    eax = 0x432B70;
    MEM32(0xDFCC24) = eax;
    goto loc_0043286E;

loc_0043283D: ;
    eax = 0xDFCC04;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043284Bu); RECOMP_ABI_CALL(0x00432610u, sub_00432610); /* call 0x00432610 */

loc_0043284B: ;
    eax = MEM32(ebp + -292);
    eax = eax + 1;
    MEM32(ebp + -292) = eax;
    eax = MEM32(ebp + -288);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -288) = eax;
    goto loc_004327B5;

loc_0043286E: ;
    MEM32(0xDFCC2C) = 0;
    MEM32(ebp + -136) = 0;

loc_00432882: ;
    eax = MEM32(ebp + -136);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -292)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -292) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004328BD; /* jge: greater or equal (signed >=) */

loc_00432890: ;
    eax = 0xDFCBF4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043289Eu); RECOMP_ABI_CALL(0x004320E0u, sub_004320E0); /* call 0x004320E0 */

loc_0043289E: ;
    eax = 0xDFCC04;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004328ACu); RECOMP_ABI_CALL(0x00432610u, sub_00432610); /* call 0x00432610 */

loc_004328AC: ;
    eax = MEM32(ebp + -136);
    eax = eax + 1;
    MEM32(ebp + -136) = eax;
    goto loc_00432882;

loc_004328BD: ;
    eax = 1;
    MEM32(ebp + -280) = eax;
    eax = ebp + -280;
    ecx = 0; /* xor self */
    MEM32(esp) = 0x22;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004328E8u); RECOMP_ABI_CALL(0x004143E0u, sub_004143E0); /* call 0x004143E0 */

loc_004328E8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x004328F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_004328F3: ;
    MEM32(ebp + -136) = 0;

loc_004328FD: ;
    eax = MEM32(ebp + -136);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -292)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -292) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043292A; /* jge: greater or equal (signed >=) */

loc_0043290B: ;
    eax = 0xDFCC14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432919u); RECOMP_ABI_CALL(0x004320E0u, sub_004320E0); /* call 0x004320E0 */

loc_00432919: ;
    eax = MEM32(ebp + -136);
    eax = eax + 1;
    MEM32(ebp + -136) = eax;
    goto loc_004328FD;

loc_0043292A: ;
    MEM32(ebp + -136) = 0;

loc_00432934: ;
    eax = MEM32(ebp + -136);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -292)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -292) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00432961; /* jge: greater or equal (signed >=) */

loc_00432942: ;
    eax = 0xDFCC04;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00432950u); RECOMP_ABI_CALL(0x00432610u, sub_00432610); /* call 0x00432610 */

loc_00432950: ;
    eax = MEM32(ebp + -136);
    eax = eax + 1;
    MEM32(ebp + -136) = eax;
    goto loc_00432934;

loc_00432961: ;
    eax = 0xDFCC04;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043296Fu); RECOMP_ABI_CALL(0x00431950u, sub_00431950); /* call 0x00431950 */

loc_0043296F: ;
    eax = 0xDFCBF4;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043297Du); RECOMP_ABI_CALL(0x00431950u, sub_00431950); /* call 0x00431950 */

loc_0043297D: ;
    eax = 0xDFCC14;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043298Bu); RECOMP_ABI_CALL(0x00431950u, sub_00431950); /* call 0x00431950 */

loc_0043298B: ;
    eax = MEM32(ebp + -132);
    ecx = 0; /* xor self */
    MEM32(esp) = eax;
    MEM32(esp + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004329A3u); RECOMP_ABI_CALL(0x004315D0u, sub_004315D0); /* call 0x004315D0 */

loc_004329A3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004329A8u); RECOMP_ABI_CALL(0x00432640u, sub_00432640); /* call 0x00432640 */

loc_004329A8: ;
    eax = ebp + -128;
    MEM32(esp) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004329B3u); RECOMP_ABI_CALL(0x00413C90u, sub_00413C90); /* call 0x00413C90 */

loc_004329B3: ;
    esp = esp + 0x148;
    POP32(esp, ebp);
    g_ebp = g_seh_ebp = ebp; esp += 4; return; /* ret */

}

