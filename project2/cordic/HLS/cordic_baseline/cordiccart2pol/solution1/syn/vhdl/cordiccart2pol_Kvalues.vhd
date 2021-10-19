-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity cordiccart2pol_Kvalues is 
    generic(
             DataWidth     : integer := 32; 
             AddressWidth     : integer := 4; 
             AddressRange    : integer := 16
    ); 
    port (
          address0      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DataWidth-1 downto 0);
          reset     : in std_logic;
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of cordiccart2pol_Kvalues is 

signal address0_tmp : std_logic_vector(AddressWidth-1 downto 0); 
type mem_array is array (0 to AddressRange-1) of std_logic_vector (DataWidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00111111100000000000000000000000", 
    1 => "00111111000000000000000000000000", 
    2 => "00111110100000000000000000000000", 
    3 => "00111110000000000000000000000000", 
    4 => "00111101100000000000000000000000", 
    5 => "00111101000000000000000000000000", 
    6 => "00111100100000000000000000000000", 
    7 => "00111100000000000000000000000000", 
    8 => "00111011100000000000000000000000", 
    9 => "00111011000000000000000000000000", 
    10 => "00111010100000000000000000000000", 
    11 => "00111010000000000000000000000000", 
    12 => "00111001100000000000000000000000", 
    13 => "00111001000000000000000000000000", 
    14 => "00111000100000000000000000000000", 
    15 => "00111000000000000000000000000000" );


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

