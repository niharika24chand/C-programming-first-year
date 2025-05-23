#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node* left;
    struct node* right;
};
struct node* root;

struct node* insert_bst(struct node* root, int data)
{
    if(root == NULL)
    {
        return NULL;
    }
    else if(data < root->info)
    {
        root->left = insert_bst(root->left, data);
    }
    else
    {
        root->right = insert_bst(root->right, data);
    }
    return root;
}



int main()
{
    root=(struct node*)(malloc(sizeof(struct node)));
    int n,choice,m;
    printf("Enter a value:\n");
    scanf("%d",&n);
    root->info=n;
    root->left=NULL;
    root->right=NULL; 
    printf("Do you want to continue enter 1 for yes and 0 for no\n");
    scanf("%d",&choice);
    while(choice == 1)
    {
        printf("Enter data to be inserted:\n");
        scanf("%d",&m);
        insert_bst(root,m);
    }
    return 0;
}
