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
int max1=arr[0];
int max2=arr[0], p=-1;
for(i=0;i<n;i++)
{
if(arr[i]>max1)
{
max1=arr[i];
p=i;
}
}
for(i=0;i<n;i++)
{
if(i==p)
{
continue ;
}
else
{
if(arr[i]>max2)
{
max2=arr[i];
}
}
}
printf("greatest number %d \n",max1);
printf("second largest number in the list  %d \n",max2);
return 0;
}

