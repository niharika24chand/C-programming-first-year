#include<stdio.h>
void modify(int *a,int *b)
{
*a=*a + 5;
*b=*b - 5;
}
int main()
{
int x=10;
int y=10;
printf("before modification:\n");
printf("x = %d , y = %d \n",x,y);
modify(&x,&y);
printf("after modification:\n");
printf("x = %d , y = %d \n",x,y);
return 0;
}
