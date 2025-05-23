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

void sort(int arr[],int n)
{
    int i;
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
    }

void main()
{
    int n;
    printf("enter size opf array:\n");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter an element:\n");
        scanf("%d",&arr[i]);
    }
    printf("list before sorting:\n");
    display(arr,n);
    sort(arr,n);
    printf("list after sorting:\n");
    display(arr,n);
}
