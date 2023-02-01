#include<stdio.h>
int main()
{
    int a,b,c = 9;
    for(a = 1; a <= 4; ++a)
    {
        printf("\n");
        for(b = 1; b <= a; ++b,--c)
        {
            printf(" %d ",c);
        }
    }
}