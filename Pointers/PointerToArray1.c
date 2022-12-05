#include<stdio.h>
void main()
{
    int a[5] ={0}, *ptr;
    ptr = a;
    printf("Starting address of array, a = %x.\n",a);
    printf("Starting address of array, &a[0] = %x.\n",&a[0]);
    printf("Starting address of array, ptr = %x.\n",ptr);
    printf("Thank you.\n");
}
