#include<stdio.h>
int main()
{
int l1, b1, l2, b2, l3, b3;
int p1; int p2; int p3;
printf("enter length and breadth of first rectangle: ");
scanf("%d", &l1);
scanf("%d", &b1);
printf("enter length and breadth of second rectangle: ");
scanf("%d", &l2);
scanf("%d", &b2);
printf("enter length and breadth of third rectangle: ");
scanf("%d", &l3);
scanf("%d", &b3);
p1=2*(l1+b1);
p2=2*(l2+b2);
p3=2*(l3+b3);
int result;
result=((p1>p2)?p1:p2) ? ((p2>p3)?p2:p3) : ((p1>p3)?p1:p3);
printf("the greatest rectangle is= %d ", result);
return 0;
}
