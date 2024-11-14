#include<stdio.h>
int main()
{
int  l=20;
for(int a=1;a*a*a<l;a++)
{
for(int b=a+1;b*b*b<=l;b++)
{
if(a * a * a + b * b * b == num)
{
pairs[count][0]=a;
pairs[count][1]=b;
count++;
}
}
}
if(count >= 2)
{
printf("%d is a Ramanujan number \n",num);
for(int i=0;i<count;i++)
{
printf("%d^3 + %d^3 \n", pairs[i][0], pairs[i][1]);
}
}
else
{
printf("%d is not a Ramanujan number \n", num);
}
return 0;
}
