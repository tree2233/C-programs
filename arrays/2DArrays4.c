#include<stdio.h>
void main()
{
    int a[3][4],b[3][4]={0};
    int r,c;
    printf("Elements in uninitialized 3 X 3 matrix are:\n");
    for(r=0;r<3;++r)
    {
        for(c=0;c<3;++c)
            printf("\t%d",a[r][c]);
        printf("\n");
    }
    printf("Elements in initialized 3 X 3 matrix are:\n");
    for(r=0;r<3;++r)
    {
        for(c=0;c<3;++c)
            printf("\t%d",b[r][c]);
        printf("\n");
    }
    printf("Thank you.\n");
}
