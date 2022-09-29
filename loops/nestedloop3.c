#include<stdio.h>
void main()
{
    int out, in;
    printf("\nNested loop:");
    for(out = 1; out <= 5; ++out)
    {
        printf("\n");
        for(in = 1; in <= out; ++in)
        {
            printf(" %d ",out);
        }
    }
    printf("\nThank you.");
}
