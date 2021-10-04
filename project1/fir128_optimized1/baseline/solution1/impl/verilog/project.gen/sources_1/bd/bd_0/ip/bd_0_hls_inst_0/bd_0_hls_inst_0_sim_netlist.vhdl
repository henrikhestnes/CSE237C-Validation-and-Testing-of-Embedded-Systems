-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2021.1.1 (lin64) Build 3286242 Wed Jul 28 13:09:46 MDT 2021
-- Date        : Sun Oct  3 18:51:43 2021
-- Host        : ubuntu running 64-bit Ubuntu 20.04.3 LTS
-- Command     : write_vhdl -force -mode funcsim
--               /home/henrikhestnes/Documents/CSE-237C-Validation-and-Testing-of-Embedded-Systems/project1/fir128_optimized1/baseline/solution1/impl/verilog/project.gen/sources_1/bd/bd_0/ip/bd_0_hls_inst_0/bd_0_hls_inst_0_sim_netlist.vhdl
-- Design      : bd_0_hls_inst_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fir_flow_control_loop_pipe_sequential_init is
  port (
    ADDRBWRADDR : out STD_LOGIC_VECTOR ( 6 downto 0 );
    lhs_fu_341 : out STD_LOGIC;
    lhs_fu_340 : out STD_LOGIC;
    SR : out STD_LOGIC_VECTOR ( 0 to 0 );
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready : out STD_LOGIC;
    D : out STD_LOGIC_VECTOR ( 1 downto 0 );
    lhs_fu_34_reg_6_sp_1 : out STD_LOGIC;
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg : out STD_LOGIC;
    \lhs_fu_34_reg[6]_0\ : out STD_LOGIC;
    B : out STD_LOGIC_VECTOR ( 4 downto 0 );
    ap_rst : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    lhs_fu_34_reg : in STD_LOGIC_VECTOR ( 6 downto 0 );
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg : in STD_LOGIC;
    lhs_fu_34_reg_5_sp_1 : in STD_LOGIC;
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0 : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    ap_loop_exit_ready_pp0_iter3_reg : in STD_LOGIC;
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0 : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fir_flow_control_loop_pipe_sequential_init : entity is "fir_flow_control_loop_pipe_sequential_init";
end bd_0_hls_inst_0_fir_flow_control_loop_pipe_sequential_init;

architecture STRUCTURE of bd_0_hls_inst_0_fir_flow_control_loop_pipe_sequential_init is
  signal ap_done_cache : STD_LOGIC;
  signal ap_done_cache_i_1_n_0 : STD_LOGIC;
  signal ap_loop_init_int : STD_LOGIC;
  signal ap_loop_init_int_i_1_n_0 : STD_LOGIC;
  signal c_address0 : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal g0_b0_n_0 : STD_LOGIC;
  signal g0_b1_n_0 : STD_LOGIC;
  signal g0_b2_n_0 : STD_LOGIC;
  signal g0_b3_n_0 : STD_LOGIC;
  signal g0_b4_n_0 : STD_LOGIC;
  signal g1_b0_n_0 : STD_LOGIC;
  signal g1_b1_n_0 : STD_LOGIC;
  signal g1_b2_n_0 : STD_LOGIC;
  signal g1_b3_n_0 : STD_LOGIC;
  signal g1_b4_n_0 : STD_LOGIC;
  signal lhs_fu_34_reg_5_sn_1 : STD_LOGIC;
  signal lhs_fu_34_reg_6_sn_1 : STD_LOGIC;
  signal ram_reg_i_26_n_0 : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \ap_CS_fsm[2]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of ap_done_cache_i_1 : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of ap_loop_exit_ready_pp0_iter2_reg_reg_srl2_i_1 : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of ap_loop_init_int_i_1 : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of g0_b0_i_1 : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of g0_b0_i_2 : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of g0_b0_i_3 : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of g0_b0_i_4 : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of g0_b0_i_5 : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of g0_b0_i_6 : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \lhs_fu_34[6]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of ram_reg_i_26 : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \zext_ln573_reg_180[6]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \zext_ln573_reg_180[6]_i_2\ : label is "soft_lutpair0";
begin
  lhs_fu_34_reg_5_sn_1 <= lhs_fu_34_reg_5_sp_1;
  lhs_fu_34_reg_6_sp_1 <= lhs_fu_34_reg_6_sn_1;
\ap_CS_fsm[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CFCFCCCF88888888"
    )
        port map (
      I0 => ap_start,
      I1 => Q(0),
      I2 => ap_loop_exit_ready_pp0_iter3_reg,
      I3 => ap_done_cache,
      I4 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I5 => Q(1),
      O => D(0)
    );
\ap_CS_fsm[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F400"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I1 => ap_done_cache,
      I2 => ap_loop_exit_ready_pp0_iter3_reg,
      I3 => Q(1),
      O => D(1)
    );
ap_done_cache_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"BA"
    )
        port map (
      I0 => ap_loop_exit_ready_pp0_iter3_reg,
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => ap_done_cache,
      O => ap_done_cache_i_1_n_0
    );
ap_done_cache_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_done_cache_i_1_n_0,
      Q => ap_done_cache,
      R => ap_rst
    );
ap_loop_exit_ready_pp0_iter2_reg_reg_srl2_i_1: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0004"
    )
        port map (
      I0 => ap_loop_init_int,
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => lhs_fu_34_reg(6),
      I3 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0,
      O => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready
    );
ap_loop_init_int_i_1: unisim.vcomponents.LUT4
    generic map(
      INIT => X"EFEE"
    )
        port map (
      I0 => ap_loop_exit_ready_pp0_iter3_reg,
      I1 => ap_rst,
      I2 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I3 => ap_loop_init_int,
      O => ap_loop_init_int_i_1_n_0
    );
ap_loop_init_int_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_loop_init_int_i_1_n_0,
      Q => ap_loop_init_int,
      R => '0'
    );
g0_b0: unisim.vcomponents.LUT6
    generic map(
      INIT => X"01B601B6000001B6"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g0_b0_n_0
    );
g0_b0_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"EA"
    )
        port map (
      I0 => lhs_fu_34_reg(0),
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => ap_loop_init_int,
      O => c_address0(0)
    );
g0_b0_i_2: unisim.vcomponents.LUT3
    generic map(
      INIT => X"EA"
    )
        port map (
      I0 => lhs_fu_34_reg(1),
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => ap_loop_init_int,
      O => c_address0(1)
    );
g0_b0_i_3: unisim.vcomponents.LUT3
    generic map(
      INIT => X"EA"
    )
        port map (
      I0 => lhs_fu_34_reg(2),
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => ap_loop_init_int,
      O => c_address0(2)
    );
g0_b0_i_4: unisim.vcomponents.LUT3
    generic map(
      INIT => X"EA"
    )
        port map (
      I0 => lhs_fu_34_reg(3),
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => ap_loop_init_int,
      O => c_address0(3)
    );
g0_b0_i_5: unisim.vcomponents.LUT3
    generic map(
      INIT => X"EA"
    )
        port map (
      I0 => lhs_fu_34_reg(4),
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => ap_loop_init_int,
      O => c_address0(4)
    );
g0_b0_i_6: unisim.vcomponents.LUT3
    generic map(
      INIT => X"EA"
    )
        port map (
      I0 => lhs_fu_34_reg(5),
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => ap_loop_init_int,
      O => c_address0(5)
    );
g0_b1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FE17FFA1FFFFFE17"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g0_b1_n_0
    );
g0_b2: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFA00017FFFFFFA0"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g0_b2_n_0
    );
g0_b3: unisim.vcomponents.LUT6
    generic map(
      INIT => X"006FFFD80000006F"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g0_b3_n_0
    );
g0_b4: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFE0001FFFFFFFE0"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g0_b4_n_0
    );
