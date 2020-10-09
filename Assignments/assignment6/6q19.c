#include<stdio.h>
void main()
{
int i,j;
for(j=1;j<=6;j++)
{
for(i=1;i<=7-j;i++)
printf(" ");
for(i=1;i<=j;i++)
printf("%c",70-j+i);

printf("\n");

}

}