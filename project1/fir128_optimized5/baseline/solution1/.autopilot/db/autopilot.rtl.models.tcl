set SynModuleInfo {
  {SRCNAME fir_Pipeline_VITIS_LOOP_27_1 MODELNAME fir_Pipeline_VITIS_LOOP_27_1 RTLNAME fir_fir_Pipeline_VITIS_LOOP_27_1
    SUBMODULES {
      {MODELNAME fir_mul_5s_32s_32_2_1 RTLNAME fir_mul_5s_32s_32_2_1 BINDTYPE op TYPE mul IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
      {MODELNAME fir_fir_Pipeline_VITIS_LOOP_27_1_c RTLNAME fir_fir_Pipeline_VITIS_LOOP_27_1_c BINDTYPE storage TYPE rom_np IMPL bram LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME fir_flow_control_loop_pipe_sequential_init RTLNAME fir_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME fir_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME fir MODELNAME fir RTLNAME fir IS_TOP 1
    SUBMODULES {
      {MODELNAME fir_shift_reg RTLNAME fir_shift_reg BINDTYPE storage TYPE ram_2p IMPL bram LATENCY 2 ALLOW_PRAGMA 1}
    }
  }
}
