#include<stdio.h>
int main()
{
	int  n;
	printf("enter size of array: \n");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		printf("enter a number: \n");
		scanf("%d",&arr[i]);
		}
int max1=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max1)
{
max1=arr[i];
}
}
printf("largest number %d", max1);
return 0;
}
