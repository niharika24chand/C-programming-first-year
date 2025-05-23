#include<stdio.h>
#include<string.h>
void salting(char oldpswrd[]);
int main()
{
char oldpswrd[50];
printf("enter a password: ");
scanf("%s",oldpswrd);
salting(oldpswrd);
return 0;
}
void salting(char oldpswrd[])
{
char salt[]="123";
char newpswrd[100];
strcpy(newpswrd,oldpswrd);
strcat(newpswrd,salt);
puts(newpswrd);
}
