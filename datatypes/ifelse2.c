#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=0)
        printf("The number %d is a Positive number.\n",n);
    else
        printf("The number %d is a Negative number.\n",n);
    printf("Thank you.\n");
}
