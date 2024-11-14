#include<stdio.h>
int main()
{
int bs=12000;
float da=(12/100)*bs, hra=150, ta=120, pf=(14/100)*bs ,it=(15/100)*bs;
int other=450;
float ns=bs+da+hra+ta+other-(pf+it);
printf("the net salary of the user is %f \n",ns);
return 0;
}
