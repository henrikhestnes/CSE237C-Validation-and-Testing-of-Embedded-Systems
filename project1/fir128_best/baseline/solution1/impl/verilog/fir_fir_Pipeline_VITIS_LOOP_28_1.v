// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Version: 2021.1.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fir_fir_Pipeline_VITIS_LOOP_28_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        acc_1_out,
        acc_1_out_ap_vld,
        shift_reg_0_address0,
        shift_reg_0_ce0,
        shift_reg_0_q0,
        shift_reg_0_address1,
        shift_reg_0_ce1,
        shift_reg_0_we1,
        shift_reg_0_d1
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] acc_1_out;
output   acc_1_out_ap_vld;
output  [4:0] shift_reg_0_address0;
output   shift_reg_0_ce0;
input  [31:0] shift_reg_0_q0;
output  [4:0] shift_reg_0_address1;
output   shift_reg_0_ce1;
output   shift_reg_0_we1;
output  [31:0] shift_reg_0_d1;

reg ap_idle;
reg acc_1_out_ap_vld;
reg shift_reg_0_ce0;
reg shift_reg_0_ce1;
reg shift_reg_0_we1;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_idle_pp0;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_pp0_stage0_subdone;
wire   [0:0] icmp_ln1065_fu_248_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
wire   [4:0] c_3_address0;
reg    c_3_ce0;
wire   [4:0] c_3_q0;
wire   [4:0] c_0_address0;
reg    c_0_ce0;
wire   [4:0] c_0_q0;
wire   [4:0] c_1_address0;
reg    c_1_ce0;
wire   [4:0] c_1_q0;
wire   [4:0] c_2_address0;
reg    c_2_ce0;
wire   [4:0] c_2_q0;
wire   [4:0] shift_reg_1_address0;
reg    shift_reg_1_ce0;
wire   [31:0] shift_reg_1_q0;
reg    shift_reg_1_ce1;
reg    shift_reg_1_we1;
wire   [4:0] shift_reg_2_address0;
reg    shift_reg_2_ce0;
wire   [31:0] shift_reg_2_q0;
reg    shift_reg_2_ce1;
reg    shift_reg_2_we1;
wire   [4:0] shift_reg_3_address0;
reg    shift_reg_3_ce0;
wire   [31:0] shift_reg_3_q0;
reg    shift_reg_3_ce1;
reg    shift_reg_3_we1;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln1065_reg_431;
reg   [0:0] icmp_ln1065_reg_431_pp0_iter1_reg;
reg   [0:0] icmp_ln1065_reg_431_pp0_iter2_reg;
reg   [2:0] trunc_ln1_reg_435;
reg   [1:0] trunc_ln30_1_reg_460;
reg   [1:0] trunc_ln30_1_reg_460_pp0_iter1_reg;
reg   [4:0] shift_reg_0_addr_reg_467;
reg   [4:0] shift_reg_0_addr_reg_467_pp0_iter1_reg;
reg   [4:0] shift_reg_1_addr_reg_472;
reg   [4:0] shift_reg_1_addr_reg_472_pp0_iter1_reg;
reg   [4:0] shift_reg_2_addr_reg_477;
reg   [4:0] shift_reg_2_addr_reg_477_pp0_iter1_reg;
reg   [4:0] shift_reg_3_addr_reg_482;
reg   [4:0] shift_reg_3_addr_reg_482_pp0_iter1_reg;
wire  signed [31:0] i_op_assign_fu_332_p6;
reg   [31:0] i_op_assign_reg_507;
wire   [4:0] select_ln13_2_fu_383_p3;
reg  signed [4:0] select_ln13_2_reg_516;
wire   [31:0] grp_fu_394_p2;
reg   [31:0] mul_ln31_reg_526;
wire   [63:0] zext_ln30_fu_284_p1;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln30_1_fu_302_p1;
reg   [6:0] lhs_fu_72;
wire    ap_loop_init;
reg   [6:0] ap_sig_allocacmp_i_V_2;
wire   [6:0] i_V_fu_314_p2;
reg   [31:0] acc_fu_76;
wire   [31:0] acc_1_fu_402_p2;
wire    ap_block_pp0_stage0_01001;
wire   [7:0] zext_ln1526_fu_254_p1;
wire   [7:0] ret_fu_262_p2;
wire   [4:0] trunc_ln1526_fu_258_p1;
wire   [4:0] add_ln30_fu_278_p2;
wire  signed [27:0] sext_ln30_fu_325_p1;
wire   [32:0] i_op_assign_fu_332_p5;
wire   [0:0] icmp_ln13_2_fu_356_p2;
wire   [0:0] icmp_ln13_1_fu_351_p2;
wire   [0:0] icmp_ln13_fu_346_p2;
wire   [0:0] or_ln13_fu_369_p2;
wire   [4:0] select_ln13_fu_361_p3;
wire   [4:0] select_ln13_1_fu_375_p3;
reg    ap_done_reg;
wire    ap_continue_int;
reg    ap_done_int;
reg    ap_loop_exit_ready_pp0_iter1_reg;
reg    ap_loop_exit_ready_pp0_iter2_reg;
reg    ap_loop_exit_ready_pp0_iter3_reg;
reg   [0:0] ap_NS_fsm;
wire    ap_enable_pp0;
wire    ap_start_int;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_done_reg = 1'b0;
end

