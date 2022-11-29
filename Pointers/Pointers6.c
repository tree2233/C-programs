#include<stdio.h>
void main()
{
    int no1,no2,no3,*ptr;
    printf("Enter 3 numbers:");
    ptr=&no1;
    scanf("%d",ptr);
    ptr=&no2;
    scanf("%d",ptr);
    ptr=&no3;
    scanf("%d",ptr);
    printf("The 3 numbers entered are:\n");
    printf("no1 = %d, no2 = %d, no3 = %d.\n",no1,no2,no3);
    printf("Thank you.\n");
}