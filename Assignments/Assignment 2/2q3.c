// Program for Area of triangle using co-ordinates of vertices
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f,s,A,B,C,AREA;
printf("enter the co-ordinates:");
scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
A=sqrt((a-c)*(a-c)+(b-d)*(b-d));
B=sqrt((a-e)*(a-e)+(b-f)*(b-f));
C=sqrt((c-e)*(c-e)+(d-f)*(d-f));
s=(A+B+C)/2;
AREA=sqrt(s*(s-A)*(s-B)*(s-C));
printf("the area is:%f",AREA);

}
