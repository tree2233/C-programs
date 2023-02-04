#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter first 3 X 3 Matrix:");
    for(i = 0; i < 3; ++i)
    {
        for(j = 0;j < 3; ++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second 3 X 3 Matrix:");
    for(i = 0; i < 3; ++i)
    {
        for(j = 0;j < 3; ++j)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Subtraction of 2 matrices is:");
    for(i = 0; i < 3; ++i)
    {
        printf("\n");
        for(j = 0;j < 3; ++j)
        {
            printf(" %d ",(a[i][j] - b[i][j]));
        }
    }
}