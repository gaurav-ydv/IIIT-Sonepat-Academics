// Program for finding the radius and centre of the circle
#include<stdio.h>
#include<math.h>
void main()
{
float g,f,c,a,b,radius;
printf("enter the variables:");
scanf("%f%f%f",&g,&f,&c);
/*general form of circle is : x*x+y*y+2g*x+2f*y=0;
 * where (-g/2,-f/2) are the coordinates of centre of the circle
 * radius = sqrt((g/2)*(g/2)+(f/2)*(f/2)-c) */
a=-g/2;
b=-f/2;
radius=sqrt(a*a+b*b-c);
printf("the centre of the circle is:(%f,%f)",a,b);
printf("the radius is:%f ",radius);

}
