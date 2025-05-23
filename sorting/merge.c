#include<stdio.h>
void divide(int arr[],int si,int ei)
{
if(si>=ei)
{
return;
}
else
{
int mid=si+(ei-si)/2;
divide(arr,si,mid);
divide(arr,mid+1,ei);
conquer(arr,si,mid,ei);
}
}
int conquer(int arr[],int si,int mid,int ei)
{
int n=ei-si+1;
int merge[n];
int i1=si,i2=mid+1,x=0;
while(i1<=mid && i2<=ei)
{
if(arr[i1]<arr[i2])
{
merge[x]=arr[i1];
x++;
i1++;
}
else
{
merge[x]=arr[i2];
x++;
i2++;
}
}
while(i1<=mid)
{
merge[x]=arr[i1];
x++;
i1++;
}
while(i2<=ei)
{
merge[x]=arr[i2];
x++;
i2++;
}
int i,j;
for(i=0,j=si;i<n;i++,j++)
{
arr[j]=merge[i];
}

for(i=0;i<n;i++)
{
 return arr[i];
}
}
int main()
{
int i;
int arr[]={6,3,9,5,2,8};
int n=sizeof(arr)/sizeof(arr[0]);
divide(arr,0,n);
printf("sorted array: \n");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\n");

return 0;
}
