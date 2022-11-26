#include<stdio.h>
void main()
{
    char c = 'A';
    int i = 24;
    double d = 11.2022;
    char *ptrC;
    int *ptrI;
    double *ptrD;
    ptrC = &c;
    ptrI = &i;
    ptrD = &d;
    printf("Character value of variable c = %c.\n", c);
    printf("Address/Location of character variable, &c = %x.\n", &c);
    printf("Address of character variable c inside pointer variable ptrC = %x.\n", ptrC);
    printf("\nInteger value of variable i = %i.\n", i);
    printf("Address/Location of integer variable, &i = %x.\n", &i);
    printf("Address of integer variable i inside pointer variable ptrI = %x.\n", ptrI);
    printf("\nDouble value of variable d = %lf.\n", d);
    printf("Address/Location of double variable, &d = %x.\n", &d);
    printf("Address of double variable d inside pointer variable ptrD = %x.\n", ptrD);
    printf("\nThank you.\n");
}
