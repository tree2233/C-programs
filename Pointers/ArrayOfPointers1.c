#include<stdio.h>
void main()
{
    int no1,no2,m,i,*ptr[3];
    ptr[0] = &no1;
    ptr[1] = &no2;
    ptr[2] = &m;
    printf("Enter 2 numbers:");
    for(i = 0; i < 2; ++i)
       scanf("%d",ptr[i]);
    *ptr[2] = *ptr[0] > *ptr[1] ? *ptr[0] : *ptr[1];
    printf("Greatest value among %d and %d is %d.\n",no1,no2,m);
    *ptr[2] = *ptr[0] < *ptr[1] ? *ptr[0] : *ptr[1];
    printf("Smallest value among %d and %d is %d.\n",no1,no2,m);
    printf("Thank you.\n");
}