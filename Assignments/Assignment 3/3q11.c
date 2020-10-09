// Program for finding the middle number among three numbers
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>c&&c>b)
{printf("the output is:%d",c);}
else{
if(c>a&&a>b)
{printf("the output is:%d",a);}
else{if(c>b&&b>a)
{printf("the output is:%d",b);}}
}


}