g1_b0: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000001B601B601B6"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g1_b0_n_0
    );
g1_b1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFA1FE17FFA1"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g1_b1_n_0
    );
g1_b2: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000017FFA00017"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g1_b2_n_0
    );
g1_b3: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFD8006FFFD8"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g1_b3_n_0
    );
g1_b4: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000001FFFE0001F"
    )
        port map (
      I0 => c_address0(0),
      I1 => c_address0(1),
      I2 => c_address0(2),
      I3 => c_address0(3),
      I4 => c_address0(4),
      I5 => c_address0(5),
      O => g1_b4_n_0
    );
grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFF0E0F0E0F0E0"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0,
      I1 => lhs_fu_34_reg(6),
      I2 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I3 => ap_loop_init_int,
      I4 => Q(0),
      I5 => ap_start,
      O => lhs_fu_34_reg_6_sn_1
    );
\lhs_fu_34[6]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F0E0"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0,
      I1 => lhs_fu_34_reg(6),
      I2 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I3 => ap_loop_init_int,
      O => lhs_fu_340
    );
p_reg_reg_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I1 => ap_loop_init_int,
      O => SR(0)
    );
p_reg_reg_i_2: unisim.vcomponents.MUXF7
     port map (
      I0 => g0_b4_n_0,
      I1 => g1_b4_n_0,
      O => B(4),
      S => c_address0(6)
    );
p_reg_reg_i_3: unisim.vcomponents.MUXF7
     port map (
      I0 => g0_b3_n_0,
      I1 => g1_b3_n_0,
      O => B(3),
      S => c_address0(6)
    );
p_reg_reg_i_4: unisim.vcomponents.MUXF7
     port map (
      I0 => g0_b2_n_0,
      I1 => g1_b2_n_0,
      O => B(2),
      S => c_address0(6)
    );
p_reg_reg_i_5: unisim.vcomponents.MUXF7
     port map (
      I0 => g0_b1_n_0,
      I1 => g1_b1_n_0,
      O => B(1),
      S => c_address0(6)
    );
p_reg_reg_i_6: unisim.vcomponents.MUXF7
     port map (
      I0 => g0_b0_n_0,
      I1 => g1_b0_n_0,
      O => B(0),
      S => c_address0(6)
    );
p_reg_reg_i_8: unisim.vcomponents.LUT3
    generic map(
      INIT => X"EA"
    )
        port map (
      I0 => lhs_fu_34_reg(6),
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => ap_loop_init_int,
      O => c_address0(6)
    );
ram_reg_i_10: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F88F"
    )
        port map (
      I0 => ap_loop_init_int,
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => lhs_fu_34_reg(5),
      I3 => lhs_fu_34_reg_5_sn_1,
      O => ADDRBWRADDR(5)
    );
ram_reg_i_11: unisim.vcomponents.LUT6
    generic map(
      INIT => X"DDDDDDDDDDDDDDD7"
    )
        port map (
      I0 => ram_reg_i_26_n_0,
      I1 => lhs_fu_34_reg(4),
      I2 => lhs_fu_34_reg(2),
      I3 => lhs_fu_34_reg(0),
      I4 => lhs_fu_34_reg(1),
      I5 => lhs_fu_34_reg(3),
      O => ADDRBWRADDR(4)
    );
ram_reg_i_12: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F8F8F8F8F8F8F88F"
    )
        port map (
      I0 => ap_loop_init_int,
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => lhs_fu_34_reg(3),
      I3 => lhs_fu_34_reg(1),
      I4 => lhs_fu_34_reg(0),
      I5 => lhs_fu_34_reg(2),
      O => ADDRBWRADDR(3)
    );
ram_reg_i_13: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F8F8F88F"
    )
        port map (
      I0 => ap_loop_init_int,
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => lhs_fu_34_reg(2),
      I3 => lhs_fu_34_reg(0),
      I4 => lhs_fu_34_reg(1),
      O => ADDRBWRADDR(2)
    );
ram_reg_i_14: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F999"
    )
        port map (
      I0 => lhs_fu_34_reg(0),
      I1 => lhs_fu_34_reg(1),
      I2 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I3 => ap_loop_init_int,
      O => ADDRBWRADDR(1)
    );
ram_reg_i_15: unisim.vcomponents.LUT3
    generic map(
      INIT => X"07"
    )
        port map (
      I0 => ap_loop_init_int,
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => lhs_fu_34_reg(0),
      O => ADDRBWRADDR(0)
    );
ram_reg_i_26: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => ap_loop_init_int,
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      O => ram_reg_i_26_n_0
    );
ram_reg_i_9: unisim.vcomponents.LUT4
    generic map(
      INIT => X"F88F"
    )
        port map (
      I0 => ap_loop_init_int,
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I2 => lhs_fu_34_reg(6),
      I3 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0,
      O => ADDRBWRADDR(6)
    );
\zext_ln573_reg_180[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFF111FEEEF000"
    )
        port map (
      I0 => lhs_fu_34_reg(6),
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0,
      I2 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I3 => ap_loop_init_int,
      I4 => lhs_fu_34_reg(0),
      I5 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(0),
      O => \lhs_fu_34_reg[6]_0\
    );
\zext_ln573_reg_180[6]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I1 => ap_loop_init_int,
      O => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg
    );
\zext_ln573_reg_180[6]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEEE"
    )
        port map (
      I0 => lhs_fu_34_reg(6),
      I1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0,
      I2 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      I3 => ap_loop_init_int,
      O => lhs_fu_341
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0 is
  port (
    P : out STD_LOGIC_VECTOR ( 15 downto 0 );
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg : in STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    SR : in STD_LOGIC_VECTOR ( 0 to 0 );
    B : in STD_LOGIC_VECTOR ( 4 downto 0 );
    DOBDO : in STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0 : entity is "fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0";
end bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0;

architecture STRUCTURE of bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0 is
  signal \^p\ : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal p_reg_reg_i_7_n_0 : STD_LOGIC;
  signal NLW_p_reg_reg_CARRYCASCOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_reg_MULTSIGNOUT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_reg_OVERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_reg_PATTERNBDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_reg_PATTERNDETECT_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_reg_UNDERFLOW_UNCONNECTED : STD_LOGIC;
  signal NLW_p_reg_reg_ACOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 29 downto 0 );
  signal NLW_p_reg_reg_BCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 17 downto 0 );
  signal NLW_p_reg_reg_CARRYOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_p_reg_reg_P_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 16 );
  signal NLW_p_reg_reg_PCOUT_UNCONNECTED : STD_LOGIC_VECTOR ( 47 downto 0 );
begin
  P(15 downto 0) <= \^p\(15 downto 0);
