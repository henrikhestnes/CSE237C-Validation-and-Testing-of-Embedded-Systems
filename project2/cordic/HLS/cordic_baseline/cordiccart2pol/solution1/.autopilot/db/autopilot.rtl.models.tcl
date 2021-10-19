set SynModuleInfo {
  {SRCNAME cordiccart2pol MODELNAME cordiccart2pol RTLNAME cordiccart2pol IS_TOP 1
    SUBMODULES {
      {MODELNAME cordiccart2pol_faddfsub_32ns_32ns_32_5_full_dsp_1 RTLNAME cordiccart2pol_faddfsub_32ns_32ns_32_5_full_dsp_1 BINDTYPE op TYPE fadd IMPL fulldsp LATENCY 4 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_fmul_32ns_32ns_32_4_max_dsp_1 RTLNAME cordiccart2pol_fmul_32ns_32ns_32_4_max_dsp_1 BINDTYPE op TYPE fmul IMPL maxdsp LATENCY 3 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_fptrunc_64ns_32_2_no_dsp_1 RTLNAME cordiccart2pol_fptrunc_64ns_32_2_no_dsp_1 BINDTYPE op TYPE fptrunc IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_fpext_32ns_64_2_no_dsp_1 RTLNAME cordiccart2pol_fpext_32ns_64_2_no_dsp_1 BINDTYPE op TYPE fpext IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_fcmp_32ns_32ns_1_2_no_dsp_1 RTLNAME cordiccart2pol_fcmp_32ns_32ns_1_2_no_dsp_1 BINDTYPE op TYPE fcmp IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_dmul_64ns_64ns_64_7_max_dsp_1 RTLNAME cordiccart2pol_dmul_64ns_64ns_64_7_max_dsp_1 BINDTYPE op TYPE dmul IMPL maxdsp LATENCY 6 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_Kvalues RTLNAME cordiccart2pol_Kvalues BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_angles RTLNAME cordiccart2pol_angles BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_cordic_io_s_axi RTLNAME cordiccart2pol_cordic_io_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}
