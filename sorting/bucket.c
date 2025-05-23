#include<stdio.h>
int getmax(int arr[],int n)
{
int max=arr[0];
int i;
for(i=1;i<n;i++)
{
if(arr[i]>max)
max=arr[i];
}
return max;
}
void bucketsort(int arr[],int n)
{
int max=getmax(arr,n);
int b[max],i,j;
for(i=0;i<=max;i++)
{
b[i]=0;
}
for(i=0;i<n;i++)
{
b[arr[i]]++;
}
for(i=0,j=0;i<=max;i++)
{
while(b[i]>0)
{
arr[j++]=i;
b[i]--;
}
}
}
void print(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
}
int main()
{
int arr[]={54,12,84,57,69,41,9,5};
int n=sizeof(arr)/sizeof(arr[0]);
printf("list before sorting: \n");
print(arr,n);
bucketsort(arr,n);
printf("list after sorting: \n");
print(arr,n);
return 0;
}
