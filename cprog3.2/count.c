#include<stdio.h>
int main()
{
int n; 
int z=0; 
int  p=0; 
int ne=0;
int ch;

do
{
printf("\n enter an element: ");
scanf("%d", &n);
 if(n>0)
{
p++;
}
else if(n<0)
{
ne++;
}
else
{
z++;
}

printf("\n do you want to continue: ");
scanf(" %d", &ch);
}
while(ch==1);
printf("\n  number of zeroes= %d ", z);
printf("\n  number of positive: %d ", p);
printf(" \n number of negative: %d ", ne);
return 0;
}
