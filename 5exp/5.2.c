#include<stdio.h>
int main()
{
int  n;
printf("enter size of array: \n");
scanf("%d",&n);
int arr[n];
int i;
for(i=0;i<n;i++)
{
printf("enter a number: \n");
scanf("%d",&arr[i]);
}
int p=0, ne=0 ,e=0, o=0;

for(i=0;i<n;i++)
{
if(arr[i]>=0)
{
printf("positive number: %d \n",arr[i]);
p++;
if(arr[i]%2==0)
{
printf("even  number: %d \n",arr[i]);
e++;
}
else
{
printf("odd number: %d \n",arr[i]);
o++;
}
}
else if(arr[i]<0)
{
printf("negative number: %d \n",arr[i]);
ne++;
}
else
{
printf("wrong input \n");
}
}
printf("positive: %d \n",p);
printf("negative: %d \n",ne);
printf("even: %d \n",e);
printf("odd: %d \n",o);
return 0;
}
