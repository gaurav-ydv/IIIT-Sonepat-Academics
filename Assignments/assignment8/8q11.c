//Reading in a loop Program11
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,sum=0,n,num,even;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if((a%10)%3==0)
    {
        sum=sum+a;
    }
}
printf("%d",sum);
}



