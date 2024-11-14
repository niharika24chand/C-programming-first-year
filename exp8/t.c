#include<stdio.h>
int main()
{
int a=50;
float b=65.50;
char c='A';
int *ptri=&a;
float *ptrf=&b;
char *ptrc=&c;
printf("intial addresses: \n");
printf("address of a:\t %p \n",ptri);
printf("address of b:\t %p \n",ptrf);
printf("address of c:\t %p \n",ptrc);
printf("________________________________\n");
ptri++;
ptrf++;
ptrc++;
printf("addresses after incrementing: \n");
printf("address of a:\t %p \n",ptri);
printf("address of b:\t %p \n",ptrf);
printf("address of c:\t %p \n",ptrc);
printf("________________________________\n");
return 0;
}
