#include<stdio.h>
int  main()
{
int x1,y1,x2,y2,x3,y3;
printf("\n enter the value of x1: ");
scanf("%d",&x1);
printf("\n enter value of y1: ");
scanf("%d",&y1);
printf("\n enter value of x2: ");
scanf("%d",&x2);
printf("\n enter value of y2: ");
scanf("%d",&y2);
printf("\n enter value of x3: ");
scanf("%d",&x3);
printf("enter value of y3: ");
scanf("%d",&y3);
int area;
area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
if(area==0)
printf("The points are collinear \n ");
else
printf("the points are not collinear \n ");
return 0;
}
