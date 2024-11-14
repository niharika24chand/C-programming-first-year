#include<stdio.h>
int main()
{
int year; int by=0001; int ly,ry,td,d;
printf("\n enter the year: ");
scanf("%d",&year);
year=year-by;
ly=year/4;
ry=year-ly;
td=(ry*365)+(ly*366);
d=td%7;
if(d==0)
printf("\n sunday");
else if(d==1)
printf("\n monday");
else if(d==2)
printf("\n tuesday");
else if(d==3)
printf("\n wednesday");
else if(d==4)
printf("\n thursday");
else if(d==5)
printf("\n friday");
else if(d==6)
printf("\n saturday");
else
printf("\n invalid choice");
return 0;
}
