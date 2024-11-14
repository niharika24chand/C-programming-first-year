#include<stdio.h>
#define maxsize 10
int queue[maxsize];
int rear =-1, front =0;
int main()
{
int choice;
do{
printf("____________________QUEUE______________________\n");
printf(" enter 1 for insert\n enter 2 for delete\n enter 3 for display\n enter 4 for exit\n");
printf("enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: insert(); break;
case 2: delete(); break;
case 3: display(); break;
default: printf("invalid choice\n");
}
}
while(choice!=4);
}
void insert()
{
int n;
if(rear==maxsize-1)
{
printf("queue overflow\n");
}
else
{
printf("enter an element: ");
scanf("%d",&n);
rear++;
queue[rear]=n;
}
}
void delete()
{
int n;
if(front>rear)
{
printf("queue is empty\n");
}
else
{
n=queue[front];
printf("element deleted is %d\n",n);
front++;
}
}
void display()
{
int i;
if(front>rear)
{
printf("queue is empty\n");
}
else
{
printf("elements of queue: \n");
for(i=front;i<=rear;i++)
{
printf("%d\t",queue[i]);
}
}
}
