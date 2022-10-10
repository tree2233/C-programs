#include<stdio.h>
void main()
{
    int a2d[3][4],row,col;
    printf("Size of memory allocated to the \"a2d\" array=%d.\n",sizeof(a2d));
    a2d[0][0]=10;
    a2d[0][1]=20;
    a2d[0][2]=30;
    a2d[0][3]=40;

    a2d[1][0]=50;
    a2d[1][1]=60;
    a2d[1][2]=70;
    a2d[1][3]=80;

    a2d[2][0]=90;
    a2d[2][1]=100;
    a2d[2][2]=110;
    a2d[2][3]=120;

    printf("\nElements in the 3X4 two dimensional array are:\n");
    for(row=0;row<3;++row)
    {
        printf("\n");
        for(col=0;col<4;++col)
        {
            printf("a2d[%d][%d]=%d\n",row,col,a2d[row][col]);
        }
    }
    printf("Thank you.\n");
}
