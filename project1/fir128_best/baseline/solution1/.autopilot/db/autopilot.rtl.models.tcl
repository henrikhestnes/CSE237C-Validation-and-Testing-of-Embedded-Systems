set SynModuleInfo {
  {SRCNAME fir_Pipeline_VITIS_LOOP_29_1 MODELNAME fir_Pipeline_VITIS_LOOP_29_1 RTLNAME fir_fir_Pipeline_VITIS_LOOP_29_1
    SUBMODULES {
      {MODELNAME fir_mux_464_32_1_1 RTLNAME fir_mux_464_32_1_1 BINDTYPE op TYPE mux IMPL auto LATENCY 0 ALLOW_PRAGMA 1}
      {MODELNAME fir_mul_32s_5s_32_2_1 RTLNAME fir_mul_32s_5s_32_2_1 BINDTYPE op TYPE mul IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_VITIS_LOOP_29_1_c_0 RTLNAME fir_fir_Pipeline_VITIS_LOOP_29_1_c_0 BINDTYPE storage TYPE rom_np IMPL bram LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_VITIS_LOOP_29_1_c_1 RTLNAME fir_fir_Pipeline_VITIS_LOOP_29_1_c_1 BINDTYPE storage TYPE rom_np IMPL bram LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_VITIS_LOOP_29_1_shift_reg_1 RTLNAME fir_fir_Pipeline_VITIS_LOOP_29_1_shift_reg_1 BINDTYPE storage TYPE ram_2p IMPL bram LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_flow_control_loop_pipe_sequential_init RTLNAME fir_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME fir_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME fir MODELNAME fir RTLNAME fir IS_TOP 1}
}
