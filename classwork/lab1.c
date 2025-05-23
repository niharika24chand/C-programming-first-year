// input your marks in DSA and print it.
/*
#include<stdio.h>
void main()
 {
 	float marks;
 	printf("Enter your marks of DSA: ");
 	scanf("%f",&marks);
 	printf("the marks in DSA is %f",marks);
 	return 0;

 } 
*/

//Take marks of 20 students and print the sum
/*
#include<stdio.h>
void main () {
    float marks[20];
    float sum = 0;
    int i = 0; 
    printf("Enter the marks: ");
    while (i < 20) 
    {
        printf("Enter marks %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i]; 
        i++;
    }
    printf("The sum of marks is: %f\n", sum);
    return 0;
} 
*/


//Take input of 20 elements and search an element in that list. (linear search)
#include<stdio.h>
void main()
{
   float marks[5];
   int i = 0; 
   int pos[20];
    printf("Enter the marks: ");
    while (i < 5) 
    {
        printf("Enter marks %d: ", i + 1);
        scanf("%f", &marks[i]);
        i++;
    } 
    float s;
    int j=0;
    printf("enter element to be searched:");
    scanf("%f",&s);
    for(i=0;i<5;i++)
    {
        if(marks[i]==s)
        {
          pos[j]=i+1;
          j++;
        }
    }
    if(j==0)
      printf("element to be searched not found");
    else
    {
        for(i=0;i<=j-1;i++)
            printf("element found at %d\n",pos[i]);
    }
}




 

