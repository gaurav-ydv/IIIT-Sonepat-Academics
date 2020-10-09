//Program to determine the roots of  a given quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float d,e,f,g,h;
printf("enter the coefficient of x*x:");
scanf("%d",&a);
printf(" enter the coefficient of x:");
scanf("%d",&b);
printf("enter the constant:");
scanf("%d",&c);
e=(-b+sqrt(b*b-4*a*c))/2*a;
f=(-b-sqrt(b*b-4*a*c))/2*a;
d=-b/2*a;
h=sqrt(4*a*c-b*b);
if(b*b>4*a*c)
{printf("the roots are:%f,%f",e,f);}
else
{
if(b*b==4*a*c)
{printf("both roots are equal and the root is:%f",d);
}
else
{printf("the roots are:%f+%fi",d,h);}}



}

