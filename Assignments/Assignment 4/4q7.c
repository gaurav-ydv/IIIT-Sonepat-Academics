//Program to print numbers which are even but are not the multiple of either 3 or 5
#include<stdio.h>
void main()
{    
int i;

for(i=1; i<=100; i++)
if((i%3!=0)&&(i%5!=0)&&(i%2==0))

printf("%d\n",i);	




}
