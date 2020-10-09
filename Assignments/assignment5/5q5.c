//picture printing program q5
#include<stdio.h>
void main()
{
int x,y;
for(y=0;y<4;y++)
{
for(x=0;x<20;x++)
if((y%2==0&&y%5==0)||!(x%5!=0&&y%2==1))
printf("*");
else
printf("0");
printf("\n");
}   
}