p_reg_reg: unisim.vcomponents.DSP48E1
    generic map(
      ACASCREG => 1,
      ADREG => 1,
      ALUMODEREG => 0,
      AREG => 1,
      AUTORESET_PATDET => "NO_RESET",
      A_INPUT => "DIRECT",
      BCASCREG => 2,
      BREG => 2,
      B_INPUT => "DIRECT",
      CARRYINREG => 0,
      CARRYINSELREG => 0,
      CREG => 1,
      DREG => 1,
      INMODEREG => 0,
      MASK => X"3FFFFFFFFFFF",
      MREG => 1,
      OPMODEREG => 0,
      PATTERN => X"000000000000",
      PREG => 1,
      SEL_MASK => "MASK",
      SEL_PATTERN => "PATTERN",
      USE_DPORT => false,
      USE_MULT => "MULTIPLY",
      USE_PATTERN_DETECT => "NO_PATDET",
      USE_SIMD => "ONE48"
    )
        port map (
      A(29) => DOBDO(7),
      A(28) => DOBDO(7),
      A(27) => DOBDO(7),
      A(26) => DOBDO(7),
      A(25) => DOBDO(7),
      A(24) => DOBDO(7),
      A(23) => DOBDO(7),
      A(22) => DOBDO(7),
      A(21) => DOBDO(7),
      A(20) => DOBDO(7),
      A(19) => DOBDO(7),
      A(18) => DOBDO(7),
      A(17) => DOBDO(7),
      A(16) => DOBDO(7),
      A(15) => DOBDO(7),
      A(14) => DOBDO(7),
      A(13) => DOBDO(7),
      A(12) => DOBDO(7),
      A(11) => DOBDO(7),
      A(10) => DOBDO(7),
      A(9) => DOBDO(7),
      A(8) => DOBDO(7),
      A(7 downto 0) => DOBDO(7 downto 0),
      ACIN(29 downto 0) => B"000000000000000000000000000000",
      ACOUT(29 downto 0) => NLW_p_reg_reg_ACOUT_UNCONNECTED(29 downto 0),
      ALUMODE(3 downto 0) => B"0000",
      B(17) => B(4),
      B(16) => B(4),
      B(15) => B(4),
      B(14) => B(4),
      B(13) => B(4),
      B(12) => B(4),
      B(11) => B(4),
      B(10) => B(4),
      B(9) => B(4),
      B(8) => B(4),
      B(7) => B(4),
      B(6) => B(4),
      B(5) => B(4),
      B(4 downto 0) => B(4 downto 0),
      BCIN(17 downto 0) => B"000000000000000000",
      BCOUT(17 downto 0) => NLW_p_reg_reg_BCOUT_UNCONNECTED(17 downto 0),
      C(47) => \^p\(15),
      C(46) => \^p\(15),
      C(45) => \^p\(15),
      C(44) => \^p\(15),
      C(43) => \^p\(15),
      C(42) => \^p\(15),
      C(41) => \^p\(15),
      C(40) => \^p\(15),
      C(39) => \^p\(15),
      C(38) => \^p\(15),
      C(37) => \^p\(15),
      C(36) => \^p\(15),
      C(35) => \^p\(15),
      C(34) => \^p\(15),
      C(33) => \^p\(15),
      C(32) => \^p\(15),
      C(31) => \^p\(15),
      C(30) => \^p\(15),
      C(29) => \^p\(15),
      C(28) => \^p\(15),
      C(27) => \^p\(15),
      C(26) => \^p\(15),
      C(25) => \^p\(15),
      C(24) => \^p\(15),
      C(23) => \^p\(15),
      C(22) => \^p\(15),
      C(21) => \^p\(15),
      C(20) => \^p\(15),
      C(19) => \^p\(15),
      C(18) => \^p\(15),
      C(17) => \^p\(15),
      C(16) => \^p\(15),
      C(15 downto 0) => \^p\(15 downto 0),
      CARRYCASCIN => '0',
      CARRYCASCOUT => NLW_p_reg_reg_CARRYCASCOUT_UNCONNECTED,
      CARRYIN => '0',
      CARRYINSEL(2 downto 0) => B"000",
      CARRYOUT(3 downto 0) => NLW_p_reg_reg_CARRYOUT_UNCONNECTED(3 downto 0),
      CEA1 => '0',
      CEA2 => '1',
      CEAD => '0',
      CEALUMODE => '0',
      CEB1 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      CEB2 => '1',
      CEC => E(0),
      CECARRYIN => '0',
      CECTRL => '0',
      CED => '0',
      CEINMODE => '0',
      CEM => '1',
      CEP => '1',
      CLK => ap_clk,
      D(24 downto 0) => B"0000000000000000000000000",
      INMODE(4 downto 0) => B"00000",
      MULTSIGNIN => '0',
      MULTSIGNOUT => NLW_p_reg_reg_MULTSIGNOUT_UNCONNECTED,
      OPMODE(6 downto 5) => B"01",
      OPMODE(4) => p_reg_reg_i_7_n_0,
      OPMODE(3 downto 0) => B"0101",
      OVERFLOW => NLW_p_reg_reg_OVERFLOW_UNCONNECTED,
      P(47 downto 16) => NLW_p_reg_reg_P_UNCONNECTED(47 downto 16),
      P(15 downto 0) => \^p\(15 downto 0),
      PATTERNBDETECT => NLW_p_reg_reg_PATTERNBDETECT_UNCONNECTED,
      PATTERNDETECT => NLW_p_reg_reg_PATTERNDETECT_UNCONNECTED,
      PCIN(47 downto 0) => B"000000000000000000000000000000000000000000000000",
      PCOUT(47 downto 0) => NLW_p_reg_reg_PCOUT_UNCONNECTED(47 downto 0),
      RSTA => '0',
      RSTALLCARRYIN => '0',
      RSTALUMODE => '0',
      RSTB => '0',
      RSTC => SR(0),
      RSTCTRL => '0',
      RSTD => '0',
      RSTINMODE => '0',
      RSTM => '0',
      RSTP => '0',
      UNDERFLOW => NLW_p_reg_reg_UNDERFLOW_UNCONNECTED
    );
