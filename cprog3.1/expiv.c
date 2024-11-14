#include<stdio.h>
int result(int year);

int main()
{
int year;
printf("enter the year: ");
scanf("%d", &year);
int finalday=result(year);
printf("january first of year %d falls on a ", year);
switch(finalday)
{
case1:
      printf(" monday \n"); break;
case2:
      printf(" tuesday \n");break;
case3:
      printf(" wednesday \n");break;
case4:
      printf(" thursday \n");break;
case5:
      printf(" friday \n");break;
case6:
      printf(" saturday \n");break;
case7:
      printf("sunday \n");break;
}
getch();
return 0;
}
int result(int year)
{
int prevday=1; int prevyear=1; int totalday=0;
int i;
for(i=prevyear;i<year;i++)
{
if((i%4==0)||(i%400==0)&&(i%100!=0))
{
totalday+=366;
}
else
{
totalday+=365;
}
}

int finalday=(prevday+totalday)%7;
if(finalday==0)
{
finalday=7;
}
return finalday;
}
