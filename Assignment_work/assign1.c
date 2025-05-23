//Ques1. Find sum of all array elements using recursion.
// #include <stdio.h>
// int cal_sum(int arr[],int n)
// {
//     if(n <= 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return arr[n-1]+cal_sum(arr,n-1);
//     }
// }

// void main()
// {
//     int n,i,sum;
//     printf("Enter size of array:\n");
//     scanf("%d",&n);
//     int arr[n];
    
//     for(i=0;i<n;i++)
//     {
//         printf("enter an element:\n");
//         scanf("%d",&arr[i]);
//     }

//     sum=cal_sum(arr,n);
//     printf("Sum of all array elements = %d",sum);
// }

//Ques2. Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’.
#include <stdio.h>
void main() 
{
    int n, i, j, el, k;

    // Input array size
    printf("Enter total number of elements: ");
    scanf("%d", &n);

    int a1[n + 1];  // Extra space for insertion

    // Input elements
    for (k = 0; k < n; k++) 
    {
        printf("Enter %d element: ", k+1);
        scanf("%d", &a1[k]);
    }

    // Insertion
    printf("Enter position and element for insertion: ");
    scanf("%d %d", &i, &el);
    
    i--;  // Convert 1-based to 0-based indexing

    if (i < 0 || i > n) 
    {
        printf("Invalid position for insertion!\n");
    }

    for (k = n; k > i; k--)  
    {
        a1[k] = a1[k - 1];  // Shift elements right
    }
    a1[i] = el;  
    n++;

    // Deletion
    printf("Enter position for deletion: ");
    scanf("%d", &j);

    j--;  // Convert 1-based to 0-based indexing

    if (j < 0 || j >= n) {
        printf("Invalid position for deletion!\n");
    }

    for (k = j; k < n - 1; k++) 
    {
        a1[k] = a1[k + 1];  // Shift elements left
    }
    n--;

    // Print final array
    printf("Final array: ");
    for (k = 0; k < n; k++) 
    {
        printf("%d ", a1[k]);
    }
    printf("\n");

}


//Ques3.   Find the sum of rows and columns of matrix of given order (row x column).
// #include <stdio.h>
// void main() 
// {
//     int m, n;
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &m, &n);
    
//     int matrix[m][n]; int i,j;
//     printf("Enter matrix elements:\n");
//     for (i = 0; i < m; i++) 
//     {
//         for (j = 0; j < n; j++) 
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
    
//     printf("Row sum:\n");
//     for (i = 0; i < m; i++) 
//     {
//         int r_Sum = 0;
//         for (j = 0; j < n; j++) 
//         {
//             r_Sum += matrix[i][j];
//         }
//         printf("Row %d sum = %d\n", i+1, r_Sum);
//     }
    
//     printf("Column sums:\n");
//     for (j = 0; j < n; j++) 
//     {
//         int c_Sum = 0;
//         for (i = 0; i < m; i++) 
//         {
//             c_Sum += matrix[i][j];
//         }
//         printf("Column %d sum = %d\n", j+1, c_Sum);
//     }
// }

//Ques4.  Find the product of two matrices using dynamic memory allocation
// #include <stdio.h>
// #include <stdlib.h>  // For dynamic memory allocation functions (malloc, free)

// void main() 
// {
//     int r1, c1, r2, c2, i ,j ,k;
//     printf("Enter number of rows and columns for first matrix: ");
//     scanf("%d %d", &r1, &c1);
//     printf("Enter number of rows and columns for second matrix: ");
//     scanf("%d %d", &r2, &c2);
    
//     if (c1 != r2) 
//     {
//         printf("Matrix multiplication not possible!\n");
//     }
//     else
//     {
//         int **M1 = (int **)malloc(r1 * sizeof(int *));
//         int **M2 = (int **)malloc(r2 * sizeof(int *));
//         int **RM = (int **)malloc(r1 * sizeof(int *)); //to store product and since eg if we multiply 2*3 and 3*2 matrix product will be a 2*3 matrix meaning r1=rp (no. of rows in product) and c2=cp
    
//         for (i = 0; i < r1; i++) 
//         {
//             M1[i] = (int *)malloc(c1 * sizeof(int));
//             RM[i] = (int *)malloc(c2 * sizeof(int));
//         }
//         for (i = 0; i < r2; i++) 
//         {
//             M2[i] = (int *)malloc(c2 * sizeof(int));
//         }
    
//         printf("Enter elements of first matrix:\n");
//         for (i = 0; i < r1; i++) 
//         {
//             for (j = 0; j < c1; j++) 
//             {
//                 scanf("%d", &M1[i][j]);
//             }
//         }  
    
//         printf("Enter elements of second matrix:\n");
//         for (i = 0; i < r2; i++) 
//         {
//             for (j = 0; j < c2; j++)
//             {
//                 scanf("%d", &M2[i][j]);
//             }
//         }
    
//     // Matrix multiplication
//         for (i = 0; i < r1; i++)
//         {
//             for (j = 0; j < c2; j++) 
//             {
//                 RM[i][j]=0;  //if we don't initialize C[i][j] then it may contain garbage value
//                 for (k = 0; k < c1; k++) 
//                 {
//                     RM[i][j] += M1[i][k] * M2[k][j];
//                 }
//             }
//         }
    
//         printf("Product matrix:\n");
//         for (i = 0; i < r1; i++) 
//         {
//             for (j = 0; j < c2; j++) 
//             {
//                 printf("%d ", RM[i][j]);
//             }
//             printf("\n");
//         }
    
//     // Freeing allocated memory
//         for (i = 0; i < r1; i++) 
//         {
//             free(M1[i]);
//             free(RM[i]);
//         }
//         for (i = 0; i < r2; i++) 
//         {
//             free(M2[i]);
//         }
//         free(M1);
//         free(M2);
//         free(RM);
    
//     }

// }



//Ques5. Store ‘n’ numbers (integers or real) in an array. Conduct a linear search for a given number and report success or failure in the form of a suitable message.
#include<stdio.h>
void main()
{
    int n,i=0,j=0,p=-1;
    float s;
    printf("Enter total number of elements:\n");
    scanf("%d",&n);
    float arr[n];
    int pos[n];

    for(i=0;i<n;i++)
    {
        printf("Enter element %d:\n",i+1);
        scanf("%f",&arr[i]);
    }

    printf("Enter element to be searched:\n");
    scanf("%f",&s);

    for(i=0;i<n;i++)
    {
        if(arr[i] == s)
        {
          pos[j]=i+1;
          j++;
        }
    }

    if(j==0)
    {
        printf("Search unsuccessful, %f not found\n",s);
    }
    else
    {
        for(i=0;i<=j-1;i++)
            printf("Search Successful, %.2f found at position %d\n",s,pos[i]);
    }
}


