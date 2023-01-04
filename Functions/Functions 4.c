#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mod();
void main()
{
    int option;
    printf("\nArithmetic Operations:");
    do
    {
        printf("\nPress 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division, 5 for Reminder of the Division.\nPress 0 to Exit :");
        scanf("%d", &option);
        switch(option)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        case 5:
            mod();
            break;
        case 0:
            printf("Thank you.\n");
            return;
        }
    }while(1);
}
void add()
{
    int num1,num2;
    printf("\nEnter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    printf("The Addition of %d and %d is %d.\n",num1,num2,(num1 + num2 ));
    return;
}
void sub()
{
    int num1,num2;
    printf("\nEnter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    printf("The Subtraction of %d and %d is %d.\n",num1,num2,(num1 - num2 ));
    return;
}
void mul()
{
    int num1,num2;
    printf("\nEnter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    printf("The Multiplication of %d and %d is %d.\n",num1,num2,(num1 * num2 ));
    return;
}
void div()
{
    int num1,num2;
    printf("\nEnter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    printf("The Division of %d and %d is %d.\n",num1,num2,(num1 / num2 ));
    return;
}
void mod()
{
    int num1,num2;
    printf("\nEnter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    printf("The Modulus of %d and %d is %d.\n",num1,num2,(num1 % num2 ));
    return;
}






