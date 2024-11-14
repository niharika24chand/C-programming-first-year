#include<stdio.h>
int main()
{
int limit;
printf("enter limit: \n");
scanf("%d",&limit);
int x,y,z,w,c1,c2;
for(x=1; (x*x*x)<=limit; x++)
{
for(y=x; (x*x*x+y*y*y)<=limit; y++)
{
c1=(x*x*x)+(y*y*y);
for(z=x+1; (z*z*z)<=limit; z++)
{
for(w=z; (z*z*z+w*w*w)<=limit; w++)
{
c2=(z*z*z)+(w*w*w);
if(c1==c2)
{
printf(" %d is a ramanujan number \n", c1);
}
}
}
}
}
return 0;
}
