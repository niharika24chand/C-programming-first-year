#include<stdio.h>
int main()
{
int n;
printf("enter an element: ");
scanf("%d", &n);
int i=1;
int t;
for(i=1;i<=10;i++)
{
t=n*i;
printf("%d \n", t);
}
return 0;
}
