set moduleName fir_Pipeline_TDL
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {fir_Pipeline_TDL}
set C_modelType { void 0 }
set C_modelArgList {
	{ shift_reg_2 int 32 regular {array 8 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_1 int 32 regular {array 8 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_3 int 32 regular {array 8 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_4 int 32 regular {array 8 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_5 int 32 regular {array 8 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_6 int 32 regular {array 8 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_7 int 32 regular {array 8 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_8 int 32 regular {array 8 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_9 int 32 regular {array 7 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_10 int 32 regular {array 7 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_11 int 32 regular {array 7 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_12 int 32 regular {array 7 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_13 int 32 regular {array 7 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_14 int 32 regular {array 7 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_15 int 32 regular {array 7 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_16 int 32 regular {array 7 { 2 3 } 1 1 } {global 2}  }
	{ shift_reg_0 int 32 regular {array 8 { 2 3 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "shift_reg_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_8", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_9", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_10", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_11", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_12", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_13", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_14", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_15", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_16", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} , 
 	{ "Name" : "shift_reg_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 151
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ shift_reg_2_address0 sc_out sc_lv 3 signal 0 } 
	{ shift_reg_2_ce0 sc_out sc_logic 1 signal 0 } 
	{ shift_reg_2_we0 sc_out sc_logic 1 signal 0 } 
	{ shift_reg_2_d0 sc_out sc_lv 32 signal 0 } 
	{ shift_reg_2_q0 sc_in sc_lv 32 signal 0 } 
	{ shift_reg_1_address0 sc_out sc_lv 3 signal 1 } 
	{ shift_reg_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ shift_reg_1_we0 sc_out sc_logic 1 signal 1 } 
	{ shift_reg_1_d0 sc_out sc_lv 32 signal 1 } 
	{ shift_reg_1_q0 sc_in sc_lv 32 signal 1 } 
	{ shift_reg_3_address0 sc_out sc_lv 3 signal 2 } 
	{ shift_reg_3_ce0 sc_out sc_logic 1 signal 2 } 
	{ shift_reg_3_we0 sc_out sc_logic 1 signal 2 } 
	{ shift_reg_3_d0 sc_out sc_lv 32 signal 2 } 
	{ shift_reg_3_q0 sc_in sc_lv 32 signal 2 } 
	{ shift_reg_4_address0 sc_out sc_lv 3 signal 3 } 
	{ shift_reg_4_ce0 sc_out sc_logic 1 signal 3 } 
	{ shift_reg_4_we0 sc_out sc_logic 1 signal 3 } 
	{ shift_reg_4_d0 sc_out sc_lv 32 signal 3 } 
	{ shift_reg_4_q0 sc_in sc_lv 32 signal 3 } 
	{ shift_reg_5_address0 sc_out sc_lv 3 signal 4 } 
	{ shift_reg_5_ce0 sc_out sc_logic 1 signal 4 } 
	{ shift_reg_5_we0 sc_out sc_logic 1 signal 4 } 
	{ shift_reg_5_d0 sc_out sc_lv 32 signal 4 } 
	{ shift_reg_5_q0 sc_in sc_lv 32 signal 4 } 
	{ shift_reg_6_address0 sc_out sc_lv 3 signal 5 } 
	{ shift_reg_6_ce0 sc_out sc_logic 1 signal 5 } 
	{ shift_reg_6_we0 sc_out sc_logic 1 signal 5 } 
	{ shift_reg_6_d0 sc_out sc_lv 32 signal 5 } 
	{ shift_reg_6_q0 sc_in sc_lv 32 signal 5 } 
	{ shift_reg_7_address0 sc_out sc_lv 3 signal 6 } 
	{ shift_reg_7_ce0 sc_out sc_logic 1 signal 6 } 
	{ shift_reg_7_we0 sc_out sc_logic 1 signal 6 } 
	{ shift_reg_7_d0 sc_out sc_lv 32 signal 6 } 
	{ shift_reg_7_q0 sc_in sc_lv 32 signal 6 } 
	{ shift_reg_8_address0 sc_out sc_lv 3 signal 7 } 
	{ shift_reg_8_ce0 sc_out sc_logic 1 signal 7 } 
	{ shift_reg_8_we0 sc_out sc_logic 1 signal 7 } 
	{ shift_reg_8_d0 sc_out sc_lv 32 signal 7 } 
	{ shift_reg_8_q0 sc_in sc_lv 32 signal 7 } 
	{ shift_reg_9_address0 sc_out sc_lv 3 signal 8 } 
	{ shift_reg_9_ce0 sc_out sc_logic 1 signal 8 } 
	{ shift_reg_9_we0 sc_out sc_logic 1 signal 8 } 
	{ shift_reg_9_d0 sc_out sc_lv 32 signal 8 } 
	{ shift_reg_9_q0 sc_in sc_lv 32 signal 8 } 
	{ shift_reg_10_address0 sc_out sc_lv 3 signal 9 } 
	{ shift_reg_10_ce0 sc_out sc_logic 1 signal 9 } 
	{ shift_reg_10_we0 sc_out sc_logic 1 signal 9 } 
	{ shift_reg_10_d0 sc_out sc_lv 32 signal 9 } 
	{ shift_reg_10_q0 sc_in sc_lv 32 signal 9 } 
	{ shift_reg_11_address0 sc_out sc_lv 3 signal 10 } 
	{ shift_reg_11_ce0 sc_out sc_logic 1 signal 10 } 
	{ shift_reg_11_we0 sc_out sc_logic 1 signal 10 } 
	{ shift_reg_11_d0 sc_out sc_lv 32 signal 10 } 
	{ shift_reg_11_q0 sc_in sc_lv 32 signal 10 } 
	{ shift_reg_12_address0 sc_out sc_lv 3 signal 11 } 
	{ shift_reg_12_ce0 sc_out sc_logic 1 signal 11 } 
	{ shift_reg_12_we0 sc_out sc_logic 1 signal 11 } 
	{ shift_reg_12_d0 sc_out sc_lv 32 signal 11 } 
	{ shift_reg_12_q0 sc_in sc_lv 32 signal 11 } 
	{ shift_reg_13_address0 sc_out sc_lv 3 signal 12 } 
	{ shift_reg_13_ce0 sc_out sc_logic 1 signal 12 } 
	{ shift_reg_13_we0 sc_out sc_logic 1 signal 12 } 
	{ shift_reg_13_d0 sc_out sc_lv 32 signal 12 } 
	{ shift_reg_13_q0 sc_in sc_lv 32 signal 12 } 
	{ shift_reg_14_address0 sc_out sc_lv 3 signal 13 } 
	{ shift_reg_14_ce0 sc_out sc_logic 1 signal 13 } 
	{ shift_reg_14_we0 sc_out sc_logic 1 signal 13 } 
	{ shift_reg_14_d0 sc_out sc_lv 32 signal 13 } 
	{ shift_reg_14_q0 sc_in sc_lv 32 signal 13 } 
	{ shift_reg_15_address0 sc_out sc_lv 3 signal 14 } 
	{ shift_reg_15_ce0 sc_out sc_logic 1 signal 14 } 
	{ shift_reg_15_we0 sc_out sc_logic 1 signal 14 } 
	{ shift_reg_15_d0 sc_out sc_lv 32 signal 14 } 
	{ shift_reg_15_q0 sc_in sc_lv 32 signal 14 } 
	{ shift_reg_16_address0 sc_out sc_lv 3 signal 15 } 
	{ shift_reg_16_ce0 sc_out sc_logic 1 signal 15 } 
	{ shift_reg_16_we0 sc_out sc_logic 1 signal 15 } 
	{ shift_reg_16_d0 sc_out sc_lv 32 signal 15 } 
	{ shift_reg_16_q0 sc_in sc_lv 32 signal 15 } 
	{ shift_reg_0_address0 sc_out sc_lv 3 signal 16 } 
	{ shift_reg_0_ce0 sc_out sc_logic 1 signal 16 } 
	{ shift_reg_0_we0 sc_out sc_logic 1 signal 16 } 
	{ shift_reg_0_d0 sc_out sc_lv 32 signal 16 } 
	{ shift_reg_0_q0 sc_in sc_lv 32 signal 16 } 
	{ grp_fu_207_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_207_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_207_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_207_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_211_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_211_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_211_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_211_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_215_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_215_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_215_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_215_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_219_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_219_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_219_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_219_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_223_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_223_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_223_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_223_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_227_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_227_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_227_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_227_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_231_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_231_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_231_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_231_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_235_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_235_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_235_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_235_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_239_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_239_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_239_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_239_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_243_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_243_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_243_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_243_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_247_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_247_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_247_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_247_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_251_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_251_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_251_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_251_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_255_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_255_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_255_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_255_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_259_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_259_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_259_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_259_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_263_p_din0 sc_out sc_lv 64 signal -1 } 
	{ grp_fu_263_p_din1 sc_out sc_lv 66 signal -1 } 
	{ grp_fu_263_p_dout0 sc_in sc_lv 129 signal -1 } 
	{ grp_fu_263_p_ce sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "shift_reg_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "address0" }} , 
 	{ "name": "shift_reg_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "ce0" }} , 
 	{ "name": "shift_reg_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "we0" }} , 
 	{ "name": "shift_reg_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "d0" }} , 
 	{ "name": "shift_reg_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "q0" }} , 
 	{ "name": "shift_reg_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "address0" }} , 
 	{ "name": "shift_reg_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "ce0" }} , 
 	{ "name": "shift_reg_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "we0" }} , 
 	{ "name": "shift_reg_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "d0" }} , 
 	{ "name": "shift_reg_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "q0" }} , 
 	{ "name": "shift_reg_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "address0" }} , 
 	{ "name": "shift_reg_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "ce0" }} , 
 	{ "name": "shift_reg_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "we0" }} , 
 	{ "name": "shift_reg_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "d0" }} , 
 	{ "name": "shift_reg_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "q0" }} , 
 	{ "name": "shift_reg_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "address0" }} , 
 	{ "name": "shift_reg_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "ce0" }} , 
 	{ "name": "shift_reg_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "we0" }} , 
 	{ "name": "shift_reg_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "d0" }} , 
 	{ "name": "shift_reg_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "q0" }} , 
 	{ "name": "shift_reg_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "address0" }} , 
 	{ "name": "shift_reg_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "ce0" }} , 
 	{ "name": "shift_reg_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "we0" }} , 
 	{ "name": "shift_reg_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "d0" }} , 
 	{ "name": "shift_reg_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "q0" }} , 
 	{ "name": "shift_reg_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "address0" }} , 
 	{ "name": "shift_reg_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "ce0" }} , 
 	{ "name": "shift_reg_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "we0" }} , 
 	{ "name": "shift_reg_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "d0" }} , 
 	{ "name": "shift_reg_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "q0" }} , 
 	{ "name": "shift_reg_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "address0" }} , 
 	{ "name": "shift_reg_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "ce0" }} , 
 	{ "name": "shift_reg_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "we0" }} , 
 	{ "name": "shift_reg_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "d0" }} , 
 	{ "name": "shift_reg_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "q0" }} , 
 	{ "name": "shift_reg_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "address0" }} , 
 	{ "name": "shift_reg_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "ce0" }} , 
 	{ "name": "shift_reg_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "we0" }} , 
 	{ "name": "shift_reg_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "d0" }} , 
 	{ "name": "shift_reg_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "q0" }} , 
 	{ "name": "shift_reg_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "address0" }} , 
 	{ "name": "shift_reg_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "ce0" }} , 
 	{ "name": "shift_reg_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "we0" }} , 
 	{ "name": "shift_reg_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "d0" }} , 
 	{ "name": "shift_reg_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "q0" }} , 
 	{ "name": "shift_reg_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "address0" }} , 
 	{ "name": "shift_reg_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "ce0" }} , 
 	{ "name": "shift_reg_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "we0" }} , 
 	{ "name": "shift_reg_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "d0" }} , 
 	{ "name": "shift_reg_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "q0" }} , 
 	{ "name": "shift_reg_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "address0" }} , 
 	{ "name": "shift_reg_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "ce0" }} , 
 	{ "name": "shift_reg_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "we0" }} , 
 	{ "name": "shift_reg_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "d0" }} , 
 	{ "name": "shift_reg_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "q0" }} , 
 	{ "name": "shift_reg_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "address0" }} , 
 	{ "name": "shift_reg_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "ce0" }} , 
 	{ "name": "shift_reg_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "we0" }} , 
 	{ "name": "shift_reg_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "d0" }} , 
 	{ "name": "shift_reg_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "q0" }} , 
 	{ "name": "shift_reg_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "address0" }} , 
 	{ "name": "shift_reg_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "ce0" }} , 
 	{ "name": "shift_reg_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "we0" }} , 
 	{ "name": "shift_reg_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "d0" }} , 
 	{ "name": "shift_reg_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "q0" }} , 
 	{ "name": "shift_reg_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "address0" }} , 
 	{ "name": "shift_reg_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "ce0" }} , 
 	{ "name": "shift_reg_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "we0" }} , 
 	{ "name": "shift_reg_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "d0" }} , 
 	{ "name": "shift_reg_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "q0" }} , 
 	{ "name": "shift_reg_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "address0" }} , 
 	{ "name": "shift_reg_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "ce0" }} , 
 	{ "name": "shift_reg_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "we0" }} , 
 	{ "name": "shift_reg_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "d0" }} , 
 	{ "name": "shift_reg_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "q0" }} , 
 	{ "name": "shift_reg_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "address0" }} , 
 	{ "name": "shift_reg_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "ce0" }} , 
 	{ "name": "shift_reg_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "we0" }} , 
 	{ "name": "shift_reg_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "d0" }} , 
 	{ "name": "shift_reg_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "q0" }} , 
 	{ "name": "shift_reg_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "address0" }} , 
 	{ "name": "shift_reg_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "ce0" }} , 
 	{ "name": "shift_reg_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "we0" }} , 
 	{ "name": "shift_reg_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "d0" }} , 
 	{ "name": "shift_reg_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "q0" }} , 
 	{ "name": "grp_fu_207_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_207_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_207_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_207_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_207_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_207_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_207_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_207_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_211_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_211_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_211_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_211_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_211_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_211_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_211_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_211_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_215_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_215_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_215_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_215_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_215_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_215_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_215_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_215_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_219_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_219_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_219_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_219_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_219_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_219_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_219_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_219_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_223_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_223_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_223_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_223_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_223_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_223_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_223_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_223_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_227_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_227_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_227_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_227_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_227_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_227_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_227_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_227_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_231_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_231_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_231_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_231_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_231_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_231_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_231_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_231_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_235_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_235_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_235_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_235_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_235_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_235_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_235_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_235_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_239_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_239_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_239_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_239_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_239_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_239_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_239_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_239_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_243_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_243_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_243_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_243_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_243_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_243_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_243_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_243_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_247_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_247_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_247_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_247_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_247_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_247_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_247_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_247_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_251_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_251_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_251_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_251_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_251_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_251_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_251_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_251_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_255_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_255_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_255_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_255_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_255_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_255_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_255_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_255_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_259_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_259_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_259_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_259_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_259_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_259_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_259_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_259_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_263_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "grp_fu_263_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_263_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":66, "type": "signal", "bundle":{"name": "grp_fu_263_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_263_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":129, "type": "signal", "bundle":{"name": "grp_fu_263_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_263_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_263_p_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "fir_Pipeline_TDL",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "30", "EstimateLatencyMax" : "30",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "shift_reg_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "shift_reg_0", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "TDL", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "2", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter6", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter6", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.urem_8ns_6ns_5_12_1_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_7ns_9ns_15_1_1_U17", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_7ns_9ns_15_1_1_U18", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	fir_Pipeline_TDL {
		shift_reg_2 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_1 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_3 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_4 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_5 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_6 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_7 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_8 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_9 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_10 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_11 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_12 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_13 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_14 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_15 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_16 {Type IO LastRead 12 FirstWrite 12}
		shift_reg_0 {Type IO LastRead 12 FirstWrite 12}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "30", "Max" : "30"}
	, {"Name" : "Interval", "Min" : "30", "Max" : "30"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	shift_reg_2 { ap_memory {  { shift_reg_2_address0 mem_address 1 3 }  { shift_reg_2_ce0 mem_ce 1 1 }  { shift_reg_2_we0 mem_we 1 1 }  { shift_reg_2_d0 mem_din 1 32 }  { shift_reg_2_q0 mem_dout 0 32 } } }
	shift_reg_1 { ap_memory {  { shift_reg_1_address0 mem_address 1 3 }  { shift_reg_1_ce0 mem_ce 1 1 }  { shift_reg_1_we0 mem_we 1 1 }  { shift_reg_1_d0 mem_din 1 32 }  { shift_reg_1_q0 mem_dout 0 32 } } }
	shift_reg_3 { ap_memory {  { shift_reg_3_address0 mem_address 1 3 }  { shift_reg_3_ce0 mem_ce 1 1 }  { shift_reg_3_we0 mem_we 1 1 }  { shift_reg_3_d0 mem_din 1 32 }  { shift_reg_3_q0 mem_dout 0 32 } } }
	shift_reg_4 { ap_memory {  { shift_reg_4_address0 mem_address 1 3 }  { shift_reg_4_ce0 mem_ce 1 1 }  { shift_reg_4_we0 mem_we 1 1 }  { shift_reg_4_d0 mem_din 1 32 }  { shift_reg_4_q0 mem_dout 0 32 } } }
	shift_reg_5 { ap_memory {  { shift_reg_5_address0 mem_address 1 3 }  { shift_reg_5_ce0 mem_ce 1 1 }  { shift_reg_5_we0 mem_we 1 1 }  { shift_reg_5_d0 mem_din 1 32 }  { shift_reg_5_q0 mem_dout 0 32 } } }
	shift_reg_6 { ap_memory {  { shift_reg_6_address0 mem_address 1 3 }  { shift_reg_6_ce0 mem_ce 1 1 }  { shift_reg_6_we0 mem_we 1 1 }  { shift_reg_6_d0 mem_din 1 32 }  { shift_reg_6_q0 mem_dout 0 32 } } }
	shift_reg_7 { ap_memory {  { shift_reg_7_address0 mem_address 1 3 }  { shift_reg_7_ce0 mem_ce 1 1 }  { shift_reg_7_we0 mem_we 1 1 }  { shift_reg_7_d0 mem_din 1 32 }  { shift_reg_7_q0 mem_dout 0 32 } } }
	shift_reg_8 { ap_memory {  { shift_reg_8_address0 mem_address 1 3 }  { shift_reg_8_ce0 mem_ce 1 1 }  { shift_reg_8_we0 mem_we 1 1 }  { shift_reg_8_d0 mem_din 1 32 }  { shift_reg_8_q0 mem_dout 0 32 } } }
	shift_reg_9 { ap_memory {  { shift_reg_9_address0 mem_address 1 3 }  { shift_reg_9_ce0 mem_ce 1 1 }  { shift_reg_9_we0 mem_we 1 1 }  { shift_reg_9_d0 mem_din 1 32 }  { shift_reg_9_q0 mem_dout 0 32 } } }
	shift_reg_10 { ap_memory {  { shift_reg_10_address0 mem_address 1 3 }  { shift_reg_10_ce0 mem_ce 1 1 }  { shift_reg_10_we0 mem_we 1 1 }  { shift_reg_10_d0 mem_din 1 32 }  { shift_reg_10_q0 mem_dout 0 32 } } }
	shift_reg_11 { ap_memory {  { shift_reg_11_address0 mem_address 1 3 }  { shift_reg_11_ce0 mem_ce 1 1 }  { shift_reg_11_we0 mem_we 1 1 }  { shift_reg_11_d0 mem_din 1 32 }  { shift_reg_11_q0 mem_dout 0 32 } } }
	shift_reg_12 { ap_memory {  { shift_reg_12_address0 mem_address 1 3 }  { shift_reg_12_ce0 mem_ce 1 1 }  { shift_reg_12_we0 mem_we 1 1 }  { shift_reg_12_d0 mem_din 1 32 }  { shift_reg_12_q0 mem_dout 0 32 } } }
	shift_reg_13 { ap_memory {  { shift_reg_13_address0 mem_address 1 3 }  { shift_reg_13_ce0 mem_ce 1 1 }  { shift_reg_13_we0 mem_we 1 1 }  { shift_reg_13_d0 mem_din 1 32 }  { shift_reg_13_q0 mem_dout 0 32 } } }
	shift_reg_14 { ap_memory {  { shift_reg_14_address0 mem_address 1 3 }  { shift_reg_14_ce0 mem_ce 1 1 }  { shift_reg_14_we0 mem_we 1 1 }  { shift_reg_14_d0 mem_din 1 32 }  { shift_reg_14_q0 mem_dout 0 32 } } }
	shift_reg_15 { ap_memory {  { shift_reg_15_address0 mem_address 1 3 }  { shift_reg_15_ce0 mem_ce 1 1 }  { shift_reg_15_we0 mem_we 1 1 }  { shift_reg_15_d0 mem_din 1 32 }  { shift_reg_15_q0 mem_dout 0 32 } } }
	shift_reg_16 { ap_memory {  { shift_reg_16_address0 mem_address 1 3 }  { shift_reg_16_ce0 mem_ce 1 1 }  { shift_reg_16_we0 mem_we 1 1 }  { shift_reg_16_d0 mem_din 1 32 }  { shift_reg_16_q0 mem_dout 0 32 } } }
	shift_reg_0 { ap_memory {  { shift_reg_0_address0 mem_address 1 3 }  { shift_reg_0_ce0 mem_ce 1 1 }  { shift_reg_0_we0 mem_we 1 1 }  { shift_reg_0_d0 mem_din 1 32 }  { shift_reg_0_q0 mem_dout 0 32 } } }
}
