//Reading in a loop Program12
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,n,sum=0,even;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if((a>30)&&(a<90))
    {
        sum=sum+a;
    }
}
printf("%d",sum);
}



