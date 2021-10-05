set SynModuleInfo {
  {SRCNAME fir_Pipeline_TDL MODELNAME fir_Pipeline_TDL RTLNAME fir_fir_Pipeline_TDL
    SUBMODULES {
      {MODELNAME fir_urem_8ns_6ns_5_12_1 RTLNAME fir_urem_8ns_6ns_5_12_1 BINDTYPE op TYPE urem IMPL auto LATENCY 11 ALLOW_PRAGMA 1}
      {MODELNAME fir_mul_64ns_66ns_129_5_1 RTLNAME fir_mul_64ns_66ns_129_5_1 BINDTYPE op TYPE mul IMPL auto LATENCY 4 ALLOW_PRAGMA 1}
      {MODELNAME fir_mul_7ns_9ns_15_1_1 RTLNAME fir_mul_7ns_9ns_15_1_1 BINDTYPE op TYPE mul IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME fir_flow_control_loop_pipe_sequential_init RTLNAME fir_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME fir_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME fir_Pipeline_MAC MODELNAME fir_Pipeline_MAC RTLNAME fir_fir_Pipeline_MAC
    SUBMODULES {
      {MODELNAME fir_mux_864_32_1_1 RTLNAME fir_mux_864_32_1_1 BINDTYPE op TYPE mux IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME fir_mul_32s_32s_32_2_1 RTLNAME fir_mul_32s_32s_32_2_1 BINDTYPE op TYPE mul IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_MAC_fir_int_int_c_1 RTLNAME fir_fir_Pipeline_MAC_fir_int_int_c_1 BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_MAC_fir_int_int_c_3 RTLNAME fir_fir_Pipeline_MAC_fir_int_int_c_3 BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_MAC_fir_int_int_c_4 RTLNAME fir_fir_Pipeline_MAC_fir_int_int_c_4 BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_MAC_fir_int_int_c_5 RTLNAME fir_fir_Pipeline_MAC_fir_int_int_c_5 BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_MAC_fir_int_int_c_6 RTLNAME fir_fir_Pipeline_MAC_fir_int_int_c_6 BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_MAC_fir_int_int_c_7 RTLNAME fir_fir_Pipeline_MAC_fir_int_int_c_7 BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_MAC_fir_int_int_c_0 RTLNAME fir_fir_Pipeline_MAC_fir_int_int_c_0 BINDTYPE storage TYPE rom IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME fir MODELNAME fir RTLNAME fir IS_TOP 1
    SUBMODULES {
      {MODELNAME fir_shift_reg_2 RTLNAME fir_shift_reg_2 BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_shift_reg_9 RTLNAME fir_shift_reg_9 BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
}
