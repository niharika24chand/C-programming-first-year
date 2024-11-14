#include<stdio.h>
int main()
{
float c; float f;
printf("Enter temperature in celcius: ");
scanf("%f",&c);
f=(1.8*c)+32;
printf(" Temperature in fahrenheit is %f\n",f);
return 0;
}
