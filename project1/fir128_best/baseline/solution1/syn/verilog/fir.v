// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Version: 2021.1.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="fir_fir,hls_ip_2021_1_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.912000,HLS_SYN_LAT=134,HLS_SYN_TPT=none,HLS_SYN_MEM=6,HLS_SYN_DSP=0,HLS_SYN_FF=368,HLS_SYN_LUT=370,HLS_VERSION=2021_1_1}" *)

module fir (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        y,
        y_ap_vld,
        x
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
output  [31:0] y;
output   y_ap_vld;
input  [31:0] x;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg y_ap_vld;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] shift_reg_0_q0;
reg   [4:0] shift_reg_0_address1;
reg    shift_reg_0_ce1;
reg    shift_reg_0_we1;
reg   [31:0] shift_reg_0_d1;
wire    grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_start;
wire    grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_done;
wire    grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_idle;
wire    grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_ready;
wire   [31:0] grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_acc_out;
wire    grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_acc_out_ap_vld;
wire   [4:0] grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_address0;
wire    grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_ce0;
wire   [4:0] grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_address1;
wire    grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_ce1;
wire    grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_we1;
wire   [31:0] grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_d1;
reg    grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_start_reg;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire   [31:0] shl_ln35_1_fu_108_p2;
wire   [31:0] add_ln35_fu_114_p2;
wire   [31:0] shl_ln35_fu_102_p2;
reg   [2:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
reg    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
#0 grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_start_reg = 1'b0;
end

fir_fir_Pipeline_VITIS_LOOP_29_1_shift_reg_1 #(
    .DataWidth( 32 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
shift_reg_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_address0),
    .ce0(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_ce0),
    .q0(shift_reg_0_q0),
    .address1(shift_reg_0_address1),
    .ce1(shift_reg_0_ce1),
    .we1(shift_reg_0_we1),
    .d1(shift_reg_0_d1)
);

fir_fir_Pipeline_VITIS_LOOP_29_1 grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_start),
    .ap_done(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_done),
    .ap_idle(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_idle),
    .ap_ready(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_ready),
    .acc_out(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_acc_out),
    .acc_out_ap_vld(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_acc_out_ap_vld),
    .shift_reg_0_address0(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_address0),
    .shift_reg_0_ce0(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_ce0),
    .shift_reg_0_q0(shift_reg_0_q0),
    .shift_reg_0_address1(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_address1),
    .shift_reg_0_ce1(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_ce1),
    .shift_reg_0_we1(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_we1),
    .shift_reg_0_d1(grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_d1)
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
        grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_start_reg <= 1'b0;
    end else begin
        if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_start_reg <= 1'b1;
        end else if ((grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_ready == 1'b1)) begin
            grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_start_reg <= 1'b0;
        end
    end
end

always @ (*) begin
    if ((ap_start == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

always @ (*) begin
    if ((grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_done == 1'b0)) begin
        ap_ST_fsm_state2_blk = 1'b1;
    end else begin
        ap_ST_fsm_state2_blk = 1'b0;
    end
end

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
    if ((1'b1 == ap_CS_fsm_state3)) begin
        shift_reg_0_address1 = 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        shift_reg_0_address1 = grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_address1;
    end else begin
        shift_reg_0_address1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        shift_reg_0_ce1 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        shift_reg_0_ce1 = grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_ce1;
    end else begin
        shift_reg_0_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        shift_reg_0_d1 = x;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        shift_reg_0_d1 = grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_d1;
    end else begin
        shift_reg_0_d1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        shift_reg_0_we1 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        shift_reg_0_we1 = grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_shift_reg_0_we1;
    end else begin
        shift_reg_0_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        y_ap_vld = 1'b1;
    end else begin
        y_ap_vld = 1'b0;
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
            if (((grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln35_fu_114_p2 = (shl_ln35_1_fu_108_p2 + grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_acc_out);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_start = grp_fir_Pipeline_VITIS_LOOP_29_1_fu_82_ap_start_reg;

assign shl_ln35_1_fu_108_p2 = x << 32'd1;

assign shl_ln35_fu_102_p2 = x << 32'd3;

assign y = (add_ln35_fu_114_p2 + shl_ln35_fu_102_p2);

endmodule //fir
