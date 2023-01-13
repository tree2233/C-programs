#include<stdio.h>
int* fibo(int t, int *p)
{
    int a = 0,b = 1,c,i;
    *(p + 0) = a;
    *(p + 1) = b;
    for(i=2; i<t; ++i)
    {
        c = a + b;
        *(p + i) = c;
        a = b;
        b = c;
    }
    return p;
}
void main()
{
    int terms,a[20] = {0},i,*p;
    printf("Enter number of terms to print of the Fibonacci Series:");
    scanf("%d",&terms);
    p = fibo(terms,a);
    printf("\nFibonacci Series:\n");
    for(i=0; i<terms; ++i)
        printf(" %d ",*(p + i));
    printf("\nThank you.\n");
}