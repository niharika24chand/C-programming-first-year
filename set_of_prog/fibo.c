#include<stdio.h>
int main()
{
int n,i,a=0,b=1,c;
printf("enter the number of elements to be printed: \n");
scanf("%d",&n);
printf("fibonnaci series: \n");
for(i=1;i<=n;i++)
{
printf("%d, ",a);
c=a+b;
a=b;
b=c;
}
return 0;
}
