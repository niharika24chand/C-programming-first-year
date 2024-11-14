#include<stdio.h>
int main()
{
char n;
printf("enter an element: ");
scanf("%c", &n);
if(n>='0' && n<='9')
printf("digit \n");
else if((n>='a' && n<='z') || (n>='A' && n<='Z'))
printf("alphabet \n");
else
printf("special character \n");
return 0;
}
