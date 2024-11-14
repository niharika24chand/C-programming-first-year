#include<stdio.h>
int main()
{
int n;
printf("enter size of array \n");
scanf("%d",&n);
int arr[n];
int i,j;
for(i=0;i<n;i++)
{
printf("enter an element: \n");
scanf("%d",&arr[i]);
}
printf("list before sorting: \n");
for(i=0;i<n;i++)
{
printf("%d \t \n",arr[i]);
}

int temp;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[j]<arr[i])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("list after sorting: \n");
for(i=0;i<n;i++)
{
printf("%d \t \n",arr[i]);
}
return 0;
}

