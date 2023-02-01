#include<stdio.h>
int main()
{
    int a,b;
    char c = 'a';
    for(a = 1; a <= 5; ++a)
    {
        printf("\n");
        for(b = 1, c = 'a'; b <= a; ++b,++c)
        {
            printf(" %c ",c);
        }
    }
}