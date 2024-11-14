#include<stdio.h>
#define maxsize 10
int cq[maxsize]; int rear =-1; int front =-1;
int main()
{
int choice;
do
{
printf("___________________CIRCULAR QUEUE____________________\n");
printf("enter 1 for insert\n enter 2 for delete\n  enter 3 for display\n enter 4 for exit\n");
printf("enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: insert(); break;
case 2: deletetion(); break;
case 3: display(); break;
default: printf("invalid choice\n");
}
}
while(choice!=4);
return 0;
}
void insert()
{
int n;
if((rear+1)%maxsize==front)
{
printf("queue overflow\n");
}
else
{
printf("\n enter an element: ");
scanf("%d",&n);
if(rear==-1 && front==-1)
{
rear=0;
front=0;
}
else
{
rear=(rear+1)%maxsize;
}
cq[rear]=n;
}
}
void deletetion()
{
int n;
if(rear==-1 && front==-1)
{
printf("queue empty \n");
}
else
{
n=cq[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=(front+1)%maxsize;
}
printf("element deleted is %d \n",n);
}
}
void display()
{
int i;
if(rear==-1 && front==-1)
{
printf("queue is empty \n");
}
else
{
printf("elements of queue are:\n ");
for(i=front;i!=rear;(i=(i+1)%maxsize))
{
printf("%d \t",cq[i]);
}
printf("%d \t",cq[i]);
}
}
