#include<stdio.h>
int main()
{
int i, j,r=6,k,m;
for(i=0;i<r;i++)
{
for(j=1;j<r-i;j++)
{
printf(" ");
}
for(k=0;k<=i;k++)
{
if(i==0 || k==0)
{
m=1;
printf(" %d ",m);
}
else
{
m=m*(i-k+1)/k;
printf(" %d ",m);
}
}
printf("\n");
}
return 0;
}
