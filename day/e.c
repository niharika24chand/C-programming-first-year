#include<stdio.h>
int result(int year);
int main()
{
int year;
printf("enter a year: ");
scanf("%d",&year);
int d=result(year);
printf("january first of year %d falls on a ", year);
if(d==1)
printf("monday \n");
else if(d==2)
printf("tuesday \n");
else if(d==3)
printf("wednesday \n");
else if(d==4)
printf("thursday \n");
else if(d==5)
printf("friday \n");
else if(d==6)
printf("saturday \n");
else if(d==7)
printf("sunday \n");
else
printf("incorrect \n");
return 0;
}
int result(int year)
{
int finalday;
int f, td=0;
if((year%4==0)||(year%400==0)&&(year%100!=0))
{
f=1;//leap year
}
else
{
f=0;//not a leap year
}
if(f==1)
{
td+=366;
}
else if(f==0)
{
td+=365;
}
else
{
printf("invalid \n");
}
 finalday=td%7;
if(finalday==0)
{
finalday=7;
}
return finalday;
}

