#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)calloc(1,sizeof(int));
    if(ptr)
    {
        printf("Dynamically memory allocated at location : %x.\n",ptr);
        *ptr = 60;
        printf("Value assigned and stored into dynamically allocated memory: %d.\n",*ptr);
        printf("Enter a integer value:");
        scanf("%d",ptr);
        printf("Entered value : %d.\n",*ptr);
    }
    else
        printf("Unable to allocate memory dynamically.\n");
    free(ptr);
    printf("Thank you.\n");
}