p_reg_reg_i_7: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => E(0),
      O => p_reg_reg_i_7_n_0
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fir_shift_reg_V is
  port (
    DOBDO : out STD_LOGIC_VECTOR ( 7 downto 0 );
    ap_clk : in STD_LOGIC;
    WEA : in STD_LOGIC_VECTOR ( 0 to 0 );
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg : in STD_LOGIC;
    ADDRARDADDR : in STD_LOGIC_VECTOR ( 6 downto 0 );
    ADDRBWRADDR : in STD_LOGIC_VECTOR ( 6 downto 0 );
    x : in STD_LOGIC_VECTOR ( 7 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fir_shift_reg_V : entity is "fir_shift_reg_V";
end bd_0_hls_inst_0_fir_shift_reg_V;

architecture STRUCTURE of bd_0_hls_inst_0_fir_shift_reg_V is
  signal \^dobdo\ : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal shift_reg_V_d0 : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal NLW_ram_reg_DOADO_UNCONNECTED : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal NLW_ram_reg_DOBDO_UNCONNECTED : STD_LOGIC_VECTOR ( 15 downto 8 );
  signal NLW_ram_reg_DOPADOP_UNCONNECTED : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal NLW_ram_reg_DOPBDOP_UNCONNECTED : STD_LOGIC_VECTOR ( 1 downto 0 );
  attribute \MEM.PORTA.DATA_BIT_LAYOUT\ : string;
  attribute \MEM.PORTA.DATA_BIT_LAYOUT\ of ram_reg : label is "p0_d8";
  attribute \MEM.PORTB.DATA_BIT_LAYOUT\ : string;
  attribute \MEM.PORTB.DATA_BIT_LAYOUT\ of ram_reg : label is "p0_d8";
  attribute METHODOLOGY_DRC_VIOS : string;
  attribute METHODOLOGY_DRC_VIOS of ram_reg : label is "{SYNTH-6 {cell *THIS*}}";
  attribute RTL_RAM_BITS : integer;
  attribute RTL_RAM_BITS of ram_reg : label is 1024;
  attribute RTL_RAM_NAME : string;
  attribute RTL_RAM_NAME of ram_reg : label is "shift_reg_V_U/ram";
  attribute RTL_RAM_TYPE : string;
  attribute RTL_RAM_TYPE of ram_reg : label is "RAM_TDP";
  attribute ram_addr_begin : integer;
  attribute ram_addr_begin of ram_reg : label is 0;
  attribute ram_addr_end : integer;
  attribute ram_addr_end of ram_reg : label is 1023;
  attribute ram_offset : integer;
  attribute ram_offset of ram_reg : label is 0;
  attribute ram_slice_begin : integer;
  attribute ram_slice_begin of ram_reg : label is 0;
  attribute ram_slice_end : integer;
  attribute ram_slice_end of ram_reg : label is 7;
begin
  DOBDO(7 downto 0) <= \^dobdo\(7 downto 0);
ram_reg: unisim.vcomponents.RAMB18E1
    generic map(
      DOA_REG => 0,
      DOB_REG => 0,
      INITP_00 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INITP_01 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INITP_02 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INITP_03 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INITP_04 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INITP_05 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INITP_06 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INITP_07 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_00 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_01 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_02 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_03 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_04 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_05 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_06 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_07 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_08 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_09 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_0A => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_0B => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_0C => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_0D => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_0E => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_0F => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_10 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_11 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_12 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_13 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_14 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_15 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_16 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_17 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_18 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_19 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_1A => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_1B => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_1C => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_1D => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_1E => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_1F => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_20 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_21 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_22 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_23 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_24 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_25 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_26 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_27 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_28 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_29 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_2A => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_2B => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_2C => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_2D => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_2E => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_2F => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_30 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_31 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_32 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_33 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_34 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_35 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_36 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_37 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_38 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_39 => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_3A => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_3B => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_3C => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_3D => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_3E => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_3F => X"0000000000000000000000000000000000000000000000000000000000000000",
      INIT_A => X"00000",
      INIT_B => X"00000",
      RAM_MODE => "TDP",
      RDADDR_COLLISION_HWCONFIG => "DELAYED_WRITE",
      READ_WIDTH_A => 18,
      READ_WIDTH_B => 18,
      RSTREG_PRIORITY_A => "RSTREG",
      RSTREG_PRIORITY_B => "RSTREG",
      SIM_COLLISION_CHECK => "ALL",
      SIM_DEVICE => "7SERIES",
      SRVAL_A => X"00000",
      SRVAL_B => X"00000",
      WRITE_MODE_A => "READ_FIRST",
      WRITE_MODE_B => "WRITE_FIRST",
      WRITE_WIDTH_A => 18,
      WRITE_WIDTH_B => 18
    )
        port map (
      ADDRARDADDR(13 downto 11) => B"000",
      ADDRARDADDR(10 downto 4) => ADDRARDADDR(6 downto 0),
      ADDRARDADDR(3 downto 0) => B"0000",
      ADDRBWRADDR(13 downto 11) => B"000",
      ADDRBWRADDR(10 downto 4) => ADDRBWRADDR(6 downto 0),
      ADDRBWRADDR(3 downto 0) => B"0000",
      CLKARDCLK => ap_clk,
      CLKBWRCLK => ap_clk,
      DIADI(15 downto 8) => B"00000000",
      DIADI(7 downto 0) => shift_reg_V_d0(7 downto 0),
      DIBDI(15 downto 0) => B"0000000011111111",
      DIPADIP(1 downto 0) => B"00",
      DIPBDIP(1 downto 0) => B"00",
      DOADO(15 downto 0) => NLW_ram_reg_DOADO_UNCONNECTED(15 downto 0),
      DOBDO(15 downto 8) => NLW_ram_reg_DOBDO_UNCONNECTED(15 downto 8),
      DOBDO(7 downto 0) => \^dobdo\(7 downto 0),
      DOPADOP(1 downto 0) => NLW_ram_reg_DOPADOP_UNCONNECTED(1 downto 0),
      DOPBDOP(1 downto 0) => NLW_ram_reg_DOPBDOP_UNCONNECTED(1 downto 0),
      ENARDEN => WEA(0),
      ENBWREN => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      REGCEAREGCE => '0',
      REGCEB => '0',
      RSTRAMARSTRAM => '0',
      RSTRAMB => '0',
      RSTREGARSTREG => '0',
      RSTREGB => '0',
      WEA(1) => WEA(0),
      WEA(0) => WEA(0),
      WEBWE(3 downto 0) => B"0000"
    );
ram_reg_i_16: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => x(7),
      I1 => Q(0),
      I2 => \^dobdo\(7),
      O => shift_reg_V_d0(7)
    );
ram_reg_i_17: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => x(6),
      I1 => Q(0),
      I2 => \^dobdo\(6),
      O => shift_reg_V_d0(6)
    );
ram_reg_i_18: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => x(5),
      I1 => Q(0),
      I2 => \^dobdo\(5),
      O => shift_reg_V_d0(5)
    );
ram_reg_i_19: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => x(4),
      I1 => Q(0),
      I2 => \^dobdo\(4),
      O => shift_reg_V_d0(4)
    );
ram_reg_i_20: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => x(3),
      I1 => Q(0),
      I2 => \^dobdo\(3),
      O => shift_reg_V_d0(3)
    );
ram_reg_i_21: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => x(2),
      I1 => Q(0),
      I2 => \^dobdo\(2),
      O => shift_reg_V_d0(2)
    );
ram_reg_i_22: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => x(1),
      I1 => Q(0),
      I2 => \^dobdo\(1),
      O => shift_reg_V_d0(1)
    );
