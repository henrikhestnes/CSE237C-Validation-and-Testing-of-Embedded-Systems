// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Version: 2021.1.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="fir_fir,hls_ip_2021_1_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.206000,HLS_SYN_LAT=260,HLS_SYN_TPT=none,HLS_SYN_MEM=3,HLS_SYN_DSP=0,HLS_SYN_FF=412,HLS_SYN_LUT=360,HLS_VERSION=2021_1_1}" *)

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

parameter    ap_ST_fsm_pp0_stage0 = 2'd1;
parameter    ap_ST_fsm_pp0_stage1 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] y;
output   y_ap_vld;
input  [31:0] x;

reg ap_idle;
reg y_ap_vld;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_idle_pp0;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state2_pp0_stage1_iter0;
wire    ap_block_state4_pp0_stage1_iter1;
wire    ap_block_pp0_stage1_subdone;
reg   [0:0] tmp_reg_308;
reg    ap_condition_exit_pp0_iter0_stage1;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
reg   [5:0] shift_reg_0_address0;
reg    shift_reg_0_ce0;
reg    shift_reg_0_we0;
reg   [31:0] shift_reg_0_d0;
wire   [31:0] shift_reg_0_q0;
reg   [5:0] shift_reg_1_address0;
reg    shift_reg_1_ce0;
reg    shift_reg_1_we0;
wire   [31:0] shift_reg_1_d0;
wire   [31:0] shift_reg_1_q0;
wire   [6:0] fir_int_int_c_address0;
reg    fir_int_int_c_ce0;
wire   [31:0] fir_int_int_c_q0;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_state5_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
wire   [31:0] mul9_fu_163_p2;
wire   [0:0] tmp_fu_182_p3;
reg   [0:0] tmp_reg_308_pp0_iter1_reg;
wire   [0:0] icmp_ln25_fu_199_p2;
reg   [0:0] icmp_ln25_reg_312;
reg   [0:0] icmp_ln25_reg_312_pp0_iter1_reg;
wire   [0:0] trunc_ln26_fu_211_p1;
reg   [0:0] trunc_ln26_reg_316;
reg   [5:0] lshr_ln26_1_reg_331;
wire  signed [31:0] select_ln26_fu_252_p3;
reg  signed [31:0] select_ln26_reg_341;
wire    ap_block_pp0_stage1_11001;
reg  signed [31:0] fir_int_int_c_load_reg_346;
wire   [31:0] grp_fu_266_p2;
reg   [31:0] mul_ln27_reg_351;
reg    ap_enable_reg_pp0_iter0_reg;
wire    ap_block_pp0_stage0_subdone;
reg   [31:0] ap_phi_mux_mul_pn_phi_fu_145_p4;
reg   [31:0] ap_phi_reg_pp0_iter2_mul_pn_reg_142;
reg   [31:0] ap_phi_reg_pp0_iter0_mul_pn_reg_142;
reg   [31:0] ap_phi_reg_pp0_iter1_mul_pn_reg_142;
wire   [63:0] zext_ln26_fu_225_p1;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln23_fu_190_p1;
wire   [63:0] zext_ln26_1_fu_261_p1;
wire    ap_block_pp0_stage1;
reg   [31:0] acc_fu_64;
wire   [31:0] acc_1_fu_273_p2;
reg   [31:0] ap_sig_allocacmp_acc_load_1;
wire    ap_loop_init;
reg   [7:0] i_fu_68;
reg   [7:0] ap_sig_allocacmp_i_1;
wire   [7:0] add_ln23_fu_241_p2;
wire    ap_block_pp0_stage0_01001;
wire   [31:0] empty_fu_151_p2;
wire   [31:0] empty_10_fu_157_p2;
wire   [6:0] trunc_ln23_fu_195_p1;
wire   [6:0] add_ln26_fu_205_p2;
wire   [5:0] lshr_ln_fu_215_p4;
wire  signed [5:0] grp_fu_266_p0;
reg    ap_done_reg;
wire    ap_continue_int;
reg    ap_done_int;
reg    ap_loop_exit_ready_pp0_iter1_reg;
reg    ap_condition_exit_pp0_iter1_stage0;
reg    ap_idle_pp0_0to0;
reg   [1:0] ap_NS_fsm;
reg    ap_idle_pp0_1to2;
wire    ap_enable_pp0;
wire    ap_start_int;
reg    ap_condition_161;
reg    ap_condition_335;
reg    ap_condition_338;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter0_reg = 1'b0;
#0 ap_done_reg = 1'b0;
end

fir_shift_reg_0 #(
    .DataWidth( 32 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
shift_reg_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_0_address0),
    .ce0(shift_reg_0_ce0),
    .we0(shift_reg_0_we0),
    .d0(shift_reg_0_d0),
    .q0(shift_reg_0_q0)
);

fir_shift_reg_0 #(
    .DataWidth( 32 ),
    .AddressRange( 64 ),
    .AddressWidth( 6 ))
shift_reg_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_1_address0),
    .ce0(shift_reg_1_ce0),
    .we0(shift_reg_1_we0),
    .d0(shift_reg_1_d0),
    .q0(shift_reg_1_q0)
);

