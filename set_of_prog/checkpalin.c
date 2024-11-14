#include<stdio.h>
int main()
{
int n; int d;
printf("enter an  element \n");
scanf("%d",&n);
int rev=0, num;
num=n;
while(n!=0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if(num==rev)
{
printf("%d is palindrome \n",num);
}
else
{
printf("%d is not a palindrome \n",num);
}
return 0;
}
