// Program for finding the area of circle made by intersection of a plane and a sphere
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f,g,h,rad,dis,Rad,Area,pi=3.14;
printf("enter the values of variables:");
scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
rad=sqrt((-e/2)*(-e/2)+(-f/2)*(-f/2)+(-g/2)*(-g/2)-h);
dis=(a*(-e/2)+b*(-f/2)+c*(-g/2)+d)/sqrt(a*a+b*b+c*c);
Rad=sqrt(rad*rad-dis*dis);
Area=pi*Rad*Rad;
printf("the area of the circle is:%f",Area);
}
