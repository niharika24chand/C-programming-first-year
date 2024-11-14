#include<stdio.h>
#include<string.h>
void reverse(char str[100]);
int main()
{
char s[100];
printf("enter a string: \n");
scanf("%s", s);
reverse(s);
int l=strlen(s), i;
for(i=0;i<l;i++)
{

return 0;
}
void reverse(char str[100])
{
char temp;
int s=0, e=strlen(str);
while(s < e-1)
{
temp=str[s];
str[s]=str[e-1];
str[e]=temp;
s++;
e--;
}
}
