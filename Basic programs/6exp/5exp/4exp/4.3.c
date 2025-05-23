#include<stdio.h>
int main()
{
int x=10;
printf("x in main:\t\t\t %d \n",x);
{
int y=20;
printf("x in inner block:\t\t %d \n",x);
printf("y in inner bloack:\t\t %d \n",y);
x=30;
}
printf("value of x outside inner block:\t %d \n",x);
{
int z=50;
printf("z in another block:\t\t %d \n",z);
}
return 0;
}

