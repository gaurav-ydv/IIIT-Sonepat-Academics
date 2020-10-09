//Picture printing program q4
#include<stdio.h>
void main()
{
int a,b;
for(b=1;b<7;b++)
{
for(a=1;a<31;a++)
if((b%2==1)||((b%2==0)&&(a%3==1))||((b%2==0)&&(a==6))||((b%2==0)&&(a==11))||((b%2==0)&&(a==21))||((b%2==0)&&(a==26)))	
{printf("*");}
else
printf("0");
printf("\n");
}   
}
