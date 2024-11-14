#include<stdio.h>
struct complex
{
double  real;
double img;
};
struct complex input()
{
struct complex c;
printf("enter real part: \n");
scanf("%lf",&c.real);
printf("enter imaginary part: \n");
scanf("%lf",&c.img);
return c;
}
void display(struct complex c)
{
if(c.img>=0)
{
printf("%lf + %lfi",c.real,c.img);
}
else
{
printf("%lf - %lfi",c.real , -c.img);
}
}
struct complex addition(struct complex c1, struct complex c2)
{
struct complex ans;
ans.real=(c1.real+c2.real);
ans.img=(c1.img+c2.img);
return ans;
}
struct complex substraction(struct complex c1, struct complex c2)
{
struct complex ans;
ans.real=(c1.real-c2.real);
ans.img=(c1.img-c2.img);
return ans;
}
int main()
{
struct complex c1, c2, s, d;
printf("enter complex1: \n");
c1 = input();
printf("enter complex2: \n");
c2 = input();
printf("\n complex1: \n");
display(c1);
printf("\n complex2: \n");
display(c2);
s = addition(c1,c2);
d = substraction(c1,c2);
printf("\n sum of two complex numbers: \n");
display(s);
printf("\n substraction of two complex numbers: \n");
display(d);
return 0;
}
