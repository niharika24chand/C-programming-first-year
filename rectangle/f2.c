#include<stdio.h>
int main()
{
float c; float f;
printf("enter temperature in celcius: ");
scanf("%f",&c);
f=(1.8*c)+32;
printf("temperature is %f\n", f);
return 0;
}
