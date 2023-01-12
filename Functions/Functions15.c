#include<stdio.h>
void increment(int *n)
{
    printf("\nInside the increment(),number : %d.\n",*n);
    ++(*n);
    printf("After returning from the increment(), number : %d.\n",*n);
    return;
}
void main()
{
    int no;
    printf("Enter a number:");
    scanf("%d",&no);
    printf("\nInside the main(), number : %d.\n",no);
    increment(&no);
    printf("\nAfter returning from the increment(), number : %d.\n",no);
    printf("Thank you.\n");
}