#include<stdio.h>
int main()
{
int i=0,n;
printf("\n enter the number of inputs required: ");
scanf("%d",&n);
int arr[n];
int z,p,ne;
do
{
printf("\n enter a number: ");
scanf("%d",&arr[i]);
i++;
}while(i<n);
for(i=0;i<n;i++)
{
if(arr[i]==0)
{
z++;
}
else if(arr[i]>0)
{
p++;
}
else if(arr[i]<0)
{
ne++;
}
else
{
printf("\n invalid input");
}
}
printf("\n no of zeroes= %d", z);
printf("\n no of positive values= %d", p);
printf("\n no of negative values= %d", ne);
return 0;
}
