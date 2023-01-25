#include<stdio.h>
int main()
{
    int no,a,b,c,i;
    printf("Enter a number:");
    scanf("%d",&no);
    printf("0\t1");
    a = 0;
    b = 1;
    for(i = 0; i < (no - 2); ++i)
    {
        c = a + b;
        printf("\t%d",c);
        a = b;
        b = c;
    }
    printf("\nThank you.\n");
}