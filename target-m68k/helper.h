DEF_HELPER_1(bitrev, i32, i32)
DEF_HELPER_1(ff1, i32, i32)
DEF_HELPER_2(bfffo, i32, i32, i32)
DEF_HELPER_2(rol32, i32, i32, i32)
DEF_HELPER_2(ror32, i32, i32, i32)
DEF_HELPER_2(sats, i32, i32, i32)
DEF_HELPER_2(divu, void, env, i32)
DEF_HELPER_2(divs, void, env, i32)
DEF_HELPER_1(divu64, void, env)
DEF_HELPER_1(divs64, void, env)
DEF_HELPER_3(mulu32_cc, i32, env, i32, i32)
DEF_HELPER_3(muls32_cc, i32, env, i32, i32)
DEF_HELPER_3(mulu64, i32, env, i32, i32)
DEF_HELPER_3(muls64, i32, env, i32, i32)
DEF_HELPER_3(addx8_cc, i32, env, i32, i32)
DEF_HELPER_3(addx16_cc, i32, env, i32, i32)
DEF_HELPER_3(addx32_cc, i32, env, i32, i32)
DEF_HELPER_3(subx8_cc, i32, env, i32, i32)
DEF_HELPER_3(subx16_cc, i32, env, i32, i32)
DEF_HELPER_3(subx32_cc, i32, env, i32, i32)
DEF_HELPER_3(shl8_cc, i32, env, i32, i32)
DEF_HELPER_3(shl16_cc, i32, env, i32, i32)
DEF_HELPER_3(shl32_cc, i32, env, i32, i32)
DEF_HELPER_3(shr8_cc, i32, env, i32, i32)
DEF_HELPER_3(shr16_cc, i32, env, i32, i32)
DEF_HELPER_3(shr32_cc, i32, env, i32, i32)
DEF_HELPER_3(sal8_cc, i32, env, i32, i32)
DEF_HELPER_3(sal16_cc, i32, env, i32, i32)
DEF_HELPER_3(sal32_cc, i32, env, i32, i32)
DEF_HELPER_3(sar8_cc, i32, env, i32, i32)
DEF_HELPER_3(sar16_cc, i32, env, i32, i32)
DEF_HELPER_3(sar32_cc, i32, env, i32, i32)
DEF_HELPER_3(rol8_cc, i32, env, i32, i32)
DEF_HELPER_3(rol16_cc, i32, env, i32, i32)
DEF_HELPER_3(rol32_cc, i32, env, i32, i32)
DEF_HELPER_3(ror8_cc, i32, env, i32, i32)
DEF_HELPER_3(ror16_cc, i32, env, i32, i32)
DEF_HELPER_3(ror32_cc, i32, env, i32, i32)
DEF_HELPER_3(roxr8_cc, i32, env, i32, i32)
DEF_HELPER_3(roxr16_cc, i32, env, i32, i32)
DEF_HELPER_3(roxr32_cc, i32, env, i32, i32)
DEF_HELPER_3(roxl8_cc, i32, env, i32, i32)
DEF_HELPER_3(roxl16_cc, i32, env, i32, i32)
DEF_HELPER_3(roxl32_cc, i32, env, i32, i32)
DEF_HELPER_2(xflag_lt_i8, i32, i32, i32)
DEF_HELPER_2(xflag_lt_i16, i32, i32, i32)
DEF_HELPER_2(xflag_lt_i32, i32, i32, i32)
DEF_HELPER_2(set_sr, void, env, i32)
DEF_HELPER_3(movec_to, void, env, i32, i32)
DEF_HELPER_2(movec_from, i32, env, i32)

DEF_HELPER_1(exts32_FP0, void, env)
DEF_HELPER_1(extf32_FP0, void, env)
DEF_HELPER_1(extf64_FP0, void, env)
DEF_HELPER_1(redf32_FP0, void, env)
DEF_HELPER_1(redf64_FP0, void, env)
DEF_HELPER_1(extp96_FP0, void, env)
DEF_HELPER_1(reds32_FP0, void, env)
DEF_HELPER_1(redp96_FP0, void, env)

