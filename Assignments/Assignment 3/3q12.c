// Program to find the area of the triangle formed by the points of intersection of the line and a circle and centre of the circle
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,p,q,r,dis,length,area;
printf("enter the values:");
scanf("%d%d%d%d%d%d",&p,&q,&r,&a,&b,&c);
dis=(a*p+b*q+c)/sqrt(a*a+b*b);
if(dis<r)
{
length=sqrt(r*r-dis*dis);/* half the distance b/w points of intersecton*/
area=dis*length;
printf("Area is:%d",area);

}
else
{printf("no output");}



}
