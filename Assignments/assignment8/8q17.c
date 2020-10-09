//Reading in a loop Program17
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,i,n,x=0,sum=0,k;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
     x=x*a;
     sum=sum+x;
     x=a;
}
printf("%d",sum);
}











