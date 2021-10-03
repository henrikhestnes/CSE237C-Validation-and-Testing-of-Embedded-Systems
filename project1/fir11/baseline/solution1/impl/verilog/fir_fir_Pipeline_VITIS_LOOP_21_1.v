// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Version: 2021.1.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fir_fir_Pipeline_VITIS_LOOP_21_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        sum_out,
        sum_out_ap_vld,
        shift_reg_address0,
        shift_reg_ce0,
        shift_reg_we0,
        shift_reg_d0,
        shift_reg_address1,
        shift_reg_ce1,
        shift_reg_q1
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] sum_out;
output   sum_out_ap_vld;
output  [3:0] shift_reg_address0;
output   shift_reg_ce0;
output   shift_reg_we0;
output  [31:0] shift_reg_d0;
output  [3:0] shift_reg_address1;
output   shift_reg_ce1;
input  [31:0] shift_reg_q1;

reg ap_idle;
reg sum_out_ap_vld;
reg shift_reg_ce0;
reg shift_reg_we0;
reg shift_reg_ce1;

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
wire   [0:0] icmp_ln21_fu_101_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
wire   [3:0] fir_int_int_c_address0;
reg    fir_int_int_c_ce0;
wire   [31:0] fir_int_int_c_q0;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln21_reg_164;
reg   [0:0] icmp_ln21_reg_164_pp0_iter1_reg;
reg   [0:0] icmp_ln21_reg_164_pp0_iter2_reg;
wire   [63:0] i_cast1_fu_107_p1;
reg   [63:0] i_cast1_reg_168;
reg  signed [31:0] shift_reg_load_reg_183;
reg  signed [31:0] fir_int_int_c_load_reg_188;
wire   [31:0] grp_fu_128_p2;
reg   [31:0] mul_ln23_reg_193;
wire   [63:0] zext_ln22_fu_118_p1;
wire    ap_block_pp0_stage0;
reg   [31:0] sum_fu_34;
wire   [31:0] sum_1_fu_135_p2;
wire    ap_loop_init;
reg   [3:0] i_fu_38;
reg   [3:0] ap_sig_allocacmp_i_1;
wire   [3:0] add_ln21_fu_112_p2;
wire    ap_block_pp0_stage0_01001;
wire  signed [10:0] grp_fu_128_p0;
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

fir_fir_Pipeline_VITIS_LOOP_21_1_fir_int_int_c #(
    .DataWidth( 32 ),
    .AddressRange( 11 ),
    .AddressWidth( 4 ))
fir_int_int_c_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(fir_int_int_c_address0),
    .ce0(fir_int_int_c_ce0),
    .q0(fir_int_int_c_q0)
);

fir_mul_11s_32s_32_2_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 11 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mul_11s_32s_32_2_1_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_128_p0),
    .din1(shift_reg_load_reg_183),
    .ce(1'b1),
    .dout(grp_fu_128_p2)
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
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln21_fu_101_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            i_fu_38 <= add_ln21_fu_112_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            i_fu_38 <= 4'd10;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_loop_init == 1'b1))) begin
            sum_fu_34 <= 32'd0;
        end else if ((ap_enable_reg_pp0_iter4 == 1'b1)) begin
            sum_fu_34 <= sum_1_fu_135_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_loop_exit_ready_pp0_iter1_reg <= ap_loop_exit_ready;
        ap_loop_exit_ready_pp0_iter2_reg <= ap_loop_exit_ready_pp0_iter1_reg;
        fir_int_int_c_load_reg_188 <= fir_int_int_c_q0;
        icmp_ln21_reg_164 <= icmp_ln21_fu_101_p2;
        icmp_ln21_reg_164_pp0_iter1_reg <= icmp_ln21_reg_164;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        ap_loop_exit_ready_pp0_iter3_reg <= ap_loop_exit_ready_pp0_iter2_reg;
        icmp_ln21_reg_164_pp0_iter2_reg <= icmp_ln21_reg_164_pp0_iter1_reg;
        mul_ln23_reg_193 <= grp_fu_128_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln21_fu_101_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        i_cast1_reg_168[3 : 0] <= i_cast1_fu_107_p1[3 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        shift_reg_load_reg_183 <= shift_reg_q1;
    end
end

always @ (*) begin
    if (((icmp_ln21_fu_101_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
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
    if (((ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_start_int == 1'b0))) begin
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
    if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_loop_init == 1'b1))) begin
        ap_sig_allocacmp_i_1 = 4'd10;
    end else begin
        ap_sig_allocacmp_i_1 = i_fu_38;
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
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        shift_reg_ce0 = 1'b1;
    end else begin
        shift_reg_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        shift_reg_ce1 = 1'b1;
    end else begin
        shift_reg_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        shift_reg_we0 = 1'b1;
    end else begin
        shift_reg_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln21_reg_164_pp0_iter2_reg == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        sum_out_ap_vld = 1'b1;
    end else begin
        sum_out_ap_vld = 1'b0;
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

assign add_ln21_fu_112_p2 = ($signed(ap_sig_allocacmp_i_1) + $signed(4'd15));

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

assign fir_int_int_c_address0 = i_cast1_fu_107_p1;

assign grp_fu_128_p0 = fir_int_int_c_load_reg_188;

assign i_cast1_fu_107_p1 = ap_sig_allocacmp_i_1;

assign icmp_ln21_fu_101_p2 = ((ap_sig_allocacmp_i_1 == 4'd0) ? 1'b1 : 1'b0);

assign shift_reg_address0 = i_cast1_reg_168;

assign shift_reg_address1 = zext_ln22_fu_118_p1;

assign shift_reg_d0 = shift_reg_q1;

assign sum_1_fu_135_p2 = (mul_ln23_reg_193 + sum_fu_34);

assign sum_out = sum_fu_34;

assign zext_ln22_fu_118_p1 = add_ln21_fu_112_p2;

always @ (posedge ap_clk) begin
    i_cast1_reg_168[63:4] <= 60'b000000000000000000000000000000000000000000000000000000000000;
end

endmodule //fir_fir_Pipeline_VITIS_LOOP_21_1
