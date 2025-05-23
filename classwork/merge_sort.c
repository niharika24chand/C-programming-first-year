// Follows the divide and conquer rule. Dividing the input array into smaller subarrays, recursively sorting them and then merging them back together.

#include<stdio.h>
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void merge(int arr[],int si,int mid,int ei)
{
    int i,j,k;
    int n1=mid-si+1;
    int n2=ei-mid;
    int leftarr[n1],rightarr[n2];
    for(i=0;i<n1;i++)
    {
        leftarr[i]=arr[si+i];
    }
    for(j=0;j<n2;j++)
    {
        rightarr[j]=arr[mid+1+j];
    }
    i=0;j=0;
    k=si;
    while(i<n1 && j<n2)
    {
        if(leftarr[i]<=rightarr[j])
        {
            arr[k]=leftarr[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=rightarr[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k]=leftarr[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=rightarr[j];
        j++;
        k++;
    }
}

void divide(int arr[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }
    else
    {
        int mid=si+(ei-si)/2;       // to avoid overflow
        divide(arr,si,mid);
        divide(arr,mid+1,ei);
        merge(arr,si,mid,ei);
    }
}

void main()
{
    int n,i;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter an element:\n");
        scanf("%d",&arr[i]);
    }
    printf("list before sorting:\n");
    display(arr,n);
    divide(arr,0,n-1);
    printf("list after sorting:\n");
    display(arr,n);
}