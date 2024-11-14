#include<stdio.h>
void swap(int *a,int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
void sort(int arr[],int n)
{
int i,j,s;
for(i=0;i<n-1;i++)
{
s=i;
for(j=i+1;j<n;j++)
{
if(arr[j] < arr[s])
{
s=j;
}
}
swap(&arr[i], &arr[s]);
}
}
void print(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d ", arr[i]);
}
printf("\n");
}
int main()
{
int arr[]={4,1,5,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr, n);
print(arr, n);
return 0;
}

