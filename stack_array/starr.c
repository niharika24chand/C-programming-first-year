#include<stdio.h>
#define maxsize 10
int stack[maxsize]; int top=-1;
int main()
{
int choice;
do
{
printf("enter 1 for push,\n enter 2 for pop,\n enter 3 for display,\n enter 4 for exit");
printf("enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
default: printf("invalid choice");
}}while(choice!=4);
return 0;
}
void push()
{
int n;
if(top==maxsize-1)
{
printf("stack overflow");
}
else
{
printf("enter element: ");
scanf("%d",&n);
top++;
stack[top]=n;
}
}
void pop()
{
int n;
if(top==-1)
{
printf("stack empty");
}
else
{
n=stack[top];
top--;
printf("popped element is %d\n",n);
}
}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty");
}
else
{
printf("elements of the stack are:\n");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}


