//Program to exchange last two digits of a number
#include<stdio.h>
void main()
{
int n,a,b,c,d,e;
printf("enter the number:");
scanf("%d",&n);
a=n%100;
b=n%10;
c=n-a;
d=a/10;
e=c+b*10+d;
printf("the new number is: %d",e);



}	
