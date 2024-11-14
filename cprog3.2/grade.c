#include<stdio.h>
int main()
{
char ch;
printf("enter the grade: ");
scanf("%c", &ch);
if(ch=='O')
printf("outstanding \n");
if(ch=='A')
printf("very good \n");
if(ch=='B')
printf("good \n");
if(ch=='C')
printf(" average \n");
if(ch=='D')
printf("poor \n");
return 0;
}





