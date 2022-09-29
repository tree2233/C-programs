#include<stdio.h>
void main()
{
    int out,in;
    printf("Nested loop:\n");
    out=1;
    while(out<=5)
    {
        printf("\n");
        in=1;
        while(in<=5)
        {
            printf("%d : %d\n",out,in);
            ++in;
        }
        ++out;
    }
    printf("Thank you.\n");
}
