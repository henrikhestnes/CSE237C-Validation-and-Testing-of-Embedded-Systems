-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity cordiccart2pol_Kvalues_V is 
    generic(
             DataWidth     : integer := 26; 
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


architecture rtl of cordiccart2pol_Kvalues_V is 

signal address0_tmp : std_logic_vector(AddressWidth-1 downto 0); 
type mem_array is array (0 to AddressRange-1) of std_logic_vector (DataWidth-1 downto 0); 
signal mem : mem_array := (
    0 => "10000000000000000000000000", 1 => "01000000000000000000000000", 
    2 => "00100000000000000000000000", 3 => "00010000000000000000000000", 
    4 => "00001000000000000000000000", 5 => "00000100000000000000000000", 
    6 => "00000010000000000000000000", 7 => "00000001000000000000000000", 
    8 => "00000000100000000000000000", 9 => "00000000010000000000000000", 
    10 => "00000000001000000000000000", 11 => "00000000000100000000000000", 
    12 => "00000000000010000000000000", 13 => "00000000000001000000000000", 
    14 => "00000000000000100000000000", 15 => "00000000000000010000000000" );


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

