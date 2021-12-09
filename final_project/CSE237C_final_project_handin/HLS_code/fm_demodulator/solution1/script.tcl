############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
############################################################
open_project fm_demodulator
set_top fm_demodulator
add_files fm_demodulator.h
add_files fm_demodulator.cpp
add_files -tb fm_demodulator_test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1" -flow_target vivado
set_part {xc7z020-clg400-1}
create_clock -period 10 -name default
#source "./fm_demodulator/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
