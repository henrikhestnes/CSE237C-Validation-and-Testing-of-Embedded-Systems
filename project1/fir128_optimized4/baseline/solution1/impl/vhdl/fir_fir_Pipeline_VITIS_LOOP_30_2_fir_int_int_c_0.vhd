-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity fir_fir_Pipeline_VITIS_LOOP_30_2_fir_int_int_c_0 is 
    generic(
             DataWidth     : integer := 32; 
             AddressWidth     : integer := 6; 
             AddressRange    : integer := 64
    ); 
    port (
          address0      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DataWidth-1 downto 0);
          address1      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(DataWidth-1 downto 0);
          address2      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce2       : in std_logic; 
          q2         : out std_logic_vector(DataWidth-1 downto 0);
          address3      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce3       : in std_logic; 
          q3         : out std_logic_vector(DataWidth-1 downto 0);
          reset     : in std_logic;
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of fir_fir_Pipeline_VITIS_LOOP_30_2_fir_int_int_c_0 is 

signal address0_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address1_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address2_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address3_tmp : std_logic_vector(AddressWidth-1 downto 0); 
type mem_array is array (0 to AddressRange-1) of std_logic_vector (DataWidth-1 downto 0); 
signal mem0 : mem_array := (
    0 => "00000000000000000000000000001010", 
    1 => "00000000000000000000000000001011", 
    2 => "00000000000000000000000000000011", 
    3 => "11111111111111111111111111111000", 
    4 => "11111111111111111111111111110101", 
    5 to 16=> "11111111111111111111111111110110", 
    17 => "11111111111111111111111111110101", 
    18 => "11111111111111111111111111111101", 
    19 => "00000000000000000000000000001000", 
    20 => "00000000000000000000000000001011", 
    21 to 24=> "00000000000000000000000000001010", 
    25 => "00000000000000000000000000001011", 
    26 => "00000000000000000000000000000011", 
    27 => "11111111111111111111111111111000", 
    28 => "11111111111111111111111111110101", 
    29 to 32=> "11111111111111111111111111110110", 
    33 => "11111111111111111111111111110101", 
    34 => "11111111111111111111111111111101", 
    35 => "00000000000000000000000000001000", 
    36 => "00000000000000000000000000001011", 
    37 to 40=> "00000000000000000000000000001010", 
    41 => "00000000000000000000000000001011", 
    42 => "00000000000000000000000000000011", 
    43 => "11111111111111111111111111111000", 
    44 => "11111111111111111111111111110101", 
    45 to 48=> "11111111111111111111111111110110", 
    49 => "11111111111111111111111111110101", 
    50 => "11111111111111111111111111111101", 
    51 => "00000000000000000000000000001000", 
    52 => "00000000000000000000000000001011", 
    53 to 63=> "00000000000000000000000000001010" );
signal mem1 : mem_array := (
    0 => "00000000000000000000000000001010", 
    1 => "00000000000000000000000000001011", 
    2 => "00000000000000000000000000000011", 
    3 => "11111111111111111111111111111000", 
    4 => "11111111111111111111111111110101", 
    5 to 16=> "11111111111111111111111111110110", 
    17 => "11111111111111111111111111110101", 
    18 => "11111111111111111111111111111101", 
    19 => "00000000000000000000000000001000", 
    20 => "00000000000000000000000000001011", 
    21 to 24=> "00000000000000000000000000001010", 
    25 => "00000000000000000000000000001011", 
    26 => "00000000000000000000000000000011", 
    27 => "11111111111111111111111111111000", 
    28 => "11111111111111111111111111110101", 
    29 to 32=> "11111111111111111111111111110110", 
    33 => "11111111111111111111111111110101", 
    34 => "11111111111111111111111111111101", 
    35 => "00000000000000000000000000001000", 
    36 => "00000000000000000000000000001011", 
    37 to 40=> "00000000000000000000000000001010", 
    41 => "00000000000000000000000000001011", 
    42 => "00000000000000000000000000000011", 
    43 => "11111111111111111111111111111000", 
    44 => "11111111111111111111111111110101", 
    45 to 48=> "11111111111111111111111111110110", 
    49 => "11111111111111111111111111110101", 
    50 => "11111111111111111111111111111101", 
    51 => "00000000000000000000000000001000", 
    52 => "00000000000000000000000000001011", 
    53 to 63=> "00000000000000000000000000001010" );


begin 


memory_access_guard_0: process (address0) 
begin
      address0_tmp <= address0;
--synthesis translate_off
      if (CONV_INTEGER(address0) > AddressRange-1) then
           address0_tmp <= (others => '0');
      else 
           address0_tmp <= address0;
      end if;
--synthesis translate_on
end process;

memory_access_guard_1: process (address1) 
begin
      address1_tmp <= address1;
--synthesis translate_off
      if (CONV_INTEGER(address1) > AddressRange-1) then
           address1_tmp <= (others => '0');
      else 
           address1_tmp <= address1;
      end if;
--synthesis translate_on
end process;

memory_access_guard_2: process (address2) 
begin
      address2_tmp <= address2;
--synthesis translate_off
      if (CONV_INTEGER(address2) > AddressRange-1) then
           address2_tmp <= (others => '0');
      else 
           address2_tmp <= address2;
      end if;
--synthesis translate_on
end process;

memory_access_guard_3: process (address3) 
begin
      address3_tmp <= address3;
--synthesis translate_off
      if (CONV_INTEGER(address3) > AddressRange-1) then
           address3_tmp <= (others => '0');
      else 
           address3_tmp <= address3;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem0(CONV_INTEGER(address0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem0(CONV_INTEGER(address1_tmp)); 
        end if;
        if (ce2 = '1') then 
            q2 <= mem1(CONV_INTEGER(address2_tmp)); 
        end if;
        if (ce3 = '1') then 
            q3 <= mem1(CONV_INTEGER(address3_tmp)); 
        end if;
    end if;
end process;

end rtl;
