#include<stdio.h>
void fac(int num);
int rfact(int num);
int main()
{
int nn;
printf("enter a number:\n ");
scanf("%d",&nn);
fac(nn);
int rf=rfact(nn);
printf("result of recursive function of factorial is %d \n",rf);
int a;
printf("enter the value of n for binomial coefficient: \n");
scanf("%d",&a);
int b;
printf("enter the value of r for binomial coefficient: \n"); 
scanf("%d",&b);
int n=rfact(a);
printf("value of %d factorial is %d \n", a, n);
int r=rfact(b);
printf("value of %d factorial is %d \n", b, r);
int diff=a-b;
int d=rfact(diff);
printf("value of %d factorial is %d \n",diff, d);
float fr=n/(r*d);
printf("the value of coefficient for the expansion is %f \n", fr);
return 0;
}
void fac(int num)
{
int i=1, f=1;
for(i=2;i<=num;i++)
{
f=f*i;
}
printf("factorial of %d is %d \n",num,f);
}
int rfact(int num)
{
if(num==0)
return 0;
else if(num==1)
return 1;
else
return num*rfact(num-1);
}
