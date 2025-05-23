#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

int family_decide(int sapID) 
{
    int last_three = sapID % 1000;
    int sum = 0;

    while (last_three > 0) 
    {
        sum += last_three % 10;
        last_three /= 10;
    }

    while (sum >= 10) 
    {
        int temp = 0;
        while (sum > 0) 
        {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
    }

    return sum;
}


void insert(struct Node table[], int key) 
{
    int index = family_decide(key);
    
    struct Node* temp = table[index].next;
    if (temp != NULL) 
    {
        printf("Collision occurred at family %d using chaining\n", index);
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = table[index].next;
    table[index].next = newNode;

    printf("SAP ID %d has been inserted into family %d\n", key, index);
}

void search(struct Node table[], int key) 
{
    int index = family_decide(key);
    struct Node* temp = table[index].next;

    while (temp != NULL) 
    {
        if (temp->data == key) 
        {
            printf("SAP ID %d found in family %d\n", key, index);
            return;
        }
        temp = temp->next;
    }

    printf("SAP ID %d not found in family %d\n", key, index);
}

void delete(struct Node table[], int key) 
{
    int index = family_decide(key);
    struct Node* temp = table[index].next;
    struct Node* prev = &table[index];

    while (temp != NULL) 
    {
        if (temp->data == key) 
        {
            prev->next = temp->next;
            free(temp);
            printf("SAP ID %d deleted from family %d\n", key, index);
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("SAP ID %d not found, so not deleted.\n", key);
}

void display(struct Node table[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Family %d: ", i);
        struct Node* temp = table[i].next;
        while (temp != NULL) 
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// Main function
void main()
{
    int size = 10; 
    int choice, sap, i;

    struct Node* hashTable = (struct Node*)malloc(size * sizeof(struct Node));

    for (i = 0; i < size; i++) 
    {
        hashTable[i].next = NULL;
    }

        do
        {  
            printf("\nMenu:\n");
            printf("1. Insert SAP ID\n2. Search SAP ID\n3. Delete SAP ID\n4. Display Table\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1:
                    printf("Enter SAP ID to insert: ");
                    scanf("%d", &sap);
                    insert(hashTable, sap);
                    break;
                case 2:
                    printf("Enter SAP ID to search: ");
                    scanf("%d", &sap);
                    search(hashTable, sap);
                    break;
                case 3:
                    printf("Enter SAP ID to delete: ");
                    scanf("%d", &sap);
                    delete(hashTable, sap);
                    break;
                case 4:
                    display(hashTable, size);
                    break;
                default:
                    printf("Invalid choice.\n");
            }
        }while(choice<=4);
}
