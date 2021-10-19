// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Version: 2021.1.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="cordiccart2pol_cordiccart2pol,hls_ip_2021_1_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.508000,HLS_SYN_LAT=2,HLS_SYN_TPT=none,HLS_SYN_MEM=8,HLS_SYN_DSP=0,HLS_SYN_FF=3,HLS_SYN_LUT=104,HLS_VERSION=2021_1_1}" *)

module cordiccart2pol (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        x,
        y,
        r,
        r_ap_vld,
        theta,
        theta_ap_vld
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_state2 = 3'd2;
parameter    ap_ST_fsm_state3 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [7:0] x;
input  [7:0] y;
output  [7:0] r;
output   r_ap_vld;
output  [7:0] theta;
output   theta_ap_vld;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg r_ap_vld;
reg theta_ap_vld;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire    ap_CS_fsm_state2;
reg   [15:0] my_LUT_th_V_address0;
reg    my_LUT_th_V_ce0;
reg    my_LUT_th_V_we0;
wire   [0:0] my_LUT_th_V_q0;
reg   [15:0] my_LUT_r_V_address0;
reg    my_LUT_r_V_ce0;
reg    my_LUT_r_V_we0;
wire   [0:0] my_LUT_r_V_q0;
wire   [63:0] zext_ln573_fu_320_p1;
wire    ap_CS_fsm_state3;
wire   [7:0] fixed_x_V_1_fu_132_p2;
wire   [7:0] or_ln794_fu_138_p2;
wire   [0:0] p_Result_s_fu_124_p3;
wire   [0:0] tmp_fu_144_p3;
wire   [0:0] xor_ln794_fu_152_p2;
wire   [0:0] tmp_1_fu_164_p3;
wire   [0:0] xor_ln795_fu_172_p2;
wire   [0:0] overflow_fu_158_p2;
wire   [5:0] trunc_ln346_fu_190_p1;
wire   [0:0] or_ln795_fu_178_p2;
wire   [0:0] or_ln340_fu_184_p2;
wire   [7:0] fixed_y_V_1_fu_218_p2;
wire   [7:0] or_ln794_1_fu_224_p2;
wire   [0:0] p_Result_2_fu_210_p3;
wire   [0:0] tmp_3_fu_230_p3;
wire   [0:0] xor_ln794_1_fu_238_p2;
wire   [0:0] tmp_4_fu_250_p3;
wire   [0:0] xor_ln795_1_fu_258_p2;
wire   [0:0] overflow_1_fu_244_p2;
wire   [5:0] trunc_ln346_1_fu_276_p1;
wire   [0:0] or_ln795_1_fu_264_p2;
wire   [0:0] or_ln340_1_fu_270_p2;
wire   [0:0] and_ln340_fu_204_p2;
wire   [7:0] p_Result_1_fu_194_p4;
wire   [0:0] and_ln340_1_fu_290_p2;
wire   [7:0] p_Result_3_fu_280_p4;
wire   [7:0] select_ln794_fu_296_p3;
wire   [7:0] select_ln794_1_fu_304_p3;
wire   [15:0] p_Result_4_fu_312_p3;
reg   [2:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
end

cordiccart2pol_my_LUT_th_V #(
    .DataWidth( 1 ),
    .AddressRange( 65536 ),
    .AddressWidth( 16 ))
my_LUT_th_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(my_LUT_th_V_address0),
    .ce0(my_LUT_th_V_ce0),
    .we0(my_LUT_th_V_we0),
    .d0(1'd0),
    .q0(my_LUT_th_V_q0)
);

cordiccart2pol_my_LUT_th_V #(
    .DataWidth( 1 ),
    .AddressRange( 65536 ),
    .AddressWidth( 16 ))
