// Picture printing program q2
#include<stdio.h>
void main()
{
int x,y;
for(y=1;y<=10;y++)
{
for(x=1;x<=20;x++)
if((y<8&&y>3)||(x<16&&y>7)||(x>10&&y<4))
printf("*");
else
printf("0");
printf("\n");
}  
}
