#include<stdio.h>
int main()
{
    int a,b;
    char c = 'Z';
    for(a = 6; a >= 1; --a,--c)
    {
        printf("\n");
        for(b = 1; b <= a; ++b)
        {
            printf(" %c ",c);
        }
    }
}