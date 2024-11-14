#include<stdio.h>
int main()
{
int n; int d;
printf("enter an  element \n");
scanf("%d",&n);
int rev=0, num;
num=n;
while(n!=0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
printf("reversed number is %d \n",rev);
return 0;
}
