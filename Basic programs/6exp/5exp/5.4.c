#include<stdio.h>
int main()
{
int r1,r2,c1,c2;
int i,j,k;
printf("enter number of rows: \n");
printf("enter number of column: \n");
scanf("%d",&r1);
scanf("%d",&c1);
printf("enter number of rows: \n");
printf("enter number of column: \n");
scanf("%d",&r2);
scanf("%d",&c2);
if(c1!=r2)
{
printf("matrix multiplication is not possible \n");
}
else
{
int m1[r1][c1];
int m2[r2][c2];
int answer[r1][c2];
printf("enter elements of matrix1: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&m1[i][j]);
}
}
printf("enter elements of matrix2: \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{ 
scanf("%d",&m2[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
answer[i][j]=0;
for(k=0;k<c1;k++)
{
answer[i][j]+=m1[i][k]*m2[k][j];
}
}
}
printf("matrix1 \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{ 
printf("%d \t",m1[i][j]);
}
printf("\n");
}
printf("matrix2 \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{ 
printf("%d \t",m2[i][j]);
}
printf("\n");
}
printf("result: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{ 
printf("%d \t",answer[i][j]);
}
printf("\n");
}
}
return 0;
}

