#include<stdio.h>
#define maxsize 5
int arr[maxsize],rear=-1,front=-1;

void enqueue()
{
    int n;
    if((rear+1)%maxsize == front)
    {
        printf("Queue overflow\n");
    }
    else
    {
        printf("enter element to be inserted:\n");
        scanf("%d",&n);
        if(rear == -1 && front == -1)
        {
            rear=0;
            front=0;
        }
        else
        {
          rear=(rear+1)%maxsize;
        }
        arr[rear]=n;
    }
}

void dequeue()
{
    
    int n;
    if(rear == -1 && front == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        n=arr[front];
        if(rear == front)
        {
            rear=-1;
            front=-1;
        }
        else
        {
            front=(front+1)%maxsize;
        }
        printf("deleted element is %d\n",n);

    }
}

void display()
{
      if(rear == -1 && front == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        int i;
        printf("elements of the circular queue are:\n");
        for(i=front;i!=rear;i=(i+1)%maxsize)
        {
            printf("%d\t",arr[i]);
        }
        printf("%d\t", arr[rear]);
        printf("\n");
        printf("rear is pointing to %d\n",arr[rear]);
        printf("front is pointing to %d\n",arr[front]);
        }
}


int main()
{ 
    printf("CIRCULAR QUEUE\n");
    int choice;
    do
    {
        printf("enter 1 for insertion, 2 for deletion, 3 for display and 4 for exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;  
            default: printf("End of queue\n");     
        }
    }while(choice != 4);
    
    return 0;
}