fir_fir_Pipeline_VITIS_LOOP_28_1_c_3 #(
    .DataWidth( 5 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
c_3_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_3_address0),
    .ce0(c_3_ce0),
    .q0(c_3_q0)
);

fir_fir_Pipeline_VITIS_LOOP_28_1_c_0 #(
    .DataWidth( 5 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
c_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_0_address0),
    .ce0(c_0_ce0),
    .q0(c_0_q0)
);

fir_fir_Pipeline_VITIS_LOOP_28_1_c_1 #(
    .DataWidth( 5 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
c_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_1_address0),
    .ce0(c_1_ce0),
    .q0(c_1_q0)
);

fir_fir_Pipeline_VITIS_LOOP_28_1_c_1 #(
    .DataWidth( 5 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
c_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_2_address0),
    .ce0(c_2_ce0),
    .q0(c_2_q0)
);

fir_fir_Pipeline_VITIS_LOOP_28_1_shift_reg_1 #(
    .DataWidth( 32 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
shift_reg_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_1_address0),
    .ce0(shift_reg_1_ce0),
    .q0(shift_reg_1_q0),
    .address1(shift_reg_1_addr_reg_472_pp0_iter1_reg),
    .ce1(shift_reg_1_ce1),
    .we1(shift_reg_1_we1),
    .d1(i_op_assign_reg_507)
);

fir_fir_Pipeline_VITIS_LOOP_28_1_shift_reg_1 #(
    .DataWidth( 32 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
shift_reg_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_2_address0),
    .ce0(shift_reg_2_ce0),
    .q0(shift_reg_2_q0),
    .address1(shift_reg_2_addr_reg_477_pp0_iter1_reg),
    .ce1(shift_reg_2_ce1),
    .we1(shift_reg_2_we1),
    .d1(i_op_assign_reg_507)
);

fir_fir_Pipeline_VITIS_LOOP_28_1_shift_reg_1 #(
    .DataWidth( 32 ),
    .AddressRange( 32 ),
    .AddressWidth( 5 ))
shift_reg_3_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_3_address0),
    .ce0(shift_reg_3_ce0),
    .q0(shift_reg_3_q0),
    .address1(shift_reg_3_addr_reg_482_pp0_iter1_reg),
    .ce1(shift_reg_3_ce1),
    .we1(shift_reg_3_we1),
    .d1(i_op_assign_reg_507)
);

fir_mux_433_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 33 ),
    .dout_WIDTH( 32 ))
mux_433_32_1_1_U1(
    .din0(shift_reg_0_q0),
    .din1(shift_reg_1_q0),
    .din2(shift_reg_2_q0),
    .din3(shift_reg_3_q0),
    .din4(i_op_assign_fu_332_p5),
    .dout(i_op_assign_fu_332_p6)
);

fir_mul_32s_5s_32_2_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 5 ),
    .dout_WIDTH( 32 ))
mul_32s_5s_32_2_1_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(i_op_assign_reg_507),
    .din1(select_ln13_2_reg_516),
    .ce(1'b1),
    .dout(grp_fu_394_p2)
);

