// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Version: 2021.1.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fir_fir_Pipeline_VITIS_LOOP_25_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        acc_out,
        acc_out_ap_vld,
        shift_reg_0_address0,
        shift_reg_0_ce0,
        shift_reg_0_we0,
        shift_reg_0_d0,
        shift_reg_0_q0
);

parameter    ap_ST_fsm_pp0_stage0 = 2'd1;
parameter    ap_ST_fsm_pp0_stage1 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] acc_out;
output   acc_out_ap_vld;
output  [3:0] shift_reg_0_address0;
output   shift_reg_0_ce0;
output   shift_reg_0_we0;
output  [31:0] shift_reg_0_d0;
input  [31:0] shift_reg_0_q0;

reg ap_idle;
reg acc_out_ap_vld;
reg[3:0] shift_reg_0_address0;
reg shift_reg_0_ce0;
reg shift_reg_0_we0;

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
reg   [0:0] icmp_ln25_reg_570;
reg    ap_condition_exit_pp0_iter0_stage1;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
wire   [3:0] c_0_address0;
reg    c_0_ce0;
wire   [4:0] c_0_q0;
wire   [3:0] c_1_address0;
reg    c_1_ce0;
wire   [4:0] c_1_q0;
wire   [3:0] c_2_address0;
reg    c_2_ce0;
wire   [4:0] c_2_q0;
wire   [3:0] c_3_address0;
reg    c_3_ce0;
wire   [4:0] c_3_q0;
wire   [3:0] c_4_address0;
reg    c_4_ce0;
wire   [4:0] c_4_q0;
wire   [3:0] c_5_address0;
reg    c_5_ce0;
wire   [4:0] c_5_q0;
wire   [3:0] c_6_address0;
reg    c_6_ce0;
wire   [4:0] c_6_q0;
wire   [3:0] c_7_address0;
reg    c_7_ce0;
wire   [4:0] c_7_q0;
reg   [3:0] shift_reg_7_address0;
reg    shift_reg_7_ce0;
reg    shift_reg_7_we0;
wire   [31:0] shift_reg_7_q0;
reg   [3:0] shift_reg_1_address0;
reg    shift_reg_1_ce0;
reg    shift_reg_1_we0;
wire   [31:0] shift_reg_1_q0;
reg   [3:0] shift_reg_2_address0;
reg    shift_reg_2_ce0;
reg    shift_reg_2_we0;
wire   [31:0] shift_reg_2_q0;
reg   [3:0] shift_reg_3_address0;
reg    shift_reg_3_ce0;
reg    shift_reg_3_we0;
wire   [31:0] shift_reg_3_q0;
reg   [3:0] shift_reg_4_address0;
reg    shift_reg_4_ce0;
reg    shift_reg_4_we0;
wire   [31:0] shift_reg_4_q0;
reg   [3:0] shift_reg_5_address0;
reg    shift_reg_5_ce0;
reg    shift_reg_5_we0;
wire   [31:0] shift_reg_5_q0;
reg   [3:0] shift_reg_6_address0;
reg    shift_reg_6_ce0;
reg    shift_reg_6_we0;
wire   [31:0] shift_reg_6_q0;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
wire    ap_block_state5_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
wire   [0:0] icmp_ln25_fu_374_p2;
wire   [2:0] trunc_ln27_fu_386_p1;
reg   [2:0] trunc_ln27_reg_574;
reg   [3:0] shift_reg_0_addr_reg_619;
reg   [3:0] shift_reg_1_addr_reg_624;
reg   [3:0] shift_reg_2_addr_reg_629;
reg   [3:0] shift_reg_3_addr_reg_634;
reg   [3:0] shift_reg_4_addr_reg_639;
reg   [3:0] shift_reg_5_addr_reg_644;
reg   [3:0] shift_reg_6_addr_reg_649;
reg   [3:0] shift_reg_7_addr_reg_654;
wire   [31:0] tmp_fu_450_p10;
reg  signed [31:0] tmp_reg_699;
wire    ap_block_pp0_stage1_11001;
wire  signed [31:0] tmp_1_fu_512_p10;
reg  signed [31:0] tmp_1_reg_704;
wire   [31:0] grp_fu_534_p2;
reg   [31:0] mul_ln28_reg_709;
reg    ap_enable_reg_pp0_iter0_reg;
wire    ap_block_pp0_stage0_subdone;
wire   [63:0] zext_ln27_1_fu_400_p1;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln27_2_fu_422_p1;
reg   [31:0] acc_fu_82;
wire   [31:0] acc_1_fu_541_p2;
wire    ap_loop_init;
reg   [6:0] i_fu_86;
reg   [6:0] ap_sig_allocacmp_i_1;
wire   [6:0] add_ln25_fu_380_p2;
wire    ap_block_pp0_stage0_01001;
wire    ap_block_pp0_stage1;
wire   [3:0] lshr_ln_fu_390_p4;
wire   [3:0] lshr_ln27_1_fu_412_p4;
wire   [63:0] zext_ln27_fu_447_p1;
wire  signed [31:0] tmp_1_fu_512_p1;
wire  signed [31:0] tmp_1_fu_512_p2;
wire  signed [31:0] tmp_1_fu_512_p3;
wire  signed [31:0] tmp_1_fu_512_p4;
wire  signed [31:0] tmp_1_fu_512_p5;
wire  signed [31:0] tmp_1_fu_512_p6;
wire  signed [31:0] tmp_1_fu_512_p7;
wire  signed [31:0] tmp_1_fu_512_p8;
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
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter0_reg = 1'b0;
#0 ap_done_reg = 1'b0;
end

