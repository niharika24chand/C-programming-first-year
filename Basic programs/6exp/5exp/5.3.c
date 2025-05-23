#include<stdio.h>
int main()
{
int  n;
printf("enter size of array: \n");
scanf("%d",&n);
int arr[n];
int i;
for(i=0;i<n;i++)
{
printf("enter a number: \n");
scanf("%d",&arr[i]);
}
int p, c=0;
printf("enter the number whose frequency is to be checked \n");
scanf("%d",&p);
for(i=0;i<n;i++)
{
if(arr[i]==p)
{
c++;
}
}
printf("frequency of %d is %d \n",p,c);
return 0;
}
