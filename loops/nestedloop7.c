#include<stdio.h>
void main()
{
    int a,b;
    printf("Tables From  1 tO 10 are:");
    for(a=1;a<=10;++a)
    {
        printf("\n");
        for(b=1;b<=10;++b)
        {
            printf(" %d ",(a*b));
        }
    }
        printf("\nThank you.\n");
}
