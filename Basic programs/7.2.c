#include<stdio.h>
#define maxsize 5
struct employee
{
char n[100];
float bp;
float da;
float gs;
};
int main()
{
struct employee emp[maxsize];
int i;
for(i=0;i<maxsize;i++)
{
printf("enter your name:\t \n");
scanf("%s",emp[i].n);
printf("enter your basic pay:\t \n");
scanf("%f",&emp[i].bp);
emp[i].da=(0.52)*(emp[i].bp);
emp[i].gs=emp[i].bp+emp[i].da;
}
for(i=0;i<maxsize;i++)
{
printf("gross salary of %s : \t %f \n",emp[i].n , emp[i].gs);
}
return 0;
}
