#include<stdio.h>
void main()
{
    char name[20],address[50];
    printf("Enter your name:");
    gets(name);
    printf("Enter your address:");
    gets(address);
    printf("Hello ");
    puts(name);
    printf("Your address is ");
    puts(address);
    printf("Thank you.\n");
    puts("Have a nice day");
}
