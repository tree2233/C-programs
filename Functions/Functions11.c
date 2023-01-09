#include<stdio.h>
#define MAX 5
void callByValue(int no1,int no2)
{
    printf("\nInside the callByValue() function:");
    printf("Address of variables,&no1: %x, and &no2: %x.\n",&no1,&no2);
    printf("Values of variables ,no1 = %d, and no2 = %d.\n",no1,no2);
    printf("Enter 2 numbers:");
    scanf("%d %d",&no1,&no2);
    printf("New input values in variables, no1 = %d and, no2 = %d.\n",no1,no2);
    return;
}
void callByReference(int a[])
{
    int i;
    printf("\nInside the callByReference() function:");
    printf("Address of array , a: %x .\n",a);
    printf("Values of array :\n");
    for(i=0; i<MAX; ++i)
        printf("\t%d",a[i]);
    printf("\n Enter 5 values for array;");
    for(i=0; i<MAX; ++i)
        scanf("%d",&a[i]);
    printf("New input values for array:\n");
    for(i=0; i<MAX; ++i)
        printf("\t%d",a[i]);
    printf("\n");
    return;
}
void main()
{
    int no1 = 20, no2 = 40, arr[MAX] = {10,20,30,40,50},i;
    printf("Inside the main() function :\n");
    printf("Address of variables, &no1 = %x and,&no2 = %x.\n",&no1,&no2);
    printf("Values of variables, no1 = %d and,no2 = %d.\n",no1,no2);
    printf("Calling the callByValue() function....\n");
    callByValue(no1,no2);
    printf("\nReturned from the callByValue() function.\n");
    printf("Values of variables, no1 = %d and,no2 = %d.\n",no1,no2);

    printf("\nInside the main() function:\n");
    printf("Address of array, arr = %x.\n",arr);
    printf("Values of array:\n");
    for(i=0; i<MAX; ++i)
        printf("\t%d",arr[i]);
    printf("\n Calling callByReference() function....\n");
    callByReference(arr);
    printf("\n Returned from the callByReference() function.\n");
    printf("Values of array;\n");
    for(i=0; i<MAX; ++i)
        printf("\t%d",arr[i]);
    printf("\nThank you.\n");
}