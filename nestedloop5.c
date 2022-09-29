#include<stdio.h>
void main()
{
    int i, j;
    char ch = 'A';
    printf("\nNested Loop:");
    for(i = 1; i <= 5; ++i)
    {
        printf("\n");
        for(j = 1, ch = 'A'; j <= i; ++j, ++ch)
        {
            printf(" %c ", ch);
        }
    }
    printf("\nThank you.");
}
