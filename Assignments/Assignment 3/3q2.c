// Program to find the largest number among four given numbers
#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter the four numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
{
printf("the greatest number is:%d",a);
}
else
{
if(b>c && b>a && b>d)
{ printf("the greatest number is:%d",b);
}
else
{if(c>a && c>b && c>d)
{printf("the greatest number is:%d",c);
}
else
{printf("teh greatest number is:%d",d);}
}
}
}
