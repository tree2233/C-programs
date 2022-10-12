#include<stdio.h>
void main()
{
    int a[2][4],i,j;
    printf("Enter 8 elements for a 2 X 4 matrix:");
    for(i=0;i<2;++i)
        for(j=0;j<4;++j)
            scanf("%d",&a[i][j]);
    printf("The elements in the 2 X 4 matrix are:");
    for(i=0;i<2;++i)
        for(j=0;j<4;++j)
            printf(" %d ",a[i][j]);
    printf("\nThank you.\n");
}