ram_reg_i_23: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => x(0),
      I1 => Q(0),
      I2 => \^dobdo\(0),
      O => shift_reg_V_d0(0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1 is
  port (
    P : out STD_LOGIC_VECTOR ( 15 downto 0 );
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg : in STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    ap_clk : in STD_LOGIC;
    SR : in STD_LOGIC_VECTOR ( 0 to 0 );
    B : in STD_LOGIC_VECTOR ( 4 downto 0 );
    DOBDO : in STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1 : entity is "fir_mac_muladd_8s_5s_16s_16_4_1";
end bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1;

architecture STRUCTURE of bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1 is
begin
fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0_U: entity work.bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1_DSP48_0
     port map (
      B(4 downto 0) => B(4 downto 0),
      DOBDO(7 downto 0) => DOBDO(7 downto 0),
      E(0) => E(0),
      P(15 downto 0) => P(15 downto 0),
      SR(0) => SR(0),
      ap_clk => ap_clk,
      grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fir_fir_Pipeline_VITIS_LOOP_25_1 is
  port (
    y : out STD_LOGIC_VECTOR ( 15 downto 0 );
    ADDRBWRADDR : out STD_LOGIC_VECTOR ( 6 downto 0 );
    D : out STD_LOGIC_VECTOR ( 1 downto 0 );
    WEA : out STD_LOGIC_VECTOR ( 0 to 0 );
    \lhs_fu_34_reg[6]_0\ : out STD_LOGIC;
    ADDRARDADDR : out STD_LOGIC_VECTOR ( 6 downto 0 );
    ap_rst : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    x : in STD_LOGIC_VECTOR ( 14 downto 0 );
    grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 2 downto 0 );
    DOBDO : in STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fir_fir_Pipeline_VITIS_LOOP_25_1 : entity is "fir_fir_Pipeline_VITIS_LOOP_25_1";
end bd_0_hls_inst_0_fir_fir_Pipeline_VITIS_LOOP_25_1;

architecture STRUCTURE of bd_0_hls_inst_0_fir_fir_Pipeline_VITIS_LOOP_25_1 is
  signal \^addrbwraddr\ : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal acc_V_fu_38 : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal ap_enable_reg_pp0_iter1 : STD_LOGIC;
  signal ap_enable_reg_pp0_iter2 : STD_LOGIC;
  signal ap_enable_reg_pp0_iter3 : STD_LOGIC;
  signal ap_enable_reg_pp0_iter4 : STD_LOGIC;
  signal ap_loop_exit_ready_pp0_iter2_reg_reg_srl2_n_0 : STD_LOGIC;
  signal ap_loop_exit_ready_pp0_iter3_reg : STD_LOGIC;
  signal ap_loop_init : STD_LOGIC;
  signal flow_control_loop_pipe_sequential_init_U_n_14 : STD_LOGIC;
  signal flow_control_loop_pipe_sequential_init_U_n_15 : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0 : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal lhs_fu_340 : STD_LOGIC;
  signal lhs_fu_341 : STD_LOGIC;
  signal lhs_fu_34_reg : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_0 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_1 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_10 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_11 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_12 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_13 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_14 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_15 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_2 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_3 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_4 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_5 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_6 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_7 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_8 : STD_LOGIC;
  signal mac_muladd_8s_5s_16s_16_4_1_U1_n_9 : STD_LOGIC;
  signal p_0_out : STD_LOGIC_VECTOR ( 4 downto 0 );
  signal ram_reg_i_24_n_0 : STD_LOGIC;
  signal ram_reg_i_25_n_0 : STD_LOGIC;
  signal \y[0]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \y[0]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \y[0]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \y[0]_INST_0_n_0\ : STD_LOGIC;
  signal \y[0]_INST_0_n_1\ : STD_LOGIC;
  signal \y[0]_INST_0_n_2\ : STD_LOGIC;
  signal \y[0]_INST_0_n_3\ : STD_LOGIC;
  signal \y[12]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \y[12]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \y[12]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \y[12]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \y[12]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \y[12]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \y[12]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \y[12]_INST_0_n_1\ : STD_LOGIC;
  signal \y[12]_INST_0_n_2\ : STD_LOGIC;
  signal \y[12]_INST_0_n_3\ : STD_LOGIC;
  signal \y[4]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \y[4]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \y[4]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \y[4]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \y[4]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \y[4]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \y[4]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \y[4]_INST_0_i_8_n_0\ : STD_LOGIC;
  signal \y[4]_INST_0_n_0\ : STD_LOGIC;
  signal \y[4]_INST_0_n_1\ : STD_LOGIC;
  signal \y[4]_INST_0_n_2\ : STD_LOGIC;
  signal \y[4]_INST_0_n_3\ : STD_LOGIC;
  signal \y[8]_INST_0_i_1_n_0\ : STD_LOGIC;
  signal \y[8]_INST_0_i_2_n_0\ : STD_LOGIC;
  signal \y[8]_INST_0_i_3_n_0\ : STD_LOGIC;
  signal \y[8]_INST_0_i_4_n_0\ : STD_LOGIC;
  signal \y[8]_INST_0_i_5_n_0\ : STD_LOGIC;
  signal \y[8]_INST_0_i_6_n_0\ : STD_LOGIC;
  signal \y[8]_INST_0_i_7_n_0\ : STD_LOGIC;
  signal \y[8]_INST_0_i_8_n_0\ : STD_LOGIC;
  signal \y[8]_INST_0_n_0\ : STD_LOGIC;
  signal \y[8]_INST_0_n_1\ : STD_LOGIC;
  signal \y[8]_INST_0_n_2\ : STD_LOGIC;
  signal \y[8]_INST_0_n_3\ : STD_LOGIC;
  signal \NLW_y[12]_INST_0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  attribute srl_name : string;
  attribute srl_name of ap_loop_exit_ready_pp0_iter2_reg_reg_srl2 : label is "inst/\grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63/ap_loop_exit_ready_pp0_iter2_reg_reg_srl2 ";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \y[0]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \y[12]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \y[4]_INST_0\ : label is 35;
  attribute ADDER_THRESHOLD of \y[8]_INST_0\ : label is 35;
begin
  ADDRBWRADDR(6 downto 0) <= \^addrbwraddr\(6 downto 0);
\acc_V_fu_38_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_15,
      Q => acc_V_fu_38(0),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_5,
      Q => acc_V_fu_38(10),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_4,
      Q => acc_V_fu_38(11),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_3,
      Q => acc_V_fu_38(12),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_2,
      Q => acc_V_fu_38(13),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_1,
      Q => acc_V_fu_38(14),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_0,
      Q => acc_V_fu_38(15),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_14,
      Q => acc_V_fu_38(1),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_13,
      Q => acc_V_fu_38(2),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_12,
      Q => acc_V_fu_38(3),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_11,
      Q => acc_V_fu_38(4),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_10,
      Q => acc_V_fu_38(5),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_9,
      Q => acc_V_fu_38(6),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_8,
      Q => acc_V_fu_38(7),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_7,
      Q => acc_V_fu_38(8),
      R => ap_loop_init
    );
\acc_V_fu_38_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => ap_enable_reg_pp0_iter4,
      D => mac_muladd_8s_5s_16s_16_4_1_U1_n_6,
      Q => acc_V_fu_38(9),
      R => ap_loop_init
    );
ap_enable_reg_pp0_iter1_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => lhs_fu_340,
      Q => ap_enable_reg_pp0_iter1,
      R => ap_rst
    );
ap_enable_reg_pp0_iter2_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_enable_reg_pp0_iter1,
      Q => ap_enable_reg_pp0_iter2,
      R => ap_rst
    );
ap_enable_reg_pp0_iter3_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_enable_reg_pp0_iter2,
      Q => ap_enable_reg_pp0_iter3,
      R => ap_rst
    );
ap_enable_reg_pp0_iter4_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_enable_reg_pp0_iter3,
      Q => ap_enable_reg_pp0_iter4,
      R => ap_rst
    );
ap_loop_exit_ready_pp0_iter2_reg_reg_srl2: unisim.vcomponents.SRL16E
     port map (
      A0 => '1',
      A1 => '0',
      A2 => '0',
      A3 => '0',
      CE => '1',
      CLK => ap_clk,
      D => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready,
      Q => ap_loop_exit_ready_pp0_iter2_reg_reg_srl2_n_0
    );
\ap_loop_exit_ready_pp0_iter3_reg_reg__0\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => ap_loop_exit_ready_pp0_iter2_reg_reg_srl2_n_0,
      Q => ap_loop_exit_ready_pp0_iter3_reg,
      R => '0'
    );
flow_control_loop_pipe_sequential_init_U: entity work.bd_0_hls_inst_0_fir_flow_control_loop_pipe_sequential_init
     port map (
      ADDRBWRADDR(6 downto 0) => \^addrbwraddr\(6 downto 0),
      B(4 downto 0) => p_0_out(4 downto 0),
      D(1 downto 0) => D(1 downto 0),
      Q(1 downto 0) => Q(1 downto 0),
      SR(0) => ap_loop_init,
      ap_clk => ap_clk,
      ap_loop_exit_ready_pp0_iter3_reg => ap_loop_exit_ready_pp0_iter3_reg,
      ap_rst => ap_rst,
      ap_start => ap_start,
      grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_ready,
      grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg => flow_control_loop_pipe_sequential_init_U_n_14,
      grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg_0 => ram_reg_i_24_n_0,
      grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(0) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(0),
      lhs_fu_340 => lhs_fu_340,
      lhs_fu_341 => lhs_fu_341,
      lhs_fu_34_reg(6 downto 0) => lhs_fu_34_reg(6 downto 0),
      \lhs_fu_34_reg[6]_0\ => flow_control_loop_pipe_sequential_init_U_n_15,
      lhs_fu_34_reg_5_sp_1 => ram_reg_i_25_n_0,
      lhs_fu_34_reg_6_sp_1 => \lhs_fu_34_reg[6]_0\
    );
\lhs_fu_34_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => lhs_fu_340,
      D => \^addrbwraddr\(0),
      Q => lhs_fu_34_reg(0),
      R => '0'
    );
\lhs_fu_34_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => lhs_fu_340,
      D => \^addrbwraddr\(1),
      Q => lhs_fu_34_reg(1),
      R => '0'
    );
\lhs_fu_34_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => lhs_fu_340,
      D => \^addrbwraddr\(2),
      Q => lhs_fu_34_reg(2),
      R => '0'
    );
\lhs_fu_34_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => lhs_fu_340,
      D => \^addrbwraddr\(3),
      Q => lhs_fu_34_reg(3),
      R => '0'
    );
\lhs_fu_34_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => lhs_fu_340,
      D => \^addrbwraddr\(4),
      Q => lhs_fu_34_reg(4),
      R => '0'
    );
