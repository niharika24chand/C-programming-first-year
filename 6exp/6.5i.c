#include<stdio.h>
#include<string.h>
void reverse(char str[100]);
int main()
{
char s[100];
printf("enter a string: \n");
scanf("%s", s);
printf("reversed string: \n");
reverse(s);
return 0;
}
void reverse(char str[100])
{
int i, l=strlen(str)-1;
for(i=l;i>=0;i--)
{
putchar(str[i]);// print each character from the end to the beginning
}
printf("\n");
}
