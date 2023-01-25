#include<stdio.h>
int main()
{
    int no,a,b,c,d,i;
    printf("Enter a number:");
    scanf("%d",&no);
    printf("0\t1\t1");
    a = 0;
    b = 1;
    c = 1;
    for(i = 0; i < (no - 3); ++i)
    {
        d = a + b + c;
        printf("\t%d",d);
        a = b;
        b = c;
        c = d;
    }
    printf("\nThank you.\n");
}