#include<stdio.h>
void main()
{
    int out,in;
    char ch;
    for(out=1;out<=5;++out)
    {
        printf("\n");
        for(ch='a',in=1;in<=out;++in,++ch)
            printf(" %c ",ch);
    }
    printf("\n\nThank you.\n");
}
