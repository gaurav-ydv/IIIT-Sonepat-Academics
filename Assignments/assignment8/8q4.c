//Reading in a loop Program 4
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,i,n;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    b=b+(((a/100)*(a/10))+(a%10));
}
printf("%d",b);
}

