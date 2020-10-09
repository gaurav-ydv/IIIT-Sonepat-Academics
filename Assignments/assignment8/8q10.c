//Reading in a loop Program10
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,n,num,even,count=0;
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
     count+=1;
    }
}
printf("%d",count);
}



