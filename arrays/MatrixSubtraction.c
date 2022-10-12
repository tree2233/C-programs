#include<stdio.h>
void main()
{
    int m1[3][2]={0},m2[3][2]={0},mm[3][2]={0},a,b;
    printf("Enter the elements of first matrix:");
    for(a=0;a<3;++a)
        for(b=0;b<2;++b)
        scanf("%d",&m1[a][b]);
    printf("Enter the elements of second matrix:");
    for(a=0;a<3;++a)
        for(b=0;b<2;++b)
        scanf("%d",&m2[a][b]);
    for(a=0;a<3;++a)
        for(b=0;b<2;++b)
        mm[a][b]=m1[a][b]-m2[a][b];
    printf("\nThe Subtraction of two matrix is:\n");
    for(a=0;a<3;++a)
        {
           for(b=0;b<2;++b)
            printf("\t%d",mm[a][b]);
            printf("\n");
        }
        printf("Thank you.\n");
}
