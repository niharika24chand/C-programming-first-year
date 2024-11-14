#include<stdio.h>
int main()
{
int a=25;
float b=98.12;
char c='A';
int *ptr1;
float *ptr2;
char *ptr3;
ptr1=&a;
ptr2=&b;
ptr3=&c;
printf("value of a:\t %d \n",*ptr1);
printf("address of a:\t %p \n",ptr1);
printf("value of b:\t %f \n",*ptr2);
printf("address of b:\t %p \n",ptr2);
printf("value of c:\t %c \n",*ptr3);
printf("address of c:\t %p \n",ptr3);
return 0;
}
