#include<stdio.h>
int fibo(int num);
int main()
{
int num;
printf("enter the limit for the fibo series: \n");
scanf("%d",&num);
int i;
printf("fibonacci series: \n");
for(i=0;i<num;i++)
{
printf("%d \t",fibo(i));
}
return 0;
}
int fibo(int num)
{
if(num<=1)
return num;
else
{
return fibo(num-1)+fibo(num-2);
}
}
