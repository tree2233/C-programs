#include<stdio.h>
int main()
{
    int a,b;
    char c = 'A';
    for(a = 1; a <= 5; ++a,++c)
    {
        printf("\n");
        for(b = 1; b <= a; ++b)
        {
            printf(" %c ",c);
        }
    }
}