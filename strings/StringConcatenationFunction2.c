#include<stdio.h>
#include<string.h>
void main()
{
    char name1[20],name2[20];
    printf("Enter your first name:");
    scanf("%s",name1);
    printf("Enter your last name:");
    scanf("%s",name2);
    printf("Your name is %s %s.\n",name1,name2);
    strcat(name1," ");
    strcat(name1,name2);
    printf("Your name using strcat():%s.\n",name1);
    printf("Thank you.\n");
}
