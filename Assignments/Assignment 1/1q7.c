//Program to find Sum of last two digits
#include<stdio.h>
void main()
{
int a,b;
printf("enter the number:");
scanf("%d",&a);
b=a%10+(a%100)/10;
printf("sum of the last two digits is:%d",b);

}
