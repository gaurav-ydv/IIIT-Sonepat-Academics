--BY Gaurav Yadav | 11911038 | CSE
Library ieee; 
use ieee.std_logic_1164.all;
  
entity half_adder is
   port(a1,b1:in bit; 
           sum1,carry1:out bit); 
end half_adder; 
entity full_adder is 
  port(a2,b2,c2:in bit; 
              sum2,carry2:out bit); 
end full_adder;
  
architecture data of full_adder is
begin
   sum2<= a2 xor b2 xor c2; 
   carry2 <= ((a2 and b2) or (b2 and c2) or (a2 and c2)); 
end data;
 
architecture data of half_adder is
begin
   sum1<= a1 xor b1;  
   carry1 <= a1 and b1;  
end data;
