#include<stdio.h>
int main()
{
double p=100000;
int i;
double inc=0.1;
for(i=1;i<=10;i++)
{
p+=p*inc;
printf("Population after %d year is \t %f \n",i,p);
}
return 0;
}
