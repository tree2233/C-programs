#include<stdio.h>
void main()
{
    int a[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
    int r,c;
    for(r=0;r<3;++r)
    {
        for(c=0;c<4;++c)
            printf("\t%d",a[r][c]);
        printf("\n");
    }
    printf("Thank you.\n");
}
