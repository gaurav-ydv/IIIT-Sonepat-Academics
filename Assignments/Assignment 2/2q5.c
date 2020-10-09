// Program for distance of a point from a line
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,distance;
printf("enter the point:");
scanf("%f %f",&a,&b);
printf("enter the variables:");
scanf("%f %f %f",&c,&d,&e);
/* the distance of a point (d,e), from a line  a*x+b*y+c=0 is (a*d+b*e+c)/sqrt(a*a+b*b)              */
distance=(c*a+d*b+e)/sqrt(c*c+d*d);
printf("the distance is :%f",distance);


}
