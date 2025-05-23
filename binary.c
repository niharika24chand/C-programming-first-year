#include<stdio.h>
int main()
{
int arr[10]={10,20,30,40,50,60,70,80,90,100};
int m,l,h,b=0,e=9,p=-1,item;
printf("enter element to be searched: \n");
scanf("%d",&item);
if(e>=b)
{
m=(e+b)/2;
if(arr[m]==item)
{
p=m+1;
}
else if(arr[m]<item)
{
l=m+1;
}
else
{
h=m-1;
}
}
if(p>=0)
{
printf("%d is found at %d position \n",item,p);
}
else
{
printf("not found \n");
}
return 0;
}
