// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Version: 2021.1.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="fir_fir,hls_ip_2021_1_1,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu9p-flgb2104-1-i,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.444000,HLS_SYN_LAT=7,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=585,HLS_SYN_LUT=716,HLS_VERSION=2021_1_1}" *)

module fir (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        y,
        y_ap_vld,
        c_address0,
        c_ce0,
        c_q0,
        c_address1,
        c_ce1,
        c_q1,
        x,
        x_ap_vld
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] y;
output   y_ap_vld;
output  [3:0] c_address0;
output   c_ce0;
input  [31:0] c_q0;
output  [3:0] c_address1;
output   c_ce1;
input  [31:0] c_q1;
input  [31:0] x;
input   x_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg y_ap_vld;
reg[3:0] c_address0;
reg c_ce0;
reg[3:0] c_address1;
reg c_ce1;

(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [31:0] x_preg;
reg  signed [31:0] x_in_sig;
reg    x_ap_vld_preg;
reg    x_ap_vld_in_sig;
reg  signed [31:0] shift_reg_9;
reg  signed [31:0] shift_reg_8;
reg  signed [31:0] shift_reg_7;
reg  signed [31:0] shift_reg_6;
reg  signed [31:0] shift_reg_5;
reg  signed [31:0] shift_reg_4;
reg  signed [31:0] shift_reg_3;
reg  signed [31:0] shift_reg_2;
reg  signed [31:0] shift_reg_1;
reg  signed [31:0] shift_reg_0;
reg    x_blk_n;
wire    ap_CS_fsm_state7;
reg  signed [31:0] reg_191;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire   [31:0] add_ln73_fu_222_p2;
reg   [31:0] add_ln73_reg_442;
wire    ap_CS_fsm_state4;
wire   [31:0] add_ln73_2_fu_282_p2;
reg   [31:0] add_ln73_2_reg_457;
reg  signed [31:0] c_load_6_reg_462;
wire   [31:0] mul_ln73_4_fu_298_p2;
reg   [31:0] mul_ln73_4_reg_477;
wire   [31:0] add_ln73_4_fu_335_p2;
reg   [31:0] add_ln73_4_reg_492;
wire   [31:0] add_ln73_8_fu_401_p2;
reg   [31:0] add_ln73_8_reg_497;
wire    ap_CS_fsm_state8;
wire   [31:0] mul_ln73_fu_216_p2;
wire   [31:0] acc_fu_200_p2;
wire   [31:0] mul_ln73_2_fu_254_p2;
wire   [31:0] mul_ln73_3_fu_270_p2;
wire   [31:0] add_ln73_1_fu_276_p2;
wire   [31:0] mul_ln73_1_fu_238_p2;
wire   [31:0] mul_ln73_5_fu_314_p2;
wire   [31:0] mul_ln73_6_fu_329_p2;
wire   [31:0] mul_ln73_8_fu_367_p2;
wire   [31:0] mul_ln73_9_fu_379_p2;
wire   [31:0] add_ln73_6_fu_389_p2;
wire   [31:0] mul_ln73_7_fu_351_p2;
wire   [31:0] add_ln73_7_fu_395_p2;
wire   [31:0] add_ln73_5_fu_385_p2;
wire   [31:0] add_ln73_3_fu_407_p2;
reg   [7:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
wire    ap_ST_fsm_state4_blk;
wire    ap_ST_fsm_state5_blk;
wire    ap_ST_fsm_state6_blk;
reg    ap_ST_fsm_state7_blk;
wire    ap_ST_fsm_state8_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
#0 x_preg = 32'd0;
#0 x_ap_vld_preg = 1'b0;
#0 shift_reg_9 = 32'd0;
#0 shift_reg_8 = 32'd0;
#0 shift_reg_7 = 32'd0;
#0 shift_reg_6 = 32'd0;
#0 shift_reg_5 = 32'd0;
#0 shift_reg_4 = 32'd0;
#0 shift_reg_3 = 32'd0;
#0 shift_reg_2 = 32'd0;
#0 shift_reg_1 = 32'd0;
#0 shift_reg_0 = 32'd0;
end

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U1(
    .din0(reg_191),
    .din1(shift_reg_9),
    .dout(acc_fu_200_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U2(
    .din0(c_q1),
    .din1(shift_reg_8),
    .dout(mul_ln73_fu_216_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U3(
    .din0(reg_191),
    .din1(shift_reg_7),
    .dout(mul_ln73_1_fu_238_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U4(
    .din0(c_q0),
    .din1(shift_reg_6),
    .dout(mul_ln73_2_fu_254_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U5(
    .din0(c_q1),
    .din1(shift_reg_5),
    .dout(mul_ln73_3_fu_270_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U6(
    .din0(reg_191),
    .din1(shift_reg_4),
    .dout(mul_ln73_4_fu_298_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U7(
    .din0(c_load_6_reg_462),
    .din1(shift_reg_3),
    .dout(mul_ln73_5_fu_314_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U8(
    .din0(c_q0),
    .din1(shift_reg_2),
    .dout(mul_ln73_6_fu_329_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U9(
    .din0(reg_191),
    .din1(shift_reg_1),
    .dout(mul_ln73_7_fu_351_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U10(
    .din0(c_q0),
    .din1(shift_reg_0),
    .dout(mul_ln73_8_fu_367_p2)
);

fir_mul_32s_32s_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_1_1_U11(
    .din0(c_q1),
    .din1(x_in_sig),
    .dout(mul_ln73_9_fu_379_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        x_ap_vld_preg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state8)) begin
            x_ap_vld_preg <= 1'b0;
        end else if ((~((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)) & (x_ap_vld == 1'b1))) begin
            x_ap_vld_preg <= x_ap_vld;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        x_preg <= 32'd0;
    end else begin
        if ((~((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)) & (x_ap_vld == 1'b1))) begin
            x_preg <= x;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        reg_191 <= c_q1;
    end else if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2))) begin
        reg_191 <= c_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        add_ln73_2_reg_457 <= add_ln73_2_fu_282_p2;
        shift_reg_6 <= shift_reg_5;
        shift_reg_7 <= shift_reg_6;
        shift_reg_8 <= shift_reg_7;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        add_ln73_4_reg_492 <= add_ln73_4_fu_335_p2;
        mul_ln73_4_reg_477 <= mul_ln73_4_fu_298_p2;
        shift_reg_3 <= shift_reg_2;
        shift_reg_4 <= shift_reg_3;
        shift_reg_5 <= shift_reg_4;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        add_ln73_8_reg_497 <= add_ln73_8_fu_401_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        add_ln73_reg_442 <= add_ln73_fu_222_p2;
        shift_reg_9 <= shift_reg_8;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        c_load_6_reg_462 <= c_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((x_ap_vld_in_sig == 1'b1) & (1'b1 == ap_CS_fsm_state7))) begin
        shift_reg_0 <= x_in_sig;
        shift_reg_1 <= shift_reg_0;
        shift_reg_2 <= shift_reg_1;
    end
end

always @ (*) begin
    if ((ap_start == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

assign ap_ST_fsm_state2_blk = 1'b0;

assign ap_ST_fsm_state3_blk = 1'b0;

assign ap_ST_fsm_state4_blk = 1'b0;

assign ap_ST_fsm_state5_blk = 1'b0;

assign ap_ST_fsm_state6_blk = 1'b0;

always @ (*) begin
    if ((x_ap_vld_in_sig == 1'b0)) begin
        ap_ST_fsm_state7_blk = 1'b1;
    end else begin
        ap_ST_fsm_state7_blk = 1'b0;
    end
end

assign ap_ST_fsm_state8_blk = 1'b0;

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        c_address0 = 64'd1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        c_address0 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        c_address0 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        c_address0 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        c_address0 = 64'd8;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        c_address0 = 64'd10;
    end else begin
        c_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        c_address1 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        c_address1 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        c_address1 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        c_address1 = 64'd6;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        c_address1 = 64'd9;
    end else begin
        c_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state4) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        c_ce0 = 1'b1;
    end else begin
        c_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state4))) begin
        c_ce1 = 1'b1;
    end else begin
        c_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((x_ap_vld == 1'b1)) begin
        x_ap_vld_in_sig = x_ap_vld;
    end else begin
        x_ap_vld_in_sig = x_ap_vld_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        x_blk_n = x_ap_vld;
    end else begin
        x_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((x_ap_vld == 1'b1)) begin
        x_in_sig = x;
    end else begin
        x_in_sig = x_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        y_ap_vld = 1'b1;
    end else begin
        y_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            if (((x_ap_vld_in_sig == 1'b1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln73_1_fu_276_p2 = (mul_ln73_2_fu_254_p2 + mul_ln73_3_fu_270_p2);

assign add_ln73_2_fu_282_p2 = (add_ln73_1_fu_276_p2 + mul_ln73_1_fu_238_p2);

assign add_ln73_3_fu_407_p2 = (add_ln73_2_reg_457 + add_ln73_reg_442);

assign add_ln73_4_fu_335_p2 = (mul_ln73_5_fu_314_p2 + mul_ln73_6_fu_329_p2);

assign add_ln73_5_fu_385_p2 = (add_ln73_4_reg_492 + mul_ln73_4_reg_477);

assign add_ln73_6_fu_389_p2 = (mul_ln73_8_fu_367_p2 + mul_ln73_9_fu_379_p2);

assign add_ln73_7_fu_395_p2 = (add_ln73_6_fu_389_p2 + mul_ln73_7_fu_351_p2);

assign add_ln73_8_fu_401_p2 = (add_ln73_7_fu_395_p2 + add_ln73_5_fu_385_p2);

assign add_ln73_fu_222_p2 = (mul_ln73_fu_216_p2 + acc_fu_200_p2);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign y = (add_ln73_8_reg_497 + add_ln73_3_fu_407_p2);

endmodule //fir