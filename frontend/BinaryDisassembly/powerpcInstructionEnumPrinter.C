#include "powerpcInstructionEnum.h"
#include <string>
static const char* powerpcInstructionStrings[] = {
"powerpc_unknown_instruction",
"powerpc_add",
"powerpc_add.",
"powerpc_addo",
"powerpc_addo.",
"powerpc_addc",
"powerpc_addc.",
"powerpc_addco",
"powerpc_addco.",
"powerpc_adde",
"powerpc_adde.",
"powerpc_addeo",
"powerpc_addeo.",
"powerpc_addi",
"powerpc_addic",
"powerpc_addic.",
"powerpc_addis",
"powerpc_addme",
"powerpc_addme.",
"powerpc_addmeo",
"powerpc_addmeo.",
"powerpc_addze",
"powerpc_addze.",
"powerpc_addzeo",
"powerpc_addzeo.",
"powerpc_and",
"powerpc_and.",
"powerpc_andc",
"powerpc_andc.",
"powerpc_andi.",
"powerpc_andis.",
"powerpc_b",
"powerpc_ba",
"powerpc_bl",
"powerpc_bla",
"powerpc_bc",
"powerpc_bca",
"powerpc_bcl",
"powerpc_bcla",
"powerpc_bcctr",
"powerpc_bcctrl",
"powerpc_bclr",
"powerpc_bclrl",
"powerpc_cmp",
"powerpc_cmpi",
"powerpc_cmpl",
"powerpc_cmpli",
"powerpc_cntlzd",
"powerpc_cntlzd.",
"powerpc_cntlzw",
"powerpc_cntlzw.",
"powerpc_crand",
"powerpc_crandc",
"powerpc_creqv",
"powerpc_crnand",
"powerpc_crnor",
"powerpc_cror",
"powerpc_crorc",
"powerpc_crxor",
"powerpc_dcbf",
"powerpc_dcba",
"powerpc_dcbi",
"powerpc_dcbst",
"powerpc_dcbt",
"powerpc_dcbtst",
"powerpc_dcbz",
"powerpc_divd",
"powerpc_divd.",
"powerpc_divdo",
"powerpc_divdo.",
"powerpc_divdu",
"powerpc_divdu.",
"powerpc_divduo",
"powerpc_divduo.",
"powerpc_divw",
"powerpc_divw.",
"powerpc_divwo",
"powerpc_divwo.",
"powerpc_divwu",
"powerpc_divwu.",
"powerpc_divwuo",
"powerpc_divwuo.",
"powerpc_dst",
"powerpc_dstt",
"powerpc_dstst",
"powerpc_dststt",
"powerpc_dss",
"powerpc_dssall",
"powerpc_eciwx",
"powerpc_ecowx",
"powerpc_eieio",
"powerpc_eqv",
"powerpc_eqv.",
"powerpc_extsb",
"powerpc_extsb.",
"powerpc_extsh",
"powerpc_extsh.",
"powerpc_extsw",
"powerpc_extsw.",
"powerpc_fabs",
"powerpc_fabs.",
"powerpc_fadd",
"powerpc_fadd.",
"powerpc_fadds",
"powerpc_fadds.",
"powerpc_fcfid",
"powerpc_fcfid.",
"powerpc_fcmpo",
"powerpc_fcmpu",
"powerpc_fctid",
"powerpc_fctid.",
"powerpc_fctidz",
"powerpc_fctidz.",
"powerpc_fctiw",
"powerpc_fctiw.",
"powerpc_fctiwz",
"powerpc_fctiwz.",
"powerpc_fdiv",
"powerpc_fdiv.",
"powerpc_fdivs",
"powerpc_fdivs.",
"powerpc_fmadd",
"powerpc_fmadd.",
"powerpc_fmadds",
"powerpc_fmadds.",
"powerpc_fmr",
"powerpc_fmr.",
"powerpc_fmsub",
"powerpc_fmsub.",
"powerpc_fmsubs",
"powerpc_fmsubs.",
"powerpc_fmul",
"powerpc_fmul.",
"powerpc_fmuls",
"powerpc_fmuls.",
"powerpc_fnabs",
"powerpc_fnabs.",
"powerpc_fneg",
"powerpc_fneg.",
"powerpc_fnmadd",
"powerpc_fnmadd.",
"powerpc_fnmadds",
"powerpc_fnmadds.",
"powerpc_fnmsub",
"powerpc_fnmsub.",
"powerpc_fnmsubs",
"powerpc_fnmsubs.",
"powerpc_fpmul",
"powerpc_fxmul",
"powerpc_fxpmul",
"powerpc_fxsmul",
"powerpc_fpadd",
"powerpc_fpsub",
"powerpc_fpre",
"powerpc_fprsqrte",
"powerpc_fpmr",
"powerpc_fpabs",
"powerpc_lfssx",
"powerpc_fpneg",
"powerpc_lfssux",
"powerpc_fprsp",
"powerpc_lfsdx",
"powerpc_fpnabs",
"powerpc_lfsdux",
"powerpc_lfxsx",
"powerpc_fsmr",
"powerpc_lfxsux",
"powerpc_lfxdx",
"powerpc_fsabs",
"powerpc_lfxdux",
"powerpc_lfpsx",
"powerpc_fsneg",
"powerpc_lfpsux",
"powerpc_lfpdx",
"powerpc_fsnabs",
"powerpc_lfpdux",
"powerpc_stfpiwx",
"powerpc_fxmr",
"powerpc_fpctiw",
"powerpc_stfssx",
"powerpc_stfssux",
"powerpc_fpctiwz",
"powerpc_stfsdx",
"powerpc_stfsdux",
"powerpc_stfxsx",
"powerpc_fsmtp",
"powerpc_stfxsux",
"powerpc_stfxdx",
"powerpc_stfxdux",
"powerpc_stfpsx",
"powerpc_fsmfp",
"powerpc_stfpsux",
"powerpc_stfpdx",
"powerpc_stfpdux",
"powerpc_fpsel",
"powerpc_fpmadd",
"powerpc_fpmsub",
"powerpc_fxmadd",
"powerpc_fxcpmadd",
"powerpc_fxcsmadd",
"powerpc_fpnmadd",
"powerpc_fxnmadd",
"powerpc_fxcpnmadd",
"powerpc_fxcsnmadd",
"powerpc_fxcpnpma",
"powerpc_fxmsub",
"powerpc_fxcsnpma",
"powerpc_fxcpmsub",
"powerpc_fxcpnsma",
"powerpc_fxcsmsub",
"powerpc_fxcsnsma",
"powerpc_fpnmsub",
"powerpc_fxcxma",
"powerpc_fxnmsub",
"powerpc_fxcxnpma",
"powerpc_fxcpnmsub",
"powerpc_fxcxnsma",
"powerpc_fxcsnmsub",
"powerpc_fxcxnms",
"powerpc_fre",
"powerpc_fre.",
"powerpc_fres",
"powerpc_fres.",
"powerpc_frsp",
"powerpc_frsp.",
"powerpc_frsqrte",
"powerpc_frsqrte.",
"powerpc_frsqrtes",
"powerpc_frsqrtes.",
"powerpc_fsel",
"powerpc_fsel.",
"powerpc_fsqrt",
"powerpc_fsqrt.",
"powerpc_fsqrts",
"powerpc_fsqrts.",
"powerpc_fsub",
"powerpc_fsub.",
"powerpc_fsubs",
"powerpc_fsubs.",
"powerpc_icbi",
"powerpc_isync",
"powerpc_lbz",
"powerpc_lbzu",
"powerpc_lbzux",
"powerpc_lbzx",
"powerpc_ld",
"powerpc_ldarx",
"powerpc_ldu",
"powerpc_ldux",
"powerpc_ldx",
"powerpc_lfd",
"powerpc_lfdu",
"powerpc_lfdux",
"powerpc_lfdx",
"powerpc_lfs",
"powerpc_lfsu",
"powerpc_lfsux",
"powerpc_lfsx",
"powerpc_lha",
"powerpc_lhau",
"powerpc_lhaux",
"powerpc_lhax",
"powerpc_lhbrx",
"powerpc_lhz",
"powerpc_lhzu",
"powerpc_lhzux",
"powerpc_lhzx",
"powerpc_lmw",
"powerpc_lswi",
"powerpc_lswx",
"powerpc_lwa",
"powerpc_lwarx",
"powerpc_lwaux",
"powerpc_lwax",
"powerpc_lwbrx",
"powerpc_lwz",
"powerpc_lwzu",
"powerpc_lwzux",
"powerpc_lwzx",
"powerpc_mcrf",
"powerpc_mcrfs",
"powerpc_mcrxr",
"powerpc_mfcr",
"powerpc_mffs",
"powerpc_mffs.",
"powerpc_mfmsr",
"powerpc_mfspr",
"powerpc_mfsr",
"powerpc_mfsrin",
"powerpc_mftb",
"powerpc_mtcrf",
"powerpc_mtfsb0",
"powerpc_mtfsb0.",
"powerpc_mtfsb1",
"powerpc_mtfsb1.",
"powerpc_mtfsf",
"powerpc_mtfsf.",
"powerpc_mtfsfi",
"powerpc_mtfsfi.",
"powerpc_mtmsr",
"powerpc_mtmsrd",
"powerpc_mtspr",
"powerpc_mtsr",
"powerpc_mtsrd",
"powerpc_mtsrdin",
"powerpc_mtsrin",
"powerpc_mulhd",
"powerpc_mulhd.",
"powerpc_mulhdu",
"powerpc_mulhdu.",
"powerpc_mulhw",
"powerpc_mulhw.",
"powerpc_mulhwu",
"powerpc_mulhwu.",
"powerpc_mulld",
"powerpc_mulld.",
"powerpc_mulldo",
"powerpc_mulldo.",
"powerpc_mulli",
"powerpc_mullw",
"powerpc_mullw.",
"powerpc_mullwo",
"powerpc_mullwo.",
"powerpc_nand",
"powerpc_nand.",
"powerpc_neg",
"powerpc_neg.",
"powerpc_nego",
"powerpc_nego.",
"powerpc_nor",
"powerpc_nor.",
"powerpc_or",
"powerpc_or.",
"powerpc_orc",
"powerpc_orc.",
"powerpc_ori",
"powerpc_oris",
"powerpc_rfi",
"powerpc_rfid",
"powerpc_rldcl",
"powerpc_rldcl.",
"powerpc_rldcr",
"powerpc_rldcr.",
"powerpc_rldic",
"powerpc_rldic.",
"powerpc_rldicl",
"powerpc_rldicl.",
"powerpc_rldicr",
"powerpc_rldicr.",
"powerpc_rldimi",
"powerpc_rldimi.",
"powerpc_rlwimi",
"powerpc_rlwimi.",
"powerpc_rlwinm",
"powerpc_rlwinm.",
"powerpc_rlwnm",
"powerpc_rlwnm.",
"powerpc_sc",
"powerpc_slbia",
"powerpc_slbie",
"powerpc_sld",
"powerpc_sld.",
"powerpc_slw",
"powerpc_slw.",
"powerpc_srad",
"powerpc_srad.",
"powerpc_sradi",
"powerpc_sradi.",
"powerpc_srd",
"powerpc_srd.",
"powerpc_sraw",
"powerpc_sraw.",
"powerpc_srawi",
"powerpc_srawi.",
"powerpc_srw",
"powerpc_srw.",
"powerpc_stb",
"powerpc_stbu",
"powerpc_stbux",
"powerpc_stbx",
"powerpc_std",
"powerpc_stdcx.",
"powerpc_stdu",
"powerpc_stdux",
"powerpc_stdx",
"powerpc_stfd",
"powerpc_stfdu",
"powerpc_stfdux",
"powerpc_stfdx",
"powerpc_stfiwx",
"powerpc_stfs",
"powerpc_stfsu",
"powerpc_stfsux",
"powerpc_stfsx",
"powerpc_sth",
"powerpc_sthbrx",
"powerpc_sthu",
"powerpc_sthux",
"powerpc_sthx",
"powerpc_stmw",
"powerpc_stswi",
"powerpc_stswx",
"powerpc_stw",
"powerpc_stwbrx",
"powerpc_stwcx.",
"powerpc_stwu",
"powerpc_stwux",
"powerpc_stwx",
"powerpc_subf",
"powerpc_subf.",
"powerpc_subfo",
"powerpc_subfo.",
"powerpc_subfc",
"powerpc_subfc.",
"powerpc_subfco",
"powerpc_subfco.",
"powerpc_subfe",
"powerpc_subfe.",
"powerpc_subfeo",
"powerpc_subfeo.",
"powerpc_subfic",
"powerpc_subfme",
"powerpc_subfme.",
"powerpc_subfmeo",
"powerpc_subfmeo.",
"powerpc_subfze",
"powerpc_subfze.",
"powerpc_subfzeo",
"powerpc_subfzeo.",
"powerpc_sync",
"powerpc_td",
"powerpc_tdi",
"powerpc_tlbia",
"powerpc_tlbie",
"powerpc_tlbsync",
"powerpc_tw",
"powerpc_twi",
"powerpc_xor",
"powerpc_xor.",
"powerpc_xori",
"powerpc_xoris",
"powerpc_last_instruction",
""};
std::string toString(PowerpcInstructionKind k) {static const int s = sizeof(powerpcInstructionStrings) / sizeof(*powerpcInstructionStrings); if ((int)k < 0 || (int)k >= s) return ""; else return powerpcInstructionStrings[(int)k];}
