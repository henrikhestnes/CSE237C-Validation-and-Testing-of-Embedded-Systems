set moduleName fir_Pipeline_MAC
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
set C_modelName {fir_Pipeline_MAC}
set C_modelType { void 0 }
set C_modelArgList {
	{ acc_out int 32 regular {pointer 1}  }
	{ shift_reg_2 int 32 regular {array 8 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_3 int 32 regular {array 8 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_4 int 32 regular {array 8 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_5 int 32 regular {array 8 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_6 int 32 regular {array 8 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_7 int 32 regular {array 8 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_8 int 32 regular {array 8 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_9 int 32 regular {array 7 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_10 int 32 regular {array 7 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_11 int 32 regular {array 7 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_12 int 32 regular {array 7 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_13 int 32 regular {array 7 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_14 int 32 regular {array 7 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_15 int 32 regular {array 7 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_16 int 32 regular {array 7 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_0 int 32 regular {array 8 { 1 1 } 1 1 } {global 0}  }
	{ shift_reg_1 int 32 regular {array 8 { 1 1 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "acc_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "shift_reg_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_9", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_10", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_11", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_12", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_13", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_14", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_15", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_16", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "shift_reg_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 234
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ acc_out sc_out sc_lv 32 signal 0 } 
	{ acc_out_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ shift_reg_2_address0 sc_out sc_lv 3 signal 1 } 
	{ shift_reg_2_ce0 sc_out sc_logic 1 signal 1 } 
	{ shift_reg_2_q0 sc_in sc_lv 32 signal 1 } 
	{ shift_reg_2_address1 sc_out sc_lv 3 signal 1 } 
	{ shift_reg_2_ce1 sc_out sc_logic 1 signal 1 } 
	{ shift_reg_2_q1 sc_in sc_lv 32 signal 1 } 
	{ shift_reg_3_address0 sc_out sc_lv 3 signal 2 } 
	{ shift_reg_3_ce0 sc_out sc_logic 1 signal 2 } 
	{ shift_reg_3_q0 sc_in sc_lv 32 signal 2 } 
	{ shift_reg_3_address1 sc_out sc_lv 3 signal 2 } 
	{ shift_reg_3_ce1 sc_out sc_logic 1 signal 2 } 
	{ shift_reg_3_q1 sc_in sc_lv 32 signal 2 } 
	{ shift_reg_4_address0 sc_out sc_lv 3 signal 3 } 
	{ shift_reg_4_ce0 sc_out sc_logic 1 signal 3 } 
	{ shift_reg_4_q0 sc_in sc_lv 32 signal 3 } 
	{ shift_reg_4_address1 sc_out sc_lv 3 signal 3 } 
	{ shift_reg_4_ce1 sc_out sc_logic 1 signal 3 } 
	{ shift_reg_4_q1 sc_in sc_lv 32 signal 3 } 
	{ shift_reg_5_address0 sc_out sc_lv 3 signal 4 } 
	{ shift_reg_5_ce0 sc_out sc_logic 1 signal 4 } 
	{ shift_reg_5_q0 sc_in sc_lv 32 signal 4 } 
	{ shift_reg_5_address1 sc_out sc_lv 3 signal 4 } 
	{ shift_reg_5_ce1 sc_out sc_logic 1 signal 4 } 
	{ shift_reg_5_q1 sc_in sc_lv 32 signal 4 } 
	{ shift_reg_6_address0 sc_out sc_lv 3 signal 5 } 
	{ shift_reg_6_ce0 sc_out sc_logic 1 signal 5 } 
	{ shift_reg_6_q0 sc_in sc_lv 32 signal 5 } 
	{ shift_reg_6_address1 sc_out sc_lv 3 signal 5 } 
	{ shift_reg_6_ce1 sc_out sc_logic 1 signal 5 } 
	{ shift_reg_6_q1 sc_in sc_lv 32 signal 5 } 
	{ shift_reg_7_address0 sc_out sc_lv 3 signal 6 } 
	{ shift_reg_7_ce0 sc_out sc_logic 1 signal 6 } 
	{ shift_reg_7_q0 sc_in sc_lv 32 signal 6 } 
	{ shift_reg_7_address1 sc_out sc_lv 3 signal 6 } 
	{ shift_reg_7_ce1 sc_out sc_logic 1 signal 6 } 
	{ shift_reg_7_q1 sc_in sc_lv 32 signal 6 } 
	{ shift_reg_8_address0 sc_out sc_lv 3 signal 7 } 
	{ shift_reg_8_ce0 sc_out sc_logic 1 signal 7 } 
	{ shift_reg_8_q0 sc_in sc_lv 32 signal 7 } 
	{ shift_reg_8_address1 sc_out sc_lv 3 signal 7 } 
	{ shift_reg_8_ce1 sc_out sc_logic 1 signal 7 } 
	{ shift_reg_8_q1 sc_in sc_lv 32 signal 7 } 
	{ shift_reg_9_address0 sc_out sc_lv 3 signal 8 } 
	{ shift_reg_9_ce0 sc_out sc_logic 1 signal 8 } 
	{ shift_reg_9_q0 sc_in sc_lv 32 signal 8 } 
	{ shift_reg_9_address1 sc_out sc_lv 3 signal 8 } 
	{ shift_reg_9_ce1 sc_out sc_logic 1 signal 8 } 
	{ shift_reg_9_q1 sc_in sc_lv 32 signal 8 } 
	{ shift_reg_10_address0 sc_out sc_lv 3 signal 9 } 
	{ shift_reg_10_ce0 sc_out sc_logic 1 signal 9 } 
	{ shift_reg_10_q0 sc_in sc_lv 32 signal 9 } 
	{ shift_reg_10_address1 sc_out sc_lv 3 signal 9 } 
	{ shift_reg_10_ce1 sc_out sc_logic 1 signal 9 } 
	{ shift_reg_10_q1 sc_in sc_lv 32 signal 9 } 
	{ shift_reg_11_address0 sc_out sc_lv 3 signal 10 } 
	{ shift_reg_11_ce0 sc_out sc_logic 1 signal 10 } 
	{ shift_reg_11_q0 sc_in sc_lv 32 signal 10 } 
	{ shift_reg_11_address1 sc_out sc_lv 3 signal 10 } 
	{ shift_reg_11_ce1 sc_out sc_logic 1 signal 10 } 
	{ shift_reg_11_q1 sc_in sc_lv 32 signal 10 } 
	{ shift_reg_12_address0 sc_out sc_lv 3 signal 11 } 
	{ shift_reg_12_ce0 sc_out sc_logic 1 signal 11 } 
	{ shift_reg_12_q0 sc_in sc_lv 32 signal 11 } 
	{ shift_reg_12_address1 sc_out sc_lv 3 signal 11 } 
	{ shift_reg_12_ce1 sc_out sc_logic 1 signal 11 } 
	{ shift_reg_12_q1 sc_in sc_lv 32 signal 11 } 
	{ shift_reg_13_address0 sc_out sc_lv 3 signal 12 } 
	{ shift_reg_13_ce0 sc_out sc_logic 1 signal 12 } 
	{ shift_reg_13_q0 sc_in sc_lv 32 signal 12 } 
	{ shift_reg_13_address1 sc_out sc_lv 3 signal 12 } 
	{ shift_reg_13_ce1 sc_out sc_logic 1 signal 12 } 
	{ shift_reg_13_q1 sc_in sc_lv 32 signal 12 } 
	{ shift_reg_14_address0 sc_out sc_lv 3 signal 13 } 
	{ shift_reg_14_ce0 sc_out sc_logic 1 signal 13 } 
	{ shift_reg_14_q0 sc_in sc_lv 32 signal 13 } 
	{ shift_reg_14_address1 sc_out sc_lv 3 signal 13 } 
	{ shift_reg_14_ce1 sc_out sc_logic 1 signal 13 } 
	{ shift_reg_14_q1 sc_in sc_lv 32 signal 13 } 
	{ shift_reg_15_address0 sc_out sc_lv 3 signal 14 } 
	{ shift_reg_15_ce0 sc_out sc_logic 1 signal 14 } 
	{ shift_reg_15_q0 sc_in sc_lv 32 signal 14 } 
	{ shift_reg_15_address1 sc_out sc_lv 3 signal 14 } 
	{ shift_reg_15_ce1 sc_out sc_logic 1 signal 14 } 
	{ shift_reg_15_q1 sc_in sc_lv 32 signal 14 } 
	{ shift_reg_16_address0 sc_out sc_lv 3 signal 15 } 
	{ shift_reg_16_ce0 sc_out sc_logic 1 signal 15 } 
	{ shift_reg_16_q0 sc_in sc_lv 32 signal 15 } 
	{ shift_reg_16_address1 sc_out sc_lv 3 signal 15 } 
	{ shift_reg_16_ce1 sc_out sc_logic 1 signal 15 } 
	{ shift_reg_16_q1 sc_in sc_lv 32 signal 15 } 
	{ shift_reg_0_address0 sc_out sc_lv 3 signal 16 } 
	{ shift_reg_0_ce0 sc_out sc_logic 1 signal 16 } 
	{ shift_reg_0_q0 sc_in sc_lv 32 signal 16 } 
	{ shift_reg_0_address1 sc_out sc_lv 3 signal 16 } 
	{ shift_reg_0_ce1 sc_out sc_logic 1 signal 16 } 
	{ shift_reg_0_q1 sc_in sc_lv 32 signal 16 } 
	{ shift_reg_1_address0 sc_out sc_lv 3 signal 17 } 
	{ shift_reg_1_ce0 sc_out sc_logic 1 signal 17 } 
	{ shift_reg_1_q0 sc_in sc_lv 32 signal 17 } 
	{ shift_reg_1_address1 sc_out sc_lv 3 signal 17 } 
	{ shift_reg_1_ce1 sc_out sc_logic 1 signal 17 } 
	{ shift_reg_1_q1 sc_in sc_lv 32 signal 17 } 
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
	{ grp_fu_267_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_267_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_267_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_267_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_271_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_271_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_271_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_271_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_275_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_275_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_275_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_275_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_279_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_279_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_279_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_279_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_283_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_283_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_283_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_283_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_287_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_287_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_287_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_287_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_291_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_291_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_291_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_291_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_295_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_295_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_295_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_295_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_299_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_299_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_299_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_299_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_303_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_303_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_303_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_303_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_307_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_307_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_307_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_307_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_311_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_311_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_311_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_311_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_315_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_315_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_315_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_315_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_319_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_319_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_319_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_319_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_323_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_323_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_323_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_323_p_ce sc_out sc_logic 1 signal -1 } 
	{ grp_fu_327_p_din0 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_327_p_din1 sc_out sc_lv 32 signal -1 } 
	{ grp_fu_327_p_dout0 sc_in sc_lv 32 signal -1 } 
	{ grp_fu_327_p_ce sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "acc_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "acc_out", "role": "default" }} , 
 	{ "name": "acc_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "acc_out", "role": "ap_vld" }} , 
 	{ "name": "shift_reg_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "address0" }} , 
 	{ "name": "shift_reg_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "ce0" }} , 
 	{ "name": "shift_reg_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "q0" }} , 
 	{ "name": "shift_reg_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "address1" }} , 
 	{ "name": "shift_reg_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "ce1" }} , 
 	{ "name": "shift_reg_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_2", "role": "q1" }} , 
 	{ "name": "shift_reg_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "address0" }} , 
 	{ "name": "shift_reg_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "ce0" }} , 
 	{ "name": "shift_reg_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "q0" }} , 
 	{ "name": "shift_reg_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "address1" }} , 
 	{ "name": "shift_reg_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "ce1" }} , 
 	{ "name": "shift_reg_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_3", "role": "q1" }} , 
 	{ "name": "shift_reg_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "address0" }} , 
 	{ "name": "shift_reg_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "ce0" }} , 
 	{ "name": "shift_reg_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "q0" }} , 
 	{ "name": "shift_reg_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "address1" }} , 
 	{ "name": "shift_reg_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "ce1" }} , 
 	{ "name": "shift_reg_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_4", "role": "q1" }} , 
 	{ "name": "shift_reg_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "address0" }} , 
 	{ "name": "shift_reg_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "ce0" }} , 
 	{ "name": "shift_reg_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "q0" }} , 
 	{ "name": "shift_reg_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "address1" }} , 
 	{ "name": "shift_reg_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "ce1" }} , 
 	{ "name": "shift_reg_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_5", "role": "q1" }} , 
 	{ "name": "shift_reg_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "address0" }} , 
 	{ "name": "shift_reg_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "ce0" }} , 
 	{ "name": "shift_reg_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "q0" }} , 
 	{ "name": "shift_reg_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "address1" }} , 
 	{ "name": "shift_reg_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "ce1" }} , 
 	{ "name": "shift_reg_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_6", "role": "q1" }} , 
 	{ "name": "shift_reg_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "address0" }} , 
 	{ "name": "shift_reg_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "ce0" }} , 
 	{ "name": "shift_reg_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "q0" }} , 
 	{ "name": "shift_reg_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "address1" }} , 
 	{ "name": "shift_reg_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "ce1" }} , 
 	{ "name": "shift_reg_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_7", "role": "q1" }} , 
 	{ "name": "shift_reg_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "address0" }} , 
 	{ "name": "shift_reg_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "ce0" }} , 
 	{ "name": "shift_reg_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "q0" }} , 
 	{ "name": "shift_reg_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "address1" }} , 
 	{ "name": "shift_reg_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "ce1" }} , 
 	{ "name": "shift_reg_8_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_8", "role": "q1" }} , 
 	{ "name": "shift_reg_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "address0" }} , 
 	{ "name": "shift_reg_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "ce0" }} , 
 	{ "name": "shift_reg_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "q0" }} , 
 	{ "name": "shift_reg_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "address1" }} , 
 	{ "name": "shift_reg_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "ce1" }} , 
 	{ "name": "shift_reg_9_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_9", "role": "q1" }} , 
 	{ "name": "shift_reg_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "address0" }} , 
 	{ "name": "shift_reg_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "ce0" }} , 
 	{ "name": "shift_reg_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "q0" }} , 
 	{ "name": "shift_reg_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "address1" }} , 
 	{ "name": "shift_reg_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "ce1" }} , 
 	{ "name": "shift_reg_10_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_10", "role": "q1" }} , 
 	{ "name": "shift_reg_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "address0" }} , 
 	{ "name": "shift_reg_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "ce0" }} , 
 	{ "name": "shift_reg_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "q0" }} , 
 	{ "name": "shift_reg_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "address1" }} , 
 	{ "name": "shift_reg_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "ce1" }} , 
 	{ "name": "shift_reg_11_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_11", "role": "q1" }} , 
 	{ "name": "shift_reg_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "address0" }} , 
 	{ "name": "shift_reg_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "ce0" }} , 
 	{ "name": "shift_reg_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "q0" }} , 
 	{ "name": "shift_reg_12_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "address1" }} , 
 	{ "name": "shift_reg_12_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "ce1" }} , 
 	{ "name": "shift_reg_12_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_12", "role": "q1" }} , 
 	{ "name": "shift_reg_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "address0" }} , 
 	{ "name": "shift_reg_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "ce0" }} , 
 	{ "name": "shift_reg_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "q0" }} , 
 	{ "name": "shift_reg_13_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "address1" }} , 
 	{ "name": "shift_reg_13_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "ce1" }} , 
 	{ "name": "shift_reg_13_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_13", "role": "q1" }} , 
 	{ "name": "shift_reg_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "address0" }} , 
 	{ "name": "shift_reg_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "ce0" }} , 
 	{ "name": "shift_reg_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "q0" }} , 
 	{ "name": "shift_reg_14_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "address1" }} , 
 	{ "name": "shift_reg_14_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "ce1" }} , 
 	{ "name": "shift_reg_14_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_14", "role": "q1" }} , 
 	{ "name": "shift_reg_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "address0" }} , 
 	{ "name": "shift_reg_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "ce0" }} , 
 	{ "name": "shift_reg_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "q0" }} , 
 	{ "name": "shift_reg_15_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "address1" }} , 
 	{ "name": "shift_reg_15_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "ce1" }} , 
 	{ "name": "shift_reg_15_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_15", "role": "q1" }} , 
 	{ "name": "shift_reg_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "address0" }} , 
 	{ "name": "shift_reg_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "ce0" }} , 
 	{ "name": "shift_reg_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "q0" }} , 
 	{ "name": "shift_reg_16_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "address1" }} , 
 	{ "name": "shift_reg_16_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "ce1" }} , 
 	{ "name": "shift_reg_16_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_16", "role": "q1" }} , 
 	{ "name": "shift_reg_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "address0" }} , 
 	{ "name": "shift_reg_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "ce0" }} , 
 	{ "name": "shift_reg_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "q0" }} , 
 	{ "name": "shift_reg_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "address1" }} , 
 	{ "name": "shift_reg_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "ce1" }} , 
 	{ "name": "shift_reg_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_0", "role": "q1" }} , 
 	{ "name": "shift_reg_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "address0" }} , 
 	{ "name": "shift_reg_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "ce0" }} , 
 	{ "name": "shift_reg_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "q0" }} , 
 	{ "name": "shift_reg_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "address1" }} , 
 	{ "name": "shift_reg_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "ce1" }} , 
 	{ "name": "shift_reg_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg_1", "role": "q1" }} , 
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
 	{ "name": "grp_fu_263_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_263_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_267_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_267_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_267_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_267_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_267_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_267_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_267_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_267_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_271_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_271_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_271_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_271_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_271_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_271_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_271_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_271_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_275_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_275_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_275_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_275_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_275_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_275_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_275_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_275_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_279_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_279_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_279_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_279_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_279_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_279_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_279_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_279_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_283_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_283_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_283_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_283_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_283_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_283_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_283_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_283_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_287_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_287_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_287_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_287_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_287_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_287_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_287_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_287_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_291_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_291_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_291_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_291_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_291_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_291_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_291_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_291_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_295_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_295_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_295_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_295_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_295_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_295_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_295_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_295_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_299_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_299_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_299_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_299_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_299_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_299_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_299_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_299_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_303_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_303_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_303_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_303_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_303_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_303_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_303_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_303_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_307_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_307_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_307_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_307_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_307_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_307_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_307_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_307_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_311_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_311_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_311_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_311_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_311_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_311_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_311_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_311_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_315_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_315_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_315_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_315_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_315_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_315_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_315_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_315_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_319_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_319_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_319_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_319_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_319_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_319_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_319_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_319_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_323_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_323_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_323_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_323_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_323_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_323_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_323_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_323_p_ce", "role": "default" }} , 
 	{ "name": "grp_fu_327_p_din0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_327_p_din0", "role": "default" }} , 
 	{ "name": "grp_fu_327_p_din1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_327_p_din1", "role": "default" }} , 
 	{ "name": "grp_fu_327_p_dout0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "grp_fu_327_p_dout0", "role": "default" }} , 
 	{ "name": "grp_fu_327_p_ce", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "grp_fu_327_p_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27"],
		"CDFG" : "fir_Pipeline_MAC",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26", "EstimateLatencyMax" : "26",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "acc_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "fir_int_int_c_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fir_int_int_c_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fir_int_int_c_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fir_int_int_c_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fir_int_int_c_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fir_int_int_c_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fir_int_int_c_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fir_int_int_c_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shift_reg_1", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "MAC", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter17", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter17", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fir_int_int_c_1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fir_int_int_c_2_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fir_int_int_c_3_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fir_int_int_c_4_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fir_int_int_c_5_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fir_int_int_c_6_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fir_int_int_c_7_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fir_int_int_c_0_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.urem_8ns_6ns_5_12_1_U39", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_7ns_9ns_15_1_1_U55", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U56", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U57", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U58", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U59", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U60", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U61", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U62", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U63", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U64", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U65", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U66", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U67", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U72", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U73", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U74", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mux_864_32_1_1_U75", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	fir_Pipeline_MAC {
		acc_out {Type O LastRead -1 FirstWrite 16}
		fir_int_int_c_1 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_2 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_3 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_4 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_5 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_6 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_7 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_0 {Type I LastRead -1 FirstWrite -1}
		shift_reg_2 {Type I LastRead 13 FirstWrite -1}
		shift_reg_3 {Type I LastRead 13 FirstWrite -1}
		shift_reg_4 {Type I LastRead 13 FirstWrite -1}
		shift_reg_5 {Type I LastRead 13 FirstWrite -1}
		shift_reg_6 {Type I LastRead 13 FirstWrite -1}
		shift_reg_7 {Type I LastRead 13 FirstWrite -1}
		shift_reg_8 {Type I LastRead 13 FirstWrite -1}
		shift_reg_9 {Type I LastRead 13 FirstWrite -1}
		shift_reg_10 {Type I LastRead 13 FirstWrite -1}
		shift_reg_11 {Type I LastRead 13 FirstWrite -1}
		shift_reg_12 {Type I LastRead 13 FirstWrite -1}
		shift_reg_13 {Type I LastRead 13 FirstWrite -1}
		shift_reg_14 {Type I LastRead 13 FirstWrite -1}
		shift_reg_15 {Type I LastRead 13 FirstWrite -1}
		shift_reg_16 {Type I LastRead 13 FirstWrite -1}
		shift_reg_0 {Type I LastRead 13 FirstWrite -1}
		shift_reg_1 {Type I LastRead 13 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "26", "Max" : "26"}
	, {"Name" : "Interval", "Min" : "26", "Max" : "26"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	acc_out { ap_vld {  { acc_out out_data 1 32 }  { acc_out_ap_vld out_vld 1 1 } } }
	shift_reg_2 { ap_memory {  { shift_reg_2_address0 mem_address 1 3 }  { shift_reg_2_ce0 mem_ce 1 1 }  { shift_reg_2_q0 mem_dout 0 32 }  { shift_reg_2_address1 MemPortADDR2 1 3 }  { shift_reg_2_ce1 MemPortCE2 1 1 }  { shift_reg_2_q1 MemPortDOUT2 0 32 } } }
	shift_reg_3 { ap_memory {  { shift_reg_3_address0 mem_address 1 3 }  { shift_reg_3_ce0 mem_ce 1 1 }  { shift_reg_3_q0 mem_dout 0 32 }  { shift_reg_3_address1 MemPortADDR2 1 3 }  { shift_reg_3_ce1 MemPortCE2 1 1 }  { shift_reg_3_q1 MemPortDOUT2 0 32 } } }
	shift_reg_4 { ap_memory {  { shift_reg_4_address0 mem_address 1 3 }  { shift_reg_4_ce0 mem_ce 1 1 }  { shift_reg_4_q0 mem_dout 0 32 }  { shift_reg_4_address1 MemPortADDR2 1 3 }  { shift_reg_4_ce1 MemPortCE2 1 1 }  { shift_reg_4_q1 MemPortDOUT2 0 32 } } }
	shift_reg_5 { ap_memory {  { shift_reg_5_address0 mem_address 1 3 }  { shift_reg_5_ce0 mem_ce 1 1 }  { shift_reg_5_q0 mem_dout 0 32 }  { shift_reg_5_address1 MemPortADDR2 1 3 }  { shift_reg_5_ce1 MemPortCE2 1 1 }  { shift_reg_5_q1 MemPortDOUT2 0 32 } } }
	shift_reg_6 { ap_memory {  { shift_reg_6_address0 mem_address 1 3 }  { shift_reg_6_ce0 mem_ce 1 1 }  { shift_reg_6_q0 mem_dout 0 32 }  { shift_reg_6_address1 MemPortADDR2 1 3 }  { shift_reg_6_ce1 MemPortCE2 1 1 }  { shift_reg_6_q1 MemPortDOUT2 0 32 } } }
	shift_reg_7 { ap_memory {  { shift_reg_7_address0 mem_address 1 3 }  { shift_reg_7_ce0 mem_ce 1 1 }  { shift_reg_7_q0 mem_dout 0 32 }  { shift_reg_7_address1 MemPortADDR2 1 3 }  { shift_reg_7_ce1 MemPortCE2 1 1 }  { shift_reg_7_q1 MemPortDOUT2 0 32 } } }
	shift_reg_8 { ap_memory {  { shift_reg_8_address0 mem_address 1 3 }  { shift_reg_8_ce0 mem_ce 1 1 }  { shift_reg_8_q0 mem_dout 0 32 }  { shift_reg_8_address1 MemPortADDR2 1 3 }  { shift_reg_8_ce1 MemPortCE2 1 1 }  { shift_reg_8_q1 MemPortDOUT2 0 32 } } }
	shift_reg_9 { ap_memory {  { shift_reg_9_address0 mem_address 1 3 }  { shift_reg_9_ce0 mem_ce 1 1 }  { shift_reg_9_q0 mem_dout 0 32 }  { shift_reg_9_address1 MemPortADDR2 1 3 }  { shift_reg_9_ce1 MemPortCE2 1 1 }  { shift_reg_9_q1 MemPortDOUT2 0 32 } } }
	shift_reg_10 { ap_memory {  { shift_reg_10_address0 mem_address 1 3 }  { shift_reg_10_ce0 mem_ce 1 1 }  { shift_reg_10_q0 mem_dout 0 32 }  { shift_reg_10_address1 MemPortADDR2 1 3 }  { shift_reg_10_ce1 MemPortCE2 1 1 }  { shift_reg_10_q1 MemPortDOUT2 0 32 } } }
	shift_reg_11 { ap_memory {  { shift_reg_11_address0 mem_address 1 3 }  { shift_reg_11_ce0 mem_ce 1 1 }  { shift_reg_11_q0 mem_dout 0 32 }  { shift_reg_11_address1 MemPortADDR2 1 3 }  { shift_reg_11_ce1 MemPortCE2 1 1 }  { shift_reg_11_q1 MemPortDOUT2 0 32 } } }
	shift_reg_12 { ap_memory {  { shift_reg_12_address0 mem_address 1 3 }  { shift_reg_12_ce0 mem_ce 1 1 }  { shift_reg_12_q0 mem_dout 0 32 }  { shift_reg_12_address1 MemPortADDR2 1 3 }  { shift_reg_12_ce1 MemPortCE2 1 1 }  { shift_reg_12_q1 MemPortDOUT2 0 32 } } }
	shift_reg_13 { ap_memory {  { shift_reg_13_address0 mem_address 1 3 }  { shift_reg_13_ce0 mem_ce 1 1 }  { shift_reg_13_q0 mem_dout 0 32 }  { shift_reg_13_address1 MemPortADDR2 1 3 }  { shift_reg_13_ce1 MemPortCE2 1 1 }  { shift_reg_13_q1 MemPortDOUT2 0 32 } } }
	shift_reg_14 { ap_memory {  { shift_reg_14_address0 mem_address 1 3 }  { shift_reg_14_ce0 mem_ce 1 1 }  { shift_reg_14_q0 mem_dout 0 32 }  { shift_reg_14_address1 MemPortADDR2 1 3 }  { shift_reg_14_ce1 MemPortCE2 1 1 }  { shift_reg_14_q1 MemPortDOUT2 0 32 } } }
	shift_reg_15 { ap_memory {  { shift_reg_15_address0 mem_address 1 3 }  { shift_reg_15_ce0 mem_ce 1 1 }  { shift_reg_15_q0 mem_dout 0 32 }  { shift_reg_15_address1 MemPortADDR2 1 3 }  { shift_reg_15_ce1 MemPortCE2 1 1 }  { shift_reg_15_q1 MemPortDOUT2 0 32 } } }
	shift_reg_16 { ap_memory {  { shift_reg_16_address0 mem_address 1 3 }  { shift_reg_16_ce0 mem_ce 1 1 }  { shift_reg_16_q0 mem_dout 0 32 }  { shift_reg_16_address1 MemPortADDR2 1 3 }  { shift_reg_16_ce1 MemPortCE2 1 1 }  { shift_reg_16_q1 MemPortDOUT2 0 32 } } }
	shift_reg_0 { ap_memory {  { shift_reg_0_address0 mem_address 1 3 }  { shift_reg_0_ce0 mem_ce 1 1 }  { shift_reg_0_q0 mem_dout 0 32 }  { shift_reg_0_address1 MemPortADDR2 1 3 }  { shift_reg_0_ce1 MemPortCE2 1 1 }  { shift_reg_0_q1 MemPortDOUT2 0 32 } } }
	shift_reg_1 { ap_memory {  { shift_reg_1_address0 mem_address 1 3 }  { shift_reg_1_ce0 mem_ce 1 1 }  { shift_reg_1_q0 mem_dout 0 32 }  { shift_reg_1_address1 MemPortADDR2 1 3 }  { shift_reg_1_ce1 MemPortCE2 1 1 }  { shift_reg_1_q1 MemPortDOUT2 0 32 } } }
}
