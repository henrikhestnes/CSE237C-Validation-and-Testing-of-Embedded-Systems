// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1.1 (lin64) Build 3286242 Wed Jul 28 13:09:46 MDT 2021
// Date        : Sun Oct  3 18:51:43 2021
// Host        : ubuntu running 64-bit Ubuntu 20.04.3 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/henrikhestnes/Documents/CSE-237C-Validation-and-Testing-of-Embedded-Systems/project1/fir128_optimized1/baseline/solution1/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_stub.v
// Design      : bd_0_hls_inst_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "fir,Vivado 2021.1.1" *)
module bd_0_hls_inst_0(y_ap_vld, ap_clk, ap_rst, ap_start, ap_done, 
  ap_idle, ap_ready, y, x)
/* synthesis syn_black_box black_box_pad_pin="y_ap_vld,ap_clk,ap_rst,ap_start,ap_done,ap_idle,ap_ready,y[31:0],x[31:0]" */;
  output y_ap_vld;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [31:0]y;
  input [31:0]x;
endmodule
