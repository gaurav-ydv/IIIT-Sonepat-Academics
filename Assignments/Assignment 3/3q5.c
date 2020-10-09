// program to determine whether the given line is vertical or not
#include<stdio.h>
void main()
{
float a,b,c,slope;
printf("enter the variables:");
scanf("%f%f%f",&a,&b,&c);
slope=-(a/b);
printf("the slope of the line is:%f",slope);
if(b==0)
{ printf("the line is vertical");}
else
{printf(" \n the line is not vertical");}



}
