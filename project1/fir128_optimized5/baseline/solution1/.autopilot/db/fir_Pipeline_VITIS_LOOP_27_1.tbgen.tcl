set moduleName fir_Pipeline_VITIS_LOOP_27_1
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
set C_modelName {fir_Pipeline_VITIS_LOOP_27_1}
set C_modelType { void 0 }
set C_modelArgList {
	{ acc_out int 32 regular {pointer 1}  }
	{ shift_reg int 32 regular {array 128 { 1 0 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "acc_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "shift_reg", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 15
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ acc_out sc_out sc_lv 32 signal 0 } 
	{ acc_out_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ shift_reg_address0 sc_out sc_lv 7 signal 1 } 
	{ shift_reg_ce0 sc_out sc_logic 1 signal 1 } 
	{ shift_reg_q0 sc_in sc_lv 32 signal 1 } 
	{ shift_reg_address1 sc_out sc_lv 7 signal 1 } 
	{ shift_reg_ce1 sc_out sc_logic 1 signal 1 } 
	{ shift_reg_we1 sc_out sc_logic 1 signal 1 } 
	{ shift_reg_d1 sc_out sc_lv 32 signal 1 } 
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
 	{ "name": "shift_reg_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "shift_reg", "role": "address0" }} , 
 	{ "name": "shift_reg_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg", "role": "ce0" }} , 
 	{ "name": "shift_reg_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg", "role": "q0" }} , 
 	{ "name": "shift_reg_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "shift_reg", "role": "address1" }} , 
 	{ "name": "shift_reg_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg", "role": "ce1" }} , 
 	{ "name": "shift_reg_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shift_reg", "role": "we1" }} , 
 	{ "name": "shift_reg_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shift_reg", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "fir_Pipeline_VITIS_LOOP_27_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "132", "EstimateLatencyMax" : "132",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "acc_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "shift_reg", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "c", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_27_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter4", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter4", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_5s_32s_32_2_1_U1", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	fir_Pipeline_VITIS_LOOP_27_1 {
		acc_out {Type O LastRead -1 FirstWrite 3}
		shift_reg {Type IO LastRead 0 FirstWrite 1}
		c {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "132", "Max" : "132"}
	, {"Name" : "Interval", "Min" : "132", "Max" : "132"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	acc_out { ap_vld {  { acc_out out_data 1 32 }  { acc_out_ap_vld out_vld 1 1 } } }
	shift_reg { ap_memory {  { shift_reg_address0 mem_address 1 7 }  { shift_reg_ce0 mem_ce 1 1 }  { shift_reg_q0 mem_dout 0 32 }  { shift_reg_address1 MemPortADDR2 1 7 }  { shift_reg_ce1 MemPortCE2 1 1 }  { shift_reg_we1 MemPortWE2 1 1 }  { shift_reg_d1 MemPortDIN2 1 32 } } }
}