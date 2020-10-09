//Picture printing program q1
#include<stdio.h>
void main()
{
int i,j;
for(j=1;j<6;j++)
{
for(i=1;i<21;i++)
if((j%2==1)||((i%2==0)&&(j%2==0)))
printf("*");
else
printf("0");
printf("\n");
}   
}
