#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* next;
};

struct node* push(struct node* top, int data) 
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) 
    {
        printf("Memory unavailable\n");
        return top;
    }

    newNode->info = data;
    newNode->next = top;
    return newNode;  
}

struct node* pop(struct node* top)
{
    if (top == NULL) 
    {
        printf("Underflow\n");
        return NULL;
    }

    struct node* temp = top;
    printf("Popped element: %d\n", top->info);
    top = top->next;
    free(temp);
    
    return top;
}

void peek(struct node* top) 
{
    if (top == NULL) 
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", top->info);
}

void display(struct node* top) 
{
    if (top == NULL) 
    {
        printf("Stack is empty\n");
        return;
    }

    struct node* temp = top;
    printf("Stack elements:\n");
    while (temp != NULL) 
    {
        printf("%d  ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}

void search_max(struct node *top)
{
    if(top == NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        struct node *temp;
        temp=top;
        int max=temp->info;
        while(temp != NULL)
        {
            if(temp->info > max)
            {
                max=temp->info;
            }
            temp=temp->next;
        }
        printf("Maximum element is %d",max);
    }
}

void search_min(struct node *top)
{
    if(top == NULL)
    {
        printf("Stack underflow\n");
    }
    else
    {
        struct node *temp;
        temp=top;
        int min=temp->info;
        while(temp != NULL)
        {
            if(temp->info < min)
            {
                min=temp->info;
            }
            temp=temp->next;
        }
        printf("Minimum element is %d",min);
    }
}

int main() 
{
    struct node* top = NULL;  
    int value, choice;

    while (1) 
    {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display \n5. Find maximum element\n6. Find minimum element\n7. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                top = push(top, value);  
                break;

            case 2:
                top = pop(top);
                break;

            case 3:
                peek(top);
                break;

            case 4:
                display(top);
                break;

            case 5:
                search_max(top);
                break;

            case 6:
                search_min(top);
                break;

            case 7:
                printf("Exiting\n");
                while (top != NULL) 
                {
                    struct node* temp = top;
                    top = top->next;
                    free(temp);
                }
                return 0;

            default:
                printf("Invalid choice, try again\n");
        }
    }

    return 0;
}