\lhs_fu_34_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => lhs_fu_340,
      D => \^addrbwraddr\(5),
      Q => lhs_fu_34_reg(5),
      R => '0'
    );
\lhs_fu_34_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => lhs_fu_340,
      D => \^addrbwraddr\(6),
      Q => lhs_fu_34_reg(6),
      R => '0'
    );
mac_muladd_8s_5s_16s_16_4_1_U1: entity work.bd_0_hls_inst_0_fir_mac_muladd_8s_5s_16s_16_4_1
     port map (
      B(4 downto 0) => p_0_out(4 downto 0),
      DOBDO(7 downto 0) => DOBDO(7 downto 0),
      E(0) => ap_enable_reg_pp0_iter4,
      P(15) => mac_muladd_8s_5s_16s_16_4_1_U1_n_0,
      P(14) => mac_muladd_8s_5s_16s_16_4_1_U1_n_1,
      P(13) => mac_muladd_8s_5s_16s_16_4_1_U1_n_2,
      P(12) => mac_muladd_8s_5s_16s_16_4_1_U1_n_3,
      P(11) => mac_muladd_8s_5s_16s_16_4_1_U1_n_4,
      P(10) => mac_muladd_8s_5s_16s_16_4_1_U1_n_5,
      P(9) => mac_muladd_8s_5s_16s_16_4_1_U1_n_6,
      P(8) => mac_muladd_8s_5s_16s_16_4_1_U1_n_7,
      P(7) => mac_muladd_8s_5s_16s_16_4_1_U1_n_8,
      P(6) => mac_muladd_8s_5s_16s_16_4_1_U1_n_9,
      P(5) => mac_muladd_8s_5s_16s_16_4_1_U1_n_10,
      P(4) => mac_muladd_8s_5s_16s_16_4_1_U1_n_11,
      P(3) => mac_muladd_8s_5s_16s_16_4_1_U1_n_12,
      P(2) => mac_muladd_8s_5s_16s_16_4_1_U1_n_13,
      P(1) => mac_muladd_8s_5s_16s_16_4_1_U1_n_14,
      P(0) => mac_muladd_8s_5s_16s_16_4_1_U1_n_15,
      SR(0) => ap_loop_init,
      ap_clk => ap_clk,
      grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg
    );
ram_reg_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"F8"
    )
        port map (
      I0 => Q(1),
      I1 => ap_enable_reg_pp0_iter1,
      I2 => Q(2),
      O => WEA(0)
    );
ram_reg_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(6),
      I1 => Q(2),
      O => ADDRARDADDR(6)
    );
ram_reg_i_24: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => lhs_fu_34_reg(4),
      I1 => lhs_fu_34_reg(2),
      I2 => lhs_fu_34_reg(0),
      I3 => lhs_fu_34_reg(1),
      I4 => lhs_fu_34_reg(3),
      I5 => lhs_fu_34_reg(5),
      O => ram_reg_i_24_n_0
    );
ram_reg_i_25: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFFFFE"
    )
        port map (
      I0 => lhs_fu_34_reg(3),
      I1 => lhs_fu_34_reg(1),
      I2 => lhs_fu_34_reg(0),
      I3 => lhs_fu_34_reg(2),
      I4 => lhs_fu_34_reg(4),
      O => ram_reg_i_25_n_0
    );
ram_reg_i_3: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(5),
      I1 => Q(2),
      O => ADDRARDADDR(5)
    );
ram_reg_i_4: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(4),
      I1 => Q(2),
      O => ADDRARDADDR(4)
    );
ram_reg_i_5: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(3),
      I1 => Q(2),
      O => ADDRARDADDR(3)
    );
ram_reg_i_6: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(2),
      I1 => Q(2),
      O => ADDRARDADDR(2)
    );
ram_reg_i_7: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(1),
      I1 => Q(2),
      O => ADDRARDADDR(1)
    );
ram_reg_i_8: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(0),
      I1 => Q(2),
      O => ADDRARDADDR(0)
    );
\y[0]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \y[0]_INST_0_n_0\,
      CO(2) => \y[0]_INST_0_n_1\,
      CO(1) => \y[0]_INST_0_n_2\,
      CO(0) => \y[0]_INST_0_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => x(2 downto 0),
      DI(0) => '0',
      O(3 downto 0) => y(3 downto 0),
      S(3) => \y[0]_INST_0_i_1_n_0\,
      S(2) => \y[0]_INST_0_i_2_n_0\,
      S(1) => \y[0]_INST_0_i_3_n_0\,
      S(0) => acc_V_fu_38(0)
    );
\y[0]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => acc_V_fu_38(3),
      I1 => x(0),
      I2 => x(2),
      O => \y[0]_INST_0_i_1_n_0\
    );
\y[0]_INST_0_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => x(1),
      I1 => acc_V_fu_38(2),
      O => \y[0]_INST_0_i_2_n_0\
    );
\y[0]_INST_0_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => x(0),
      I1 => acc_V_fu_38(1),
      O => \y[0]_INST_0_i_3_n_0\
    );
\y[12]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \y[8]_INST_0_n_0\,
      CO(3) => \NLW_y[12]_INST_0_CO_UNCONNECTED\(3),
      CO(2) => \y[12]_INST_0_n_1\,
      CO(1) => \y[12]_INST_0_n_2\,
      CO(0) => \y[12]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => '0',
      DI(2) => \y[12]_INST_0_i_1_n_0\,
      DI(1) => \y[12]_INST_0_i_2_n_0\,
      DI(0) => \y[12]_INST_0_i_3_n_0\,
      O(3 downto 0) => y(15 downto 12),
      S(3) => \y[12]_INST_0_i_4_n_0\,
      S(2) => \y[12]_INST_0_i_5_n_0\,
      S(1) => \y[12]_INST_0_i_6_n_0\,
      S(0) => \y[12]_INST_0_i_7_n_0\
    );
\y[12]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(12),
      I1 => x(10),
      I2 => acc_V_fu_38(13),
      O => \y[12]_INST_0_i_1_n_0\
    );
\y[12]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(11),
      I1 => x(9),
      I2 => acc_V_fu_38(12),
      O => \y[12]_INST_0_i_2_n_0\
    );
\y[12]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(10),
      I1 => x(8),
      I2 => acc_V_fu_38(11),
      O => \y[12]_INST_0_i_3_n_0\
    );
\y[12]_INST_0_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"3CC369966996C33C"
    )
        port map (
      I0 => acc_V_fu_38(14),
      I1 => acc_V_fu_38(15),
      I2 => x(12),
      I3 => x(14),
      I4 => x(13),
      I5 => x(11),
      O => \y[12]_INST_0_i_4_n_0\
    );
\y[12]_INST_0_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(13),
      I1 => x(10),
      I2 => x(12),
      I3 => acc_V_fu_38(14),
      I4 => x(11),
      I5 => x(13),
      O => \y[12]_INST_0_i_5_n_0\
    );
\y[12]_INST_0_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(12),
      I1 => x(9),
      I2 => x(11),
      I3 => acc_V_fu_38(13),
      I4 => x(10),
      I5 => x(12),
      O => \y[12]_INST_0_i_6_n_0\
    );
\y[12]_INST_0_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(11),
      I1 => x(8),
      I2 => x(10),
      I3 => acc_V_fu_38(12),
      I4 => x(9),
      I5 => x(11),
      O => \y[12]_INST_0_i_7_n_0\
    );
