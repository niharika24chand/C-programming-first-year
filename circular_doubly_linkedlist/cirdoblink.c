#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *ladd;
struct node *radd;
};
struct node *start=NULL, *tail, *temp,*new1,*next;
void main()
{
int choice;
printf("\n _________linkedlist_________ \n");
do
{
printf("enter 1 for create, enter 2 for circular create, enter 3 for display,  enter 4 for insert at first, enter 5 for insert at last, enter 6 for insert in middle, enter 7 for delete from first, enter 8 for delete from last, enter 9 for delete from middle \n");
printf(" enter your choice: ");
scanf("%d",&choice);
printf(" ______________________________________________ \n_");
switch(choice)
{
case 1: create(); break;
case 2: circular(); break;
case 3: display(); break;
//case 4: insertf(); break;
//case 5: insertl(); break;
//case 6: insertm(); break;
//case 7: deletef(); break;
//case 8: deletel(); break;
//case 9: deletem(); break;
default: printf(" invalid choice \n");
}
}while(choice!=10);
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
