// Program to find the length of chord made by intersection of a line with a circle
#include<stdio.h>
#include<math.h>
void main()
{
float k,h,r,s,y1,y2,length;
printf("enter the value of (h,k):");
scanf("%f%f",&h,&k);
printf("enter the radius:");
scanf("%f",&r);
printf("enter the x intercept:");
scanf("%f",&s);
/*let (x-h)*(x-h(+(y-k)*(y-k)=r*r be the equation of the circle with centre at (h,k) and radius r
 * the equation of the line is: x=s
 * after substituting the value of x in the equation of the circle ,we get two values of y co-ordinates, where the line      cuts the circle 
 * hence the distance b/w the two points is the length of the chord
 * there will exist a chord only when s belongs to [h-r,h+r] */
y1=k-sqrt(r*r-(s-h)*(s-h));
y2=k+sqrt(r*r-(s-h)*(s-h));
length=sqrt((y1-y2)*(y1-y2));
printf("the length of the chord is: %f",length);
}

