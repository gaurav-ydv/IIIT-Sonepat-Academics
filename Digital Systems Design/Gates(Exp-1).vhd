library ieee;
use ieee.std_logic_1164.all;
entity gate is 
   port( A1,B1 : in std_logic; --Inputs of the OR Gate
          Y1:out std_logic; --Output of OR Gate
         A2,B2 : in std_logic; --Inputs of the AND Gate
          Y2:out std_logic; --Output of AND Gate
           A3 : in std_logic; --Input of the NOT Gate
          Y3:out std_logic; --Output of NOT Gate
          A4,B4 : in std_logic; --Inputs of the NAND Gate
          Y4:out std_logic; --Output of NAND Gate
          A5,B5 : in std_logic; --Inputs of the NOR Gate
          Y5:out std_logic; --Output of NOR Gate
           A6,B6 : in std_logic; --Inputs of the XOR Gate
          Y6:out std_logic; --Output of XOR Gate
          A7,B7 : in std_logic; --Inputs of the XNOR Gate
          Y7:out std_logic); --Output of XNOR Gate
 end gate;

architecture data_gate of gate is
begin
Y1<= A1 or B1;
Y2<= A2 and B2;
Y3<= not A3;
Y4<= A4 nand B4;
Y5<= A5 nor B5;
Y6<= A6 xor B6;
Y7<= A7 xnor B7;
end data_gate;

