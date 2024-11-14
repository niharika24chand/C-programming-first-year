#include<stdio.h>
int main()
{
int r;
printf("enter the number of rows: \n");
scanf("%d",&r);
int i,j,k;
for(i=1;i<=r;i++)
{// print leading space
for(j=1;j<=r-i;j++)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("%d",i);
}
printf("\n");
}
//printing the pattern in reverse order
for(i=r-1;i>=1;i--)
{// print leading space
for(j=1;j<=r-i;j++)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("%d",i);
}
printf("\n");
}
return 0;
}

