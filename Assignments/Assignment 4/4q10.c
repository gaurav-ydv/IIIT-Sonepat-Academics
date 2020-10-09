// program to print the numbers whose last digit is b/w 5and8
#include<stdio.h>
void main()
{
int a;
for(a=0;a<100;a++)
if((a%10)%5==0||(a%10)%6==0||(a%10)%7==0||(a%10)%8==0)
{printf("\n%d",a);}


}
