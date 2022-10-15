#include<stdio.h>
void main()
{
    char name[20],address[50];
    printf("Enter your name:");
    scanf("%[^\n]s",name);
    fflush(stdin);
    printf("Enter your address:");
    gets(address);
    printf("\nHello ");
    puts(name);
    printf("You stay at %s.\n",address);
    printf("String length(number of letters) of your name=%d.\n",strlen(name));
    printf("String length(number of letters) of your address=%d.\n",strlen(address));
    printf("Thank you.\n");
}
