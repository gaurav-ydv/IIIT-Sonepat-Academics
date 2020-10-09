//Program to double the last digit
#include<stdio.h>
void main()
{
int a,m;
printf("enter the number:");
scanf("%d",&a);
m= a+ a%10;
printf("the new number is :%d",m);
}
