#include<stdio.h>
#include<stdlib.h>
void main()
{
    int flag,a,b;
    do
    {
        printf("Enter two numbers:");
        scanf("%d %d",&a,&b);
        printf("Press 1 for Addition, 2 for subtraction, 3 for multiplication, ");
        printf("4 for Division, 5 for Mod:");
        scanf("%d",&flag);
        switch(flag)
        {
        case 1:
            printf("The Addition of %d and %d is %d.\n",a,b,(a+b));
            break;
        case 2:
            printf("The Subtraction of %d and %d is %d.\n",a,b,(a-b));
            break;
        case 3:
            printf("The Multiplication of %d and %d is %d.\n",a,b,(a*b));
            break;
        case 4:
            printf("The Division of %d and %d is %d.\n",a,b,(a/b));
            break;
        case 5:
            printf("The Modulus of %d and %d is %d.\n",a,b,(a%b));
            break;
        default:
            printf("Invalid operation number.\n");
        }
        printf("To Continue press 1,to Exit press 0:");
        scanf("%d",&flag);
        system("cls");
        }while(flag);
        printf("Thank you.\n");
}
