#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    printf("Dnamically memory allocated at location : %x.\n",ptr);
    *ptr = 60;
    printf("Value assigned and stored into dynamically allocated memeory : %d.\n",*ptr);
    printf("Enter a number :");
    scanf("%d",ptr);
    printf("Entered value : %d.\n",*ptr);
    free(ptr);
    printf("Thank you.\n");
}