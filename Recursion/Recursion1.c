#include<stdio.h>
int factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
void main()
{
    int no,fact;
    printf("Enter a number:");
    scanf("%d",&no);
    fact = factorial(no);
    printf("\nFactorial of %d is %d.\n",no,fact);
    printf("Thank you.\n");
}