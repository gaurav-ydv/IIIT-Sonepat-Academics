// Picture printing Program q8
#include<stdio.h>
void main()
{
 int x,y;
for(y=0;y<10;y++)
{
for(x=0;x<20;x++)
if((x+y>=5&&x<11&&y<7)||(y==7&&x<11)||(y==8)||(y==9))
printf("*");
else
printf("0");
printf("\n");
}   
}
