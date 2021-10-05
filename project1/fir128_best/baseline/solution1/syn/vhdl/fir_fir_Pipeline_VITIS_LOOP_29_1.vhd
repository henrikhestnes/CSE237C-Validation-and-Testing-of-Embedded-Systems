-- ==============================================================
-- RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
-- Version: 2021.1.1
-- Copyright (C) Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity fir_fir_Pipeline_VITIS_LOOP_29_1 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    acc_out : OUT STD_LOGIC_VECTOR (31 downto 0);
    acc_out_ap_vld : OUT STD_LOGIC;
    shift_reg_0_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    shift_reg_0_ce0 : OUT STD_LOGIC;
    shift_reg_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    shift_reg_0_address1 : OUT STD_LOGIC_VECTOR (4 downto 0);
    shift_reg_0_ce1 : OUT STD_LOGIC;
    shift_reg_0_we1 : OUT STD_LOGIC;
    shift_reg_0_d1 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of fir_fir_Pipeline_VITIS_LOOP_29_1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv7_7F : STD_LOGIC_VECTOR (6 downto 0) := "1111111";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv5_1F : STD_LOGIC_VECTOR (4 downto 0) := "11111";

attribute shreg_extract : string;
    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter3 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter4 : STD_LOGIC := '0';
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter3 : BOOLEAN;
    signal ap_block_state5_pp0_stage0_iter4 : BOOLEAN;
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal icmp_ln29_fu_220_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_condition_exit_pp0_iter0_stage0 : STD_LOGIC;
    signal ap_loop_exit_ready : STD_LOGIC;
    signal ap_ready_int : STD_LOGIC;
    signal c_0_address0 : STD_LOGIC_VECTOR (5 downto 0);
    signal c_0_ce0 : STD_LOGIC;
    signal c_0_q0 : STD_LOGIC_VECTOR (4 downto 0);
    signal c_1_address0 : STD_LOGIC_VECTOR (5 downto 0);
    signal c_1_ce0 : STD_LOGIC;
    signal c_1_q0 : STD_LOGIC_VECTOR (4 downto 0);
    signal shift_reg_1_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal shift_reg_1_ce0 : STD_LOGIC;
    signal shift_reg_1_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal shift_reg_1_address1 : STD_LOGIC_VECTOR (4 downto 0);
    signal shift_reg_1_ce1 : STD_LOGIC;
    signal shift_reg_1_we1 : STD_LOGIC;
    signal shift_reg_2_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal shift_reg_2_ce0 : STD_LOGIC;
    signal shift_reg_2_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal shift_reg_2_address1 : STD_LOGIC_VECTOR (4 downto 0);
    signal shift_reg_2_ce1 : STD_LOGIC;
    signal shift_reg_2_we1 : STD_LOGIC;
    signal shift_reg_3_address0 : STD_LOGIC_VECTOR (4 downto 0);
    signal shift_reg_3_ce0 : STD_LOGIC;
    signal shift_reg_3_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal shift_reg_3_address1 : STD_LOGIC_VECTOR (4 downto 0);
    signal shift_reg_3_ce1 : STD_LOGIC;
    signal shift_reg_3_we1 : STD_LOGIC;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal icmp_ln29_reg_364 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln29_reg_364_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln29_reg_364_pp0_iter2_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln29_fu_226_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal trunc_ln29_reg_368 : STD_LOGIC_VECTOR (4 downto 0);
    signal trunc_ln29_reg_368_pp0_iter1_reg : STD_LOGIC_VECTOR (4 downto 0);
    signal lshr_ln_reg_373 : STD_LOGIC_VECTOR (1 downto 0);
    signal trunc_ln1_reg_398 : STD_LOGIC_VECTOR (1 downto 0);
    signal trunc_ln1_reg_398_pp0_iter1_reg : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_reg_412 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_op_assign_fu_296_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_op_assign_reg_417 : STD_LOGIC_VECTOR (31 downto 0);
    signal select_ln225_fu_310_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal select_ln225_reg_426 : STD_LOGIC_VECTOR (4 downto 0);
    signal grp_fu_327_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal mul_ln32_reg_436 : STD_LOGIC_VECTOR (31 downto 0);
    signal zext_ln31_fu_252_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal zext_ln225_fu_274_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln31_1_fu_317_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal acc_fu_66 : STD_LOGIC_VECTOR (31 downto 0);
    signal acc_1_fu_335_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_loop_init : STD_LOGIC;
    signal i_fu_70 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_sig_allocacmp_i_1 : STD_LOGIC_VECTOR (6 downto 0);
    signal add_ln29_fu_230_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_block_pp0_stage0_01001 : BOOLEAN;
    signal add_ln31_fu_246_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal trunc_ln225_fu_270_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal i_op_assign_fu_296_p5 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_continue_int : STD_LOGIC;
    signal ap_done_int : STD_LOGIC;
    signal ap_loop_exit_ready_pp0_iter1_reg : STD_LOGIC;
    signal ap_loop_exit_ready_pp0_iter2_reg : STD_LOGIC;
    signal ap_loop_exit_ready_pp0_iter3_reg : STD_LOGIC;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_enable_pp0 : STD_LOGIC;
    signal ap_start_int : STD_LOGIC;
    signal ap_ce_reg : STD_LOGIC;

    component fir_mux_464_32_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        din2 : IN STD_LOGIC_VECTOR (31 downto 0);
        din3 : IN STD_LOGIC_VECTOR (31 downto 0);
        din4 : IN STD_LOGIC_VECTOR (63 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component fir_mul_32s_5s_32_2_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component fir_fir_Pipeline_VITIS_LOOP_29_1_c_0 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (5 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (4 downto 0) );
    end component;


    component fir_fir_Pipeline_VITIS_LOOP_29_1_c_1 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (5 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (4 downto 0) );
    end component;


    component fir_fir_Pipeline_VITIS_LOOP_29_1_shift_reg_1 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0);
        address1 : IN STD_LOGIC_VECTOR (4 downto 0);
        ce1 : IN STD_LOGIC;
        we1 : IN STD_LOGIC;
        d1 : IN STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component fir_flow_control_loop_pipe_sequential_init IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_start_int : OUT STD_LOGIC;
        ap_loop_init : OUT STD_LOGIC;
        ap_ready_int : IN STD_LOGIC;
        ap_loop_exit_ready : IN STD_LOGIC;
        ap_loop_exit_done : IN STD_LOGIC;
        ap_continue_int : OUT STD_LOGIC;
        ap_done_int : IN STD_LOGIC );
    end component;



