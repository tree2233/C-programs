#include<stdio.h>
void main()
{
    int out,in;
    for(out=1;out<=5;++out)
    {
        printf("\n");
        for(in=1;in<=out;++in)
            printf(" %d ",in);
    }
    printf("\nThank you.\n");
}
