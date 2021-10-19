set SynModuleInfo {
  {SRCNAME cordiccart2pol MODELNAME cordiccart2pol RTLNAME cordiccart2pol IS_TOP 1
    SUBMODULES {
      {MODELNAME cordiccart2pol_fpext_32ns_64_2_no_dsp_1 RTLNAME cordiccart2pol_fpext_32ns_64_2_no_dsp_1 BINDTYPE op TYPE fpext IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_mul_mul_17s_13ns_31_4_1 RTLNAME cordiccart2pol_mul_mul_17s_13ns_31_4_1 BINDTYPE op TYPE mul IMPL dsp LATENCY 3 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_angles_V RTLNAME cordiccart2pol_angles_V BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME cordiccart2pol_control_s_axi RTLNAME cordiccart2pol_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
    }
  }
}
