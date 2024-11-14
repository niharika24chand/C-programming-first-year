#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *add;
}; struct node *start=NULL, *temp, *new1, *prev, *next, *use, *ch;
void main()
{
int choice;
printf("\n  _____________Circular linkedlist______________");
do
{
printf("\n enter 1 for create \n enter 2 for circular create \n enter 3 for display \n enter 4 for insert at first \n enter 5 for insert at last \n enter 6 for insert at middle \n enter 7 for delete at first \n enter 8 for delete last \n enter 9 for delete from middle \n enter 10 for exit \n ");
printf(" enter your choice: ");
scanf("%d",&choice);
printf(" ______________________________________________ \n_");
switch(choice)
{
case 1: create(); break;
case 2: circular(); break;
case 3: display(); break;
case 4: insertf(); break;
case 5: insertl(); break;
case 6: insertm(); break;
case 7: deletef(); break;
case 8: deletel(); break;
case 9: deletem(); break;
default: printf(" invalid choice \n");
}
}while(choice!=10);
}
void create()
{
int n;
printf("\n enter element: ");
scanf("%d",&n);
start=(struct node*)(malloc(sizeof(struct node)));
start->data=n;
start->add=NULL;
temp=start;
int ch;
printf("press 1 for continue and 0 for not: ");
scanf("%d",&ch);
while(ch==1)
{
printf(" enter next element: ");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
temp->add=new1;
temp=temp->add;
printf( "want to continue: ");
scanf("%d",&ch);
}
}
void circular()
{
temp=start;
while(temp->add!=NULL)
{
temp=temp->add;
}
temp->add=start;
}
void display()
{
if(start==NULL)
{
printf(" list not found \n");
}
else
{
temp=start;
do
{
printf("%d \t",temp->data);
temp=temp->add;
}while(temp!=start);
}
}
void insertf()
{
int n;
if(start==NULL)
{
printf("\n list not found");
}
else
{
printf("\n enter element to be inserted: ");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
new1->add=start;
temp=start;
while(temp->add!=start)
{
temp=temp->add;
}
temp->add=new1;
start=new1;
}
}
void insertl()
{
int n;
if(start==NULL)
{
printf("\n list not found");
}
else
{
new1=(struct node*)(malloc(sizeof(struct node)));
printf("\n enter element to be inserted: ");
scanf("%d",&n);
new1->data=n;
new1->add=NULL;
temp=start;
while(temp->add!=start)
{
temp=temp->add;
}
temp->add=new1;
new1->add=start;
}
}
void insertm()
{
 int n; int i=1, p;
if(start==NULL)
{
printf("list not found \n");
}
else
{
printf(" enter element to be inserted: ");
scanf(" %d", &n);
printf(" enter the position: ");
scanf("%d",&p);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
next=start;
while(i<p && next->add!=start)
{
prev=next;
next=next->add;
i++;
}
prev->add=new1;
new1->add=next;
}
}
void deletef()
{
if(start==NULL)
printf("list not found \n");
else
{
use=start;
ch=start->add;
temp=start;
while(temp->add!=start)
{
temp=temp->add;
}
temp->add=ch;
free(use);
start=ch;
}
}
void deletel()
{
ch=start;
next=start;
while(next->add!=start)
{
prev=next;
next=next->add;
}
prev->add=ch;
free(next);
}
void deletem()
{
int p;
printf("enter the data to be deleted: ");
scanf("%d", &p);
temp=start;
next=start;
while(next->data!=p)
{
prev=next;
next=next->add;
}
temp=next->add;
prev->add=temp;
free(next);
}
