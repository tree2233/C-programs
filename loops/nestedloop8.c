#include<stdio.h>
void main()
{
    int out,in;
    char ch='*';
    out=1;
    while(out<=5)
    {
        printf("\n");
        for(in=1;in<=out;++in)
            printf(" %c ",ch);
        ++out;
    }
    printf("\nThank you.\n");
}
