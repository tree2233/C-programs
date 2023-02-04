#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter a 3 X 3 Matrix:");
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 3; ++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered 3 X 3 Matrix:");
    for(i = 0; i < 3; ++i)
    {
        printf("\n");
        for(j = 0; j < 3; ++j)
        {
            printf(" %d ",a[i][j]);
        }
    }
    printf("\nTranspose of matrix:");
    for(j = 0; j < 3; ++j)
    {
        printf("\n");
        for(i = 0; i < 3; ++i)
        {
            printf(" %d ",a[i][j]);
        }
    }
}