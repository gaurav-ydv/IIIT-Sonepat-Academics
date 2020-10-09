//Reading in a loop Program18
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,i,n,x=0,sum=0;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if(a%2==0)
       x=1;
    if(x==1)
       sum=sum+a;
}
printf("%d",sum);
}