my_LUT_r_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(my_LUT_r_V_address0),
    .ce0(my_LUT_r_V_ce0),
    .we0(my_LUT_r_V_we0),
    .d0(1'd0),
    .q0(my_LUT_r_V_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
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

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        my_LUT_r_V_address0 = zext_ln573_fu_320_p1;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        my_LUT_r_V_address0 = 64'd0;
    end else begin
        my_LUT_r_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        my_LUT_r_V_ce0 = 1'b1;
    end else begin
        my_LUT_r_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        my_LUT_r_V_we0 = 1'b1;
    end else begin
        my_LUT_r_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        my_LUT_th_V_address0 = zext_ln573_fu_320_p1;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        my_LUT_th_V_address0 = 64'd0;
    end else begin
        my_LUT_th_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)))) begin
        my_LUT_th_V_ce0 = 1'b1;
    end else begin
        my_LUT_th_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        my_LUT_th_V_we0 = 1'b1;
    end else begin
        my_LUT_th_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        r_ap_vld = 1'b1;
    end else begin
        r_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        theta_ap_vld = 1'b1;
    end else begin
        theta_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign and_ln340_1_fu_290_p2 = (or_ln795_1_fu_264_p2 & or_ln340_1_fu_270_p2);

assign and_ln340_fu_204_p2 = (or_ln795_fu_178_p2 & or_ln340_fu_184_p2);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign fixed_x_V_1_fu_132_p2 = x << 8'd1;

assign fixed_y_V_1_fu_218_p2 = y << 8'd1;

assign or_ln340_1_fu_270_p2 = (p_Result_2_fu_210_p3 | overflow_1_fu_244_p2);

assign or_ln340_fu_184_p2 = (p_Result_s_fu_124_p3 | overflow_fu_158_p2);

assign or_ln794_1_fu_224_p2 = (y | fixed_y_V_1_fu_218_p2);

assign or_ln794_fu_138_p2 = (x | fixed_x_V_1_fu_132_p2);

assign or_ln795_1_fu_264_p2 = (xor_ln795_1_fu_258_p2 | xor_ln794_1_fu_238_p2);

assign or_ln795_fu_178_p2 = (xor_ln795_fu_172_p2 | xor_ln794_fu_152_p2);

assign overflow_1_fu_244_p2 = (xor_ln794_1_fu_238_p2 & tmp_3_fu_230_p3);

assign overflow_fu_158_p2 = (xor_ln794_fu_152_p2 & tmp_fu_144_p3);

assign p_Result_1_fu_194_p4 = {{{p_Result_s_fu_124_p3}, {trunc_ln346_fu_190_p1}}, {1'd0}};

assign p_Result_2_fu_210_p3 = y[32'd7];

assign p_Result_3_fu_280_p4 = {{{p_Result_2_fu_210_p3}, {trunc_ln346_1_fu_276_p1}}, {1'd0}};

assign p_Result_4_fu_312_p3 = {{select_ln794_fu_296_p3}, {select_ln794_1_fu_304_p3}};

assign p_Result_s_fu_124_p3 = x[32'd7];

assign r = my_LUT_r_V_q0;

assign select_ln794_1_fu_304_p3 = ((and_ln340_1_fu_290_p2[0:0] == 1'b1) ? p_Result_3_fu_280_p4 : fixed_y_V_1_fu_218_p2);

assign select_ln794_fu_296_p3 = ((and_ln340_fu_204_p2[0:0] == 1'b1) ? p_Result_1_fu_194_p4 : fixed_x_V_1_fu_132_p2);

assign theta = my_LUT_th_V_q0;

assign tmp_1_fu_164_p3 = x[32'd6];

assign tmp_3_fu_230_p3 = or_ln794_1_fu_224_p2[32'd7];

assign tmp_4_fu_250_p3 = y[32'd6];

assign tmp_fu_144_p3 = or_ln794_fu_138_p2[32'd7];

assign trunc_ln346_1_fu_276_p1 = y[5:0];

assign trunc_ln346_fu_190_p1 = x[5:0];

assign xor_ln794_1_fu_238_p2 = (p_Result_2_fu_210_p3 ^ 1'd1);

assign xor_ln794_fu_152_p2 = (p_Result_s_fu_124_p3 ^ 1'd1);

assign xor_ln795_1_fu_258_p2 = (tmp_4_fu_250_p3 ^ 1'd1);

assign xor_ln795_fu_172_p2 = (tmp_1_fu_164_p3 ^ 1'd1);

assign zext_ln573_fu_320_p1 = p_Result_4_fu_312_p3;

endmodule //cordiccart2pol
