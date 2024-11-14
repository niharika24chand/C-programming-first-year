#include<stdio.h>
void check(char str[], char ch);
int main()
{
char str[50]; char ch;
printf("enter a character ");
scanf("%c", &ch);
printf("enter a string ");
scanf("%s", str);
check(str, ch);
return 0;
}
void check(char str[], char ch)
{
int i; int f=0;
for(i=0;str[i]!='\0';i++)
{
if(str[i]==ch)
{
f=1;
}
}
if(f==1)
printf("%c is present", ch);
else
printf("%c is not present", ch);
}

