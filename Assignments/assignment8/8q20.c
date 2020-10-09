//Reading in a loop Program20
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,i,n,x=0,sum=0,k;
printf("enter the n,k value:");
scanf("%d%d",&n,&k);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if(x==k)
       sum=sum+a; if(a%2==0)
       x+=1;
    if(a%2==0)
       x+=1;
}
printf("%d",sum);
}