fir_flow_control_loop_pipe_sequential_init flow_control_loop_pipe_sequential_init_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_start_int(ap_start_int),
    .ap_loop_init(ap_loop_init),
    .ap_ready_int(ap_ready_int),
    .ap_loop_exit_ready(ap_condition_exit_pp0_iter0_stage0),
    .ap_loop_exit_done(ap_done_int),
    .ap_continue_int(ap_continue_int),
    .ap_done_int(ap_done_int)
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
        end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_loop_exit_ready_pp0_iter3_reg == 1'b1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b1 == ap_condition_exit_pp0_iter0_stage0)) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter1 <= ap_start_int;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        if (((ap_loop_init == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            acc_fu_76 <= 32'd0;
        end else if ((ap_enable_reg_pp0_iter4 == 1'b1)) begin
            acc_fu_76 <= acc_1_fu_402_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln1065_fu_248_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            lhs_fu_72 <= i_V_fu_314_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            lhs_fu_72 <= 7'd127;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_loop_exit_ready_pp0_iter1_reg <= ap_loop_exit_ready;
        ap_loop_exit_ready_pp0_iter2_reg <= ap_loop_exit_ready_pp0_iter1_reg;
        i_op_assign_reg_507 <= i_op_assign_fu_332_p6;
        icmp_ln1065_reg_431 <= icmp_ln1065_fu_248_p2;
        icmp_ln1065_reg_431_pp0_iter1_reg <= icmp_ln1065_reg_431;
        select_ln13_2_reg_516 <= select_ln13_2_fu_383_p3;
        shift_reg_0_addr_reg_467_pp0_iter1_reg <= shift_reg_0_addr_reg_467;
        shift_reg_1_addr_reg_472_pp0_iter1_reg <= shift_reg_1_addr_reg_472;
        shift_reg_2_addr_reg_477_pp0_iter1_reg <= shift_reg_2_addr_reg_477;
        shift_reg_3_addr_reg_482_pp0_iter1_reg <= shift_reg_3_addr_reg_482;
        trunc_ln30_1_reg_460_pp0_iter1_reg <= trunc_ln30_1_reg_460;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        ap_loop_exit_ready_pp0_iter3_reg <= ap_loop_exit_ready_pp0_iter2_reg;
        icmp_ln1065_reg_431_pp0_iter2_reg <= icmp_ln1065_reg_431_pp0_iter1_reg;
        mul_ln31_reg_526 <= grp_fu_394_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1065_fu_248_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        shift_reg_0_addr_reg_467 <= zext_ln30_1_fu_302_p1;
        shift_reg_1_addr_reg_472 <= zext_ln30_1_fu_302_p1;
        shift_reg_2_addr_reg_477 <= zext_ln30_1_fu_302_p1;
        shift_reg_3_addr_reg_482 <= zext_ln30_1_fu_302_p1;
        trunc_ln1_reg_435 <= {{ret_fu_262_p2[7:5]}};
        trunc_ln30_1_reg_460 <= {{ap_sig_allocacmp_i_V_2[6:5]}};
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln1065_reg_431_pp0_iter2_reg == 1'd1))) begin
        acc_1_out_ap_vld = 1'b1;
    end else begin
        acc_1_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln1065_fu_248_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_loop_exit_ready_pp0_iter3_reg == 1'b1))) begin
        ap_done_int = 1'b1;
    end else begin
        ap_done_int = ap_done_reg;
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
    if (((ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_loop_init == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_sig_allocacmp_i_V_2 = 7'd127;
    end else begin
        ap_sig_allocacmp_i_V_2 = lhs_fu_72;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        c_0_ce0 = 1'b1;
    end else begin
        c_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        c_1_ce0 = 1'b1;
    end else begin
        c_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        c_2_ce0 = 1'b1;
    end else begin
        c_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        c_3_ce0 = 1'b1;
    end else begin
        c_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        shift_reg_0_ce0 = 1'b1;
    end else begin
        shift_reg_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        shift_reg_0_ce1 = 1'b1;
    end else begin
        shift_reg_0_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (trunc_ln30_1_reg_460_pp0_iter1_reg == 2'd0))) begin
        shift_reg_0_we1 = 1'b1;
    end else begin
        shift_reg_0_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        shift_reg_1_ce0 = 1'b1;
    end else begin
        shift_reg_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        shift_reg_1_ce1 = 1'b1;
    end else begin
        shift_reg_1_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (trunc_ln30_1_reg_460_pp0_iter1_reg == 2'd1))) begin
        shift_reg_1_we1 = 1'b1;
    end else begin
        shift_reg_1_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        shift_reg_2_ce0 = 1'b1;
    end else begin
        shift_reg_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        shift_reg_2_ce1 = 1'b1;
    end else begin
        shift_reg_2_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (trunc_ln30_1_reg_460_pp0_iter1_reg == 2'd2))) begin
        shift_reg_2_we1 = 1'b1;
    end else begin
        shift_reg_2_we1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        shift_reg_3_ce0 = 1'b1;
    end else begin
        shift_reg_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        shift_reg_3_ce1 = 1'b1;
    end else begin
        shift_reg_3_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (trunc_ln30_1_reg_460_pp0_iter1_reg == 2'd3))) begin
        shift_reg_3_we1 = 1'b1;
    end else begin
        shift_reg_3_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign acc_1_fu_402_p2 = (mul_ln31_reg_526 + acc_fu_76);

assign acc_1_out = acc_fu_76;

assign add_ln30_fu_278_p2 = ($signed(trunc_ln1526_fu_258_p1) + $signed(5'd31));

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_01001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start_int;

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage0;

assign c_0_address0 = zext_ln30_1_fu_302_p1;

assign c_1_address0 = zext_ln30_1_fu_302_p1;

assign c_2_address0 = zext_ln30_1_fu_302_p1;

assign c_3_address0 = zext_ln30_1_fu_302_p1;

assign i_V_fu_314_p2 = ($signed(ap_sig_allocacmp_i_V_2) + $signed(7'd127));

assign i_op_assign_fu_332_p5 = $unsigned(sext_ln30_fu_325_p1);

assign icmp_ln1065_fu_248_p2 = ((ap_sig_allocacmp_i_V_2 == 7'd0) ? 1'b1 : 1'b0);

assign icmp_ln13_1_fu_351_p2 = ((trunc_ln30_1_reg_460 == 2'd1) ? 1'b1 : 1'b0);

assign icmp_ln13_2_fu_356_p2 = ((trunc_ln30_1_reg_460 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln13_fu_346_p2 = ((trunc_ln30_1_reg_460 == 2'd0) ? 1'b1 : 1'b0);

assign or_ln13_fu_369_p2 = (icmp_ln13_2_fu_356_p2 | icmp_ln13_1_fu_351_p2);

assign ret_fu_262_p2 = ($signed(zext_ln1526_fu_254_p1) + $signed(8'd255));

assign select_ln13_1_fu_375_p3 = ((icmp_ln13_fu_346_p2[0:0] == 1'b1) ? c_0_q0 : c_3_q0);

assign select_ln13_2_fu_383_p3 = ((or_ln13_fu_369_p2[0:0] == 1'b1) ? select_ln13_fu_361_p3 : select_ln13_1_fu_375_p3);

assign select_ln13_fu_361_p3 = ((icmp_ln13_2_fu_356_p2[0:0] == 1'b1) ? c_2_q0 : c_1_q0);

assign sext_ln30_fu_325_p1 = $signed(trunc_ln1_reg_435);

assign shift_reg_0_address0 = zext_ln30_fu_284_p1;

assign shift_reg_0_address1 = shift_reg_0_addr_reg_467_pp0_iter1_reg;

assign shift_reg_0_d1 = i_op_assign_reg_507;

assign shift_reg_1_address0 = zext_ln30_fu_284_p1;

assign shift_reg_2_address0 = zext_ln30_fu_284_p1;

assign shift_reg_3_address0 = zext_ln30_fu_284_p1;

assign trunc_ln1526_fu_258_p1 = ap_sig_allocacmp_i_V_2[4:0];

assign zext_ln1526_fu_254_p1 = ap_sig_allocacmp_i_V_2;

assign zext_ln30_1_fu_302_p1 = trunc_ln1526_fu_258_p1;

assign zext_ln30_fu_284_p1 = add_ln30_fu_278_p2;

endmodule //fir_fir_Pipeline_VITIS_LOOP_28_1