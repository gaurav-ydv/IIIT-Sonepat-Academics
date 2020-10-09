//Reading in a loop Program7
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,n,num,even;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if(a%2==0)
    {
        even=a;
    }
    else
    {
     num=a;
    }
}
printf("%d",even);
}


