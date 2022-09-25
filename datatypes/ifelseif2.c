#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>60)
        printf("You are a Sr. Citizen.\n");
    else if(age>=18)
        printf("You are an Adult.\n");
    else if(age>=12)
        printf("You are a Teenager.\n");
    else if(age>=4)
        printf("You are a Child.\n");
    else
        printf("You are a Infant.\n");
    printf("Thank you.\n");
}