fir_fir_Pipeline_VITIS_LOOP_25_1_c_0 #(
    .DataWidth( 5 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
c_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_0_address0),
    .ce0(c_0_ce0),
    .q0(c_0_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_c_1 #(
    .DataWidth( 5 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
c_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_1_address0),
    .ce0(c_1_ce0),
    .q0(c_1_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_c_1 #(
    .DataWidth( 5 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
c_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_2_address0),
    .ce0(c_2_ce0),
    .q0(c_2_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_c_3 #(
    .DataWidth( 5 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
c_3_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_3_address0),
    .ce0(c_3_ce0),
    .q0(c_3_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_c_4 #(
    .DataWidth( 5 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
c_4_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_4_address0),
    .ce0(c_4_ce0),
    .q0(c_4_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_c_5 #(
    .DataWidth( 5 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
c_5_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_5_address0),
    .ce0(c_5_ce0),
    .q0(c_5_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_c_6 #(
    .DataWidth( 5 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
c_6_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_6_address0),
    .ce0(c_6_ce0),
    .q0(c_6_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_c_7 #(
    .DataWidth( 5 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
c_7_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_7_address0),
    .ce0(c_7_ce0),
    .q0(c_7_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_shift_reg_7 #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
shift_reg_7_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_7_address0),
    .ce0(shift_reg_7_ce0),
    .we0(shift_reg_7_we0),
    .d0(tmp_fu_450_p10),
    .q0(shift_reg_7_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_shift_reg_7 #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
shift_reg_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_1_address0),
    .ce0(shift_reg_1_ce0),
    .we0(shift_reg_1_we0),
    .d0(tmp_fu_450_p10),
    .q0(shift_reg_1_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_shift_reg_7 #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
shift_reg_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_2_address0),
    .ce0(shift_reg_2_ce0),
    .we0(shift_reg_2_we0),
    .d0(tmp_fu_450_p10),
    .q0(shift_reg_2_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_shift_reg_7 #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
shift_reg_3_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_3_address0),
    .ce0(shift_reg_3_ce0),
    .we0(shift_reg_3_we0),
    .d0(tmp_fu_450_p10),
    .q0(shift_reg_3_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_shift_reg_7 #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
shift_reg_4_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_4_address0),
    .ce0(shift_reg_4_ce0),
    .we0(shift_reg_4_we0),
    .d0(tmp_fu_450_p10),
    .q0(shift_reg_4_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_shift_reg_7 #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
shift_reg_5_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_5_address0),
    .ce0(shift_reg_5_ce0),
    .we0(shift_reg_5_we0),
    .d0(tmp_fu_450_p10),
    .q0(shift_reg_5_q0)
);

fir_fir_Pipeline_VITIS_LOOP_25_1_shift_reg_7 #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
shift_reg_6_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_6_address0),
    .ce0(shift_reg_6_ce0),
    .we0(shift_reg_6_we0),
    .d0(tmp_fu_450_p10),
    .q0(shift_reg_6_q0)
);

fir_mux_864_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 32 ),
    .din5_WIDTH( 32 ),
    .din6_WIDTH( 32 ),
    .din7_WIDTH( 32 ),
    .din8_WIDTH( 64 ),
    .dout_WIDTH( 32 ))
mux_864_32_1_1_U1(
    .din0(shift_reg_7_q0),
    .din1(shift_reg_0_q0),
    .din2(shift_reg_1_q0),
    .din3(shift_reg_2_q0),
    .din4(shift_reg_3_q0),
    .din5(shift_reg_4_q0),
    .din6(shift_reg_5_q0),
    .din7(shift_reg_6_q0),
    .din8(zext_ln27_fu_447_p1),
    .dout(tmp_fu_450_p10)
);

fir_mux_864_32_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 32 ),
    .din5_WIDTH( 32 ),
    .din6_WIDTH( 32 ),
    .din7_WIDTH( 32 ),
    .din8_WIDTH( 64 ),
    .dout_WIDTH( 32 ))