begin
    c_0_U : component fir_fir_Pipeline_VITIS_LOOP_29_1_c_0
    generic map (
        DataWidth => 5,
        AddressRange => 64,
        AddressWidth => 6)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => c_0_address0,
        ce0 => c_0_ce0,
        q0 => c_0_q0);

    c_1_U : component fir_fir_Pipeline_VITIS_LOOP_29_1_c_1
    generic map (
        DataWidth => 5,
        AddressRange => 64,
        AddressWidth => 6)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => c_1_address0,
        ce0 => c_1_ce0,
        q0 => c_1_q0);

    shift_reg_1_U : component fir_fir_Pipeline_VITIS_LOOP_29_1_shift_reg_1
    generic map (
        DataWidth => 32,
        AddressRange => 32,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => shift_reg_1_address0,
        ce0 => shift_reg_1_ce0,
        q0 => shift_reg_1_q0,
        address1 => shift_reg_1_address1,
        ce1 => shift_reg_1_ce1,
        we1 => shift_reg_1_we1,
        d1 => i_op_assign_reg_417);

    shift_reg_2_U : component fir_fir_Pipeline_VITIS_LOOP_29_1_shift_reg_1
    generic map (
        DataWidth => 32,
        AddressRange => 32,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => shift_reg_2_address0,
        ce0 => shift_reg_2_ce0,
        q0 => shift_reg_2_q0,
        address1 => shift_reg_2_address1,
        ce1 => shift_reg_2_ce1,
        we1 => shift_reg_2_we1,
        d1 => i_op_assign_reg_417);

    shift_reg_3_U : component fir_fir_Pipeline_VITIS_LOOP_29_1_shift_reg_1
    generic map (
        DataWidth => 32,
        AddressRange => 32,
        AddressWidth => 5)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => shift_reg_3_address0,
        ce0 => shift_reg_3_ce0,
        q0 => shift_reg_3_q0,
        address1 => shift_reg_3_address1,
        ce1 => shift_reg_3_ce1,
        we1 => shift_reg_3_we1,
        d1 => i_op_assign_reg_417);

    mux_464_32_1_1_U1 : component fir_mux_464_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 64,
        dout_WIDTH => 32)
    port map (
        din0 => shift_reg_0_q0,
        din1 => shift_reg_1_q0,
        din2 => shift_reg_2_q0,
        din3 => shift_reg_3_q0,
        din4 => i_op_assign_fu_296_p5,
        dout => i_op_assign_fu_296_p6);

    mul_32s_5s_32_2_1_U2 : component fir_mul_32s_5s_32_2_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 5,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => i_op_assign_reg_417,
        din1 => select_ln225_reg_426,
        ce => ap_const_logic_1,
        dout => grp_fu_327_p2);

    flow_control_loop_pipe_sequential_init_U : component fir_flow_control_loop_pipe_sequential_init
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => ap_start,
        ap_ready => ap_ready,
        ap_done => ap_done,
        ap_start_int => ap_start_int,
        ap_loop_init => ap_loop_init,
        ap_ready_int => ap_ready_int,
        ap_loop_exit_ready => ap_condition_exit_pp0_iter0_stage0,
        ap_loop_exit_done => ap_done_int,
        ap_continue_int => ap_continue_int,
        ap_done_int => ap_done_int);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue_int = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_loop_exit_ready_pp0_iter3_reg = ap_const_logic_1))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_condition_exit_pp0_iter0_stage0)) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                elsif (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                    ap_enable_reg_pp0_iter1 <= ap_start_int;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter4_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter4 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
                end if; 
            end if;
        end if;
    end process;


    acc_fu_66_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_0 = ap_block_pp0_stage0_11001)) then
                if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_loop_init = ap_const_logic_1))) then 
                    acc_fu_66 <= ap_const_lv32_0;
                elsif ((ap_enable_reg_pp0_iter4 = ap_const_logic_1)) then 
                    acc_fu_66 <= acc_1_fu_335_p2;
                end if;
            end if; 
        end if;
    end process;

    i_fu_70_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                if (((icmp_ln29_fu_220_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then 
                    i_fu_70 <= add_ln29_fu_230_p2;
                elsif ((ap_loop_init = ap_const_logic_1)) then 
                    i_fu_70 <= ap_const_lv7_7F;
                end if;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                ap_loop_exit_ready_pp0_iter1_reg <= ap_loop_exit_ready;
                ap_loop_exit_ready_pp0_iter2_reg <= ap_loop_exit_ready_pp0_iter1_reg;
                i_op_assign_reg_417 <= i_op_assign_fu_296_p6;
                icmp_ln29_reg_364 <= icmp_ln29_fu_220_p2;
                icmp_ln29_reg_364_pp0_iter1_reg <= icmp_ln29_reg_364;
                select_ln225_reg_426 <= select_ln225_fu_310_p3;
                trunc_ln1_reg_398_pp0_iter1_reg <= trunc_ln1_reg_398;
                trunc_ln29_reg_368_pp0_iter1_reg <= trunc_ln29_reg_368;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_0 = ap_block_pp0_stage0_11001)) then
                ap_loop_exit_ready_pp0_iter3_reg <= ap_loop_exit_ready_pp0_iter2_reg;
                icmp_ln29_reg_364_pp0_iter2_reg <= icmp_ln29_reg_364_pp0_iter1_reg;
                mul_ln32_reg_436 <= grp_fu_327_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln29_fu_220_p2 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                lshr_ln_reg_373 <= add_ln29_fu_230_p2(6 downto 5);
                tmp_reg_412 <= ap_sig_allocacmp_i_1(6 downto 6);
                trunc_ln1_reg_398 <= ap_sig_allocacmp_i_1(6 downto 5);
                trunc_ln29_reg_368 <= trunc_ln29_fu_226_p1;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_CS_fsm)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    acc_1_fu_335_p2 <= std_logic_vector(unsigned(mul_ln32_reg_436) + unsigned(acc_fu_66));
    acc_out <= acc_fu_66;

    acc_out_ap_vld_assign_proc : process(ap_block_pp0_stage0_11001, icmp_ln29_reg_364_pp0_iter2_reg)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln29_reg_364_pp0_iter2_reg = ap_const_lv1_1))) then 
            acc_out_ap_vld <= ap_const_logic_1;
        else 
            acc_out_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

    add_ln29_fu_230_p2 <= std_logic_vector(unsigned(ap_sig_allocacmp_i_1) + unsigned(ap_const_lv7_7F));
    add_ln31_fu_246_p2 <= std_logic_vector(unsigned(trunc_ln29_fu_226_p1) + unsigned(ap_const_lv5_1F));
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_01001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state1_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state5_pp0_stage0_iter4 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_exit_pp0_iter0_stage0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_subdone, icmp_ln29_fu_220_p2)
    begin
        if (((icmp_ln29_fu_220_p2 = ap_const_lv1_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_condition_exit_pp0_iter0_stage0 <= ap_const_logic_1;
        else 
            ap_condition_exit_pp0_iter0_stage0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_int_assign_proc : process(ap_block_pp0_stage0_subdone, ap_done_reg, ap_loop_exit_ready_pp0_iter3_reg)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_loop_exit_ready_pp0_iter3_reg = ap_const_logic_1))) then 
            ap_done_int <= ap_const_logic_1;
        else 
            ap_done_int <= ap_done_reg;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);
    ap_enable_reg_pp0_iter0 <= ap_start_int;

    ap_idle_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_idle_pp0, ap_start_int)
    begin
        if (((ap_idle_pp0 = ap_const_logic_1) and (ap_start_int = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter4)
    begin
        if (((ap_enable_reg_pp0_iter4 = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_loop_exit_ready <= ap_condition_exit_pp0_iter0_stage0;

    ap_ready_int_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_subdone)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            ap_ready_int <= ap_const_logic_1;
        else 
            ap_ready_int <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_allocacmp_i_1_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0, ap_loop_init, i_fu_70)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_loop_init = ap_const_logic_1))) then 
            ap_sig_allocacmp_i_1 <= ap_const_lv7_7F;
        else 
            ap_sig_allocacmp_i_1 <= i_fu_70;
        end if; 
    end process;

    c_0_address0 <= zext_ln225_fu_274_p1(6 - 1 downto 0);

    c_0_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            c_0_ce0 <= ap_const_logic_1;
        else 
            c_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    c_1_address0 <= zext_ln225_fu_274_p1(6 - 1 downto 0);

    c_1_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            c_1_ce0 <= ap_const_logic_1;
        else 
            c_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    i_op_assign_fu_296_p5 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(lshr_ln_reg_373),64));
    icmp_ln29_fu_220_p2 <= "1" when (ap_sig_allocacmp_i_1 = ap_const_lv7_0) else "0";
    select_ln225_fu_310_p3 <= 
        c_1_q0 when (tmp_reg_412(0) = '1') else 
        c_0_q0;
    shift_reg_0_address0 <= zext_ln31_fu_252_p1(5 - 1 downto 0);
    shift_reg_0_address1 <= zext_ln31_1_fu_317_p1(5 - 1 downto 0);

    shift_reg_0_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            shift_reg_0_ce0 <= ap_const_logic_1;
        else 
            shift_reg_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_0_ce1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1))) then 
            shift_reg_0_ce1 <= ap_const_logic_1;
        else 
            shift_reg_0_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    shift_reg_0_d1 <= i_op_assign_reg_417;

    shift_reg_0_we1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001, trunc_ln1_reg_398_pp0_iter1_reg)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (trunc_ln1_reg_398_pp0_iter1_reg = ap_const_lv2_0))) then 
            shift_reg_0_we1 <= ap_const_logic_1;
        else 
            shift_reg_0_we1 <= ap_const_logic_0;
        end if; 
    end process;

    shift_reg_1_address0 <= zext_ln31_fu_252_p1(5 - 1 downto 0);
    shift_reg_1_address1 <= zext_ln31_1_fu_317_p1(5 - 1 downto 0);

    shift_reg_1_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            shift_reg_1_ce0 <= ap_const_logic_1;
        else 
            shift_reg_1_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_1_ce1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1))) then 
            shift_reg_1_ce1 <= ap_const_logic_1;
        else 
            shift_reg_1_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_1_we1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001, trunc_ln1_reg_398_pp0_iter1_reg)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (trunc_ln1_reg_398_pp0_iter1_reg = ap_const_lv2_1))) then 
            shift_reg_1_we1 <= ap_const_logic_1;
        else 
            shift_reg_1_we1 <= ap_const_logic_0;
        end if; 
    end process;

    shift_reg_2_address0 <= zext_ln31_fu_252_p1(5 - 1 downto 0);
    shift_reg_2_address1 <= zext_ln31_1_fu_317_p1(5 - 1 downto 0);

    shift_reg_2_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            shift_reg_2_ce0 <= ap_const_logic_1;
        else 
            shift_reg_2_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_2_ce1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1))) then 
            shift_reg_2_ce1 <= ap_const_logic_1;
        else 
            shift_reg_2_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_2_we1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001, trunc_ln1_reg_398_pp0_iter1_reg)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (trunc_ln1_reg_398_pp0_iter1_reg = ap_const_lv2_2))) then 
            shift_reg_2_we1 <= ap_const_logic_1;
        else 
            shift_reg_2_we1 <= ap_const_logic_0;
        end if; 
    end process;

    shift_reg_3_address0 <= zext_ln31_fu_252_p1(5 - 1 downto 0);
    shift_reg_3_address1 <= zext_ln31_1_fu_317_p1(5 - 1 downto 0);

    shift_reg_3_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
            shift_reg_3_ce0 <= ap_const_logic_1;
        else 
            shift_reg_3_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_3_ce1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1))) then 
            shift_reg_3_ce1 <= ap_const_logic_1;
        else 
            shift_reg_3_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_3_we1_assign_proc : process(ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_11001, trunc_ln1_reg_398_pp0_iter1_reg)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (trunc_ln1_reg_398_pp0_iter1_reg = ap_const_lv2_3))) then 
            shift_reg_3_we1 <= ap_const_logic_1;
        else 
            shift_reg_3_we1 <= ap_const_logic_0;
        end if; 
    end process;

    trunc_ln225_fu_270_p1 <= ap_sig_allocacmp_i_1(6 - 1 downto 0);
    trunc_ln29_fu_226_p1 <= ap_sig_allocacmp_i_1(5 - 1 downto 0);
    zext_ln225_fu_274_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(trunc_ln225_fu_270_p1),64));
    zext_ln31_1_fu_317_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(trunc_ln29_reg_368_pp0_iter1_reg),64));
    zext_ln31_fu_252_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln31_fu_246_p2),64));
end behav;
