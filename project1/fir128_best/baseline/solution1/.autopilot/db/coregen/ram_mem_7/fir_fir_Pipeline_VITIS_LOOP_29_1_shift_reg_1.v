// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module fir_fir_Pipeline_VITIS_LOOP_29_1_shift_reg_1 (address0, ce0, q0, address1, ce1, d1, we1,  reset,clk);

parameter DataWidth = 32;
parameter AddressWidth = 5;
parameter AddressRange = 32;

input[AddressWidth-1:0] address0;
input ce0;
output reg[DataWidth-1:0] q0;
input[AddressWidth-1:0] address1;
input ce1;
input[DataWidth-1:0] d1;
input we1;
input reset;
input clk;

(* ram_style = "block" *)reg [DataWidth-1:0] ram[0:AddressRange-1];

initial begin
    $readmemh("./fir_fir_Pipeline_VITIS_LOOP_29_1_shift_reg_1.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) begin
        q0 <= ram[address0];
    end
end


always @(posedge clk)  
begin 
    if (ce1) begin
        if (we1) 
            ram[address1] <= d1; 
    end
end


endmodule
