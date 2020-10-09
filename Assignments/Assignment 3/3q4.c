//Program for checking a triangle whether it is a right angle triangle or not
#include<stdio.h>
void main()
{int a,b,c;
printf("enter the sides of the triangle: ");
scanf("%d%d%d",&a,&b,&c);
// using cosine formula for triangle
// cosine of 90 degree is zero that means  cos(A)=0,which is possible if a*a=b*b+c*c
if(a*a==b*b+c*c)
{printf("angle A is 90 degree");}
else
{printf("angle A is not equal to 90 degree");
}
}
