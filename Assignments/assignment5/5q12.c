//Picture Printing Program q12
#include<stdio.h>
void main()
{
int x,y;
for(y=0;y<10;y++)
{
for(x=0;x<20;x++)
if((y==0)||(y==2)||(y==4)||(x>3&&x<11&&y==5)||(x>3&&x<11&&y==7)||(x>3&&x<11&&y==9))
printf("*");
else
printf("0");
printf("\n");
}   
}
