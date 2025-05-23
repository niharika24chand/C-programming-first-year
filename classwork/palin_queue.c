#include<stdio.h>
#include <string.h>
#include <ctype.h>
#define maxsize 100

char palin[maxsize];
int rear=-1, front =-1;

void enqueue(char ch)
{
    int n;
    if(rear==maxsize-1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        if (front == -1) 
        {
            front = 0; 
        } // Initialize front if queue is empty
        palin[++rear] = ch;
    }
}

void main()
{
    int i,f=1,k=0;
    char arr[maxsize]; 
    printf("Enter a string:\n");
    fgets(arr, maxsize, stdin);
    arr[strcspn(arr, "\n")] = '\0'; 
    int l=strlen(arr);
    char narr[l];  char result[k+1];
    for(i=0;i<l;i++)
    {
        if(arr[i]!=' ')
        {
            narr[k++]=tolower(arr[i]); 
        } 
    }
    narr[k] = '\0'; // Null-terminate the filtered string

    for (i=k-1; i>=0; i--)
    {
        enqueue(narr[i]);
    }
    for (i = 0; i <= rear; i++) 
    {
        result[i] = palin[i];
    }
    result[rear+1] = '\0';  // Null-terminate the string
    
    // to check for palindrome
    for(i=0;i<k;i++)
    {
        if(narr[i]!=result[i])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("PALINDROME\n");
    }
    else
    {
        printf("NOT A PALINDROME\n");
    }   
}