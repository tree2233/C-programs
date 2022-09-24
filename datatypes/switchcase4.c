#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    switch(a>0)
    {
    case 0:
        printf("The number %d is a negative.\n",a);
        break;
    case 1:
        printf("The number %d is positive.\n",a);
        break;
    }
    printf("Thank you.\n");
}
