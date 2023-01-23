#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptrM,*ptrC;
    ptrM = (int*)malloc(sizeof(int));
    ptrC = (int*)calloc(1,sizeof(int));
    if(ptrM && ptrC)
    {
        printf("Dynamically Memory allocated at locations:\n");
        printf("Adddreess of memory allocated through malloc() : %x.\n",ptrM);
        printf("Adddreess of memory allocated through calloc() : %x.\n",ptrC);
        printf("Default initial values to the memory allocated memeory:\n");
        printf("Values at memory allocated through malloc() : %d.\n",*ptrM);
        printf("Values at memory allocated through calloc() : %d.\n",*ptrC);
        printf("Enter 2 numbers:");
        scanf("%d %d",ptrM,ptrC);
        printf("Entered values are %d and %d.\n",*ptrM,*ptrC);
    }
    else
        printf("Unable to allocate memory dynamically.\n");
    free(ptrM);
    free(ptrC);
    printf("Thank you.\n");
}