// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
// Version: 2021.1.1
// Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="fir_fir,hls_ip_2021_1_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.508000,HLS_SYN_LAT=636,HLS_SYN_TPT=none,HLS_SYN_MEM=1,HLS_SYN_DSP=0,HLS_SYN_FF=41,HLS_SYN_LUT=155,HLS_VERSION=2021_1_1}" *)

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

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_state2 = 6'd2;
parameter    ap_ST_fsm_state3 = 6'd4;
parameter    ap_ST_fsm_state4 = 6'd8;
parameter    ap_ST_fsm_state5 = 6'd16;
parameter    ap_ST_fsm_state6 = 6'd32;

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

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [6:0] shift_reg_V_address0;
reg    shift_reg_V_ce0;
reg    shift_reg_V_we0;
reg   [7:0] shift_reg_V_d0;
wire  signed [7:0] shift_reg_V_q0;
wire   [6:0] c_address0;
reg    c_ce0;
wire  signed [4:0] c_q0;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln1065_fu_127_p2;
wire   [63:0] zext_ln573_fu_144_p1;
reg   [63:0] zext_ln573_reg_247;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state5;
wire   [63:0] zext_ln573_1_fu_139_p1;
reg   [6:0] lhs_fu_54;
wire   [6:0] ret_fu_133_p2;
reg  signed [15:0] acc_V_1_fu_58;
wire  signed [15:0] grp_fu_209_p3;
wire    ap_CS_fsm_state6;
wire   [7:0] trunc_ln168_fu_154_p1;
wire   [12:0] trunc_ln870_fu_158_p1;
wire   [14:0] trunc_ln870_1_fu_169_p1;
wire   [15:0] shl_ln870_1_fu_172_p3;
wire   [15:0] add_ln870_fu_180_p2;
wire   [15:0] shl_ln_fu_161_p3;
wire   [15:0] acc_V_fu_186_p2;
reg   [5:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
wire    ap_ST_fsm_state4_blk;
wire    ap_ST_fsm_state5_blk;
wire    ap_ST_fsm_state6_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
end

fir_shift_reg_V #(
    .DataWidth( 8 ),
    .AddressRange( 128 ),
    .AddressWidth( 7 ))
shift_reg_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_V_address0),
    .ce0(shift_reg_V_ce0),
    .we0(shift_reg_V_we0),
    .d0(shift_reg_V_d0),
    .q0(shift_reg_V_q0)
);

fir_c #(
    .DataWidth( 5 ),
    .AddressRange( 128 ),
    .AddressWidth( 7 ))
c_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(c_address0),
    .ce0(c_ce0),
    .q0(c_q0)
);

fir_mac_muladd_8s_5s_16s_16_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 8 ),
    .din1_WIDTH( 5 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
mac_muladd_8s_5s_16s_16_4_1_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(shift_reg_V_q0),
    .din1(c_q0),
    .din2(acc_V_1_fu_58),
    .ce(1'b1),
    .dout(grp_fu_209_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        acc_V_1_fu_58 <= 16'd0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        acc_V_1_fu_58 <= grp_fu_209_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        lhs_fu_54 <= 7'd127;
    end else if (((icmp_ln1065_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        lhs_fu_54 <= ret_fu_133_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1065_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        zext_ln573_reg_247[6 : 0] <= zext_ln573_fu_144_p1[6 : 0];
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
    if (((icmp_ln1065_fu_127_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if (((icmp_ln1065_fu_127_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        c_ce0 = 1'b1;
    end else begin
        c_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        shift_reg_V_address0 = zext_ln573_reg_247;
    end else if (((icmp_ln1065_fu_127_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        shift_reg_V_address0 = 7'd0;
    end else if (((icmp_ln1065_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        shift_reg_V_address0 = zext_ln573_1_fu_139_p1;
    end else begin
        shift_reg_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | ((icmp_ln1065_fu_127_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((icmp_ln1065_fu_127_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        shift_reg_V_ce0 = 1'b1;
    end else begin
        shift_reg_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        shift_reg_V_d0 = shift_reg_V_q0;
    end else if (((icmp_ln1065_fu_127_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        shift_reg_V_d0 = trunc_ln168_fu_154_p1;
    end else begin
        shift_reg_V_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | ((icmp_ln1065_fu_127_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)))) begin
        shift_reg_V_we0 = 1'b1;
    end else begin
        shift_reg_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln1065_fu_127_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
            if (((icmp_ln1065_fu_127_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
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
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign acc_V_fu_186_p2 = (add_ln870_fu_180_p2 + shl_ln_fu_161_p3);

assign add_ln870_fu_180_p2 = ($signed(shl_ln870_1_fu_172_p3) + $signed(acc_V_1_fu_58));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign c_address0 = zext_ln573_fu_144_p1;

assign icmp_ln1065_fu_127_p2 = ((lhs_fu_54 == 7'd0) ? 1'b1 : 1'b0);

assign ret_fu_133_p2 = ($signed(lhs_fu_54) + $signed(7'd127));

assign shl_ln870_1_fu_172_p3 = {{trunc_ln870_1_fu_169_p1}, {1'd0}};

assign shl_ln_fu_161_p3 = {{trunc_ln870_fu_158_p1}, {3'd0}};

assign trunc_ln168_fu_154_p1 = x[7:0];

assign trunc_ln870_1_fu_169_p1 = x[14:0];

assign trunc_ln870_fu_158_p1 = x[12:0];

assign y = $signed(acc_V_fu_186_p2);

assign zext_ln573_1_fu_139_p1 = ret_fu_133_p2;

assign zext_ln573_fu_144_p1 = lhs_fu_54;

always @ (posedge ap_clk) begin
    zext_ln573_reg_247[63:7] <= 57'b000000000000000000000000000000000000000000000000000000000;
end

endmodule //fir