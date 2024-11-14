#include<stdio.h>
int g=100;
void func()
{
int l=10;
printf("inside func:\t l=%d \n",l);
printf("inside func:\t g=%d \n",g);
}
int main()
{
func();
printf("inside main:\t g=%d \n",g);
return 0;
}
