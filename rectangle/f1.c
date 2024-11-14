#include<stdio.h>
int main()
{
int l; int b;
printf("enter length: ");
scanf("%d",&l);
printf("enter width: ");
scanf("%d",&b);
printf("area is %d\n", l*b);
printf("perimeter is %d\n", 2*(l+b));
return 0;
}