DEF_HELPER_4(fmovem, void, env, i32, i32, i32)
DEF_HELPER_2(set_fpcr, void, env, i32)
DEF_HELPER_2(const_FP0, void, env, i32)
DEF_HELPER_1(iround_FP0, void, env)
DEF_HELPER_1(sinh_FP0, void, env)
DEF_HELPER_1(itrunc_FP0, void, env)
DEF_HELPER_1(sqrt_FP0, void, env)
DEF_HELPER_1(lognp1_FP0, void, env)
DEF_HELPER_1(atan_FP0, void, env)
DEF_HELPER_1(asin_FP0, void, env)
DEF_HELPER_1(atanh_FP0, void, env)
DEF_HELPER_1(sin_FP0, void, env)
DEF_HELPER_1(tanh_FP0, void, env)
DEF_HELPER_1(tan_FP0, void, env)
DEF_HELPER_1(exp_FP0, void, env)
DEF_HELPER_1(exp2_FP0, void, env)
DEF_HELPER_1(exp10_FP0, void, env)
DEF_HELPER_1(ln_FP0, void, env)
DEF_HELPER_1(log10_FP0, void, env)
DEF_HELPER_1(abs_FP0, void, env)
DEF_HELPER_1(cosh_FP0, void, env)
DEF_HELPER_1(chs_FP0, void, env)
DEF_HELPER_1(acos_FP0, void, env)
DEF_HELPER_1(cos_FP0, void, env)
DEF_HELPER_1(getexp_FP0, void, env)
DEF_HELPER_1(scale_FP0_FP1, void, env)
DEF_HELPER_1(add_FP0_FP1, void, env)
DEF_HELPER_1(sub_FP0_FP1, void, env)
DEF_HELPER_1(mul_FP0_FP1, void, env)
DEF_HELPER_1(div_FP0_FP1, void, env)
DEF_HELPER_1(mod_FP0_FP1, void, env)
DEF_HELPER_1(sincos_FP0_FP1, void, env)
DEF_HELPER_1(fcmp_FP0_FP1, void, env)
DEF_HELPER_1(compare_FP0, void, env)
DEF_HELPER_1(update_fpsr, void, env)

DEF_HELPER_3(mac_move, void, env, i32, i32)
DEF_HELPER_3(macmulf, i64, env, i32, i32)
DEF_HELPER_3(macmuls, i64, env, i32, i32)
DEF_HELPER_3(macmulu, i64, env, i32, i32)
DEF_HELPER_2(macsats, void, env, i32)
DEF_HELPER_2(macsatu, void, env, i32)
DEF_HELPER_2(macsatf, void, env, i32)
DEF_HELPER_2(mac_set_flags, void, env, i32)
DEF_HELPER_2(set_macsr, void, env, i32)
DEF_HELPER_2(get_macf, i32, env, i64)
DEF_HELPER_1(get_macs, i32, i64)
DEF_HELPER_1(get_macu, i32, i64)
DEF_HELPER_2(get_mac_extf, i32, env, i32)
DEF_HELPER_2(get_mac_exti, i32, env, i32)
DEF_HELPER_3(set_mac_extf, void, env, i32, i32)
DEF_HELPER_3(set_mac_exts, void, env, i32, i32)
DEF_HELPER_3(set_mac_extu, void, env, i32, i32)

DEF_HELPER_2(flush_flags, i32, env, i32)
DEF_HELPER_2(raise_exception, void, env, i32)

DEF_HELPER_4(bitfield_load, i64, env, i32, i32, i32)
DEF_HELPER_5(bitfield_store, void, env, i32, i32, i32, i64)

DEF_HELPER_3(abcd_cc, i32, env, i32, i32)
DEF_HELPER_3(sbcd_cc, i32, env, i32, i32)

#if !defined(CONFIG_USER_ONLY)
DEF_HELPER_3(ptest, void, env, i32, i32)
DEF_HELPER_3(pflush, void, env, i32, i32)
#endif
