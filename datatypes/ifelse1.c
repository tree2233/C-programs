#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Your are eligible for driving license.\n");
    }
    else
    {
        printf("Your are not eligible for driving license.\n");
    }
    printf("Thank you.\n");
}
