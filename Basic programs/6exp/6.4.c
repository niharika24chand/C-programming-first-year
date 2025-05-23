#include<stdio.h>
int prime(int num, int d);
int main()
{
int s,e;
printf("enter the range: \n");
scanf("%d",&s);
scanf("%d",&e);
int i;
printf("list of prime numbers in the given range is : \n");
for(i=s ; i<=e ; i++)
{
if(prime(i,i/2) == 1)
printf("%d \n",i);
}
return 0;
}
int prime(int num, int d)
{
if(num<=1)
return 0;
else if(d==1)
return 1;
else if(num%d==0)
return 0;
else
return prime(num,d-1);
}

