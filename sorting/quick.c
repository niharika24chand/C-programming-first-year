#include<stdio.h>
int partition(int arr[],int low,int high)
{
int pivot=arr[high];
int i=low-1,j;
for(j=low;j<high;j++)
{
if(arr[j]<pivot)
{
i++;
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
i++;
int temp=arr[i];
arr[i]=arr[high];
arr[high]=temp;
return i;
}

void quicksort(int arr[],int low,int high)
{
if(low<high)
{
int pidx=partition(arr,low,high);
quicksort(arr,low,pidx-1);
quicksort(arr,pidx+1,high);
}
}

int main()
{
int arr[]={6,3,9,5,2,8};
int n=sizeof(arr)/sizeof(arr[0]);
int i;
quicksort(arr,0,n-1);
printf("sorted array: \n");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
