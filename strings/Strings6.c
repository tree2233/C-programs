#include<stdio.h>
void main()
{
    char name[20];
    printf("Enter your name:");
    scanf("%[^\n]s",name);
    printf("Hello %s.\n",name);
    printf("Enter another name:");
    scanf(" %[^\n]s", name);
    printf("Hello %s.\n", name);
    printf("Thank you.\n");
}
