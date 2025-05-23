// bubble sort: compare and swap adjacent elements.

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

void sort(int a[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++)
         {
            if (a[j] > a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void main()
{
    int n;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int arr[n]; int i,j,temp;
    for(i=0;i<n;i++)
    {
        printf("enter an element:\n");
        scanf("%d",&arr[i]);
    }
    printf("list before sorting: \n");
    display(arr,n);
    sort(arr,n);
    printf("list after sorting:\n");
    display(arr,n);
}