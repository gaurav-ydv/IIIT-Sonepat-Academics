// Program to find a different number among three numbers 
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a==b)
{printf("the different number is:%d",c);
}
else
{
if(a==c)
{printf("the different number is:%d",b);}
else
{printf("the different number is:%d",a);}}
}

