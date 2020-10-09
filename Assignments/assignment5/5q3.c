//Picture printing program q3
#include<stdio.h>
void main()
{
int i,j;
for(j=1;j<5;j++)
{
for(i=1;i<21;i++)
if((i+j)%2==1)
printf("0");
else
printf("*");
printf("\n");
}   
}
