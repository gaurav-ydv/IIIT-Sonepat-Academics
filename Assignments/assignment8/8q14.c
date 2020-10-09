//Reading in a loop Program14
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,sum,i,n,n1,n2;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    n1=a%10;
    n2=((a/10)%10);
    if(n2>n1)
    {
        sum=a-n1-(10*n2)+((10*n1)+n2);
    }
    else
    {
        sum=a;
    }
   b=b+sum;
}
printf("%d",b);
}



