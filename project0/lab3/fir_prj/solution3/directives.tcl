############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_top -name fir "fir"
set_directive_bind_storage -type ram_1p -impl bram "fir" c
set_directive_unroll "fir/Shift_Accum_Loop"
set_directive_array_partition -dim 1 -type complete "fir" shift_reg
