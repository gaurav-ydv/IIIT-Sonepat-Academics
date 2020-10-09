//Program to delete second last digit of a number
#include<stdio.h>
void main()
{
int g,h,l;
printf("enter the number:");
scanf("%d",&g);
h=(g-g%100)/10;
l=h+g%10;
printf("the new number is:%d",l);

}
