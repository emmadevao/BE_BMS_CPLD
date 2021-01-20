
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
signal CLK_ter : STD_LOGIC := '0';


--signal Qdiv : STD_LOGIC_VECTOR ( 12 downto 0):="0000000000000";
signal Qdiv : STD_LOGIC_VECTOR ( 15 downto 0):="0000000000000000";
--signal Qdiv : STD_LOGIC_VECTOR ( 4 downto 0):="00000";  -- à décommenter pour les simulations 
signal Qdiv2 : STD_LOGIC_VECTOR ( 1 downto 0):="00";


-- la description des états 

type state is (OUVERT, PARALLEL, SERIES, BATT1, BATT2); 
signal command : state ; 
--/!\ ligne suivante indispensable car sinon mise en danger de l'intégrité du bloc BMS
-- permet de fixer l'état initial
ATTRIBUTE ENUM_ENCODING : STRING;
ATTRIBUTE ENUM_ENCODING OF state: TYPE IS "000 001 010 100 101";

-- compteur pour le délais de 1ms 
signal compteur : STD_LOGIC_VECTOR(2 downto 0):="000"; 

--permet de détecter le changement d'état et de remettre le compteur à zéro pour fermer les switches dans le bon ordre 
signal newcommand : STD_LOGIC := '0'; 

-- signal qui permet de ne pas changer d'état pendant que l'on effectue la configuration RESET
signal busy : STD_LOGIC := '0';

begin

--------- Premier process : prescaler pour créer une clock à 5 ms (CLK à 20ns)
process(CLK)
begin 

if (CLK='1' and CLK'Event)then 

	if Qdiv="110000110101000"then -- valeur calculée pour tests sur carte d'essai clk CPDL = 50 MHz
	--if Qdiv="1001110001000" then
		CLK_bis<='1'; 
		Qdiv<="0000000000000000";
		--Qdiv<="0000000000000";

		
	else 
		Qdiv <=Qdiv+1;
		CLK_bis<='0';
	end if; 
end if; 

end process; 

---------- Deuxième process : prescaler pour créer une clock à 10ms (% de la première CLK_bis qui est à 5ms)
process(CLK_bis)
begin 

if (CLK_bis='1' and CLK_bis'Event)then 


	if Qdiv2="01"then  
		CLK_ter<='1';
		Qdiv2<="00";
		
	else 
		Qdiv2 <=Qdiv2+1;
		CLK_ter<='0';
	end if; 
end if; 

end process;

---------- Troisième process : Permet d'assurer la priorité du reset, rien ne peut se passer tant que la config du reset n'est pas terminée
Reset_priority : process(CLK)
begin 
	if (CLK='1' and CLK'Event)then
		if (command=OUVERT and compteur/="111") then 
			busy<='1'; -- on ne peut pas changer de configuration tant que les interrupteurs ne sont pas tous ouverts
		else 
			busy<='0'; 
		end if;
	end if ; 
end process Reset_priority ;

------Quatrième process 
-- Machine à état de la configuration des interrupteurs : mise à jour des états
-- Synchrone avec  CLK_bis à 0,5ms

Config_mode : process(CLK_bis)

begin
--


if (CLK_bis='1' and CLK_bis'Event)then
--
	if(RESET='1')then
		command<= OUVERT ; 
		newcommand<='1';
		
--
	elsif (command=OUVERT and LOAD='1' and MODE_0='0' and MODE_1='0' and busy='0') then
		command<=PARALLEL; 
		newcommand<='1';
		
		
--
	elsif (command=OUVERT and LOAD='1' and MODE_0='1' and MODE_1='1' and busy='0') then
		command<=SERIES; 
		newcommand<='1';
		
	
	elsif (command=OUVERT and LOAD='1' and MODE_0='1' and MODE_1='0' and busy='0') then 
		command<=BATT1; 
		newcommand<='1';
		
	elsif (command=OUVERT and LOAD='1' and MODE_0='0' and MODE_1='1' and busy='0') then
		command<=BATT2;
		newcommand<='1';
	
	elsif(compteur = "000") then --si la mise à jour de la commande est plus rapide que celle du compteur (car les deux process synchrones sur deux clocks )
		newcommand<='0'; 
	
	else 
		NULL ;
	 

	
	end if ;
	
end if; 
end process Config_mode ;

---- Cinquième process 
-- Synchrone avec la CLK_ter à 1ms
-- Machine à état de la configuration des interrupteurs : mise à jour des outputs
Config_switch : process(CLK_ter)
begin
	
if (CLK_ter='1' and CLK_ter'Event)then

	if (newcommand='1') then 
		compteur <= "000"; 
		ACK<='0';
	else
	
		case command is 
			when OUVERT => IF (compteur="000") THEN 
									K1<='0'; 
									compteur<=compteur+1;
									
							ELSIF (compteur="001") THEN
									K5<='0'; 
									compteur<=compteur+1;
								
							ELSIF (compteur="010") THEN
									K3<='0'; 
									compteur<=compteur+1;
								
							ELSIF (compteur="011") THEN
									K4<='0'; 
									K2<='0';
									ACK<='1'; 
									compteur<="111"; -- valeur du compteur quand attente du nouvelle commande, permet de faire les configs qu'une seule fois 
									
							ELSE 
									ACK<='0';
								
							END IF; 
							
							
							
		when PARALLEL =>IF (compteur="000") THEN 
								K2<='1';
								K4<='1';								
								compteur<=compteur+1;
								
							ELSIF (compteur="001" ) THEN
								K1<='1'; 
								ACK<='1';
								compteur<="111";  
								
							ELSE 
								ACK<='0'; 
								
							END IF;
							  
		when SERIES=>	IF (compteur="000") THEN 
								K3<='1'; 
								compteur<=compteur+1; 
								
							ELSIF (compteur="001") THEN
								K1<='1'; 
								compteur<=compteur+1;
								
							ELSIF (compteur="010") THEN
								K5<='1'; 
								compteur<="111";
								ACK<='1';
							ELSE 
								ACK<='0';
							END IF; 
							  
		when BATT1 => 	IF (compteur="00") THEN 
								K2<='1'; 
								compteur<=compteur+1; 
							ELSIF (compteur="01") THEN
								K1<='1'; 
								compteur<="111";
								ACK<='1';
							ELSE 
								ACK<='0'; 
								
							END IF;
							  
		when BATT2 => 	IF (compteur="00") THEN 
								K4<='1'; 
								compteur<=compteur+1; 
							ELSIF (compteur="01") THEN
								K1<='1'; 
								compteur<="111"; 
								ACK<='1';
							ELSE 
							ACK<='0';
							
							END IF;
		
-- toujours mettre le cas par défaut 
	when others => NULL; 

	end case; 
end if; -- celui du newcommand

end if; -- celui du clock event
end process Config_switch ;

	
end architecture StateMachine;













