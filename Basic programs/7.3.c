#include<stdio.h>
struct book
{
int id;
char title[100];
char author[100];
float price;
};
void print_details(struct book b)
{
printf("\n Book details are as follows:\t \n");
printf("Book ID:\t %d \t \n", b.id);
printf("book title:\t");
puts(b.title);
printf("book author:\t");
puts(b.author);
printf("Book price:\t %f \t \n",b.price);
}
int main()
{
struct book b;
printf("enter book ID: \n");
scanf("%d",&b.id);
getchar();
printf("enter title of the book: \n");
fgets(b.title,sizeof(b.title),stdin);
printf("enter name of the author: \n");
fgets(b.author,sizeof(b.author),stdin);
printf("enter price of the book: \n");
scanf("%f",&b.price);
print_details(b);
return 0;
}

