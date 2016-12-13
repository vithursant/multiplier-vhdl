----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:15:32 01/31/2016 
-- Design Name: 
-- Module Name:    Multiplier_VHDL - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Multiplier_VHDL is
    port (a, b : in  std_logic_vector(3 downto 0);
        c : out  std_logic_vector(7 downto 0);
        start : in  std_logic);
end Multiplier_VHDL;

architecture Behavioral of Multiplier_VHDL is
     type statetype is (state0, state1, state2);
     signal state: statetype;

begin

process(a,b)
variable PR:std_logic_vector(7 downto 0);
variable BR:std_logic_vector(4 downto 0);

begin
	case present_state is 
		when state0 =>
			if start = '1' then
				next_state <= state1;
			else
				next_state <= state0;
			end if;
		when state1 =>
				c <= "00000000";
				next_state <= state2;
		when state2 =>
				PR := "0000"&b;
				for z in 1 to 4 loop
					if PR(0) = '1' then
						BR := ('0' & a) + ('0' & PR(7 downto 4));
						PR := BR&PR(3 downto 1);
					else
						PR := '0'&PR(7 downto 1);
					end if;
				end loop;
				c <= PR;
				next_state <= state0;
	end case;
end process next_state_process;
end Behavioral;
