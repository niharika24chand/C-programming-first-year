#include<stdio.h>
int main()
{
float fa; float c;
printf("enter temperature in fahrenheit: ");
scanf("%f",&fa);
c=5*(fa-32)/9;
printf("temperature in celcius is %f\n" ,c);
return 0;
}
