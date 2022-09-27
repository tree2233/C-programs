#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,option;
    do
    {
    printf("Enter a number:");
    scanf("%d",&n);
     if(n%2)
        printf("The number %d is a ODD value.\n",n);
    else
        printf("The number %d is a EVEN value.\n",n);
    printf("\nTo Continue press 1,to Exit press 0:");
    scanf("%d",&option);
    system("cls");
    }while(option);
    printf("Thank you.\n");
}
