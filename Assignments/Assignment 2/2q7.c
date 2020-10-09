// Program for finding the point of intersection of two lines 
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f,x,y;
printf("enter the variables:");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
/* let ax+by+c=0 -(1); dx+ey+f=0 -(2);
 * for x coordinate multiply eqn1 by d and eqn2 by a, then subtract eqn2 from eqn1
 * similarly, for y coordinate */
x=(f*b-c*e)/(a*e-b*d); 
y=(a*f-c*d)/(b*d-a*e);
printf("the point of intersection is:(%f,%f)",x,y);



}
