#include<stdio.h>
#define SIZE 5
float sum(float a[])
{
    float tot=0.0;
    int i;
    printf("\nArray passed as arugment has %d elements as:\n",SIZE);
    for(i=0; i<SIZE; ++i)
    {
        printf(" %g ",a[i]);
        tot += a[i];
    } 
    return tot;
}
void main()
{
    float arr[SIZE] = {0.0},s;
    int i;
    printf("Enter %d elements:",SIZE);
    for(i=0; i<SIZE; ++i)
        scanf("%f",&arr[i]);
    s = sum(arr);
    printf("\nSum of all %d elements is %g.\n",SIZE,s);
    printf("Thank you.\n");
}