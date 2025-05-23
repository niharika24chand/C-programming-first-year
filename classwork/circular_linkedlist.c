#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *add;
}; struct node *start=NULL, *temp, *new1, *prev, *next, *use, *ch;

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
    int n, p;
    if (start == NULL)
    {
        printf("List not found\n");
    }

    printf("Enter element to be inserted: \n");
    scanf("%d", &n);
    printf("Enter element to be inserted after:\n");
    scanf("%d", &p);

    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = n;
    new1->add = NULL;

    temp = start;
    do
    {
        if (temp->data == p)
        {
            new1->add = temp->add;
            temp->add = new1;
        }
        temp = temp->add;
    } while (temp != start);

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
        printf("Deleted element is %d",use->data);
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
    printf("Deleted element is %d",next->data);
    free(next);
}

void deletem()
{
    if(start == NULL)
    {
        printf("List not found\n");
    }
    else
    {
        temp=start;
        int s;
        printf("Enter data to be deleted: ");
        scanf("%d",&s);
        while(temp->add != start)
        {
            if(s == temp->data)
            {
                prev->add=temp->add;
                free(temp);
                printf("%d has been deleted from the list\n",s);
                break;
            }
            else
            {
                prev=temp;
                temp=temp->add;
            }
        }
    }
}

void main()
{
    int choice;
    printf("\n  _____________Circular linkedlist______________");
    int n;
    printf("\n enter element: ");
    scanf("%d",&n);
    start=(struct node*)(malloc(sizeof(struct node)));
    start->data=n;
    start->add=NULL;
    temp=start;
    circular();
    do
    {
        printf("\n enter 1 for display \n enter 2 for insert at first \n enter 3 for insert at last \n enter 4 for insert at middle \n enter 5 for delete at first \n enter 6 for delete last \n enter 7 for delete from middle \n enter 8 for exit \n ");
        printf(" enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: display(); break;
            case 2: insertf(); break;
            case 3: insertl(); break;
            case 4: insertm(); break;
            case 5: deletef(); break;
            case 6: deletel(); break;
            case 7: deletem(); break;
            default: printf(" invalid choice \n");
        }
    }while(choice!=8);
    free(start);
}