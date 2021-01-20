--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:58:11 11/30/2020
-- Design Name:   
-- Module Name:   /home_pers/trocache/cpt2/testcpt.vhd
-- Project Name:  cpt2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cpt
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
 
ENTITY testcpt IS
END testcpt;
 
ARCHITECTURE behavior OF testcpt IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BMS
    PORT(
         K1: out STD_Logic; 
			K2: out STD_Logic; 
			K3: out STD_Logic; 
			K4: out STD_Logic; 
			K5: out STD_Logic; 
			ACK : out STD_Logic; 
			LOAD : in STD_Logic:= '0';
			MODE_0 : in STD_Logic:= '0'; 
			MODE_1 : in STD_Logic:= '0'; 
			RESET : in STD_Logic:= '0';
			CLK : in STD_Logic 
						
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
	signal LOAD :  STD_Logic := '0'; 
	signal MODE_0 :  STD_Logic:= '0'; 
	signal MODE_1 : STD_Logic:= '0'; 
	signal RESET :  STD_Logic:= '0'; 

 	--Outputs
   signal K1: STD_Logic:= '0';
	signal K2: STD_Logic:= '0';
	signal K3: STD_Logic:= '0'; 
   signal K4: STD_Logic:= '0';
	signal K5: STD_Logic:= '0';
	signal ACK: STD_Logic:= '0'; 
		
	
  
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
    constant CLK_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BMS PORT MAP (
          CLK=> CLK,
			 LOAD=>LOAD,
			 MODE_0=>MODE_0,
			 MODE_1=>MODE_1,
			 RESET=>RESET,
			 K1=>K1,
			 K2=>K2,
			 K3=>K3,
			 K4=>K4,
			 K5=>K5,
			 ACK=>ACK
        );

   -- Clock process definitions
   ck_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK  <= '1';
		wait for CLK_period/2;
   end process;
 
  -- Stimuli process ICI on rentre les signaux que l'on veut tester 
 stim_proc: process
   begin		
	
-- Simulation n°1 : test du reset okay sauf que la commande est initialisée à ouvert
	-- Ne pas oublier, il faut initialiser dans BMS.vhd les interrupteurs à '1' 
	--RESET<= '1' after 1ms,'0' after 2 ms;
        
		
-- Simulation n° 2 : Mode PARALLEL puis RESET 
		--RESET<= '1' after 0ms,'0' after 0.25 ms, '1' after 8ms , '0' after 8.5ms ; 
		--MODE_0<='0' after 4 ms;--, '1' after 10ms; 
		--MODE_1<='0' after 4 ms ;--, '1' after 10ms ; 
		--LOAD<='1' after  4.5 ms,'0' after  5.5ms ;--, '1' after 8.5ms ;
		
-- Simulation n° 3 : Mode PARALLEL puis RESET puis SERIES 
		--RESET<= '1' after 0ms,'0' after 0.25 ms, '1' after 8ms , '0' after 8.5ms ; 
		--MODE_0<='0' after 4 ms , '1' after 11ms , '0' after 15 ms; 
		--MODE_1<='0' after 4 ms , '1' after 11ms, '0' after 15 ms; 
		--LOAD<='1' after  4.5 ms,'0' after  5.5ms , '1' after 13ms , '0' after 14ms ;
		
-- Simulation n° 4 : Mode PARALLEL puis RESET puis BATT1
		--RESET<= '1' after 0ms,'0' after 0.25 ms, '1' after 8ms , '0' after 8.5ms ; 
		--MODE_0<='0' after 4 ms , '1' after 11ms , '0' after 15 ms; 
		--MODE_1<='0' after 4 ms , '0' after 11ms, '0' after 15 ms; 
		--LOAD<='1' after  4.5 ms,'0' after  5.5ms , '1' after 13ms , '0' after 14ms ;	

-- Simulation n° 5 : Mode PARALLEL puis RESET puis BATT2
		RESET<= '1' after 0ms,'0' after 0.25 ms, '1' after 8ms , '0' after 8.5ms ; 
		MODE_0<='0' after 4 ms , '0' after 11ms , '0' after 15 ms; 
		MODE_1<='0' after 4 ms , '1' after 11ms, '0' after 15 ms; 
		LOAD<='1' after  4.5 ms,'0' after  5.5ms , '1' after 13ms , '0' after 14ms ;
		
-- Simulation n° 6 : Test que l'on reste en RESET tant que la configuration n'est pas terminée
		--RESET<= '1' after 0ms,'0' after 0.25 ms ;
		--MODE_0<='0' after 5 ms ;--, '0' after 11ms ;
		--MODE_1<='0' after 5 ms ;--, '1' after 11ms ; 
		--LOAD<='1' after  0.45 ms,'0' after  0.65 ms ;
		
      wait;
   end process;


END;
