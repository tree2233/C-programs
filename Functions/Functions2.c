
#include<stdio.h>
void ageValidation();
void main()
{
    printf("Age Validation:\n");
    printf("\nPerson 1:\n");
    ageValidation();
    printf("\nPerson 2:\n");
    ageValidation();
    printf("\nPerson 3:\n");
    ageValidation();
    printf("Thank you.\n");   
}
void ageValidation()
{
    int age;
    printf("Enter your age ;");
    scanf("%d",&age);
    if(age >= 0 && age<= 130)
    {
        if(age >= 18)
        {
            printf("Congratulations!You are eligible to drive a vehicle.\n");
            printf("Please get yor driving license and \"DRIVE SAFELY\".\n");
        }
        else
        printf("Please wait.You are not yet eligible.\n");
    }
    else
    printf("Invalid Age.\n");
}