#include<stdio.h>
void main()
{
    int i=150;
    float f=3.14,d=5.0;
    char c='G';
    printf("Increment Operator:\n");
    printf("i=%d ,c=%c ,f=%g ,d=%g ",i,c,f,d);
    i++;
    c++;
    f++;
    d++;
    printf("\nAfter incrementation of variables:\n");
    printf("i=%d ,c=%c, f=%g, d=%g",i,c,f,d);
}
