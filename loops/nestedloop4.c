#include<stdio.h>
void main()
{
    int a,b;
    char ch='a';
    for(a=1;a<=5;++a)
    {
        printf("\n");
        for(b=1;b<=a;++b,++ch)
        {
            printf(" %c ",ch);
        }
    }
    printf("\nThank you.");
}
