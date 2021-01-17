
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;
--/*********************************************************\
-- Ajouter une variable qui bloque tout pendant la config reset
-- Gérer le ACK 
-- Implémenter les config de batterie 
-- Tester le reset seul 
-- Tester mode série batt1 batt2 
-- Lister et tester des cas critiques ou le uC envoie n'importe quoi 
--/*********************************************************\
entity BMS is
Port (

-- OUTPUTS :
-- commandes des interrupteurs 
K1: out STD_Logic:= '0'; 
K2: out STD_Logic:= '0'; 
K3: out STD_Logic:= '0';
K4: out STD_Logic:= '0'; 
K5: out STD_Logic:= '0';

-- ACK qui confirme la bonne mise en place de la configuration 
ACK : out STD_Logic:='0'; 
--CLK_bis : out STD_Logic;
-- INPUTS :
-- ordre du uC qui indique que l'on peut charger la nouvelle configuration 
LOAD : in STD_Logic:= '0';

--variables qui indiquent quel mode de configuration des batteries est mis en place 
-- 00 = parallèle | 11 = série | 01 = batterie1 | 10 batterie 2
MODE_0 : in STD_Logic:= '0'; 
MODE_1 : in STD_Logic:= '0'; 

-- Arrêt d'urgence ordre d'ouvrir tous les interrupteurs 
RESET : in STD_Logic:= '0';

-- Signal d'horloge : oscillateur est à 33kHz
CLK : in STD_Logic );
end  BMS;

architecture StateMachine of BMS is


-- Signaux pour le prescaler 
signal CLK_bis : STD_LOGIC := '0';
signal CLK_ter : STD_LOGIC :='0' ;
signal Qdiv : STD_LOGIC_VECTOR ( 5 downto 0):="000000";
signal Qdiv2 : STD_LOGIC_VECTOR ( 3 downto 0):="0000";


-- la description des états 

type state is (OUVERT, PARALLEL, SERIES, BATT1, BATT2);
signal command : state ; 

-- compteur pour le délais de 1ms 
signal compteur : STD_LOGIC_VECTOR(1 downto 0):="00"; 

begin

-- Premier process : prescaler pour créer une clock à 1kHz
process(CLK)
begin 

if (CLK='1' and CLK'Event)then 


	if Qdiv="100001"then  
		CLK_bis<='1';
		Qdiv<="000000";
		
	else 
		Qdiv <=Qdiv+1;
		CLK_bis<='0';
	end if; 
end if; 

end process; 

-- Deuxième process : prescaler pour créer une clock à 3kHz
process(CLK)
begin 

if (CLK='1' and CLK'Event)then 


	if Qdiv2="1011"then  
		CLK_ter<='1';
		Qdiv2<="0000";
		
	else 
		Qdiv2 <=Qdiv2+1;
		CLK_ter<='0';
	end if; 
end if; 

end process;

-- Machine à état de la configuaration des interrupteurs 
-- Synchrone avec la nouvelle clock CLK_ter

Config_mode : process(CLK_ter)

begin
--


if (CLK_ter='1' and CLK_ter'Event)then
--
	if(RESET='1')then
		command<= OUVERT ; 
		
--
	elsif (command=OUVERT and LOAD='1' and MODE_0='0' and MODE_1='0') then
		command<=PARALLEL; 
		
		
--
	elsif (command=OUVERT and LOAD='1' and MODE_0='1' and MODE_1='1') then
		command<=SERIES; 
		--ACK<='0';
--		
--	elsif (command=OPEN and LOAD='1' and MODE_0='0' and MODE_1='1') then 
--		command<=BATT1; 
--		
--	elsif (command=OPEN and LOAD='1' and MODE_0='1' and MODE_1='0') then
--		command<=BATT2;
--		
	else 
	NULL ; 
	
	end if ;
	
end if; 
end process Config_mode ;

Config_switch : process(CLK_bis)

begin
--
if (CLK_bis='1' and CLK_bis'Event)then

--ACK<='0';
--compteur<="00";
	case command is 
		when OUVERT => IF (compteur="00") THEN 
								K1<='0'; 
								ACK<='0';
									
							ELSIF (compteur="01") THEN
								K5<='0'; 
									
							ELSIF (compteur="10") THEN
								K3<='0'; 
									
							ELSE
								K4<='0'; 
								K2<='0';
								ACK<='1'; 
							END IF; 
							
							compteur<=compteur+1;
							
		when PARALLEL =>IF (compteur="00" AND ACK='0') THEN 
								K2<='1';
								K4<='1';								
								compteur<=compteur+1; 
							ELSIF (compteur="01" ) THEN
								K1<='1'; 
								ACK<='1';
								compteur<=compteur+1;  
							END IF;
							  
		when SERIES=>	IF (compteur="00") THEN 
								K3<='1'; 
								compteur<=compteur+1; 
							ELSIF (compteur="01") THEN
								K1<='0'; 
								compteur<=compteur+1; 
							ELSIF (compteur="10") THEN
								K3<='0'; 
								compteur<=compteur+1; 
							ELSE 
								K4<='0'; 
								K2<='0';
							END IF; 
							  
		when BATT1 => 	IF (compteur="00") THEN 
								K2<='1'; 
								compteur<=compteur+1; 
							ELSIF (compteur="01") THEN
								K1<='1'; 
								compteur<=compteur+1; 
							END IF;
							  
		when BATT2 => 	IF (compteur="00") THEN 
								K4<='1'; 
								compteur<=compteur+1; 
							ELSIF (compteur="01") THEN
								K1<='1'; 
								compteur<=compteur+1; 
							END IF;
		
-- regarder si il faut mettre un cas défaut 

	end case; 
end if; 
end process Config_switch ;

	
end architecture StateMachine;













