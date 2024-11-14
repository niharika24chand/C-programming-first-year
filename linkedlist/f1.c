#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *add;
};
struct node *start=NULL; struct node *temp; struct node *new1; struct node *prev; struct node *next;
void  main()
{
 int choice;
do
{
printf("____________LINKEDLIST_____________\n");
printf("enter 1 to create \n enter 2  to display \n enter 3 to insert at first \n enter 4 to insert at last \n enter 5 to insert at middle \n enter 6 for deletion at first \n enter 7 for deletion at last \n enter 8 for deletion at middle \n  enter 9 to exit \n ");
printf("___________________\n");
printf("enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: create(); break;
case 2: display(); break;
case 3: insert_first(); break;
case 4: insert_last(); break;
case 5: insert_middle(); break;
case 6: delete_first(); break;
case 7: delete_last(); break;
case 8: delete_middle(); break;
default: printf("invalid choice\n");
}
}while(choice!=9);
}
void create()
{
int n; int ch;
printf("enter an element: ");
scanf("%d",&n);
start=(struct node*)(malloc(sizeof(struct node)));
start->data=n;
start->add= NULL;
temp=start;
printf("type 1 if you want to Continue and 0 if not: ");
scanf("%d",&ch);
while(ch==1)
{
printf("enter next element: ");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
temp->add=new1;
temp=temp->add;
printf("type 1 if you want to Continue and 0 if not : ");
scanf("%d",&ch);
}
}
void display()
{
if(start==NULL)
{
printf("list not found\n");
}
else
{
temp=start;
while(temp!=NULL)
{
printf("\t %d ",temp->data);
temp=temp->add;
}
}
}
void insert_first()
{
int n;
if(start==NULL)
{
printf("list not found \n");
}
else
{
printf("enter the new element: ");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
new1->add=start;
start=new1;
}
}
void insert_last()
{
int n;
if(start==NULL)
{
printf("list not found \n");
}
else
{
printf("enter new element: ");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
temp=start;
while(temp->add!=NULL)
{
temp=temp->add;
}
temp->add=new1;
}
}
void insert_middle()
{
int n; int p; int i=1;
if(start==NULL)
{
printf("list not found \n");
}
else
{
printf("enter new element: ");
scanf("%d",&n);
printf("enter position: ");
scanf("%d",&p);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->add=NULL;
next=start;
while(i<p)
{
prev=next;
next=next->add;
i++;
}
prev->add=new1;
new1->add=next;
}
}
void delete_first()
{
if(start==NULL)
{
printf("list not found \n");
}
else
{
temp=start;
start=start->add;
printf("deleted node is %d \n",temp->data);
free(temp);
}
}
void delete_last()
{
if(start==NULL)
{
printf("list not found \n");
}
else
{
temp=start;
while(temp->add!=NULL)
{
prev=temp;
temp=temp->add;
}
prev->add=NULL;
printf("deleted node is %d \n",temp->data);
free(temp);
}
}
void delete_middle()
{
int p; int i=1;
if(start==NULL)
{
printf("list not found \n");
}
else
{
printf("enter position: ");
scanf("%d",&p);
temp=start;
while(i<p)
{
prev=temp;
temp=temp->add;
i++;
}
next=temp->add;
prev->add=next;
printf("deleted node is %d \n",temp->data);
free(temp);
}
}
