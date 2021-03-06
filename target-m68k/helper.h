DEF_HELPER_1(bitrev, i32, i32)
DEF_HELPER_1(ff1, i32, i32)
DEF_HELPER_2(bfffo, i32, i32, i32)
DEF_HELPER_FLAGS_2(sats, TCG_CALL_NO_RWG_SE, i32, i32, i32)
DEF_HELPER_2(set_sr, void, env, i32)
DEF_HELPER_3(movec, void, env, i32, i32)

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

DEF_HELPER_2(flush_flags, void, env, i32)
DEF_HELPER_2(set_ccr, void, env, i32)
DEF_HELPER_FLAGS_1(get_ccr, TCG_CALL_NO_WG_SE, i32, env)
DEF_HELPER_2(raise_exception, void, env, i32)

DEF_HELPER_4(bitfield_load, i64, env, i32, i32, i32)
DEF_HELPER_5(bitfield_store, void, env, i32, i32, i32, i64)
