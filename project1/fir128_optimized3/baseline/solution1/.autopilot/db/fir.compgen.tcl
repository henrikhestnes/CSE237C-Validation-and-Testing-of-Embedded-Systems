# This script segment is generated automatically by AutoPilot

set name fir_mul_6s_32s_32_2_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {mul} IMPL {auto} LATENCY 1 ALLOW_PRAGMA 1
}


# Memory (RAM/ROM)  definition:
set ID 3
set hasByteEnable 0
set MemName fir_shift_reg_0
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 32
set AddrRange 64
set AddrWd 6
set impl_style auto
set TrueReset 0
set IsROM 0
set ROMData { }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set DelayBudget 3.254
set ClkPeriod 10
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $MemName BINDTYPE {storage} TYPE {ram} IMPL {auto} LATENCY 2 ALLOW_PRAGMA 1
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 4
set hasByteEnable 0
set MemName fir_fir_int_int_c
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 128
set AddrWd 7
set impl_style auto
set TrueReset 0
set IsROM 1
set ROMData { "00000000000000000000000000001010" "00000000000000000000000000001011" "00000000000000000000000000001011" "00000000000000000000000000001000" "00000000000000000000000000000011" "11111111111111111111111111111101" "11111111111111111111111111111000" "11111111111111111111111111110101" "11111111111111111111111111110101" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110101" "11111111111111111111111111110101" "11111111111111111111111111111000" "11111111111111111111111111111101" "00000000000000000000000000000011" "00000000000000000000000000001000" "00000000000000000000000000001011" "00000000000000000000000000001011" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001011" "00000000000000000000000000001011" "00000000000000000000000000001000" "00000000000000000000000000000011" "11111111111111111111111111111101" "11111111111111111111111111111000" "11111111111111111111111111110101" "11111111111111111111111111110101" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110101" "11111111111111111111111111110101" "11111111111111111111111111111000" "11111111111111111111111111111101" "00000000000000000000000000000011" "00000000000000000000000000001000" "00000000000000000000000000001011" "00000000000000000000000000001011" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001011" "00000000000000000000000000001011" "00000000000000000000000000001000" "00000000000000000000000000000011" "11111111111111111111111111111101" "11111111111111111111111111111000" "11111111111111111111111111110101" "11111111111111111111111111110101" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110110" "11111111111111111111111111110101" "11111111111111111111111111110101" "11111111111111111111111111111000" "11111111111111111111111111111101" "00000000000000000000000000000011" "00000000000000000000000000001000" "00000000000000000000000000001011" "00000000000000000000000000001011" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" "00000000000000000000000000001010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set DelayBudget 3.254
set ClkPeriod 10
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $MemName BINDTYPE {storage} TYPE {rom} IMPL {auto} LATENCY 2 ALLOW_PRAGMA 1
}


set CoreName ROM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name y \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_y \
    op interface \
    ports { y { O 32 vector } y_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name x \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x \
    op interface \
    ports { x { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


# flow_control definition:
set InstName fir_flow_control_loop_pipe_U
set CompName fir_flow_control_loop_pipe
set name flow_control_loop_pipe
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_UPC_flow_control] == "::AESL_LIB_VIRTEX::xil_gen_UPC_flow_control"} {
eval "::AESL_LIB_VIRTEX::xil_gen_UPC_flow_control { \
    name ${name} \
    prefix fir_ \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_UPC_flow_control, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $CompName BINDTYPE interface TYPE internal_upc_flow_control INSTNAME $InstName
}


