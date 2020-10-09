//Program for finding the angle of a Triangle
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,A,pi,Angle;
pi=3.14;
printf("enter the sides of the triangle");
scanf("%f%f%f",&a,&b,&c);
/*there exist a cosine formula for every triangle which is cos(B)=(a*a+c*c-b*b)/2*a*c
 * where a,b,c are the sides of the triangle and B is the angle of triangle which is opposite to the side b
 * for radian to degree : deg=(rad*180)/3.14      */
A= acos((b*b+c*c-a*a)/2*b*c);
printf("the angle is:%f radian",A);
Angle=(A*180)/pi;
printf("\n the angle is:%f degree",Angle);
}
