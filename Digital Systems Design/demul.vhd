library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

Entity Demux is 
Port (S0: in STD_LOGIC;
S1 :in STD_LOGIC;
S2 :in STD_LOGIC;
d0 :out STD_LOGIC;
d1 :out STD_LOGIC;
d2 :out STD_LOGIC;
d3 :out STD_LOGIC;
d4 :out STD_LOGIC;
d5 :out STD_LOGIC;
d6 :out STD_LOGIC;
d7 :out STD_LOGIC);
end Demux ;

 
 
Architecture behavioral of Demux is
begin
Process(S2 , S1 , S0 )
begin
d0 <= (not s2)   and   (not s1)    and   (not s0);
d1 <= (not s2)   and   (not s1)    and       s0  ;             
d2 <= (not s2)   and      s1          and   (not s0);
d3 <= (not s2)   and      s1          and       s0 ;
d4 <=        s2     and   (not s1)    and   (not s0);
d5 <=        s2     and   (not s1)    and       s0  ;
d6 <=        s2     and      s1          and   (not s0) ;
d7 <=        s2     and      s1          and       s0 ;
end Process;
end behavioral;
