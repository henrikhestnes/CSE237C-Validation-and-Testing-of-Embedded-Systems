// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module fir_fir_Pipeline_MAC_fir_int_int_c_1 (
address0, ce0, q0, address1, ce1, q1, address2, ce2, q2, address3, ce3, q3, address4, ce4, q4, address5, ce5, q5, address6, ce6, q6, address7, ce7, q7, address8, ce8, q8, address9, ce9, q9, address10, ce10, q10, address11, ce11, q11, address12, ce12, q12, address13, ce13, q13, address14, ce14, q14, address15, ce15, q15, reset,clk);

parameter DataWidth = 32;
parameter AddressWidth = 4;
parameter AddressRange = 16;

input[AddressWidth-1:0] address0;
input ce0;
output reg[DataWidth-1:0] q0;
input[AddressWidth-1:0] address1;
input ce1;
output reg[DataWidth-1:0] q1;
input[AddressWidth-1:0] address2;
input ce2;
output reg[DataWidth-1:0] q2;
input[AddressWidth-1:0] address3;
input ce3;
output reg[DataWidth-1:0] q3;
input[AddressWidth-1:0] address4;
input ce4;
output reg[DataWidth-1:0] q4;
input[AddressWidth-1:0] address5;
input ce5;
output reg[DataWidth-1:0] q5;
input[AddressWidth-1:0] address6;
input ce6;
output reg[DataWidth-1:0] q6;
input[AddressWidth-1:0] address7;
input ce7;
output reg[DataWidth-1:0] q7;
input[AddressWidth-1:0] address8;
input ce8;
output reg[DataWidth-1:0] q8;
input[AddressWidth-1:0] address9;
input ce9;
output reg[DataWidth-1:0] q9;
input[AddressWidth-1:0] address10;
input ce10;
output reg[DataWidth-1:0] q10;
input[AddressWidth-1:0] address11;
input ce11;
output reg[DataWidth-1:0] q11;
input[AddressWidth-1:0] address12;
input ce12;
output reg[DataWidth-1:0] q12;
input[AddressWidth-1:0] address13;
input ce13;
output reg[DataWidth-1:0] q13;
input[AddressWidth-1:0] address14;
input ce14;
output reg[DataWidth-1:0] q14;
input[AddressWidth-1:0] address15;
input ce15;
output reg[DataWidth-1:0] q15;
input reset;
input clk;

reg [DataWidth-1:0] ram0[0:AddressRange-1];
reg [DataWidth-1:0] ram1[0:AddressRange-1];
reg [DataWidth-1:0] ram2[0:AddressRange-1];
reg [DataWidth-1:0] ram3[0:AddressRange-1];
reg [DataWidth-1:0] ram4[0:AddressRange-1];
reg [DataWidth-1:0] ram5[0:AddressRange-1];
reg [DataWidth-1:0] ram6[0:AddressRange-1];
reg [DataWidth-1:0] ram7[0:AddressRange-1];

initial begin
    $readmemh("./fir_fir_Pipeline_MAC_fir_int_int_c_1.dat", ram0);
    $readmemh("./fir_fir_Pipeline_MAC_fir_int_int_c_1.dat", ram1);
    $readmemh("./fir_fir_Pipeline_MAC_fir_int_int_c_1.dat", ram2);
    $readmemh("./fir_fir_Pipeline_MAC_fir_int_int_c_1.dat", ram3);
    $readmemh("./fir_fir_Pipeline_MAC_fir_int_int_c_1.dat", ram4);
    $readmemh("./fir_fir_Pipeline_MAC_fir_int_int_c_1.dat", ram5);
    $readmemh("./fir_fir_Pipeline_MAC_fir_int_int_c_1.dat", ram6);
    $readmemh("./fir_fir_Pipeline_MAC_fir_int_int_c_1.dat", ram7);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram0[address0];
    end
end



always @(posedge clk)  
begin 
    if (ce1) 
    begin
        q1 <= ram0[address1];
    end
end



always @(posedge clk)  
begin 
    if (ce2) 
    begin
        q2 <= ram1[address2];
    end
end



always @(posedge clk)  
begin 
    if (ce3) 
    begin
        q3 <= ram1[address3];
    end
end



always @(posedge clk)  
begin 
    if (ce4) 
    begin
        q4 <= ram2[address4];
    end
end



always @(posedge clk)  
begin 
    if (ce5) 
    begin
        q5 <= ram2[address5];
    end
end



always @(posedge clk)  
begin 
    if (ce6) 
    begin
        q6 <= ram3[address6];
    end
end



always @(posedge clk)  
begin 
    if (ce7) 
    begin
        q7 <= ram3[address7];
    end
end



always @(posedge clk)  
begin 
    if (ce8) 
    begin
        q8 <= ram4[address8];
    end
end



always @(posedge clk)  
begin 
    if (ce9) 
    begin
        q9 <= ram4[address9];
    end
end



always @(posedge clk)  
begin 
    if (ce10) 
    begin
        q10 <= ram5[address10];
    end
end



always @(posedge clk)  
begin 
    if (ce11) 
    begin
        q11 <= ram5[address11];
    end
end



always @(posedge clk)  
begin 
    if (ce12) 
    begin
        q12 <= ram6[address12];
    end
end



always @(posedge clk)  
begin 
    if (ce13) 
    begin
        q13 <= ram6[address13];
    end
end



always @(posedge clk)  
begin 
    if (ce14) 
    begin
        q14 <= ram7[address14];
    end
end



always @(posedge clk)  
begin 
    if (ce15) 
    begin
        q15 <= ram7[address15];
    end
end



endmodule

