#include<stdio.h>
int main()
{
int n=1;
int r=3;
int i, j, k;
for(i=0;i<r;i++)
{
for(j=1;j<r-i;j++)
{
printf(" ");
}
for(k=0;k<=i;k++)
{
printf("%d ",n);
n++;
}
printf("\n");
} 
return 0;
}
