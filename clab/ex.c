#include<stdio.h>
int main()
{
int i=0,n;
printf("\n enter the number of inputs required: ");
scanf("%d",&n);
int x, z, p, ne;
do
{
printf("\n enter a number: ");
scanf("%d",&x);
if(x==0)
{
z++;
}
else if(x>0)
{
p++;
}
else if(x<0)
{
ne++;
}
else
{
printf("\n invalid input");
}
i++;
x=0;
}while(i<n);
printf("\n no of zeroes= %d", z);
printf("\n no of positive values= %d", p);
printf("\n no of negative values= %d", ne);
return 0;
}
