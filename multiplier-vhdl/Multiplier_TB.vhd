--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:48:10 01/31/2016
-- Design Name:   
-- Module Name:   C:/Users/vthangar/Documents/Multiplier/Multiplier/Multiplier_TB.vhd
-- Project Name:  Multiplier
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Multiplier_VHDL
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Multiplier_TB IS
END Multiplier_TB;
 
ARCHITECTURE behavior OF Multiplier_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Multiplier_VHDL
    PORT(
         reset : IN  std_logic;
         clk : IN  std_logic;
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         c : OUT  std_logic_vector(7 downto 0);
         start : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal start : std_logic := '0';

 	--Outputs
   signal c : std_logic_vector(7 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Multiplier_VHDL PORT MAP (
          a => a,
          b => b,
          c => c,
          start => start
        );
 
   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
      -- insert stimulus here 
		start <= '1';
		a <= "1111";
		b <= "1111";
		wait for 100 ns;
		a <= "1001";
		b <= "1001";
		wait for 100 ns;
      wait;
   end process;
END;
