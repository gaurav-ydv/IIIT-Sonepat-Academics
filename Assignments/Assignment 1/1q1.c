/*Program for Area of Rectangle*/
#include<stdio.h>
void main()
{
int l,b,Area;                                                 /*Declaring variables*/
printf("enter the length of the Rectangle:");
scanf("%d",&l);                                                /*input of dimensions given by user*/
printf("enter the width of the Rectangle:");
scanf("%d",&b);
Area=l*b;                                                    /*formula of area of rectangle*/
printf("the area of the rectangle is: %d",Area);

}
