#include<stdio.h>
int main()
{
int n;
printf("enter an element: ");
scanf("%d", &n);
if(n%2==0)
goto even;
else
goto odd;

even:
printf("the number is even \n");
goto end;
odd:
printf("the number is odd \n");
 end:

return 0;
}
