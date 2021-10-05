// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module fir_fir_Pipeline_VITIS_LOOP_30_2_fir_int_int_c (
address0, ce0, q0, reset,clk);

parameter DataWidth = 32;
parameter AddressWidth = 7;
parameter AddressRange = 128;

input[AddressWidth-1:0] address0;
input ce0;
output reg[DataWidth-1:0] q0;
input reset;
input clk;

reg [DataWidth-1:0] ram[0:AddressRange-1];

initial begin
    $readmemh("./fir_fir_Pipeline_VITIS_LOOP_30_2_fir_int_int_c.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[address0];
    end
end



endmodule
