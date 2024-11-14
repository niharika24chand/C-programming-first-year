#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *ladd;
struct node *radd;
};
struct node *start, *temp, *new1, *next, *prev;
int main()
{
int choice;
printf("_________doubly linkedlist__________ \n");
do
{
printf("enter 1 for create, enter 2 for display, enter 3 for insert at beginning, enter 4 for insert at last, enter 5 to insert in middle, enter 6 for delete from first, enter 7 for delete from last, enter 8 for delete from middle \n");
printf("enter your choice \n");
scanf("%d",&choice);
printf("__________________ \n");
switch(choice)
{
case 1:  create(); break;
case 2:  display(); break;
case 3: insertf(); break;
case 4: insertl(); break;
case 5: insertm(); break;
case 6: deletef(); break;
case 7: deletel(); break;
case 8: deletem(); break;
default: printf("invalid choice \n");
}
}while(choice!=9);
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
void display()
{
if(start==NULL)
{
printf("list not found \n");
}
else
{
temp=start;
while(temp!=NULL)
{
printf("%d \t",temp->data);
temp=temp->radd;
}
}
}
void insertf()
{
int n;
if(start==NULL)
{
printf("list not found \n");
}
else
{
printf("enter element to be inserted \n");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->ladd=NULL;
new1->radd=NULL;
temp=start;
temp->ladd=new1;
new1->radd=start;
start=new1;
}
}
void insertl()
{
int n;
if(start==NULL)
{
printf("list not found \n");
}
else
{
printf("enter element to be inserted \n");
scanf("%d",&n);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->ladd=NULL;
new1->radd=NULL;
temp=start;
while(temp->radd!=NULL)
{
temp=temp->radd;
}
new1->ladd=temp;
temp->radd=new1;
}
}
void insertm()
{
int n, i=1,p;
if(start==NULL)
{
printf("list not found \n");
}
else
{
printf("enter element to be inserted \n");
scanf("%d",&n);
printf("enter position \n");
scanf("%d",&p);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=n;
new1->ladd=NULL;
new1->radd=NULL;
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
void deletef()
{
if(start==NULL)
{
printf("list not found \n");
}
else
{
temp=start;
next=temp->radd;
next->ladd=0;
start=next;
printf("deleted element is: %d \n",temp->data);
free(temp);
}
}
void deletel()
{
if(start==NULL)
{
printf("list not found \n");
}
else
{
temp=start;
while(temp->radd!=NULL)
{
temp=temp->radd;
}
next=temp->ladd;
next->radd=0;
printf("deleted element is %d \n",temp->data);
free(temp);
}
}
void deletem()
{
if(start==NULL)
{
printf("list not found \n");
}
else
{
int i=1,p;
printf("enter the position: \n");
scanf("%d",&p);
next=start;
while(i<p)
{
prev=next;
next=next->radd;
i++;
}
temp=next->radd;
prev->radd=temp;
temp->ladd=prev;
printf("deleted element is %d \n",next->data);
free(next);
}
}
