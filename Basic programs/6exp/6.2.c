#include<stdio.h>
int gcd(int num1,int num2);
int main()
{
int n1 ,n2, result;
printf("enter a number: \n");
scanf("%d",&n1);
printf("enter a number: \n");
scanf("%d",&n2);
result = gcd(n1,n2);
printf("greatest common divisor is %d: \n",result);
return 0;
}
int gcd(int num1,int num2)
{
if(num2==0)
return num1;
else
return gcd(num2, num1%num2);
}
