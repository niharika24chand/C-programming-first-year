#include<stdio.h>
int main()
{
int arr[10]={50,24,56,11,67,59,23,90,10,78};
int i,e,p=-1,f=0;
printf("enter element to be serached \n");
scanf("%d",&e);
for(i=0;i<10;i++)
{
if(arr[i]==e)
{
p=i;
f=1;
break;
}
else
{
f=0;
}
}
if(f==1)
printf("%d is found at %d position \n",e,p+1);
else
printf("not found \n");
return 0;
}
