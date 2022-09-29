#include<stdio.h>
void main()
{
    int out,in;
    printf("Nested loop:\n");
    for(out=1;out<=5;++out)
    {
        printf("\n");
        for(in=1;in<=5;++in)
        {
            printf("%d : %d\n",out,in);
        }
    }
    printf("Thank you.\n");
}
