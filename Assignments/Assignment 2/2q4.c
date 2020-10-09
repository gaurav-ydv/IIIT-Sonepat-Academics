// Program for slope of a given line
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,slope;
printf("the variables are:");
scanf("%f %f %f",&a,&b,&c);
/* for equation of line a*x+b*y+c=0; the slope of the line is -a/b   */
slope=-(a/b);
printf("the slope is :%f",slope);



}
