#include<stdio.h>
int main()
{
float bmi; float w; float h;
printf("\n enter your height: ");
scanf("%f",&h);
printf("\n enter your weight: ");
scanf("%f",&w);
bmi=(w)/(h*h);
if(bmi<15)
printf("\n Starvation");
else if(bmi>=15.1 && bmi<=17.5)
printf("\n anorexic");
else if(bmi>=17.6 && bmi<=18.5)
printf("\n underweight");
else if(bmi>=18.6 && bmi<=24.9)
printf("\n ideal");
else if(bmi>=25 && bmi<=25.9)
printf("\n overweight");
else if(bmi>=30 && bmi<=25.9)
printf("\n obese");
else
printf("\n morbidity obese");
return 0;
}

