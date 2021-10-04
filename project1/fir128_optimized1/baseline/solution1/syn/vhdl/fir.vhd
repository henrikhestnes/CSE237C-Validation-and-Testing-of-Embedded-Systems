-- ==============================================================
-- RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
-- Version: 2021.1.1
-- Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity fir is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    y : OUT STD_LOGIC_VECTOR (31 downto 0);
    y_ap_vld : OUT STD_LOGIC;
    x : IN STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of fir is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "fir_fir,hls_ip_2021_1_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.508000,HLS_SYN_LAT=636,HLS_SYN_TPT=none,HLS_SYN_MEM=1,HLS_SYN_DSP=0,HLS_SYN_FF=41,HLS_SYN_LUT=155,HLS_VERSION=2021_1_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (5 downto 0) := "000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (5 downto 0) := "000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (5 downto 0) := "001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (5 downto 0) := "010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv7_7F : STD_LOGIC_VECTOR (6 downto 0) := "1111111";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal shift_reg_V_address0 : STD_LOGIC_VECTOR (6 downto 0);
    signal shift_reg_V_ce0 : STD_LOGIC;
    signal shift_reg_V_we0 : STD_LOGIC;
    signal shift_reg_V_d0 : STD_LOGIC_VECTOR (7 downto 0);
    signal shift_reg_V_q0 : STD_LOGIC_VECTOR (7 downto 0);
    signal c_address0 : STD_LOGIC_VECTOR (6 downto 0);
    signal c_ce0 : STD_LOGIC;
    signal c_q0 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal icmp_ln1065_fu_127_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal zext_ln573_fu_144_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln573_reg_247 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal zext_ln573_1_fu_139_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal lhs_fu_54 : STD_LOGIC_VECTOR (6 downto 0);
    signal ret_fu_133_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal acc_V_1_fu_58 : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_fu_209_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal trunc_ln168_fu_154_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal trunc_ln870_fu_158_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal trunc_ln870_1_fu_169_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal shl_ln870_1_fu_172_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal add_ln870_fu_180_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal shl_ln_fu_161_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal acc_V_fu_186_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_ST_fsm_state1_blk : STD_LOGIC;
    signal ap_ST_fsm_state2_blk : STD_LOGIC;
    signal ap_ST_fsm_state3_blk : STD_LOGIC;
    signal ap_ST_fsm_state4_blk : STD_LOGIC;
    signal ap_ST_fsm_state5_blk : STD_LOGIC;
    signal ap_ST_fsm_state6_blk : STD_LOGIC;
    signal ap_ce_reg : STD_LOGIC;

    component fir_mac_muladd_8s_5s_16s_16_4_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (7 downto 0);
        din1 : IN STD_LOGIC_VECTOR (4 downto 0);
        din2 : IN STD_LOGIC_VECTOR (15 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;


    component fir_shift_reg_V IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (6 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (7 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;


    component fir_c IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (6 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (4 downto 0) );
    end component;



begin
    shift_reg_V_U : component fir_shift_reg_V
    generic map (
        DataWidth => 8,
        AddressRange => 128,
        AddressWidth => 7)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => shift_reg_V_address0,
        ce0 => shift_reg_V_ce0,
        we0 => shift_reg_V_we0,
        d0 => shift_reg_V_d0,
        q0 => shift_reg_V_q0);

    c_U : component fir_c
    generic map (
        DataWidth => 5,
        AddressRange => 128,
        AddressWidth => 7)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => c_address0,
        ce0 => c_ce0,
        q0 => c_q0);

    mac_muladd_8s_5s_16s_16_4_1_U1 : component fir_mac_muladd_8s_5s_16s_16_4_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 8,
        din1_WIDTH => 5,
        din2_WIDTH => 16,
        dout_WIDTH => 16)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => shift_reg_V_q0,
        din1 => c_q0,
        din2 => acc_V_1_fu_58,
        ce => ap_const_logic_1,
        dout => grp_fu_209_p3);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    acc_V_1_fu_58_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                acc_V_1_fu_58 <= ap_const_lv16_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
                acc_V_1_fu_58 <= grp_fu_209_p3;
            end if; 
        end if;
    end process;

    lhs_fu_54_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                lhs_fu_54 <= ap_const_lv7_7F;
            elsif (((icmp_ln1065_fu_127_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                lhs_fu_54 <= ret_fu_133_p2;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln1065_fu_127_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    zext_ln573_reg_247(6 downto 0) <= zext_ln573_fu_144_p1(6 downto 0);
            end if;
        end if;
    end process;
    zext_ln573_reg_247(63 downto 7) <= "000000000000000000000000000000000000000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln1065_fu_127_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln1065_fu_127_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXXXXX";
        end case;
    end process;
    acc_V_fu_186_p2 <= std_logic_vector(unsigned(add_ln870_fu_180_p2) + unsigned(shl_ln_fu_161_p3));
    add_ln870_fu_180_p2 <= std_logic_vector(unsigned(shl_ln870_1_fu_172_p3) + unsigned(acc_V_1_fu_58));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);

    ap_ST_fsm_state1_blk_assign_proc : process(ap_start)
    begin
        if ((ap_start = ap_const_logic_0)) then 
            ap_ST_fsm_state1_blk <= ap_const_logic_1;
        else 
            ap_ST_fsm_state1_blk <= ap_const_logic_0;
        end if; 
    end process;

    ap_ST_fsm_state2_blk <= ap_const_logic_0;
    ap_ST_fsm_state3_blk <= ap_const_logic_0;
    ap_ST_fsm_state4_blk <= ap_const_logic_0;
    ap_ST_fsm_state5_blk <= ap_const_logic_0;
    ap_ST_fsm_state6_blk <= ap_const_logic_0;

    ap_done_assign_proc : process(ap_CS_fsm_state2, icmp_ln1065_fu_127_p2)
    begin
        if (((icmp_ln1065_fu_127_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln1065_fu_127_p2)
    begin
        if (((icmp_ln1065_fu_127_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    c_address0 <= zext_ln573_fu_144_p1(7 - 1 downto 0);

    c_ce0_assign_proc : process(ap_CS_fsm_state2)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            c_ce0 <= ap_const_logic_1;
        else 
            c_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    icmp_ln1065_fu_127_p2 <= "1" when (lhs_fu_54 = ap_const_lv7_0) else "0";
    ret_fu_133_p2 <= std_logic_vector(unsigned(lhs_fu_54) + unsigned(ap_const_lv7_7F));

    shift_reg_V_address0_assign_proc : process(ap_CS_fsm_state2, icmp_ln1065_fu_127_p2, zext_ln573_reg_247, ap_CS_fsm_state3, zext_ln573_1_fu_139_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            shift_reg_V_address0 <= zext_ln573_reg_247(7 - 1 downto 0);
        elsif (((icmp_ln1065_fu_127_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            shift_reg_V_address0 <= ap_const_lv7_0;
        elsif (((icmp_ln1065_fu_127_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            shift_reg_V_address0 <= zext_ln573_1_fu_139_p1(7 - 1 downto 0);
        else 
            shift_reg_V_address0 <= "XXXXXXX";
        end if; 
    end process;


    shift_reg_V_ce0_assign_proc : process(ap_CS_fsm_state2, icmp_ln1065_fu_127_p2, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or ((icmp_ln1065_fu_127_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((icmp_ln1065_fu_127_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            shift_reg_V_ce0 <= ap_const_logic_1;
        else 
            shift_reg_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_V_d0_assign_proc : process(shift_reg_V_q0, ap_CS_fsm_state2, icmp_ln1065_fu_127_p2, ap_CS_fsm_state3, trunc_ln168_fu_154_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            shift_reg_V_d0 <= shift_reg_V_q0;
        elsif (((icmp_ln1065_fu_127_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            shift_reg_V_d0 <= trunc_ln168_fu_154_p1;
        else 
            shift_reg_V_d0 <= "XXXXXXXX";
        end if; 
    end process;


    shift_reg_V_we0_assign_proc : process(ap_CS_fsm_state2, icmp_ln1065_fu_127_p2, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or ((icmp_ln1065_fu_127_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            shift_reg_V_we0 <= ap_const_logic_1;
        else 
            shift_reg_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    shl_ln870_1_fu_172_p3 <= (trunc_ln870_1_fu_169_p1 & ap_const_lv1_0);
    shl_ln_fu_161_p3 <= (trunc_ln870_fu_158_p1 & ap_const_lv3_0);
    trunc_ln168_fu_154_p1 <= x(8 - 1 downto 0);
    trunc_ln870_1_fu_169_p1 <= x(15 - 1 downto 0);
    trunc_ln870_fu_158_p1 <= x(13 - 1 downto 0);
        y <= std_logic_vector(IEEE.numeric_std.resize(signed(acc_V_fu_186_p2),32));


    y_ap_vld_assign_proc : process(ap_CS_fsm_state2, icmp_ln1065_fu_127_p2)
    begin
        if (((icmp_ln1065_fu_127_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            y_ap_vld <= ap_const_logic_1;
        else 
            y_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

    zext_ln573_1_fu_139_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ret_fu_133_p2),64));
    zext_ln573_fu_144_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lhs_fu_54),64));
end behav;