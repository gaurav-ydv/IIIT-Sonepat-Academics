// Program to find the distance between two points in cartesian plane
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d;
float dis;
printf("enter the points:");
scanf("%f %f  %f %f",&a,&b,&c,&d);
dis=sqrt((a-c)*(a-c) + (b-d)*(b-d));
printf("the distance is :%f",dis);
}
