-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.1.1 (64-bit)
-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity fir_fir_Pipeline_MAC_fir_int_int_c_7 is 
    generic(
             DataWidth     : integer := 32; 
             AddressWidth     : integer := 4; 
             AddressRange    : integer := 16
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
          address4      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce4       : in std_logic; 
          q4         : out std_logic_vector(DataWidth-1 downto 0);
          address5      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce5       : in std_logic; 
          q5         : out std_logic_vector(DataWidth-1 downto 0);
          address6      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce6       : in std_logic; 
          q6         : out std_logic_vector(DataWidth-1 downto 0);
          address7      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce7       : in std_logic; 
          q7         : out std_logic_vector(DataWidth-1 downto 0);
          address8      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce8       : in std_logic; 
          q8         : out std_logic_vector(DataWidth-1 downto 0);
          address9      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce9       : in std_logic; 
          q9         : out std_logic_vector(DataWidth-1 downto 0);
          address10      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce10       : in std_logic; 
          q10         : out std_logic_vector(DataWidth-1 downto 0);
          address11      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce11       : in std_logic; 
          q11         : out std_logic_vector(DataWidth-1 downto 0);
          address12      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce12       : in std_logic; 
          q12         : out std_logic_vector(DataWidth-1 downto 0);
          address13      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce13       : in std_logic; 
          q13         : out std_logic_vector(DataWidth-1 downto 0);
          address14      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce14       : in std_logic; 
          q14         : out std_logic_vector(DataWidth-1 downto 0);
          address15      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce15       : in std_logic; 
          q15         : out std_logic_vector(DataWidth-1 downto 0);
          reset     : in std_logic;
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of fir_fir_Pipeline_MAC_fir_int_int_c_7 is 

signal address0_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address1_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address2_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address3_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address4_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address5_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address6_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address7_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address8_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address9_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address10_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address11_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address12_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address13_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address14_tmp : std_logic_vector(AddressWidth-1 downto 0); 
signal address15_tmp : std_logic_vector(AddressWidth-1 downto 0); 
type mem_array is array (0 to AddressRange-1) of std_logic_vector (DataWidth-1 downto 0); 
signal mem0 : mem_array := (
    0 => "11111111111111111111111111110101", 
    1 to 3=> "11111111111111111111111111110110", 
    4 => "00000000000000000000000000001011", 
    5 => "00000000000000000000000000001010", 
    6 => "11111111111111111111111111110101", 
    7 => "11111111111111111111111111110110", 
    8 => "00000000000000000000000000001011", 
    9 => "00000000000000000000000000001010", 
    10 => "11111111111111111111111111110101", 
    11 => "11111111111111111111111111110110", 
    12 => "00000000000000000000000000001011", 
    13 to 15=> "00000000000000000000000000001010" );
signal mem1 : mem_array := (
    0 => "11111111111111111111111111110101", 
    1 to 3=> "11111111111111111111111111110110", 
    4 => "00000000000000000000000000001011", 
    5 => "00000000000000000000000000001010", 
    6 => "11111111111111111111111111110101", 
    7 => "11111111111111111111111111110110", 
    8 => "00000000000000000000000000001011", 
    9 => "00000000000000000000000000001010", 
    10 => "11111111111111111111111111110101", 
    11 => "11111111111111111111111111110110", 
    12 => "00000000000000000000000000001011", 
    13 to 15=> "00000000000000000000000000001010" );
signal mem2 : mem_array := (
    0 => "11111111111111111111111111110101", 
    1 to 3=> "11111111111111111111111111110110", 
    4 => "00000000000000000000000000001011", 
    5 => "00000000000000000000000000001010", 
    6 => "11111111111111111111111111110101", 
    7 => "11111111111111111111111111110110", 
    8 => "00000000000000000000000000001011", 
    9 => "00000000000000000000000000001010", 
    10 => "11111111111111111111111111110101", 
    11 => "11111111111111111111111111110110", 
    12 => "00000000000000000000000000001011", 
    13 to 15=> "00000000000000000000000000001010" );
signal mem3 : mem_array := (
    0 => "11111111111111111111111111110101", 
    1 to 3=> "11111111111111111111111111110110", 
    4 => "00000000000000000000000000001011", 
    5 => "00000000000000000000000000001010", 
    6 => "11111111111111111111111111110101", 
    7 => "11111111111111111111111111110110", 
    8 => "00000000000000000000000000001011", 
    9 => "00000000000000000000000000001010", 
    10 => "11111111111111111111111111110101", 
    11 => "11111111111111111111111111110110", 
    12 => "00000000000000000000000000001011", 
    13 to 15=> "00000000000000000000000000001010" );
signal mem4 : mem_array := (
    0 => "11111111111111111111111111110101", 
    1 to 3=> "11111111111111111111111111110110", 
    4 => "00000000000000000000000000001011", 
    5 => "00000000000000000000000000001010", 
    6 => "11111111111111111111111111110101", 
    7 => "11111111111111111111111111110110", 
    8 => "00000000000000000000000000001011", 
    9 => "00000000000000000000000000001010", 
    10 => "11111111111111111111111111110101", 
    11 => "11111111111111111111111111110110", 
    12 => "00000000000000000000000000001011", 
    13 to 15=> "00000000000000000000000000001010" );
signal mem5 : mem_array := (
    0 => "11111111111111111111111111110101", 
    1 to 3=> "11111111111111111111111111110110", 
    4 => "00000000000000000000000000001011", 
    5 => "00000000000000000000000000001010", 
    6 => "11111111111111111111111111110101", 
    7 => "11111111111111111111111111110110", 
    8 => "00000000000000000000000000001011", 
    9 => "00000000000000000000000000001010", 
    10 => "11111111111111111111111111110101", 
    11 => "11111111111111111111111111110110", 
    12 => "00000000000000000000000000001011", 
    13 to 15=> "00000000000000000000000000001010" );
signal mem6 : mem_array := (
    0 => "11111111111111111111111111110101", 
    1 to 3=> "11111111111111111111111111110110", 
    4 => "00000000000000000000000000001011", 
    5 => "00000000000000000000000000001010", 
    6 => "11111111111111111111111111110101", 
    7 => "11111111111111111111111111110110", 
    8 => "00000000000000000000000000001011", 
    9 => "00000000000000000000000000001010", 
    10 => "11111111111111111111111111110101", 
    11 => "11111111111111111111111111110110", 
    12 => "00000000000000000000000000001011", 
    13 to 15=> "00000000000000000000000000001010" );
signal mem7 : mem_array := (
    0 => "11111111111111111111111111110101", 
    1 to 3=> "11111111111111111111111111110110", 
    4 => "00000000000000000000000000001011", 
    5 => "00000000000000000000000000001010", 
    6 => "11111111111111111111111111110101", 
    7 => "11111111111111111111111111110110", 
    8 => "00000000000000000000000000001011", 
    9 => "00000000000000000000000000001010", 
    10 => "11111111111111111111111111110101", 
    11 => "11111111111111111111111111110110", 
    12 => "00000000000000000000000000001011", 
    13 to 15=> "00000000000000000000000000001010" );


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

memory_access_guard_4: process (address4) 
begin
      address4_tmp <= address4;
--synthesis translate_off
      if (CONV_INTEGER(address4) > AddressRange-1) then
           address4_tmp <= (others => '0');
      else 
           address4_tmp <= address4;
      end if;
--synthesis translate_on
end process;

memory_access_guard_5: process (address5) 
begin
      address5_tmp <= address5;
--synthesis translate_off
      if (CONV_INTEGER(address5) > AddressRange-1) then
           address5_tmp <= (others => '0');
      else 
           address5_tmp <= address5;
      end if;
--synthesis translate_on
end process;

memory_access_guard_6: process (address6) 
begin
      address6_tmp <= address6;
--synthesis translate_off
      if (CONV_INTEGER(address6) > AddressRange-1) then
           address6_tmp <= (others => '0');
      else 
           address6_tmp <= address6;
      end if;
--synthesis translate_on
end process;

memory_access_guard_7: process (address7) 
begin
      address7_tmp <= address7;
--synthesis translate_off
      if (CONV_INTEGER(address7) > AddressRange-1) then
           address7_tmp <= (others => '0');
      else 
           address7_tmp <= address7;
      end if;
--synthesis translate_on
end process;

memory_access_guard_8: process (address8) 
begin
      address8_tmp <= address8;
--synthesis translate_off
      if (CONV_INTEGER(address8) > AddressRange-1) then
           address8_tmp <= (others => '0');
      else 
           address8_tmp <= address8;
      end if;
--synthesis translate_on
end process;

memory_access_guard_9: process (address9) 
begin
      address9_tmp <= address9;
--synthesis translate_off
      if (CONV_INTEGER(address9) > AddressRange-1) then
           address9_tmp <= (others => '0');
      else 
           address9_tmp <= address9;
      end if;
--synthesis translate_on
end process;

memory_access_guard_10: process (address10) 
begin
      address10_tmp <= address10;
--synthesis translate_off
      if (CONV_INTEGER(address10) > AddressRange-1) then
           address10_tmp <= (others => '0');
      else 
           address10_tmp <= address10;
      end if;
--synthesis translate_on
end process;

memory_access_guard_11: process (address11) 
begin
      address11_tmp <= address11;
--synthesis translate_off
      if (CONV_INTEGER(address11) > AddressRange-1) then
           address11_tmp <= (others => '0');
      else 
           address11_tmp <= address11;
      end if;
--synthesis translate_on
end process;

memory_access_guard_12: process (address12) 
begin
      address12_tmp <= address12;
--synthesis translate_off
      if (CONV_INTEGER(address12) > AddressRange-1) then
           address12_tmp <= (others => '0');
      else 
           address12_tmp <= address12;
      end if;
--synthesis translate_on
end process;

memory_access_guard_13: process (address13) 
begin
      address13_tmp <= address13;
--synthesis translate_off
      if (CONV_INTEGER(address13) > AddressRange-1) then
           address13_tmp <= (others => '0');
      else 
           address13_tmp <= address13;
      end if;
--synthesis translate_on
end process;

memory_access_guard_14: process (address14) 
begin
      address14_tmp <= address14;
--synthesis translate_off
      if (CONV_INTEGER(address14) > AddressRange-1) then
           address14_tmp <= (others => '0');
      else 
           address14_tmp <= address14;
      end if;
--synthesis translate_on
end process;

memory_access_guard_15: process (address15) 
begin
      address15_tmp <= address15;
--synthesis translate_off
      if (CONV_INTEGER(address15) > AddressRange-1) then
           address15_tmp <= (others => '0');
      else 
           address15_tmp <= address15;
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
        if (ce4 = '1') then 
            q4 <= mem2(CONV_INTEGER(address4_tmp)); 
        end if;
        if (ce5 = '1') then 
            q5 <= mem2(CONV_INTEGER(address5_tmp)); 
        end if;
        if (ce6 = '1') then 
            q6 <= mem3(CONV_INTEGER(address6_tmp)); 
        end if;
        if (ce7 = '1') then 
            q7 <= mem3(CONV_INTEGER(address7_tmp)); 
        end if;
        if (ce8 = '1') then 
            q8 <= mem4(CONV_INTEGER(address8_tmp)); 
        end if;
        if (ce9 = '1') then 
            q9 <= mem4(CONV_INTEGER(address9_tmp)); 
        end if;
        if (ce10 = '1') then 
            q10 <= mem5(CONV_INTEGER(address10_tmp)); 
        end if;
        if (ce11 = '1') then 
            q11 <= mem5(CONV_INTEGER(address11_tmp)); 
        end if;
        if (ce12 = '1') then 
            q12 <= mem6(CONV_INTEGER(address12_tmp)); 
        end if;
        if (ce13 = '1') then 
            q13 <= mem6(CONV_INTEGER(address13_tmp)); 
        end if;
        if (ce14 = '1') then 
            q14 <= mem7(CONV_INTEGER(address14_tmp)); 
        end if;
        if (ce15 = '1') then 
            q15 <= mem7(CONV_INTEGER(address15_tmp)); 
        end if;
    end if;
end process;

end rtl;

