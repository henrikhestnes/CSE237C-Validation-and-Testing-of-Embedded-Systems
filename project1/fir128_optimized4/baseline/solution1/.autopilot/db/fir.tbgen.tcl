set moduleName fir
set isTopModule 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {fir}
set C_modelType { void 0 }
set C_modelArgList {
	{ y int 32 regular {pointer 1}  }
	{ x int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "y", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "x", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 9
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ y sc_out sc_lv 32 signal 0 } 
	{ y_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ x sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "y", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "y", "role": "default" }} , 
 	{ "name": "y_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "y", "role": "ap_vld" }} , 
 	{ "name": "x", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "23", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81"],
		"CDFG" : "fir",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "61", "EstimateLatencyMax" : "61",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "y", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "shift_reg_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_2", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_2", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_1", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_1", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_3", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_3", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_4", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_4", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_5", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_5", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_6", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_6", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_7", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_7", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_8", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_8", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_9", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_9", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_10", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_10", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_11", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_11", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_12", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_12", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_13", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_13", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_14", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_14", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_15", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_15", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_16", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_16", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "shift_reg_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "18", "SubInstance" : "grp_fir_Pipeline_TDL_fu_104", "Port" : "shift_reg_0", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "shift_reg_0", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "fir_int_int_c_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "fir_int_int_c_1", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "fir_int_int_c_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "fir_int_int_c_2", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "fir_int_int_c_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "fir_int_int_c_3", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "fir_int_int_c_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "fir_int_int_c_4", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "fir_int_int_c_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "fir_int_int_c_5", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "fir_int_int_c_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "fir_int_int_c_6", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "fir_int_int_c_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "fir_int_int_c_7", "Inst_start_state" : "4", "Inst_end_state" : "5"}]},
			{"Name" : "fir_int_int_c_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_fir_Pipeline_MAC_fu_142", "Port" : "fir_int_int_c_0", "Inst_start_state" : "4", "Inst_end_state" : "5"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_2_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_3_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_4_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_5_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_6_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_7_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_8_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_9_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_10_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_11_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_12_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_13_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_14_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_15_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_16_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shift_reg_0_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_TDL_fu_104", "Parent" : "0", "Child" : ["19", "20", "21", "22"],
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
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_TDL_fu_104.urem_8ns_6ns_5_12_1_U1", "Parent" : "18"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_TDL_fu_104.mul_7ns_9ns_15_1_1_U17", "Parent" : "18"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_TDL_fu_104.mul_7ns_9ns_15_1_1_U18", "Parent" : "18"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_TDL_fu_104.flow_control_loop_pipe_sequential_init_U", "Parent" : "18"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142", "Parent" : "0", "Child" : ["24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50"],
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
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.fir_int_int_c_1_U", "Parent" : "23"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.fir_int_int_c_2_U", "Parent" : "23"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.fir_int_int_c_3_U", "Parent" : "23"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.fir_int_int_c_4_U", "Parent" : "23"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.fir_int_int_c_5_U", "Parent" : "23"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.fir_int_int_c_6_U", "Parent" : "23"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.fir_int_int_c_7_U", "Parent" : "23"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.fir_int_int_c_0_U", "Parent" : "23"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.urem_8ns_6ns_5_12_1_U39", "Parent" : "23"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mul_7ns_9ns_15_1_1_U55", "Parent" : "23"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U56", "Parent" : "23"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U57", "Parent" : "23"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U58", "Parent" : "23"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U59", "Parent" : "23"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U60", "Parent" : "23"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U61", "Parent" : "23"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U62", "Parent" : "23"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U63", "Parent" : "23"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U64", "Parent" : "23"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U65", "Parent" : "23"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U66", "Parent" : "23"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U67", "Parent" : "23"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U72", "Parent" : "23"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U73", "Parent" : "23"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U74", "Parent" : "23"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.mux_864_32_1_1_U75", "Parent" : "23"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fir_Pipeline_MAC_fu_142.flow_control_loop_pipe_sequential_init_U", "Parent" : "23"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U115", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U116", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U117", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U118", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U119", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U120", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U121", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U122", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U123", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U124", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U125", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U126", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U127", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U128", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_64ns_66ns_129_5_1_U129", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U130", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U131", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U132", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U133", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U134", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U135", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U136", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U137", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U138", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U139", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U140", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U141", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U142", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U143", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U144", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_32s_32_2_1_U145", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	fir {
		y {Type O LastRead -1 FirstWrite 5}
		x {Type I LastRead 2 FirstWrite -1}
		shift_reg_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_1 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_3 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_4 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_5 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_6 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_7 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_8 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_9 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_10 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_11 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_12 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_13 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_14 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_15 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_16 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_0 {Type IO LastRead -1 FirstWrite -1}
		fir_int_int_c_1 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_2 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_3 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_4 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_5 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_6 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_7 {Type I LastRead -1 FirstWrite -1}
		fir_int_int_c_0 {Type I LastRead -1 FirstWrite -1}}
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
		shift_reg_0 {Type IO LastRead 12 FirstWrite 12}}
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
	{"Name" : "Latency", "Min" : "61", "Max" : "61"}
	, {"Name" : "Interval", "Min" : "62", "Max" : "62"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	y { ap_vld {  { y out_data 1 32 }  { y_ap_vld out_vld 1 1 } } }
	x { ap_none {  { x in_data 0 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
