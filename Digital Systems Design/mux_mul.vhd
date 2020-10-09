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

 Entity mux is
    Port (S0: in STD_LOGIC;
    S1 :in STD_LOGIC;
    S2 :in STD_LOGIC;
 IN0 :in STD_LOGIC;
   IN1 :in STD_LOGIC;
   IN2 :in STD_LOGIC;
   IN3 :in STD_LOGIC;
   IN4 :in STD_LOGIC;
   IN5 :in STD_LOGIC;
   IN6 :in STD_LOGIC;
   IN7 :in STD_LOGIC;
   Y :out STD_LOGIC );
  End mux ;

  Architecture behavioral of mux is
     Signal a0,a1,a2,a3,a4,a5,a6,a7:BIT;
    begin
    a0 <= IN0  and (not s0)  and  (not s1)  and  (not s2);
    a1 <= IN1  and (not s0)  and  (not s1)  and          s2;             
    a2 <= IN2  and (not s0)  and         s1    and  (not s2);
    a3 <= IN3  and (not s0)  and         s1    and          s2;
    a4 <= IN4  and      s0      and  (not s1)  and  (not s2);
    a5 <= IN5  and      s0      and  (not s1)  and          s2;
    a6 <= IN6  and      s0      and          s1   and  (not s2);
    a7 <= IN7  and      s0      and          s1   and          s2;
     
    Y <= a0 or a1 or a2 or a3 or a4 or a5 or a6 or a7
    end behavioral;

 
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
