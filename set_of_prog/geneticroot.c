#include<stdio.h>
int main()
{
int n,result=0,temp;
printf("enter the number: \n");
scanf("%d",&n);
while(n>0)
{
temp=n%10;
result+=temp;
n/=10;
}
int temp2=result;
result=0;
while(temp2>0)
{
temp=temp2%10;
result+=temp;
temp2/=10;
}
printf("the genetic root of a number is %d", result);
return 0;
}
