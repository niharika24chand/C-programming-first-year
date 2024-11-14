#include<stdio.h>
#include<string.h>
int main()
{
char oldpswrd[50];
fgets(oldpswrd,50,stdin);
printf("old password: ");
puts(oldpswrd);
char salt[3]="123";
printf("new password: ");
puts(strcat(oldpswrd,salt));
return 0;
}
