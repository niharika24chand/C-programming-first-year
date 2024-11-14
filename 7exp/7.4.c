#include<stdio.h>
#include<string.h>
union create
{
char name[100];
char home_address[100];
char hostel_address[100];
char city[100];
char state[100];
char zip[100];
};
int main()
{
union create add;
strcpy(add.name,"Niharika Chand");
printf("Name:\t \t %s \t \n",add.name);
strcpy(add.home_address,"180,Kamal Printing Press Lane,Dharawali");
printf("Home address:\t %s \t \n",add.home_address);
strcpy(add.hostel_address,"Room 15,Elemento");
printf("Hostel address:\t %s \t \n",add.hostel_address);
printf("Presentaddress:\t %s \t \n",add.hostel_address);
strcpy(add.city,"Dehradun");
printf("City:\t \t %s \t \n",add.city);
strcpy(add.state,"Uttrakhand"); 
printf("State:\t \t %s \t \n",add.state); 
strcpy(add.zip,"248002"); 
printf("zip:\t \t %s \t \n",add.zip);
return 0;
}
