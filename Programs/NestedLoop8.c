#include<stdio.h>
int main()
{
    int a,b,k;
    char c = '*';
    for(a = 1; a <= 5; ++a)
    {
        for(b = 5; b >= a; --b)
        {
            printf(" ");
        }
        for(k = 1; k <= a; ++k)
        {
            printf(" * ");
        }
        printf("\n");
    }
}