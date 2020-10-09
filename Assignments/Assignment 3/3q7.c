// program to find complex roots of a quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float g,h;
printf("enter the variables:");
scanf("%d%d%d",&a,&b,&c);
g=-b/2*a;
h=(sqrt(4*a*c-b*b)/2*a);
if(4*a*c>b*b)
{printf("the complex roots are:%f+i%f \n %f-i%f",g,h,g,h);}
else
{printf("there are no complex roots of the equation");}

}
