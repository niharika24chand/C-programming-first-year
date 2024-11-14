#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *ladd;
struct node *radd;
};
struct node *start=NULL, *tail, *temp,*new1,*next, *prev;
void main()
{
int choice;
printf("\n _________linkedlist_________ \n");
do
{
printf("enter 1 for create, enter 2 for display, enter 3 for insert at first, enter 4 for insert at last, enter 5 for insert in middle \n");
printf(" enter your choice: ");
scanf("%d",&choice);
printf(" ______________________________________________ \n_");
switch(choice)
{
case 1: create(); circular(); break;
case 2: display(); break;
case 3: insertf(); break;
case 4: insertl(); break;
case 5: insertm(); break;
default: printf(" invalid choice \n");
}
}while(choice!=6);
}
void create()
{
int n, ch;
printf(" \n enter an element: ");
scanf("%d",&n);
start=(struct node*)(malloc(sizeof(struct node)));
start->data=n;
start->ladd=NULL;
start->radd=NULL;
temp=start;
printf("want to continue press 1 for yes and 0 for no \n");
scanf("%d",&ch);
while(ch==1)
{
printf("enter next element \n");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->ladd=NULL;
new1->radd=NULL;
temp->radd=new1;
new1->ladd=temp;
temp=temp->radd;
printf("want to continue press 1 for yes and 0 for no \n");
scanf("%d",&ch);
}
}
void circular()
{
temp=start;
next=start;
while(next->radd!=NULL)
{
next=next->radd;
}
tail=next;
temp->ladd=tail;
tail->radd=temp;
}
void display()
{
if(start==NULL)
{
printf("list noyt found \n");
}
else
{
temp=start;
do
{
printf("%d \t",temp->data);
temp=temp->radd;
}while(temp!=start);
}
}
void insertf()
{
if(start==NULL)
{
printf("list not found \n");
}
else
{
int n;
printf("enter element to be inserted: \n");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->radd=NULL;
new1->ladd=NULL;
temp=start;
next=start;
while(next->radd!=start)
{
next=next->radd;
}
tail=next;
temp->ladd=new1;
new1->radd=temp;
tail->radd=new1;
new1->ladd=tail;
start=new1;
}
}
void insertl()
{
if(start==NULL)
{
printf("list not found \n");
}
else
{
int n;
printf("enter element to be inserted: \n");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->radd=NULL;
new1->ladd=NULL;
temp=start;
next=start;
while(next->radd!=start)
{
next=next->radd;
}
tail=next;
new1->ladd=tail;
new1->radd=temp;
tail->radd=new1;
temp->ladd=new1;
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
new1->radd=NULL;
new1->ladd=NULL;
next=start;
while(i<p)
{
prev=next;
next=next->radd;
i++;
}
prev->radd=new1;
new1->ladd=prev;
next->ladd=new1;
new1->radd=next;
}
}