mux_864_32_1_1_U2(
    .din0(tmp_1_fu_512_p1),
    .din1(tmp_1_fu_512_p2),
    .din2(tmp_1_fu_512_p3),
    .din3(tmp_1_fu_512_p4),
    .din4(tmp_1_fu_512_p5),
    .din5(tmp_1_fu_512_p6),
    .din6(tmp_1_fu_512_p7),
    .din7(tmp_1_fu_512_p8),
    .din8(zext_ln27_fu_447_p1),
    .dout(tmp_1_fu_512_p10)
);

fir_mul_32s_32s_32_2_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_32s_32s_32_2_1_U3(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_1_reg_704),
    .din1(tmp_reg_699),
    .ce(1'b1),
    .dout(grp_fu_534_p2)
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
    .ap_loop_exit_ready(ap_condition_exit_pp0_iter0_stage1),
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
        end else if (((ap_loop_exit_ready_pp0_iter1_reg == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
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
        if ((ap_loop_init == 1'b1)) begin
            acc_fu_82 <= 32'd0;
        end else if ((ap_enable_reg_pp0_iter2 == 1'b1)) begin
            acc_fu_82 <= acc_1_fu_541_p2;
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
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((ap_enable_reg_pp0_iter0 == 1'b1) & (icmp_ln25_fu_374_p2 == 1'd0))) begin
            i_fu_86 <= add_ln25_fu_380_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            i_fu_86 <= 7'd127;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln25_reg_570 <= icmp_ln25_fu_374_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        mul_ln28_reg_709 <= grp_fu_534_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (icmp_ln25_fu_374_p2 == 1'd0))) begin
        shift_reg_0_addr_reg_619 <= zext_ln27_2_fu_422_p1;
        shift_reg_1_addr_reg_624 <= zext_ln27_2_fu_422_p1;
        shift_reg_2_addr_reg_629 <= zext_ln27_2_fu_422_p1;
        shift_reg_3_addr_reg_634 <= zext_ln27_2_fu_422_p1;
        shift_reg_4_addr_reg_639 <= zext_ln27_2_fu_422_p1;
        shift_reg_5_addr_reg_644 <= zext_ln27_2_fu_422_p1;
        shift_reg_6_addr_reg_649 <= zext_ln27_2_fu_422_p1;
        shift_reg_7_addr_reg_654 <= zext_ln27_2_fu_422_p1;
        trunc_ln27_reg_574 <= trunc_ln27_fu_386_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln25_reg_570 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        tmp_1_reg_704 <= tmp_1_fu_512_p10;
        tmp_reg_699 <= tmp_fu_450_p10;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        acc_out_ap_vld = 1'b1;
    end else begin
        acc_out_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd1) & (1'b0 == ap_block_pp0_stage1_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        ap_condition_exit_pp0_iter0_stage1 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage1 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_condition_exit_pp0_iter1_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter1_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_loop_exit_ready_pp0_iter1_reg == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
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
    if (((1'b0 == ap_block_pp0_stage1_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_loop_init == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_sig_allocacmp_i_1 = 7'd127;
    end else begin
        ap_sig_allocacmp_i_1 = i_fu_86;
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
        c_4_ce0 = 1'b1;
    end else begin
        c_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        c_5_ce0 = 1'b1;
    end else begin
        c_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        c_6_ce0 = 1'b1;
    end else begin
        c_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        c_7_ce0 = 1'b1;
    end else begin
        c_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_0_address0 = shift_reg_0_addr_reg_619;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            shift_reg_0_address0 = zext_ln27_1_fu_400_p1;
        end else begin
            shift_reg_0_address0 = 'bx;
        end
    end else begin
        shift_reg_0_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        shift_reg_0_ce0 = 1'b1;
    end else begin
        shift_reg_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln27_reg_574 == 3'd0))) begin
        shift_reg_0_we0 = 1'b1;
    end else begin
        shift_reg_0_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_1_address0 = shift_reg_1_addr_reg_624;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            shift_reg_1_address0 = zext_ln27_1_fu_400_p1;
        end else begin
            shift_reg_1_address0 = 'bx;
        end
    end else begin
        shift_reg_1_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        shift_reg_1_ce0 = 1'b1;
    end else begin
        shift_reg_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln27_reg_574 == 3'd1))) begin
        shift_reg_1_we0 = 1'b1;
    end else begin
        shift_reg_1_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_2_address0 = shift_reg_2_addr_reg_629;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            shift_reg_2_address0 = zext_ln27_1_fu_400_p1;
        end else begin
            shift_reg_2_address0 = 'bx;
        end
    end else begin
        shift_reg_2_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        shift_reg_2_ce0 = 1'b1;
    end else begin
        shift_reg_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln27_reg_574 == 3'd2))) begin
        shift_reg_2_we0 = 1'b1;
    end else begin
        shift_reg_2_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_3_address0 = shift_reg_3_addr_reg_634;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            shift_reg_3_address0 = zext_ln27_1_fu_400_p1;
        end else begin
            shift_reg_3_address0 = 'bx;
        end
    end else begin
        shift_reg_3_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        shift_reg_3_ce0 = 1'b1;
    end else begin
        shift_reg_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln27_reg_574 == 3'd3))) begin
        shift_reg_3_we0 = 1'b1;
    end else begin
        shift_reg_3_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_4_address0 = shift_reg_4_addr_reg_639;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            shift_reg_4_address0 = zext_ln27_1_fu_400_p1;
        end else begin
            shift_reg_4_address0 = 'bx;
        end
    end else begin
        shift_reg_4_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        shift_reg_4_ce0 = 1'b1;
    end else begin
        shift_reg_4_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln27_reg_574 == 3'd4))) begin
        shift_reg_4_we0 = 1'b1;
    end else begin
        shift_reg_4_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_5_address0 = shift_reg_5_addr_reg_644;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            shift_reg_5_address0 = zext_ln27_1_fu_400_p1;
        end else begin
            shift_reg_5_address0 = 'bx;
        end
    end else begin
        shift_reg_5_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        shift_reg_5_ce0 = 1'b1;
    end else begin
        shift_reg_5_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln27_reg_574 == 3'd5))) begin
        shift_reg_5_we0 = 1'b1;
    end else begin
        shift_reg_5_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_6_address0 = shift_reg_6_addr_reg_649;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            shift_reg_6_address0 = zext_ln27_1_fu_400_p1;
        end else begin
            shift_reg_6_address0 = 'bx;
        end
    end else begin
        shift_reg_6_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        shift_reg_6_ce0 = 1'b1;
    end else begin
        shift_reg_6_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln27_reg_574 == 3'd6))) begin
        shift_reg_6_we0 = 1'b1;
    end else begin
        shift_reg_6_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            shift_reg_7_address0 = shift_reg_7_addr_reg_654;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            shift_reg_7_address0 = zext_ln27_1_fu_400_p1;
        end else begin
            shift_reg_7_address0 = 'bx;
        end
    end else begin
        shift_reg_7_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        shift_reg_7_ce0 = 1'b1;
    end else begin
        shift_reg_7_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln25_reg_570 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (trunc_ln27_reg_574 == 3'd7))) begin
        shift_reg_7_we0 = 1'b1;
    end else begin
        shift_reg_7_we0 = 1'b0;
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

assign acc_1_fu_541_p2 = (mul_ln28_reg_709 + acc_fu_82);

assign acc_out = acc_fu_82;

assign add_ln25_fu_380_p2 = ($signed(ap_sig_allocacmp_i_1) + $signed(7'd127));

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

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage1;

assign c_0_address0 = zext_ln27_2_fu_422_p1;

assign c_1_address0 = zext_ln27_2_fu_422_p1;

assign c_2_address0 = zext_ln27_2_fu_422_p1;

assign c_3_address0 = zext_ln27_2_fu_422_p1;

assign c_4_address0 = zext_ln27_2_fu_422_p1;

assign c_5_address0 = zext_ln27_2_fu_422_p1;

assign c_6_address0 = zext_ln27_2_fu_422_p1;

assign c_7_address0 = zext_ln27_2_fu_422_p1;

assign icmp_ln25_fu_374_p2 = ((ap_sig_allocacmp_i_1 == 7'd0) ? 1'b1 : 1'b0);

assign lshr_ln27_1_fu_412_p4 = {{ap_sig_allocacmp_i_1[6:3]}};

assign lshr_ln_fu_390_p4 = {{add_ln25_fu_380_p2[6:3]}};

assign shift_reg_0_d0 = tmp_fu_450_p10;

assign tmp_1_fu_512_p1 = $signed(c_0_q0);

assign tmp_1_fu_512_p2 = $signed(c_1_q0);

assign tmp_1_fu_512_p3 = $signed(c_2_q0);

assign tmp_1_fu_512_p4 = $signed(c_3_q0);

assign tmp_1_fu_512_p5 = $signed(c_4_q0);

assign tmp_1_fu_512_p6 = $signed(c_5_q0);

assign tmp_1_fu_512_p7 = $signed(c_6_q0);

assign tmp_1_fu_512_p8 = $signed(c_7_q0);

assign trunc_ln27_fu_386_p1 = ap_sig_allocacmp_i_1[2:0];

assign zext_ln27_1_fu_400_p1 = lshr_ln_fu_390_p4;

assign zext_ln27_2_fu_422_p1 = lshr_ln27_1_fu_412_p4;

assign zext_ln27_fu_447_p1 = trunc_ln27_reg_574;

endmodule //fir_fir_Pipeline_VITIS_LOOP_25_1