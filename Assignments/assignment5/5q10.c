//Picture printing program q10
#include<stdio.h>
void main()
{
int x,y;
for(y=0;y<10;y++)
{
for(x=0;x<20;x++)
if(y>1&&x+y>7&&x-2*y<4)
printf("0");
else
printf("*");
printf("\n");
}   
}
