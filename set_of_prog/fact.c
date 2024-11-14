#include<stdio.h>
int main()
{
int n;
printf("enter a number:\n ");
scanf("%d",&n);
int i=1, fac=1;
for(i=2;i<=n;i++)
{
fac=fac*i;
}
printf("factorial of %d is %d \n",n,fac);
return 0;
}
