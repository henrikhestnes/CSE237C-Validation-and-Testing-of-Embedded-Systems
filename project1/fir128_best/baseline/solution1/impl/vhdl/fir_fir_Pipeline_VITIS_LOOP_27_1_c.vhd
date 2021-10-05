-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity fir_fir_Pipeline_VITIS_LOOP_27_1_c is 
    generic(
             DataWidth     : integer := 5; 
             AddressWidth     : integer := 7; 
             AddressRange    : integer := 128
    ); 
    port (
          address0      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DataWidth-1 downto 0);
          reset     : in std_logic;
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of fir_fir_Pipeline_VITIS_LOOP_27_1_c is 

signal address0_tmp : std_logic_vector(AddressWidth-1 downto 0); 
type mem_array is array (0 to AddressRange-1) of std_logic_vector (DataWidth-1 downto 0); 
signal mem : mem_array := (
    0 => "01010", 1 to 2=> "01011", 3 => "01000", 4 => "00011", 5 => "11101", 
    6 => "11000", 7 to 8=> "10101", 9 to 32=> "10110", 33 to 34=> "10101", 35 => "11000", 
    36 => "11101", 37 => "00011", 38 => "01000", 39 to 40=> "01011", 41 to 48=> "01010", 
    49 to 50=> "01011", 51 => "01000", 52 => "00011", 53 => "11101", 54 => "11000", 
    55 to 56=> "10101", 57 to 64=> "10110", 65 to 66=> "10101", 67 => "11000", 68 => "11101", 
    69 => "00011", 70 => "01000", 71 to 72=> "01011", 73 to 80=> "01010", 81 to 82=> "01011", 
    83 => "01000", 84 => "00011", 85 => "11101", 86 => "11000", 87 to 88=> "10101", 
    89 to 96=> "10110", 97 to 98=> "10101", 99 => "11000", 100 => "11101", 101 => "00011", 
    102 => "01000", 103 to 104=> "01011", 105 to 127=> "01010" );


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

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(address0_tmp)); 
        end if;
    end if;
end process;

end rtl;

