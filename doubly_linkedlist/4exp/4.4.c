#include<stdio.h>
int myfunc(int c)
{
c++;
printf("counter value:\t %d \n",c);
return c;
}
int main()
{
int c=0;
c=myfunc(c);
c=myfunc(c);
c=myfunc(c);
return 0;
}