\y[4]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \y[0]_INST_0_n_0\,
      CO(3) => \y[4]_INST_0_n_0\,
      CO(2) => \y[4]_INST_0_n_1\,
      CO(1) => \y[4]_INST_0_n_2\,
      CO(0) => \y[4]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => \y[4]_INST_0_i_1_n_0\,
      DI(2) => \y[4]_INST_0_i_2_n_0\,
      DI(1) => \y[4]_INST_0_i_3_n_0\,
      DI(0) => \y[4]_INST_0_i_4_n_0\,
      O(3 downto 0) => y(7 downto 4),
      S(3) => \y[4]_INST_0_i_5_n_0\,
      S(2) => \y[4]_INST_0_i_6_n_0\,
      S(1) => \y[4]_INST_0_i_7_n_0\,
      S(0) => \y[4]_INST_0_i_8_n_0\
    );
\y[4]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(5),
      I1 => x(3),
      I2 => acc_V_fu_38(6),
      O => \y[4]_INST_0_i_1_n_0\
    );
\y[4]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(4),
      I1 => x(2),
      I2 => acc_V_fu_38(5),
      O => \y[4]_INST_0_i_2_n_0\
    );
\y[4]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(3),
      I1 => x(1),
      I2 => acc_V_fu_38(4),
      O => \y[4]_INST_0_i_3_n_0\
    );
\y[4]_INST_0_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => x(3),
      I1 => acc_V_fu_38(4),
      I2 => x(1),
      O => \y[4]_INST_0_i_4_n_0\
    );
\y[4]_INST_0_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(6),
      I1 => x(3),
      I2 => x(5),
      I3 => acc_V_fu_38(7),
      I4 => x(4),
      I5 => x(6),
      O => \y[4]_INST_0_i_5_n_0\
    );
\y[4]_INST_0_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(5),
      I1 => x(2),
      I2 => x(4),
      I3 => acc_V_fu_38(6),
      I4 => x(3),
      I5 => x(5),
      O => \y[4]_INST_0_i_6_n_0\
    );
\y[4]_INST_0_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(4),
      I1 => x(1),
      I2 => x(3),
      I3 => acc_V_fu_38(5),
      I4 => x(2),
      I5 => x(4),
      O => \y[4]_INST_0_i_7_n_0\
    );
\y[4]_INST_0_i_8\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"69969696"
    )
        port map (
      I0 => x(1),
      I1 => acc_V_fu_38(4),
      I2 => x(3),
      I3 => x(0),
      I4 => acc_V_fu_38(3),
      O => \y[4]_INST_0_i_8_n_0\
    );
\y[8]_INST_0\: unisim.vcomponents.CARRY4
     port map (
      CI => \y[4]_INST_0_n_0\,
      CO(3) => \y[8]_INST_0_n_0\,
      CO(2) => \y[8]_INST_0_n_1\,
      CO(1) => \y[8]_INST_0_n_2\,
      CO(0) => \y[8]_INST_0_n_3\,
      CYINIT => '0',
      DI(3) => \y[8]_INST_0_i_1_n_0\,
      DI(2) => \y[8]_INST_0_i_2_n_0\,
      DI(1) => \y[8]_INST_0_i_3_n_0\,
      DI(0) => \y[8]_INST_0_i_4_n_0\,
      O(3 downto 0) => y(11 downto 8),
      S(3) => \y[8]_INST_0_i_5_n_0\,
      S(2) => \y[8]_INST_0_i_6_n_0\,
      S(1) => \y[8]_INST_0_i_7_n_0\,
      S(0) => \y[8]_INST_0_i_8_n_0\
    );
\y[8]_INST_0_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(9),
      I1 => x(7),
      I2 => acc_V_fu_38(10),
      O => \y[8]_INST_0_i_1_n_0\
    );
\y[8]_INST_0_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(8),
      I1 => x(6),
      I2 => acc_V_fu_38(9),
      O => \y[8]_INST_0_i_2_n_0\
    );
\y[8]_INST_0_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(7),
      I1 => x(5),
      I2 => acc_V_fu_38(8),
      O => \y[8]_INST_0_i_3_n_0\
    );
\y[8]_INST_0_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"E8"
    )
        port map (
      I0 => x(6),
      I1 => x(4),
      I2 => acc_V_fu_38(7),
      O => \y[8]_INST_0_i_4_n_0\
    );
\y[8]_INST_0_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(10),
      I1 => x(7),
      I2 => x(9),
      I3 => acc_V_fu_38(11),
      I4 => x(8),
      I5 => x(10),
      O => \y[8]_INST_0_i_5_n_0\
    );
\y[8]_INST_0_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(9),
      I1 => x(6),
      I2 => x(8),
      I3 => acc_V_fu_38(10),
      I4 => x(7),
      I5 => x(9),
      O => \y[8]_INST_0_i_6_n_0\
    );
\y[8]_INST_0_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(8),
      I1 => x(5),
      I2 => x(7),
      I3 => acc_V_fu_38(9),
      I4 => x(6),
      I5 => x(8),
      O => \y[8]_INST_0_i_7_n_0\
    );
\y[8]_INST_0_i_8\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"17E8E817E81717E8"
    )
        port map (
      I0 => acc_V_fu_38(7),
      I1 => x(4),
      I2 => x(6),
      I3 => acc_V_fu_38(8),
      I4 => x(5),
      I5 => x(7),
      O => \y[8]_INST_0_i_8_n_0\
    );
\zext_ln573_reg_180_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => ap_clk,
      CE => '1',
      D => flow_control_loop_pipe_sequential_init_U_n_15,
      Q => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(0),
      R => '0'
    );
\zext_ln573_reg_180_reg[1]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => lhs_fu_341,
      D => lhs_fu_34_reg(1),
      Q => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(1),
      S => flow_control_loop_pipe_sequential_init_U_n_14
    );
\zext_ln573_reg_180_reg[2]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => lhs_fu_341,
      D => lhs_fu_34_reg(2),
      Q => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(2),
      S => flow_control_loop_pipe_sequential_init_U_n_14
    );
\zext_ln573_reg_180_reg[3]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => lhs_fu_341,
      D => lhs_fu_34_reg(3),
      Q => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(3),
      S => flow_control_loop_pipe_sequential_init_U_n_14
    );
\zext_ln573_reg_180_reg[4]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => lhs_fu_341,
      D => lhs_fu_34_reg(4),
      Q => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(4),
      S => flow_control_loop_pipe_sequential_init_U_n_14
    );
\zext_ln573_reg_180_reg[5]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => lhs_fu_341,
      D => lhs_fu_34_reg(5),
      Q => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(5),
      S => flow_control_loop_pipe_sequential_init_U_n_14
    );
