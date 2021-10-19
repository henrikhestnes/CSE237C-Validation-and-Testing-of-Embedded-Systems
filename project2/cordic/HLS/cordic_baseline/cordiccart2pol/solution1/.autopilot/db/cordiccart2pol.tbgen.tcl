set moduleName cordiccart2pol
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
set C_modelName {cordiccart2pol}
set C_modelType { void 0 }
set C_modelArgList {
	{ x float 32 regular {axi_slave 0}  }
	{ y float 32 regular {axi_slave 0}  }
	{ r int 32 regular {axi_slave 1}  }
	{ theta int 32 regular {axi_slave 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "x", "interface" : "axi_slave", "bundle":"cordic_io","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "y", "interface" : "axi_slave", "bundle":"cordic_io","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "r", "interface" : "axi_slave", "bundle":"cordic_io","type":"ap_vld","bitwidth" : 32, "direction" : "WRITEONLY", "offset" : {"out":32}, "offset_end" : {"out":39}} , 
 	{ "Name" : "theta", "interface" : "axi_slave", "bundle":"cordic_io","type":"ap_vld","bitwidth" : 32, "direction" : "WRITEONLY", "offset" : {"out":48}, "offset_end" : {"out":55}} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ s_axi_cordic_io_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_cordic_io_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_cordic_io_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_cordic_io_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_cordic_io_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_cordic_io_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_cordic_io_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_cordic_io_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_cordic_io_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "cordic_io", "role": "AWADDR" },"address":[{"name":"cordiccart2pol","role":"start","value":"0","valid_bit":"0"},{"name":"cordiccart2pol","role":"continue","value":"0","valid_bit":"4"},{"name":"cordiccart2pol","role":"auto_start","value":"0","valid_bit":"7"},{"name":"x","role":"data","value":"16"},{"name":"y","role":"data","value":"24"}] },
	{ "name": "s_axi_cordic_io_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "AWVALID" } },
	{ "name": "s_axi_cordic_io_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "AWREADY" } },
	{ "name": "s_axi_cordic_io_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "WVALID" } },
	{ "name": "s_axi_cordic_io_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "WREADY" } },
	{ "name": "s_axi_cordic_io_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cordic_io", "role": "WDATA" } },
	{ "name": "s_axi_cordic_io_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "cordic_io", "role": "WSTRB" } },
	{ "name": "s_axi_cordic_io_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "cordic_io", "role": "ARADDR" },"address":[{"name":"cordiccart2pol","role":"start","value":"0","valid_bit":"0"},{"name":"cordiccart2pol","role":"done","value":"0","valid_bit":"1"},{"name":"cordiccart2pol","role":"idle","value":"0","valid_bit":"2"},{"name":"cordiccart2pol","role":"ready","value":"0","valid_bit":"3"},{"name":"cordiccart2pol","role":"auto_start","value":"0","valid_bit":"7"},{"name":"r","role":"data","value":"32"}, {"name":"r","role":"valid","value":"36","valid_bit":"0"},{"name":"theta","role":"data","value":"48"}, {"name":"theta","role":"valid","value":"52","valid_bit":"0"}] },
	{ "name": "s_axi_cordic_io_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "ARVALID" } },
	{ "name": "s_axi_cordic_io_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "ARREADY" } },
	{ "name": "s_axi_cordic_io_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "RVALID" } },
	{ "name": "s_axi_cordic_io_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "RREADY" } },
	{ "name": "s_axi_cordic_io_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cordic_io", "role": "RDATA" } },
	{ "name": "s_axi_cordic_io_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "cordic_io", "role": "RRESP" } },
	{ "name": "s_axi_cordic_io_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "BVALID" } },
	{ "name": "s_axi_cordic_io_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "BREADY" } },
	{ "name": "s_axi_cordic_io_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "cordic_io", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cordic_io", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11"],
		"CDFG" : "cordiccart2pol",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "160", "EstimateLatencyMax" : "160",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "y", "Type" : "None", "Direction" : "I"},
			{"Name" : "r", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "theta", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "Kvalues", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "angles", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_23_1", "PipelineType" : "pipeline",
				"LoopDec" : {"FSMBitwidth" : "23", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage2", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage2_subdone", "PreState" : ["ap_ST_fsm_state3"], "QuitState" : "ap_ST_fsm_pp0_stage2", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage2_subdone", "PostState" : ["ap_ST_fsm_state16"]}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Kvalues_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.angles_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cordic_io_s_axi_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.faddfsub_32ns_32ns_32_5_full_dsp_1_U1", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.faddfsub_32ns_32ns_32_5_full_dsp_1_U2", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fmul_32ns_32ns_32_4_max_dsp_1_U3", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fmul_32ns_32ns_32_4_max_dsp_1_U4", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fptrunc_64ns_32_2_no_dsp_1_U5", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fpext_32ns_64_2_no_dsp_1_U6", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fcmp_32ns_32ns_1_2_no_dsp_1_U7", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dmul_64ns_64ns_64_7_max_dsp_1_U8", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	cordiccart2pol {
		x {Type I LastRead 0 FirstWrite -1}
		y {Type I LastRead 0 FirstWrite -1}
		r {Type O LastRead -1 FirstWrite 14}
		theta {Type O LastRead -1 FirstWrite 3}
		Kvalues {Type I LastRead -1 FirstWrite -1}
		angles {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "160", "Max" : "160"}
	, {"Name" : "Interval", "Min" : "161", "Max" : "161"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
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
