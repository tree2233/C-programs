#include<stdio.h>
void main()
{
    int i,j;
    printf("\nNested Loop:");
    i=1;
    while(i<=10)
    {
        printf("\n");
        j=1;
        while(j<=i)
        {
            printf(" %d ",(i*j));
            ++j;
        }
        ++i;
    }
    printf("\nThank you.");
}
