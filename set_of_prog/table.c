#include<stdio.h>
int main()
{
int i,n,t=1;
printf("enter a number: \n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d \n",n,i,n*i);
}
return 0;
}