\zext_ln573_reg_180_reg[6]\: unisim.vcomponents.FDSE
     port map (
      C => ap_clk,
      CE => lhs_fu_341,
      D => lhs_fu_34_reg(6),
      Q => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address0(6),
      S => flow_control_loop_pipe_sequential_init_U_n_14
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0_fir is
  port (
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    y : out STD_LOGIC_VECTOR ( 31 downto 0 );
    y_ap_vld : out STD_LOGIC;
    x : in STD_LOGIC_VECTOR ( 31 downto 0 )
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of bd_0_hls_inst_0_fir : entity is "fir";
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of bd_0_hls_inst_0_fir : entity is "3'b001";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of bd_0_hls_inst_0_fir : entity is "3'b010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of bd_0_hls_inst_0_fir : entity is "3'b100";
  attribute hls_module : string;
  attribute hls_module of bd_0_hls_inst_0_fir : entity is "yes";
end bd_0_hls_inst_0_fir;

architecture STRUCTURE of bd_0_hls_inst_0_fir is
  signal \ap_CS_fsm_reg_n_0_[0]\ : STD_LOGIC;
  signal ap_CS_fsm_state2 : STD_LOGIC;
  signal ap_NS_fsm : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_26 : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_27 : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_28 : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_29 : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_30 : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_31 : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_32 : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_33 : STD_LOGIC;
  signal grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address1 : STD_LOGIC_VECTOR ( 6 downto 0 );
  signal shift_reg_V_q1 : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal shift_reg_V_we0 : STD_LOGIC;
  signal \^y\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \^y_ap_vld\ : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \ap_CS_fsm[0]_i_1\ : label is "soft_lutpair7";
  attribute FSM_ENCODING : string;
  attribute FSM_ENCODING of \ap_CS_fsm_reg[0]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[1]\ : label is "none";
  attribute FSM_ENCODING of \ap_CS_fsm_reg[2]\ : label is "none";
  attribute SOFT_HLUTNM of ap_idle_INST_0 : label is "soft_lutpair7";
begin
  ap_done <= \^y_ap_vld\;
  ap_ready <= \^y_ap_vld\;
  y(31) <= \^y\(31);
  y(30) <= \^y\(31);
  y(29) <= \^y\(31);
  y(28) <= \^y\(31);
  y(27) <= \^y\(31);
  y(26) <= \^y\(31);
  y(25) <= \^y\(31);
  y(24) <= \^y\(31);
  y(23) <= \^y\(31);
  y(22) <= \^y\(31);
  y(21) <= \^y\(31);
  y(20) <= \^y\(31);
  y(19) <= \^y\(31);
  y(18) <= \^y\(31);
  y(17) <= \^y\(31);
  y(16) <= \^y\(31);
  y(15) <= \^y\(31);
  y(14 downto 0) <= \^y\(14 downto 0);
  y_ap_vld <= \^y_ap_vld\;
\ap_CS_fsm[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0F07"
    )
        port map (
      I0 => ap_start,
      I1 => \ap_CS_fsm_reg_n_0_[0]\,
      I2 => ap_CS_fsm_state2,
      I3 => \^y_ap_vld\,
      O => ap_NS_fsm(0)
    );
\ap_CS_fsm_reg[0]\: unisim.vcomponents.FDSE
    generic map(
      INIT => '1'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(0),
      Q => \ap_CS_fsm_reg_n_0_[0]\,
      S => ap_rst
    );
\ap_CS_fsm_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(1),
      Q => ap_CS_fsm_state2,
      R => ap_rst
    );
\ap_CS_fsm_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => ap_NS_fsm(2),
      Q => \^y_ap_vld\,
      R => ap_rst
    );
ap_idle_INST_0: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \ap_CS_fsm_reg_n_0_[0]\,
      I1 => ap_start,
      O => ap_idle
    );
grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63: entity work.bd_0_hls_inst_0_fir_fir_Pipeline_VITIS_LOOP_25_1
     port map (
      ADDRARDADDR(6) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_27,
      ADDRARDADDR(5) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_28,
      ADDRARDADDR(4) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_29,
      ADDRARDADDR(3) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_30,
      ADDRARDADDR(2) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_31,
      ADDRARDADDR(1) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_32,
      ADDRARDADDR(0) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_33,
      ADDRBWRADDR(6 downto 0) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address1(6 downto 0),
      D(1 downto 0) => ap_NS_fsm(2 downto 1),
      DOBDO(7 downto 0) => shift_reg_V_q1(7 downto 0),
      Q(2) => \^y_ap_vld\,
      Q(1) => ap_CS_fsm_state2,
      Q(0) => \ap_CS_fsm_reg_n_0_[0]\,
      WEA(0) => shift_reg_V_we0,
      ap_clk => ap_clk,
      ap_rst => ap_rst,
      ap_start => ap_start,
      grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      \lhs_fu_34_reg[6]_0\ => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_26,
      x(14 downto 0) => x(14 downto 0),
      y(15) => \^y\(31),
      y(14 downto 0) => \^y\(14 downto 0)
    );
grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => ap_clk,
      CE => '1',
      D => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_26,
      Q => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      R => ap_rst
    );
shift_reg_V_U: entity work.bd_0_hls_inst_0_fir_shift_reg_V
     port map (
      ADDRARDADDR(6) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_27,
      ADDRARDADDR(5) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_28,
      ADDRARDADDR(4) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_29,
      ADDRARDADDR(3) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_30,
      ADDRARDADDR(2) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_31,
      ADDRARDADDR(1) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_32,
      ADDRARDADDR(0) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_n_33,
      ADDRBWRADDR(6 downto 0) => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_shift_reg_V_address1(6 downto 0),
      DOBDO(7 downto 0) => shift_reg_V_q1(7 downto 0),
      Q(0) => \^y_ap_vld\,
      WEA(0) => shift_reg_V_we0,
      ap_clk => ap_clk,
      grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg => grp_fir_Pipeline_VITIS_LOOP_25_1_fu_63_ap_start_reg,
      x(7 downto 0) => x(7 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity bd_0_hls_inst_0 is
  port (
    y_ap_vld : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    y : out STD_LOGIC_VECTOR ( 31 downto 0 );
    x : in STD_LOGIC_VECTOR ( 31 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of bd_0_hls_inst_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of bd_0_hls_inst_0 : entity is "bd_0_hls_inst_0,fir,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of bd_0_hls_inst_0 : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of bd_0_hls_inst_0 : entity is "HLS";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of bd_0_hls_inst_0 : entity is "fir,Vivado 2021.1.1";
  attribute hls_module : string;
  attribute hls_module of bd_0_hls_inst_0 : entity is "yes";
end bd_0_hls_inst_0;

architecture STRUCTURE of bd_0_hls_inst_0 is
  attribute SDX_KERNEL : string;
  attribute SDX_KERNEL of inst : label is "true";
  attribute SDX_KERNEL_SYNTH_INST : string;
  attribute SDX_KERNEL_SYNTH_INST of inst : label is "inst";
  attribute SDX_KERNEL_TYPE : string;
  attribute SDX_KERNEL_TYPE of inst : label is "hls";
  attribute ap_ST_fsm_state1 : string;
  attribute ap_ST_fsm_state1 of inst : label is "3'b001";
  attribute ap_ST_fsm_state2 : string;
  attribute ap_ST_fsm_state2 of inst : label is "3'b010";
  attribute ap_ST_fsm_state3 : string;
  attribute ap_ST_fsm_state3 of inst : label is "3'b100";
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of ap_clk : signal is "xilinx.com:signal:clock:1.0 ap_clk CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of ap_clk : signal is "XIL_INTERFACENAME ap_clk, ASSOCIATED_RESET ap_rst, FREQ_HZ 100000000.0, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN bd_0_ap_clk_0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of ap_done : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done";
  attribute X_INTERFACE_INFO of ap_idle : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle";
  attribute X_INTERFACE_INFO of ap_ready : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready";
  attribute X_INTERFACE_INFO of ap_rst : signal is "xilinx.com:signal:reset:1.0 ap_rst RST";
  attribute X_INTERFACE_PARAMETER of ap_rst : signal is "XIL_INTERFACENAME ap_rst, POLARITY ACTIVE_HIGH, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of ap_start : signal is "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start";
  attribute X_INTERFACE_INFO of x : signal is "xilinx.com:signal:data:1.0 x DATA";
  attribute X_INTERFACE_PARAMETER of x : signal is "XIL_INTERFACENAME x, LAYERED_METADATA undef";
  attribute X_INTERFACE_INFO of y : signal is "xilinx.com:signal:data:1.0 y DATA";
  attribute X_INTERFACE_PARAMETER of y : signal is "XIL_INTERFACENAME y, LAYERED_METADATA undef";
begin
inst: entity work.bd_0_hls_inst_0_fir
     port map (
      ap_clk => ap_clk,
      ap_done => ap_done,
      ap_idle => ap_idle,
      ap_ready => ap_ready,
      ap_rst => ap_rst,
      ap_start => ap_start,
      x(31 downto 15) => B"00000000000000000",
      x(14 downto 0) => x(14 downto 0),
      y(31 downto 0) => y(31 downto 0),
      y_ap_vld => y_ap_vld
    );
end STRUCTURE;
