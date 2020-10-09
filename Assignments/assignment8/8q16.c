//Reading in a loop Program16
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,i,n,position=0;
float answer;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if(a%2==0)
    {
        b=b+(i*a);
        position+=i;
    }
  answer=b/position;
}
printf("%d",b);
}




