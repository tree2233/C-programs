#include<stdio.h>
int main()
{
    int a,b;
    char ch = '*';
    for(a = 0; a <= 5; ++a)
    {
        printf("\n");
        for(b = 1; b <= a; ++b)
        {
            printf(" %c ",ch);
        }
    }
}