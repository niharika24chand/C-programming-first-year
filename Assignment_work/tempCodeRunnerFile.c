#include <stdio.h>
#include <stdlib.h>  // For dynamic memory allocation functions (malloc, free)

void main() 
{
    int r1, c1, r2, c2, i ,j ,k;
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible!\n");
    }
    else
    {
        int **M1 = (int **)malloc(r1 * sizeof(int *));
        int **M2 = (int **)malloc(r2 * sizeof(int *));
        int **RM = (int **)malloc(r1 * sizeof(int *)); //to store product and since eg if we multiply 2*3 and 3*2 matrix product will be a 2*3 matrix meaning r1=rp (no. of rows in product) and c2=cp
    
        for (i = 0; i < r1; i++) 
        {
            M1[i] = (int *)malloc(c1 * sizeof(int));
            RM[i] = (int *)malloc(c2 * sizeof(int));
        }
        for (i = 0; i < r2; i++) 
        {
            M2[i] = (int *)malloc(c2 * sizeof(int));
        }
    
        printf("Enter elements of first matrix:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) 
            {
                scanf("%d", &M1[i][j]);
            }
        }  
    
        printf("Enter elements of second matrix:\n");
        for (i = 0; i < r2; i++) 
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &M2[i][j]);
            }
        }
    
    // Matrix multiplication
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++) 
            {
                RM[i][j]=0;  //if we don't initialize C[i][j] then it may contain garbage value
                for (k = 0; k < c1; k++) 
                {
                    RM[i][j] += M1[i][k] * M2[k][j];
                }
            }
        }
    
        printf("Product matrix:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                printf("%d ", RM[i][j]);
            }
            printf("\n");
        }
    
    // Freeing allocated memory
        for (i = 0; i < r1; i++) 
        {
            free(M1[i]);
            free(RM[i]);
        }
        for (i = 0; i < r2; i++) 
        {
            free(M2[i]);
        }
        free(M1);
        free(M2);
        free(RM);
    
    }

}