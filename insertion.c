#include<stdio.h>
void print(int arr[], int n);
int main()
{
int arr[]={4,1,5,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j;
for(i=1;i<n;i++)
{
int curr=arr[i];
int prev=i-1;
while(prev>=0 && arr[prev]>curr)
{
arr[prev+1]=arr[prev];
prev--;
}
arr[prev+1]=curr;
}
print(arr,n);
return 0;
}
void print(int arr[], int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
}
