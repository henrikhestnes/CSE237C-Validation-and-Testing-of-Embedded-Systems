# This script segment is generated automatically by AutoPilot

set name fir_urem_8ns_6ns_5_12_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {urem} IMPL {auto} LATENCY 11 ALLOW_PRAGMA 1
}


set name fir_mul_64ns_66ns_129_5_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {mul} IMPL {auto} LATENCY 4 ALLOW_PRAGMA 1
}


set name fir_mul_7ns_9ns_15_1_1
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {mul} IMPL {auto} LATENCY 0 ALLOW_PRAGMA 1
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 22 \
    name shift_reg_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_2 \
    op interface \
    ports { shift_reg_2_address0 { O 3 vector } shift_reg_2_ce0 { O 1 bit } shift_reg_2_we0 { O 1 bit } shift_reg_2_d0 { O 32 vector } shift_reg_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name shift_reg_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_1 \
    op interface \
    ports { shift_reg_1_address0 { O 3 vector } shift_reg_1_ce0 { O 1 bit } shift_reg_1_we0 { O 1 bit } shift_reg_1_d0 { O 32 vector } shift_reg_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name shift_reg_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_3 \
    op interface \
    ports { shift_reg_3_address0 { O 3 vector } shift_reg_3_ce0 { O 1 bit } shift_reg_3_we0 { O 1 bit } shift_reg_3_d0 { O 32 vector } shift_reg_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name shift_reg_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_4 \
    op interface \
    ports { shift_reg_4_address0 { O 3 vector } shift_reg_4_ce0 { O 1 bit } shift_reg_4_we0 { O 1 bit } shift_reg_4_d0 { O 32 vector } shift_reg_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name shift_reg_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_5 \
    op interface \
    ports { shift_reg_5_address0 { O 3 vector } shift_reg_5_ce0 { O 1 bit } shift_reg_5_we0 { O 1 bit } shift_reg_5_d0 { O 32 vector } shift_reg_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name shift_reg_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_6 \
    op interface \
    ports { shift_reg_6_address0 { O 3 vector } shift_reg_6_ce0 { O 1 bit } shift_reg_6_we0 { O 1 bit } shift_reg_6_d0 { O 32 vector } shift_reg_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name shift_reg_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_7 \
    op interface \
    ports { shift_reg_7_address0 { O 3 vector } shift_reg_7_ce0 { O 1 bit } shift_reg_7_we0 { O 1 bit } shift_reg_7_d0 { O 32 vector } shift_reg_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name shift_reg_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_8 \
    op interface \
    ports { shift_reg_8_address0 { O 3 vector } shift_reg_8_ce0 { O 1 bit } shift_reg_8_we0 { O 1 bit } shift_reg_8_d0 { O 32 vector } shift_reg_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name shift_reg_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_9 \
    op interface \
    ports { shift_reg_9_address0 { O 3 vector } shift_reg_9_ce0 { O 1 bit } shift_reg_9_we0 { O 1 bit } shift_reg_9_d0 { O 32 vector } shift_reg_9_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name shift_reg_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_10 \
    op interface \
    ports { shift_reg_10_address0 { O 3 vector } shift_reg_10_ce0 { O 1 bit } shift_reg_10_we0 { O 1 bit } shift_reg_10_d0 { O 32 vector } shift_reg_10_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name shift_reg_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_11 \
    op interface \
    ports { shift_reg_11_address0 { O 3 vector } shift_reg_11_ce0 { O 1 bit } shift_reg_11_we0 { O 1 bit } shift_reg_11_d0 { O 32 vector } shift_reg_11_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name shift_reg_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_12 \
    op interface \
    ports { shift_reg_12_address0 { O 3 vector } shift_reg_12_ce0 { O 1 bit } shift_reg_12_we0 { O 1 bit } shift_reg_12_d0 { O 32 vector } shift_reg_12_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name shift_reg_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_13 \
    op interface \
    ports { shift_reg_13_address0 { O 3 vector } shift_reg_13_ce0 { O 1 bit } shift_reg_13_we0 { O 1 bit } shift_reg_13_d0 { O 32 vector } shift_reg_13_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name shift_reg_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_14 \
    op interface \
    ports { shift_reg_14_address0 { O 3 vector } shift_reg_14_ce0 { O 1 bit } shift_reg_14_we0 { O 1 bit } shift_reg_14_d0 { O 32 vector } shift_reg_14_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name shift_reg_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_15 \
    op interface \
    ports { shift_reg_15_address0 { O 3 vector } shift_reg_15_ce0 { O 1 bit } shift_reg_15_we0 { O 1 bit } shift_reg_15_d0 { O 32 vector } shift_reg_15_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name shift_reg_16 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_16 \
    op interface \
    ports { shift_reg_16_address0 { O 3 vector } shift_reg_16_ce0 { O 1 bit } shift_reg_16_we0 { O 1 bit } shift_reg_16_d0 { O 32 vector } shift_reg_16_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name shift_reg_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename shift_reg_0 \
    op interface \
    ports { shift_reg_0_address0 { O 3 vector } shift_reg_0_ce0 { O 1 bit } shift_reg_0_we0 { O 1 bit } shift_reg_0_d0 { O 32 vector } shift_reg_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'shift_reg_0'"
}
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
set InstName fir_flow_control_loop_pipe_sequential_init_U
set CompName fir_flow_control_loop_pipe_sequential_init
set name flow_control_loop_pipe_sequential_init
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


