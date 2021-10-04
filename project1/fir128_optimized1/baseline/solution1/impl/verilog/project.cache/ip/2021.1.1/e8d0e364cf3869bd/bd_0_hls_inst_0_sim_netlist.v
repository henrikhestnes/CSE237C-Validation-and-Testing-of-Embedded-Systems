// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2021.1.1 (lin64) Build 3286242 Wed Jul 28 13:09:46 MDT 2021
// Date        : Sun Oct  3 18:51:43 2021
// Host        : ubuntu running 64-bit Ubuntu 20.04.3 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_0_hls_inst_0_sim_netlist.v
// Design      : bd_0_hls_inst_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "bd_0_hls_inst_0,fir,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "HLS" *) 
(* X_CORE_INFO = "fir,Vivado 2021.1.1" *) (* hls_module = "yes" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (y_ap_vld,
    ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    y,
    x);
  output y_ap_vld;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0" *) input ap_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start" *) input ap_start;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done" *) output ap_done;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle" *) output ap_idle;
  (* X_INTERFACE_INFO = "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready" *) output ap_ready;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 y DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME y, LAYERED_METADATA undef" *) output [31:0]y;
  (* X_INTERFACE_INFO = "xilinx.com:signal:data:1.0 x DATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME x, LAYERED_METADATA undef" *) input [31:0]x;

  wire ap_clk;
  wire ap_done;
  wire ap_idle;
  wire ap_ready;
  wire ap_rst;
  wire ap_start;
  wire [31:0]x;
  wire [31:0]y;
  wire y_ap_vld;

  (* SDX_KERNEL = "true" *) 
  (* SDX_KERNEL_SYNTH_INST = "inst" *) 
  (* SDX_KERNEL_TYPE = "hls" *) 
  (* ap_ST_fsm_state1 = "3'b001" *) 
  (* ap_ST_fsm_state2 = "3'b010" *) 
  (* ap_ST_fsm_state3 = "3'b100" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir inst
       (.ap_clk(ap_clk),
        .ap_done(ap_done),
        .ap_idle(ap_idle),
        .ap_ready(ap_ready),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .x({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,x[14:0]}),
        .y(y),
        .y_ap_vld(y_ap_vld));
endmodule

(* ap_ST_fsm_state1 = "3'b001" *) (* ap_ST_fsm_state2 = "3'b010" *) (* ap_ST_fsm_state3 = "3'b100" *) 
(* hls_module = "yes" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir
   (ap_clk,
    ap_rst,
    ap_start,
    ap_done,
    ap_idle,
    ap_ready,
    y,
    y_ap_vld,
    x);
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [31:0]y;
  output y_ap_vld;
  input [31:0]x;

  wire \ap_CS_fsm_reg_n_0_[0] ;
  wire ap_CS_fsm_state2;
  wire [2:0]ap_NS_fsm;
  wire ap_clk;
  wire ap_idle;
  wire ap_rst;
  wire ap_start;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_26;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_27;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_28;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_29;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_30;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_31;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_32;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_33;
  wire [6:0]grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address1;
  wire [7:0]shift_reg_V_q1;
  wire shift_reg_V_we0;
  wire [31:0]x;
  wire [31:0]\^y ;
  wire y_ap_vld;

  assign ap_done = y_ap_vld;
  assign ap_ready = y_ap_vld;
  assign y[31] = \^y [31];
  assign y[30] = \^y [31];
  assign y[29] = \^y [31];
  assign y[28] = \^y [31];
  assign y[27] = \^y [31];
  assign y[26] = \^y [31];
  assign y[25] = \^y [31];
  assign y[24] = \^y [31];
  assign y[23] = \^y [31];
  assign y[22] = \^y [31];
  assign y[21] = \^y [31];
  assign y[20] = \^y [31];
  assign y[19] = \^y [31];
  assign y[18] = \^y [31];
  assign y[17] = \^y [31];
  assign y[16] = \^y [31];
  assign y[15] = \^y [31];
  assign y[14:0] = \^y [14:0];
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT4 #(
    .INIT(16'h0F07)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(ap_start),
        .I1(\ap_CS_fsm_reg_n_0_[0] ),
        .I2(ap_CS_fsm_state2),
        .I3(y_ap_vld),
        .O(ap_NS_fsm[0]));
  (* FSM_ENCODING = "none" *) 
  FDSE #(
    .INIT(1'b1)) 
    \ap_CS_fsm_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[0]),
        .Q(\ap_CS_fsm_reg_n_0_[0] ),
        .S(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[1]),
        .Q(ap_CS_fsm_state2),
        .R(ap_rst));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[2]),
        .Q(y_ap_vld),
        .R(ap_rst));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT2 #(
    .INIT(4'h2)) 
    ap_idle_INST_0
       (.I0(\ap_CS_fsm_reg_n_0_[0] ),
        .I1(ap_start),
        .O(ap_idle));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_fir_Pipeline_VITIS_LOOP_25_1 grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63
       (.ADDRARDADDR({grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_27,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_28,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_29,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_30,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_31,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_32,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_33}),
        .ADDRBWRADDR(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address1),
        .D(ap_NS_fsm[2:1]),
        .DOBDO(shift_reg_V_q1),
        .Q({y_ap_vld,ap_CS_fsm_state2,\ap_CS_fsm_reg_n_0_[0] }),
        .WEA(shift_reg_V_we0),
        .ap_clk(ap_clk),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .\lhs_fu_34_reg[6]_0 (grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_26),
        .x(x[14:0]),
        .y({\^y [31],\^y [14:0]}));
  FDRE #(
    .INIT(1'b0)) 
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_26),
        .Q(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .R(ap_rst));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_shift_reg_V shift_reg_V_U
       (.ADDRARDADDR({grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_27,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_28,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_29,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_30,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_31,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_32,grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_33}),
        .ADDRBWRADDR(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address1),
        .DOBDO(shift_reg_V_q1),
        .Q(y_ap_vld),
        .WEA(shift_reg_V_we0),
        .ap_clk(ap_clk),
        .grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .x(x[7:0]));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_fir_Pipeline_VITIS_LOOP_25_1
   (y,
    ADDRBWRADDR,
    D,
    WEA,
    \lhs_fu_34_reg[6]_0 ,
    ADDRARDADDR,
    ap_rst,
    ap_clk,
    x,
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
    ap_start,
    Q,
    DOBDO);
  output [15:0]y;
  output [6:0]ADDRBWRADDR;
  output [1:0]D;
  output [0:0]WEA;
  output \lhs_fu_34_reg[6]_0 ;
  output [6:0]ADDRARDADDR;
  input ap_rst;
  input ap_clk;
  input [14:0]x;
  input grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  input ap_start;
  input [2:0]Q;
  input [7:0]DOBDO;

  wire [6:0]ADDRARDADDR;
  wire [6:0]ADDRBWRADDR;
  wire [1:0]D;
  wire [7:0]DOBDO;
  wire [2:0]Q;
  wire [0:0]WEA;
  wire [15:0]acc_V_fu_38;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter1;
  wire ap_enable_reg_pp0_iter2;
  wire ap_enable_reg_pp0_iter3;
  wire ap_enable_reg_pp0_iter4;
  wire ap_loop_exit_ready_pp0_iter2_reg_reg_srl2_n_0;
  wire ap_loop_exit_ready_pp0_iter3_reg;
  wire ap_loop_init;
  wire ap_rst;
  wire ap_start;
  wire flow_control_loop_pipe_sequential_init_U_n_14;
  wire flow_control_loop_pipe_sequential_init_U_n_15;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  wire [6:0]grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0;
  wire lhs_fu_340;
  wire lhs_fu_341;
  wire [6:0]lhs_fu_34_reg;
  wire \lhs_fu_34_reg[6]_0 ;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_0;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_1;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_10;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_11;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_12;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_13;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_14;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_15;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_2;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_3;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_4;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_5;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_6;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_7;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_8;
  wire mac_muladd_8s_5s_16s_16_4_1_U1_n_9;
  wire [4:0]p_0_out;
  wire ram_reg_i_24_n_0;
  wire ram_reg_i_25_n_0;
  wire [14:0]x;
  wire [15:0]y;
  wire \y[0]_INST_0_i_1_n_0 ;
  wire \y[0]_INST_0_i_2_n_0 ;
  wire \y[0]_INST_0_i_3_n_0 ;
  wire \y[0]_INST_0_n_0 ;
  wire \y[0]_INST_0_n_1 ;
  wire \y[0]_INST_0_n_2 ;
  wire \y[0]_INST_0_n_3 ;
  wire \y[12]_INST_0_i_1_n_0 ;
  wire \y[12]_INST_0_i_2_n_0 ;
  wire \y[12]_INST_0_i_3_n_0 ;
  wire \y[12]_INST_0_i_4_n_0 ;
  wire \y[12]_INST_0_i_5_n_0 ;
  wire \y[12]_INST_0_i_6_n_0 ;
  wire \y[12]_INST_0_i_7_n_0 ;
  wire \y[12]_INST_0_n_1 ;
  wire \y[12]_INST_0_n_2 ;
  wire \y[12]_INST_0_n_3 ;
  wire \y[4]_INST_0_i_1_n_0 ;
  wire \y[4]_INST_0_i_2_n_0 ;
  wire \y[4]_INST_0_i_3_n_0 ;
  wire \y[4]_INST_0_i_4_n_0 ;
  wire \y[4]_INST_0_i_5_n_0 ;
  wire \y[4]_INST_0_i_6_n_0 ;
  wire \y[4]_INST_0_i_7_n_0 ;
  wire \y[4]_INST_0_i_8_n_0 ;
  wire \y[4]_INST_0_n_0 ;
  wire \y[4]_INST_0_n_1 ;
  wire \y[4]_INST_0_n_2 ;
  wire \y[4]_INST_0_n_3 ;
  wire \y[8]_INST_0_i_1_n_0 ;
  wire \y[8]_INST_0_i_2_n_0 ;
  wire \y[8]_INST_0_i_3_n_0 ;
  wire \y[8]_INST_0_i_4_n_0 ;
  wire \y[8]_INST_0_i_5_n_0 ;
  wire \y[8]_INST_0_i_6_n_0 ;
  wire \y[8]_INST_0_i_7_n_0 ;
  wire \y[8]_INST_0_i_8_n_0 ;
  wire \y[8]_INST_0_n_0 ;
  wire \y[8]_INST_0_n_1 ;
  wire \y[8]_INST_0_n_2 ;
  wire \y[8]_INST_0_n_3 ;
  wire [3:3]\NLW_y[12]_INST_0_CO_UNCONNECTED ;

  FDRE \acc_V_fu_38_reg[0] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_15),
        .Q(acc_V_fu_38[0]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[10] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_5),
        .Q(acc_V_fu_38[10]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[11] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_4),
        .Q(acc_V_fu_38[11]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[12] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_3),
        .Q(acc_V_fu_38[12]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[13] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_2),
        .Q(acc_V_fu_38[13]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[14] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_1),
        .Q(acc_V_fu_38[14]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[15] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_0),
        .Q(acc_V_fu_38[15]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[1] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_14),
        .Q(acc_V_fu_38[1]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[2] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_13),
        .Q(acc_V_fu_38[2]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[3] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_12),
        .Q(acc_V_fu_38[3]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[4] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_11),
        .Q(acc_V_fu_38[4]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[5] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_10),
        .Q(acc_V_fu_38[5]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[6] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_9),
        .Q(acc_V_fu_38[6]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[7] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_8),
        .Q(acc_V_fu_38[7]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[8] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_7),
        .Q(acc_V_fu_38[8]),
        .R(ap_loop_init));
  FDRE \acc_V_fu_38_reg[9] 
       (.C(ap_clk),
        .CE(ap_enable_reg_pp0_iter4),
        .D(mac_muladd_8s_5s_16s_16_4_1_U1_n_6),
        .Q(acc_V_fu_38[9]),
        .R(ap_loop_init));
  FDRE #(
    .INIT(1'b0)) 
    ap_enable_reg_pp0_iter1_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(lhs_fu_340),
        .Q(ap_enable_reg_pp0_iter1),
        .R(ap_rst));
  FDRE #(
    .INIT(1'b0)) 
    ap_enable_reg_pp0_iter2_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_enable_reg_pp0_iter1),
        .Q(ap_enable_reg_pp0_iter2),
        .R(ap_rst));
  FDRE #(
    .INIT(1'b0)) 
    ap_enable_reg_pp0_iter3_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_enable_reg_pp0_iter2),
        .Q(ap_enable_reg_pp0_iter3),
        .R(ap_rst));
  FDRE #(
    .INIT(1'b0)) 
    ap_enable_reg_pp0_iter4_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_enable_reg_pp0_iter3),
        .Q(ap_enable_reg_pp0_iter4),
        .R(ap_rst));
  (* srl_name = "inst/\grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63/ap_loop_exit_ready_pp0_iter2_reg_reg_srl2 " *) 
  SRL16E ap_loop_exit_ready_pp0_iter2_reg_reg_srl2
       (.A0(1'b1),
        .A1(1'b0),
        .A2(1'b0),
        .A3(1'b0),
        .CE(1'b1),
        .CLK(ap_clk),
        .D(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready),
        .Q(ap_loop_exit_ready_pp0_iter2_reg_reg_srl2_n_0));
  FDRE ap_loop_exit_ready_pp0_iter3_reg_reg__0
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_loop_exit_ready_pp0_iter2_reg_reg_srl2_n_0),
        .Q(ap_loop_exit_ready_pp0_iter3_reg),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_flow_control_loop_pipe_sequential_init flow_control_loop_pipe_sequential_init_U
       (.ADDRBWRADDR(ADDRBWRADDR),
        .B(p_0_out),
        .D(D),
        .Q(Q[1:0]),
        .SR(ap_loop_init),
        .ap_clk(ap_clk),
        .ap_loop_exit_ready_pp0_iter3_reg(ap_loop_exit_ready_pp0_iter3_reg),
        .ap_rst(ap_rst),
        .ap_start(ap_start),
        .grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready),
        .grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg(flow_control_loop_pipe_sequential_init_U_n_14),
        .grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0(ram_reg_i_24_n_0),
        .grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[0]),
        .lhs_fu_340(lhs_fu_340),
        .lhs_fu_341(lhs_fu_341),
        .lhs_fu_34_reg(lhs_fu_34_reg),
        .\lhs_fu_34_reg[6]_0 (flow_control_loop_pipe_sequential_init_U_n_15),
        .lhs_fu_34_reg_5_sp_1(ram_reg_i_25_n_0),
        .lhs_fu_34_reg_6_sp_1(\lhs_fu_34_reg[6]_0 ));
  FDRE \lhs_fu_34_reg[0] 
       (.C(ap_clk),
        .CE(lhs_fu_340),
        .D(ADDRBWRADDR[0]),
        .Q(lhs_fu_34_reg[0]),
        .R(1'b0));
  FDRE \lhs_fu_34_reg[1] 
       (.C(ap_clk),
        .CE(lhs_fu_340),
        .D(ADDRBWRADDR[1]),
        .Q(lhs_fu_34_reg[1]),
        .R(1'b0));
  FDRE \lhs_fu_34_reg[2] 
       (.C(ap_clk),
        .CE(lhs_fu_340),
        .D(ADDRBWRADDR[2]),
        .Q(lhs_fu_34_reg[2]),
        .R(1'b0));
  FDRE \lhs_fu_34_reg[3] 
       (.C(ap_clk),
        .CE(lhs_fu_340),
        .D(ADDRBWRADDR[3]),
        .Q(lhs_fu_34_reg[3]),
        .R(1'b0));
  FDRE \lhs_fu_34_reg[4] 
       (.C(ap_clk),
        .CE(lhs_fu_340),
        .D(ADDRBWRADDR[4]),
        .Q(lhs_fu_34_reg[4]),
        .R(1'b0));
  FDRE \lhs_fu_34_reg[5] 
       (.C(ap_clk),
        .CE(lhs_fu_340),
        .D(ADDRBWRADDR[5]),
        .Q(lhs_fu_34_reg[5]),
        .R(1'b0));
  FDRE \lhs_fu_34_reg[6] 
       (.C(ap_clk),
        .CE(lhs_fu_340),
        .D(ADDRBWRADDR[6]),
        .Q(lhs_fu_34_reg[6]),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_mac_muladd_8s_5s_16s_16_4_1 mac_muladd_8s_5s_16s_16_4_1_U1
       (.B(p_0_out),
        .DOBDO(DOBDO),
        .E(ap_enable_reg_pp0_iter4),
        .P({mac_muladd_8s_5s_16s_16_4_1_U1_n_0,mac_muladd_8s_5s_16s_16_4_1_U1_n_1,mac_muladd_8s_5s_16s_16_4_1_U1_n_2,mac_muladd_8s_5s_16s_16_4_1_U1_n_3,mac_muladd_8s_5s_16s_16_4_1_U1_n_4,mac_muladd_8s_5s_16s_16_4_1_U1_n_5,mac_muladd_8s_5s_16s_16_4_1_U1_n_6,mac_muladd_8s_5s_16s_16_4_1_U1_n_7,mac_muladd_8s_5s_16s_16_4_1_U1_n_8,mac_muladd_8s_5s_16s_16_4_1_U1_n_9,mac_muladd_8s_5s_16s_16_4_1_U1_n_10,mac_muladd_8s_5s_16s_16_4_1_U1_n_11,mac_muladd_8s_5s_16s_16_4_1_U1_n_12,mac_muladd_8s_5s_16s_16_4_1_U1_n_13,mac_muladd_8s_5s_16s_16_4_1_U1_n_14,mac_muladd_8s_5s_16s_16_4_1_U1_n_15}),
        .SR(ap_loop_init),
        .ap_clk(ap_clk),
        .grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg));
  LUT3 #(
    .INIT(8'hF8)) 
    ram_reg_i_1
       (.I0(Q[1]),
        .I1(ap_enable_reg_pp0_iter1),
        .I2(Q[2]),
        .O(WEA));
  LUT2 #(
    .INIT(4'h2)) 
    ram_reg_i_2
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[6]),
        .I1(Q[2]),
        .O(ADDRARDADDR[6]));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    ram_reg_i_24
       (.I0(lhs_fu_34_reg[4]),
        .I1(lhs_fu_34_reg[2]),
        .I2(lhs_fu_34_reg[0]),
        .I3(lhs_fu_34_reg[1]),
        .I4(lhs_fu_34_reg[3]),
        .I5(lhs_fu_34_reg[5]),
        .O(ram_reg_i_24_n_0));
  LUT5 #(
    .INIT(32'hFFFFFFFE)) 
    ram_reg_i_25
       (.I0(lhs_fu_34_reg[3]),
        .I1(lhs_fu_34_reg[1]),
        .I2(lhs_fu_34_reg[0]),
        .I3(lhs_fu_34_reg[2]),
        .I4(lhs_fu_34_reg[4]),
        .O(ram_reg_i_25_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    ram_reg_i_3
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[5]),
        .I1(Q[2]),
        .O(ADDRARDADDR[5]));
  LUT2 #(
    .INIT(4'h2)) 
    ram_reg_i_4
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[4]),
        .I1(Q[2]),
        .O(ADDRARDADDR[4]));
  LUT2 #(
    .INIT(4'h2)) 
    ram_reg_i_5
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[3]),
        .I1(Q[2]),
        .O(ADDRARDADDR[3]));
  LUT2 #(
    .INIT(4'h2)) 
    ram_reg_i_6
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[2]),
        .I1(Q[2]),
        .O(ADDRARDADDR[2]));
  LUT2 #(
    .INIT(4'h2)) 
    ram_reg_i_7
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[1]),
        .I1(Q[2]),
        .O(ADDRARDADDR[1]));
  LUT2 #(
    .INIT(4'h2)) 
    ram_reg_i_8
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[0]),
        .I1(Q[2]),
        .O(ADDRARDADDR[0]));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \y[0]_INST_0 
       (.CI(1'b0),
        .CO({\y[0]_INST_0_n_0 ,\y[0]_INST_0_n_1 ,\y[0]_INST_0_n_2 ,\y[0]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({x[2:0],1'b0}),
        .O(y[3:0]),
        .S({\y[0]_INST_0_i_1_n_0 ,\y[0]_INST_0_i_2_n_0 ,\y[0]_INST_0_i_3_n_0 ,acc_V_fu_38[0]}));
  LUT3 #(
    .INIT(8'h96)) 
    \y[0]_INST_0_i_1 
       (.I0(acc_V_fu_38[3]),
        .I1(x[0]),
        .I2(x[2]),
        .O(\y[0]_INST_0_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \y[0]_INST_0_i_2 
       (.I0(x[1]),
        .I1(acc_V_fu_38[2]),
        .O(\y[0]_INST_0_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \y[0]_INST_0_i_3 
       (.I0(x[0]),
        .I1(acc_V_fu_38[1]),
        .O(\y[0]_INST_0_i_3_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \y[12]_INST_0 
       (.CI(\y[8]_INST_0_n_0 ),
        .CO({\NLW_y[12]_INST_0_CO_UNCONNECTED [3],\y[12]_INST_0_n_1 ,\y[12]_INST_0_n_2 ,\y[12]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,\y[12]_INST_0_i_1_n_0 ,\y[12]_INST_0_i_2_n_0 ,\y[12]_INST_0_i_3_n_0 }),
        .O(y[15:12]),
        .S({\y[12]_INST_0_i_4_n_0 ,\y[12]_INST_0_i_5_n_0 ,\y[12]_INST_0_i_6_n_0 ,\y[12]_INST_0_i_7_n_0 }));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[12]_INST_0_i_1 
       (.I0(x[12]),
        .I1(x[10]),
        .I2(acc_V_fu_38[13]),
        .O(\y[12]_INST_0_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[12]_INST_0_i_2 
       (.I0(x[11]),
        .I1(x[9]),
        .I2(acc_V_fu_38[12]),
        .O(\y[12]_INST_0_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[12]_INST_0_i_3 
       (.I0(x[10]),
        .I1(x[8]),
        .I2(acc_V_fu_38[11]),
        .O(\y[12]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h3CC369966996C33C)) 
    \y[12]_INST_0_i_4 
       (.I0(acc_V_fu_38[14]),
        .I1(acc_V_fu_38[15]),
        .I2(x[12]),
        .I3(x[14]),
        .I4(x[13]),
        .I5(x[11]),
        .O(\y[12]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[12]_INST_0_i_5 
       (.I0(acc_V_fu_38[13]),
        .I1(x[10]),
        .I2(x[12]),
        .I3(acc_V_fu_38[14]),
        .I4(x[11]),
        .I5(x[13]),
        .O(\y[12]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[12]_INST_0_i_6 
       (.I0(acc_V_fu_38[12]),
        .I1(x[9]),
        .I2(x[11]),
        .I3(acc_V_fu_38[13]),
        .I4(x[10]),
        .I5(x[12]),
        .O(\y[12]_INST_0_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[12]_INST_0_i_7 
       (.I0(acc_V_fu_38[11]),
        .I1(x[8]),
        .I2(x[10]),
        .I3(acc_V_fu_38[12]),
        .I4(x[9]),
        .I5(x[11]),
        .O(\y[12]_INST_0_i_7_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \y[4]_INST_0 
       (.CI(\y[0]_INST_0_n_0 ),
        .CO({\y[4]_INST_0_n_0 ,\y[4]_INST_0_n_1 ,\y[4]_INST_0_n_2 ,\y[4]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\y[4]_INST_0_i_1_n_0 ,\y[4]_INST_0_i_2_n_0 ,\y[4]_INST_0_i_3_n_0 ,\y[4]_INST_0_i_4_n_0 }),
        .O(y[7:4]),
        .S({\y[4]_INST_0_i_5_n_0 ,\y[4]_INST_0_i_6_n_0 ,\y[4]_INST_0_i_7_n_0 ,\y[4]_INST_0_i_8_n_0 }));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[4]_INST_0_i_1 
       (.I0(x[5]),
        .I1(x[3]),
        .I2(acc_V_fu_38[6]),
        .O(\y[4]_INST_0_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[4]_INST_0_i_2 
       (.I0(x[4]),
        .I1(x[2]),
        .I2(acc_V_fu_38[5]),
        .O(\y[4]_INST_0_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[4]_INST_0_i_3 
       (.I0(x[3]),
        .I1(x[1]),
        .I2(acc_V_fu_38[4]),
        .O(\y[4]_INST_0_i_3_n_0 ));
  LUT3 #(
    .INIT(8'h96)) 
    \y[4]_INST_0_i_4 
       (.I0(x[3]),
        .I1(acc_V_fu_38[4]),
        .I2(x[1]),
        .O(\y[4]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[4]_INST_0_i_5 
       (.I0(acc_V_fu_38[6]),
        .I1(x[3]),
        .I2(x[5]),
        .I3(acc_V_fu_38[7]),
        .I4(x[4]),
        .I5(x[6]),
        .O(\y[4]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[4]_INST_0_i_6 
       (.I0(acc_V_fu_38[5]),
        .I1(x[2]),
        .I2(x[4]),
        .I3(acc_V_fu_38[6]),
        .I4(x[3]),
        .I5(x[5]),
        .O(\y[4]_INST_0_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[4]_INST_0_i_7 
       (.I0(acc_V_fu_38[4]),
        .I1(x[1]),
        .I2(x[3]),
        .I3(acc_V_fu_38[5]),
        .I4(x[2]),
        .I5(x[4]),
        .O(\y[4]_INST_0_i_7_n_0 ));
  LUT5 #(
    .INIT(32'h69969696)) 
    \y[4]_INST_0_i_8 
       (.I0(x[1]),
        .I1(acc_V_fu_38[4]),
        .I2(x[3]),
        .I3(x[0]),
        .I4(acc_V_fu_38[3]),
        .O(\y[4]_INST_0_i_8_n_0 ));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 \y[8]_INST_0 
       (.CI(\y[4]_INST_0_n_0 ),
        .CO({\y[8]_INST_0_n_0 ,\y[8]_INST_0_n_1 ,\y[8]_INST_0_n_2 ,\y[8]_INST_0_n_3 }),
        .CYINIT(1'b0),
        .DI({\y[8]_INST_0_i_1_n_0 ,\y[8]_INST_0_i_2_n_0 ,\y[8]_INST_0_i_3_n_0 ,\y[8]_INST_0_i_4_n_0 }),
        .O(y[11:8]),
        .S({\y[8]_INST_0_i_5_n_0 ,\y[8]_INST_0_i_6_n_0 ,\y[8]_INST_0_i_7_n_0 ,\y[8]_INST_0_i_8_n_0 }));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[8]_INST_0_i_1 
       (.I0(x[9]),
        .I1(x[7]),
        .I2(acc_V_fu_38[10]),
        .O(\y[8]_INST_0_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[8]_INST_0_i_2 
       (.I0(x[8]),
        .I1(x[6]),
        .I2(acc_V_fu_38[9]),
        .O(\y[8]_INST_0_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[8]_INST_0_i_3 
       (.I0(x[7]),
        .I1(x[5]),
        .I2(acc_V_fu_38[8]),
        .O(\y[8]_INST_0_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hE8)) 
    \y[8]_INST_0_i_4 
       (.I0(x[6]),
        .I1(x[4]),
        .I2(acc_V_fu_38[7]),
        .O(\y[8]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[8]_INST_0_i_5 
       (.I0(acc_V_fu_38[10]),
        .I1(x[7]),
        .I2(x[9]),
        .I3(acc_V_fu_38[11]),
        .I4(x[8]),
        .I5(x[10]),
        .O(\y[8]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[8]_INST_0_i_6 
       (.I0(acc_V_fu_38[9]),
        .I1(x[6]),
        .I2(x[8]),
        .I3(acc_V_fu_38[10]),
        .I4(x[7]),
        .I5(x[9]),
        .O(\y[8]_INST_0_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[8]_INST_0_i_7 
       (.I0(acc_V_fu_38[8]),
        .I1(x[5]),
        .I2(x[7]),
        .I3(acc_V_fu_38[9]),
        .I4(x[6]),
        .I5(x[8]),
        .O(\y[8]_INST_0_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    \y[8]_INST_0_i_8 
       (.I0(acc_V_fu_38[7]),
        .I1(x[4]),
        .I2(x[6]),
        .I3(acc_V_fu_38[8]),
        .I4(x[5]),
        .I5(x[7]),
        .O(\y[8]_INST_0_i_8_n_0 ));
  FDRE \zext_ln573_reg_180_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(flow_control_loop_pipe_sequential_init_U_n_15),
        .Q(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[0]),
        .R(1'b0));
  FDSE \zext_ln573_reg_180_reg[1] 
       (.C(ap_clk),
        .CE(lhs_fu_341),
        .D(lhs_fu_34_reg[1]),
        .Q(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[1]),
        .S(flow_control_loop_pipe_sequential_init_U_n_14));
  FDSE \zext_ln573_reg_180_reg[2] 
       (.C(ap_clk),
        .CE(lhs_fu_341),
        .D(lhs_fu_34_reg[2]),
        .Q(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[2]),
        .S(flow_control_loop_pipe_sequential_init_U_n_14));
  FDSE \zext_ln573_reg_180_reg[3] 
       (.C(ap_clk),
        .CE(lhs_fu_341),
        .D(lhs_fu_34_reg[3]),
        .Q(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[3]),
        .S(flow_control_loop_pipe_sequential_init_U_n_14));
  FDSE \zext_ln573_reg_180_reg[4] 
       (.C(ap_clk),
        .CE(lhs_fu_341),
        .D(lhs_fu_34_reg[4]),
        .Q(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[4]),
        .S(flow_control_loop_pipe_sequential_init_U_n_14));
  FDSE \zext_ln573_reg_180_reg[5] 
       (.C(ap_clk),
        .CE(lhs_fu_341),
        .D(lhs_fu_34_reg[5]),
        .Q(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[5]),
        .S(flow_control_loop_pipe_sequential_init_U_n_14));
  FDSE \zext_ln573_reg_180_reg[6] 
       (.C(ap_clk),
        .CE(lhs_fu_341),
        .D(lhs_fu_34_reg[6]),
        .Q(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0[6]),
        .S(flow_control_loop_pipe_sequential_init_U_n_14));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_flow_control_loop_pipe_sequential_init
   (ADDRBWRADDR,
    lhs_fu_341,
    lhs_fu_340,
    SR,
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready,
    D,
    lhs_fu_34_reg_6_sp_1,
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg,
    \lhs_fu_34_reg[6]_0 ,
    B,
    ap_rst,
    ap_clk,
    lhs_fu_34_reg,
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
    lhs_fu_34_reg_5_sp_1,
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0,
    ap_start,
    Q,
    ap_loop_exit_ready_pp0_iter3_reg,
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0);
  output [6:0]ADDRBWRADDR;
  output lhs_fu_341;
  output lhs_fu_340;
  output [0:0]SR;
  output grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready;
  output [1:0]D;
  output lhs_fu_34_reg_6_sp_1;
  output grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg;
  output \lhs_fu_34_reg[6]_0 ;
  output [4:0]B;
  input ap_rst;
  input ap_clk;
  input [6:0]lhs_fu_34_reg;
  input grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  input lhs_fu_34_reg_5_sp_1;
  input grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0;
  input ap_start;
  input [1:0]Q;
  input ap_loop_exit_ready_pp0_iter3_reg;
  input [0:0]grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0;

  wire [6:0]ADDRBWRADDR;
  wire [4:0]B;
  wire [1:0]D;
  wire [1:0]Q;
  wire [0:0]SR;
  wire ap_clk;
  wire ap_done_cache;
  wire ap_done_cache_i_1_n_0;
  wire ap_loop_exit_ready_pp0_iter3_reg;
  wire ap_loop_init_int;
  wire ap_loop_init_int_i_1_n_0;
  wire ap_rst;
  wire ap_start;
  wire [6:0]c_address0;
  wire g0_b0_n_0;
  wire g0_b1_n_0;
  wire g0_b2_n_0;
  wire g0_b3_n_0;
  wire g0_b4_n_0;
  wire g1_b0_n_0;
  wire g1_b1_n_0;
  wire g1_b2_n_0;
  wire g1_b3_n_0;
  wire g1_b4_n_0;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0;
  wire [0:0]grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0;
  wire lhs_fu_340;
  wire lhs_fu_341;
  wire [6:0]lhs_fu_34_reg;
  wire \lhs_fu_34_reg[6]_0 ;
  wire lhs_fu_34_reg_5_sn_1;
  wire lhs_fu_34_reg_6_sn_1;
  wire ram_reg_i_26_n_0;

  assign lhs_fu_34_reg_5_sn_1 = lhs_fu_34_reg_5_sp_1;
  assign lhs_fu_34_reg_6_sp_1 = lhs_fu_34_reg_6_sn_1;
  LUT6 #(
    .INIT(64'hCFCFCCCF88888888)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(ap_start),
        .I1(Q[0]),
        .I2(ap_loop_exit_ready_pp0_iter3_reg),
        .I3(ap_done_cache),
        .I4(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I5(Q[1]),
        .O(D[0]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT4 #(
    .INIT(16'hF400)) 
    \ap_CS_fsm[2]_i_1 
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I1(ap_done_cache),
        .I2(ap_loop_exit_ready_pp0_iter3_reg),
        .I3(Q[1]),
        .O(D[1]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hBA)) 
    ap_done_cache_i_1
       (.I0(ap_loop_exit_ready_pp0_iter3_reg),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(ap_done_cache),
        .O(ap_done_cache_i_1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    ap_done_cache_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_done_cache_i_1_n_0),
        .Q(ap_done_cache),
        .R(ap_rst));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h0004)) 
    ap_loop_exit_ready_pp0_iter2_reg_reg_srl2_i_1
       (.I0(ap_loop_init_int),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(lhs_fu_34_reg[6]),
        .I3(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0),
        .O(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'hEFEE)) 
    ap_loop_init_int_i_1
       (.I0(ap_loop_exit_ready_pp0_iter3_reg),
        .I1(ap_rst),
        .I2(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I3(ap_loop_init_int),
        .O(ap_loop_init_int_i_1_n_0));
  FDRE #(
    .INIT(1'b1)) 
    ap_loop_init_int_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_loop_init_int_i_1_n_0),
        .Q(ap_loop_init_int),
        .R(1'b0));
  LUT6 #(
    .INIT(64'h01B601B6000001B6)) 
    g0_b0
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g0_b0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hEA)) 
    g0_b0_i_1
       (.I0(lhs_fu_34_reg[0]),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(ap_loop_init_int),
        .O(c_address0[0]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hEA)) 
    g0_b0_i_2
       (.I0(lhs_fu_34_reg[1]),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(ap_loop_init_int),
        .O(c_address0[1]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hEA)) 
    g0_b0_i_3
       (.I0(lhs_fu_34_reg[2]),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(ap_loop_init_int),
        .O(c_address0[2]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hEA)) 
    g0_b0_i_4
       (.I0(lhs_fu_34_reg[3]),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(ap_loop_init_int),
        .O(c_address0[3]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hEA)) 
    g0_b0_i_5
       (.I0(lhs_fu_34_reg[4]),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(ap_loop_init_int),
        .O(c_address0[4]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hEA)) 
    g0_b0_i_6
       (.I0(lhs_fu_34_reg[5]),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(ap_loop_init_int),
        .O(c_address0[5]));
  LUT6 #(
    .INIT(64'hFE17FFA1FFFFFE17)) 
    g0_b1
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g0_b1_n_0));
  LUT6 #(
    .INIT(64'hFFA00017FFFFFFA0)) 
    g0_b2
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g0_b2_n_0));
  LUT6 #(
    .INIT(64'h006FFFD80000006F)) 
    g0_b3
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g0_b3_n_0));
  LUT6 #(
    .INIT(64'hFFE0001FFFFFFFE0)) 
    g0_b4
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g0_b4_n_0));
  LUT6 #(
    .INIT(64'h000001B601B601B6)) 
    g1_b0
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g1_b0_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFA1FE17FFA1)) 
    g1_b1
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g1_b1_n_0));
  LUT6 #(
    .INIT(64'h00000017FFA00017)) 
    g1_b2
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g1_b2_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFD8006FFFD8)) 
    g1_b3
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g1_b3_n_0));
  LUT6 #(
    .INIT(64'h0000001FFFE0001F)) 
    g1_b4
       (.I0(c_address0[0]),
        .I1(c_address0[1]),
        .I2(c_address0[2]),
        .I3(c_address0[3]),
        .I4(c_address0[4]),
        .I5(c_address0[5]),
        .O(g1_b4_n_0));
  LUT6 #(
    .INIT(64'hFFFFF0E0F0E0F0E0)) 
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_i_1
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0),
        .I1(lhs_fu_34_reg[6]),
        .I2(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I3(ap_loop_init_int),
        .I4(Q[0]),
        .I5(ap_start),
        .O(lhs_fu_34_reg_6_sn_1));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'hF0E0)) 
    \lhs_fu_34[6]_i_1 
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0),
        .I1(lhs_fu_34_reg[6]),
        .I2(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I3(ap_loop_init_int),
        .O(lhs_fu_340));
  LUT2 #(
    .INIT(4'h8)) 
    p_reg_reg_i_1
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I1(ap_loop_init_int),
        .O(SR));
  MUXF7 p_reg_reg_i_2
       (.I0(g0_b4_n_0),
        .I1(g1_b4_n_0),
        .O(B[4]),
        .S(c_address0[6]));
  MUXF7 p_reg_reg_i_3
       (.I0(g0_b3_n_0),
        .I1(g1_b3_n_0),
        .O(B[3]),
        .S(c_address0[6]));
  MUXF7 p_reg_reg_i_4
       (.I0(g0_b2_n_0),
        .I1(g1_b2_n_0),
        .O(B[2]),
        .S(c_address0[6]));
  MUXF7 p_reg_reg_i_5
       (.I0(g0_b1_n_0),
        .I1(g1_b1_n_0),
        .O(B[1]),
        .S(c_address0[6]));
  MUXF7 p_reg_reg_i_6
       (.I0(g0_b0_n_0),
        .I1(g1_b0_n_0),
        .O(B[0]),
        .S(c_address0[6]));
  LUT3 #(
    .INIT(8'hEA)) 
    p_reg_reg_i_8
       (.I0(lhs_fu_34_reg[6]),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(ap_loop_init_int),
        .O(c_address0[6]));
  LUT4 #(
    .INIT(16'hF88F)) 
    ram_reg_i_10
       (.I0(ap_loop_init_int),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(lhs_fu_34_reg[5]),
        .I3(lhs_fu_34_reg_5_sn_1),
        .O(ADDRBWRADDR[5]));
  LUT6 #(
    .INIT(64'hDDDDDDDDDDDDDDD7)) 
    ram_reg_i_11
       (.I0(ram_reg_i_26_n_0),
        .I1(lhs_fu_34_reg[4]),
        .I2(lhs_fu_34_reg[2]),
        .I3(lhs_fu_34_reg[0]),
        .I4(lhs_fu_34_reg[1]),
        .I5(lhs_fu_34_reg[3]),
        .O(ADDRBWRADDR[4]));
  LUT6 #(
    .INIT(64'hF8F8F8F8F8F8F88F)) 
    ram_reg_i_12
       (.I0(ap_loop_init_int),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(lhs_fu_34_reg[3]),
        .I3(lhs_fu_34_reg[1]),
        .I4(lhs_fu_34_reg[0]),
        .I5(lhs_fu_34_reg[2]),
        .O(ADDRBWRADDR[3]));
  LUT5 #(
    .INIT(32'hF8F8F88F)) 
    ram_reg_i_13
       (.I0(ap_loop_init_int),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(lhs_fu_34_reg[2]),
        .I3(lhs_fu_34_reg[0]),
        .I4(lhs_fu_34_reg[1]),
        .O(ADDRBWRADDR[2]));
  LUT4 #(
    .INIT(16'hF999)) 
    ram_reg_i_14
       (.I0(lhs_fu_34_reg[0]),
        .I1(lhs_fu_34_reg[1]),
        .I2(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I3(ap_loop_init_int),
        .O(ADDRBWRADDR[1]));
  LUT3 #(
    .INIT(8'h07)) 
    ram_reg_i_15
       (.I0(ap_loop_init_int),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(lhs_fu_34_reg[0]),
        .O(ADDRBWRADDR[0]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT2 #(
    .INIT(4'h7)) 
    ram_reg_i_26
       (.I0(ap_loop_init_int),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .O(ram_reg_i_26_n_0));
  LUT4 #(
    .INIT(16'hF88F)) 
    ram_reg_i_9
       (.I0(ap_loop_init_int),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I2(lhs_fu_34_reg[6]),
        .I3(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0),
        .O(ADDRBWRADDR[6]));
  LUT6 #(
    .INIT(64'hFFFFF111FEEEF000)) 
    \zext_ln573_reg_180[0]_i_1 
       (.I0(lhs_fu_34_reg[6]),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0),
        .I2(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I3(ap_loop_init_int),
        .I4(lhs_fu_34_reg[0]),
        .I5(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0),
        .O(\lhs_fu_34_reg[6]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \zext_ln573_reg_180[6]_i_1 
       (.I0(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I1(ap_loop_init_int),
        .O(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'hFEEE)) 
    \zext_ln573_reg_180[6]_i_2 
       (.I0(lhs_fu_34_reg[6]),
        .I1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0),
        .I2(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .I3(ap_loop_init_int),
        .O(lhs_fu_341));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_mac_muladd_8s_5s_16s_16_4_1
   (P,
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
    E,
    ap_clk,
    SR,
    B,
    DOBDO);
  output [15:0]P;
  input grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  input [0:0]E;
  input ap_clk;
  input [0:0]SR;
  input [4:0]B;
  input [7:0]DOBDO;

  wire [4:0]B;
  wire [7:0]DOBDO;
  wire [0:0]E;
  wire [15:0]P;
  wire [0:0]SR;
  wire ap_clk;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0 fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0_U
       (.B(B),
        .DOBDO(DOBDO),
        .E(E),
        .P(P),
        .SR(SR),
        .ap_clk(ap_clk),
        .grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0
   (P,
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
    E,
    ap_clk,
    SR,
    B,
    DOBDO);
  output [15:0]P;
  input grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  input [0:0]E;
  input ap_clk;
  input [0:0]SR;
  input [4:0]B;
  input [7:0]DOBDO;

  wire [4:0]B;
  wire [7:0]DOBDO;
  wire [0:0]E;
  wire [15:0]P;
  wire [0:0]SR;
  wire ap_clk;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  wire p_reg_reg_i_7_n_0;
  wire NLW_p_reg_reg_CARRYCASCOUT_UNCONNECTED;
  wire NLW_p_reg_reg_MULTSIGNOUT_UNCONNECTED;
  wire NLW_p_reg_reg_OVERFLOW_UNCONNECTED;
  wire NLW_p_reg_reg_PATTERNBDETECT_UNCONNECTED;
  wire NLW_p_reg_reg_PATTERNDETECT_UNCONNECTED;
  wire NLW_p_reg_reg_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_p_reg_reg_ACOUT_UNCONNECTED;
  wire [17:0]NLW_p_reg_reg_BCOUT_UNCONNECTED;
  wire [3:0]NLW_p_reg_reg_CARRYOUT_UNCONNECTED;
  wire [47:16]NLW_p_reg_reg_P_UNCONNECTED;
  wire [47:0]NLW_p_reg_reg_PCOUT_UNCONNECTED;

  DSP48E1 #(
    .ACASCREG(1),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(1),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(2),
    .BREG(2),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(1),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    p_reg_reg
       (.A({DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO[7],DOBDO}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_p_reg_reg_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({B[4],B[4],B[4],B[4],B[4],B[4],B[4],B[4],B[4],B[4],B[4],B[4],B[4],B}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_p_reg_reg_BCOUT_UNCONNECTED[17:0]),
        .C({P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P[15],P}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_p_reg_reg_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_p_reg_reg_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b1),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .CEB2(1'b1),
        .CEC(E),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b1),
        .CEP(1'b1),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_p_reg_reg_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,p_reg_reg_i_7_n_0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_p_reg_reg_OVERFLOW_UNCONNECTED),
        .P({NLW_p_reg_reg_P_UNCONNECTED[47:16],P}),
        .PATTERNBDETECT(NLW_p_reg_reg_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_p_reg_reg_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_p_reg_reg_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(SR),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_p_reg_reg_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    p_reg_reg_i_7
       (.I0(E),
        .O(p_reg_reg_i_7_n_0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fir_shift_reg_V
   (DOBDO,
    ap_clk,
    WEA,
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
    ADDRARDADDR,
    ADDRBWRADDR,
    x,
    Q);
  output [7:0]DOBDO;
  input ap_clk;
  input [0:0]WEA;
  input grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  input [6:0]ADDRARDADDR;
  input [6:0]ADDRBWRADDR;
  input [7:0]x;
  input [0:0]Q;

  wire [6:0]ADDRARDADDR;
  wire [6:0]ADDRBWRADDR;
  wire [7:0]DOBDO;
  wire [0:0]Q;
  wire [0:0]WEA;
  wire ap_clk;
  wire grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg;
  wire [7:0]shift_reg_V_d0;
  wire [7:0]x;
  wire [15:0]NLW_ram_reg_DOADO_UNCONNECTED;
  wire [15:8]NLW_ram_reg_DOBDO_UNCONNECTED;
  wire [1:0]NLW_ram_reg_DOPADOP_UNCONNECTED;
  wire [1:0]NLW_ram_reg_DOPBDOP_UNCONNECTED;

  (* \MEM.PORTA.DATA_BIT_LAYOUT  = "p0_d8" *) 
  (* \MEM.PORTB.DATA_BIT_LAYOUT  = "p0_d8" *) 
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-6 {cell *THIS*}}" *) 
  (* RTL_RAM_BITS = "1024" *) 
  (* RTL_RAM_NAME = "shift_reg_V_U/ram" *) 
  (* RTL_RAM_TYPE = "RAM_TDP" *) 
  (* ram_addr_begin = "0" *) 
  (* ram_addr_end = "1023" *) 
  (* ram_offset = "0" *) 
  (* ram_slice_begin = "0" *) 
  (* ram_slice_end = "7" *) 
  RAMB18E1 #(
    .DOA_REG(0),
    .DOB_REG(0),
    .INITP_00(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_01(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_02(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_03(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_04(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_05(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_06(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_07(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_00(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_01(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_02(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_03(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_04(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_05(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_06(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_07(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_08(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_09(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_0A(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_0B(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_0C(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_0D(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_0E(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_0F(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_10(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_11(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_12(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_13(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_14(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_15(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_16(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_17(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_18(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_19(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_1A(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_1B(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_1C(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_1D(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_1E(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_1F(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_20(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_21(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_22(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_23(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_24(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_25(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_26(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_27(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_28(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_29(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_2A(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_2B(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_2C(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_2D(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_2E(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_2F(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_30(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_31(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_32(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_33(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_34(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_35(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_36(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_37(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_38(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_39(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_3A(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_3B(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_3C(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_3D(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_3E(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_3F(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_A(18'h00000),
    .INIT_B(18'h00000),
    .RAM_MODE("TDP"),
    .RDADDR_COLLISION_HWCONFIG("DELAYED_WRITE"),
    .READ_WIDTH_A(18),
    .READ_WIDTH_B(18),
    .RSTREG_PRIORITY_A("RSTREG"),
    .RSTREG_PRIORITY_B("RSTREG"),
    .SIM_COLLISION_CHECK("ALL"),
    .SIM_DEVICE("7SERIES"),
    .SRVAL_A(18'h00000),
    .SRVAL_B(18'h00000),
    .WRITE_MODE_A("READ_FIRST"),
    .WRITE_MODE_B("WRITE_FIRST"),
    .WRITE_WIDTH_A(18),
    .WRITE_WIDTH_B(18)) 
    ram_reg
       (.ADDRARDADDR({1'b0,1'b0,1'b0,ADDRARDADDR,1'b0,1'b0,1'b0,1'b0}),
        .ADDRBWRADDR({1'b0,1'b0,1'b0,ADDRBWRADDR,1'b0,1'b0,1'b0,1'b0}),
        .CLKARDCLK(ap_clk),
        .CLKBWRCLK(ap_clk),
        .DIADI({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,shift_reg_V_d0}),
        .DIBDI({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .DIPADIP({1'b0,1'b0}),
        .DIPBDIP({1'b0,1'b0}),
        .DOADO(NLW_ram_reg_DOADO_UNCONNECTED[15:0]),
        .DOBDO({NLW_ram_reg_DOBDO_UNCONNECTED[15:8],DOBDO}),
        .DOPADOP(NLW_ram_reg_DOPADOP_UNCONNECTED[1:0]),
        .DOPBDOP(NLW_ram_reg_DOPBDOP_UNCONNECTED[1:0]),
        .ENARDEN(WEA),
        .ENBWREN(grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg),
        .REGCEAREGCE(1'b0),
        .REGCEB(1'b0),
        .RSTRAMARSTRAM(1'b0),
        .RSTRAMB(1'b0),
        .RSTREGARSTREG(1'b0),
        .RSTREGB(1'b0),
        .WEA({WEA,WEA}),
        .WEBWE({1'b0,1'b0,1'b0,1'b0}));
  LUT3 #(
    .INIT(8'hB8)) 
    ram_reg_i_16
       (.I0(x[7]),
        .I1(Q),
        .I2(DOBDO[7]),
        .O(shift_reg_V_d0[7]));
  LUT3 #(
    .INIT(8'hB8)) 
    ram_reg_i_17
       (.I0(x[6]),
        .I1(Q),
        .I2(DOBDO[6]),
        .O(shift_reg_V_d0[6]));
  LUT3 #(
    .INIT(8'hB8)) 
    ram_reg_i_18
       (.I0(x[5]),
        .I1(Q),
        .I2(DOBDO[5]),
        .O(shift_reg_V_d0[5]));
  LUT3 #(
    .INIT(8'hB8)) 
    ram_reg_i_19
       (.I0(x[4]),
        .I1(Q),
        .I2(DOBDO[4]),
        .O(shift_reg_V_d0[4]));
  LUT3 #(
    .INIT(8'hB8)) 
    ram_reg_i_20
       (.I0(x[3]),
        .I1(Q),
        .I2(DOBDO[3]),
        .O(shift_reg_V_d0[3]));
  LUT3 #(
    .INIT(8'hB8)) 
    ram_reg_i_21
       (.I0(x[2]),
        .I1(Q),
        .I2(DOBDO[2]),
        .O(shift_reg_V_d0[2]));
  LUT3 #(
    .INIT(8'hB8)) 
    ram_reg_i_22
       (.I0(x[1]),
        .I1(Q),
        .I2(DOBDO[1]),
        .O(shift_reg_V_d0[1]));
  LUT3 #(
    .INIT(8'hB8)) 
    ram_reg_i_23
       (.I0(x[0]),
        .I1(Q),
        .I2(DOBDO[0]),
        .O(shift_reg_V_d0[0]));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