fir_fir_int_int_c #(
    .DataWidth( 32 ),
    .AddressRange( 128 ),
    .AddressWidth( 7 ))
fir_int_int_c_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(fir_int_int_c_address0),
    .ce0(fir_int_int_c_ce0),
    .q0(fir_int_int_c_q0)
);

fir_mul_6s_32s_32_2_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 6 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_6s_32s_32_2_1_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_266_p0),
    .din1(select_ln26_reg_341),
    .ce(1'b1),
    .dout(grp_fu_266_p2)
);

fir_flow_control_loop_pipe flow_control_loop_pipe_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_start_int(ap_start_int),
    .ap_loop_init(ap_loop_init),
    .ap_ready_int(ap_ready_int),
    .ap_loop_exit_ready(ap_condition_exit_pp0_iter0_stage1),
    .ap_loop_exit_done(ap_done_int),
    .ap_continue_int(ap_continue_int),
    .ap_done_int(ap_done_int),
    .ap_continue(1'b1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue_int == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_loop_exit_ready_pp0_iter1_reg == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
            ap_enable_reg_pp0_iter0_reg <= ap_start_int;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b1 == ap_condition_exit_pp0_iter0_stage1)) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((ap_enable_reg_pp0_iter0 == 1'b1) & (ap_loop_init == 1'b1))) begin
            acc_fu_64 <= 32'd0;
        end else if ((ap_enable_reg_pp0_iter2 == 1'b1)) begin
            acc_fu_64 <= acc_1_fu_273_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_idle_pp0_0to0 == 1'b1) & (1'b1 == ap_condition_exit_pp0_iter1_stage0))) begin
        ap_loop_exit_ready_pp0_iter1_reg <= 1'b0;
    end else if (((1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        ap_loop_exit_ready_pp0_iter1_reg <= ap_loop_exit_ready;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_condition_161)) begin
        if ((tmp_fu_182_p3 == 1'd0)) begin
            i_fu_68 <= add_ln23_fu_241_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            i_fu_68 <= 8'd127;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_182_p3 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln25_fu_199_p2 == 1'd1))) begin
        ap_phi_reg_pp0_iter0_mul_pn_reg_142[31 : 1] <= mul9_fu_163_p2[31 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        ap_phi_reg_pp0_iter1_mul_pn_reg_142[31 : 1] <= ap_phi_reg_pp0_iter0_mul_pn_reg_142[31 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        ap_phi_reg_pp0_iter2_mul_pn_reg_142[31 : 1] <= ap_phi_reg_pp0_iter1_mul_pn_reg_142[31 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_reg_308 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (icmp_ln25_reg_312 == 1'd0))) begin
        fir_int_int_c_load_reg_346 <= fir_int_int_c_q0;
        select_ln26_reg_341 <= select_ln26_fu_252_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_182_p3 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln25_reg_312 <= icmp_ln25_fu_199_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln25_reg_312_pp0_iter1_reg <= icmp_ln25_reg_312;
        tmp_reg_308 <= ap_sig_allocacmp_i_1[32'd7];
        tmp_reg_308_pp0_iter1_reg <= tmp_reg_308;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_182_p3 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln25_fu_199_p2 == 1'd0))) begin
        lshr_ln26_1_reg_331 <= {{ap_sig_allocacmp_i_1[6:1]}};
        trunc_ln26_reg_316 <= trunc_ln26_fu_211_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_reg_308_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (icmp_ln25_reg_312_pp0_iter1_reg == 1'd0))) begin
        mul_ln27_reg_351 <= grp_fu_266_p2;
    end
end

always @ (*) begin
    if (((tmp_reg_308 == 1'd1) & (1'b0 == ap_block_pp0_stage1_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        ap_condition_exit_pp0_iter0_stage1 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage1 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_reg_308 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_condition_exit_pp0_iter1_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter1_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_loop_exit_ready_pp0_iter1_reg == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_done_int = 1'b1;
    end else begin
        ap_done_int = ap_done_reg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
        ap_enable_reg_pp0_iter0 = ap_start_int;
    end else begin
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b0)) begin
        ap_idle_pp0_0to0 = 1'b1;
    end else begin
        ap_idle_pp0_0to0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0_1to2 = 1'b1;
    end else begin
        ap_idle_pp0_1to2 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_reg_308_pp0_iter1_reg == 1'd0) & (icmp_ln25_reg_312_pp0_iter1_reg == 1'd0))) begin
        ap_phi_mux_mul_pn_phi_fu_145_p4 = mul_ln27_reg_351;
    end else begin
        ap_phi_mux_mul_pn_phi_fu_145_p4 = ap_phi_reg_pp0_iter2_mul_pn_reg_142;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage1_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_sig_allocacmp_acc_load_1 = acc_1_fu_273_p2;
    end else begin
        ap_sig_allocacmp_acc_load_1 = acc_fu_64;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_loop_init == 1'b1))) begin
        ap_sig_allocacmp_i_1 = 8'd127;
    end else begin
        ap_sig_allocacmp_i_1 = i_fu_68;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        fir_int_int_c_ce0 = 1'b1;
    end else begin
        fir_int_int_c_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_0_address0 = zext_ln26_1_fu_261_p1;
        end else if ((1'b1 == ap_condition_338)) begin
            shift_reg_0_address0 = 6'd0;
        end else if ((1'b1 == ap_condition_335)) begin
            shift_reg_0_address0 = zext_ln26_fu_225_p1;
        end else begin
            shift_reg_0_address0 = 'bx;
        end
    end else begin
        shift_reg_0_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((tmp_fu_182_p3 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln25_fu_199_p2 == 1'd1)) | ((tmp_fu_182_p3 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln25_fu_199_p2 == 1'd0)))) begin
        shift_reg_0_ce0 = 1'b1;
    end else begin
        shift_reg_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_0_d0 = select_ln26_fu_252_p3;
        end else if ((1'b1 == ap_condition_338)) begin
            shift_reg_0_d0 = x;
        end else begin
            shift_reg_0_d0 = 'bx;
        end
    end else begin
        shift_reg_0_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((tmp_reg_308 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln26_reg_316 == 1'd0) & (icmp_ln25_reg_312 == 1'd0)) | ((tmp_fu_182_p3 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln25_fu_199_p2 == 1'd1)))) begin
        shift_reg_0_we0 = 1'b1;
    end else begin
        shift_reg_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_1_address0 = zext_ln26_1_fu_261_p1;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            shift_reg_1_address0 = zext_ln26_fu_225_p1;
        end else begin
            shift_reg_1_address0 = 'bx;
        end
    end else begin
        shift_reg_1_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        shift_reg_1_ce0 = 1'b1;
    end else begin
        shift_reg_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_reg_308 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln26_reg_316 == 1'd1) & (icmp_ln25_reg_312 == 1'd0))) begin
        shift_reg_1_we0 = 1'b1;
    end else begin
        shift_reg_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_reg_308 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        y_ap_vld = 1'b1;
    end else begin
        y_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            if (((ap_idle_pp0_0to0 == 1'b1) & (1'b1 == ap_condition_exit_pp0_iter1_stage0))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((~((ap_start_int == 1'b0) & (ap_idle_pp0_1to2 == 1'b1)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((1'b0 == ap_block_pp0_stage1_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign acc_1_fu_273_p2 = (ap_phi_mux_mul_pn_phi_fu_145_p4 + acc_fu_64);

assign add_ln23_fu_241_p2 = ($signed(ap_sig_allocacmp_i_1) + $signed(8'd255));

assign add_ln26_fu_205_p2 = ($signed(trunc_ln23_fu_195_p1) + $signed(7'd127));

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd1];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_01001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_condition_161 = ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0));
end

always @ (*) begin
    ap_condition_335 = ((tmp_fu_182_p3 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln25_fu_199_p2 == 1'd0));
end

always @ (*) begin
    ap_condition_338 = ((tmp_fu_182_p3 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln25_fu_199_p2 == 1'd1));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage1;

assign empty_10_fu_157_p2 = x << 32'd1;

assign empty_fu_151_p2 = x << 32'd3;

assign fir_int_int_c_address0 = zext_ln23_fu_190_p1;

assign grp_fu_266_p0 = fir_int_int_c_load_reg_346;

assign icmp_ln25_fu_199_p2 = ((ap_sig_allocacmp_i_1 == 8'd0) ? 1'b1 : 1'b0);

assign lshr_ln_fu_215_p4 = {{add_ln26_fu_205_p2[6:1]}};

assign mul9_fu_163_p2 = (empty_fu_151_p2 + empty_10_fu_157_p2);

assign select_ln26_fu_252_p3 = ((trunc_ln26_reg_316[0:0] == 1'b1) ? shift_reg_0_q0 : shift_reg_1_q0);

assign shift_reg_1_d0 = ((trunc_ln26_reg_316[0:0] == 1'b1) ? shift_reg_0_q0 : shift_reg_1_q0);

assign tmp_fu_182_p3 = ap_sig_allocacmp_i_1[32'd7];

assign trunc_ln23_fu_195_p1 = ap_sig_allocacmp_i_1[6:0];

assign trunc_ln26_fu_211_p1 = ap_sig_allocacmp_i_1[0:0];

assign y = ap_sig_allocacmp_acc_load_1;

assign zext_ln23_fu_190_p1 = ap_sig_allocacmp_i_1;

assign zext_ln26_1_fu_261_p1 = lshr_ln26_1_reg_331;

assign zext_ln26_fu_225_p1 = lshr_ln_fu_215_p4;

always @ (posedge ap_clk) begin
    ap_phi_reg_pp0_iter2_mul_pn_reg_142[0] <= 1'b0;
    ap_phi_reg_pp0_iter0_mul_pn_reg_142[0] <= 1'b0;
    ap_phi_reg_pp0_iter1_mul_pn_reg_142[0] <= 1'b0;
end

endmodule //fir
