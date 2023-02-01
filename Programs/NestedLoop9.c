#include<stdio.h>
int main()
{
    int a,b,k;
    char c = 'A';
    for(a = 1; a <= 5; ++a,++c)
    {
        for(b = 5; b >= a; --b)
        {
            printf(" ");
        }
        for(k = 1; k <= a; ++k)
        {
            printf(" %c ",c);
        }
        printf("\n");
    }
}