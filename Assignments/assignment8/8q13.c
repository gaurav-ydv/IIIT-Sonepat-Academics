//Reading in a loop Program13
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,n,b=0,num,even;
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
     b=b+num;
    }
}
printf("\n the average of odd numbers is: %d",b/n);
}



