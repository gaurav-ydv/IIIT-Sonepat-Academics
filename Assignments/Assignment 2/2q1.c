//Program for area of triangle
#include<stdio.h>
#include<math.h>
void main()
{ float a,b,c,s,Area;
printf("enter the sides of the triangle:");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
Area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area of the triangle is: %f",Area);
}
