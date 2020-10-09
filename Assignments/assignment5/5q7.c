//Picture printing program q7
#include<stdio.h>
void main()
{
int x,j;
for(j=1;j<12;j++)
{
for(x=0;x<17;x++)
if(((j>=2&&j<=10)&&(x>=7&&x<=11))||((j>=3&&j<=9)&&(x>=5&&x<=13))||((j>=4&&j<=8)&&(x>=4&&x<=14))||((j>=5&&j<=7)&&(x>=3&&x<=15)))
printf("*");
else
printf("0");
printf("\n");
}   
}
