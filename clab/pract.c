#include<stdio.h>
int main()
{
int x=3;
printf(" %d %d %d", x++, ++x, x);
int a=2;
int z=a++;
int w=++a;
printf("\n %d",z);
printf("\n %d",a);
printf("\n %d", w);
printf("\n %d", a);
int y=z+2;
printf("\n %d", y);
printf("\n %d",72);
printf("\n %d", 072);
printf("\n %d", 0x72);
printf("\n %d", 0X72);
return 0;
}
