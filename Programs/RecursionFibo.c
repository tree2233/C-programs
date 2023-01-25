#include<stdio.h>
void factorial(int n)
{
    int i,a,b,c;
    a = 0;
    b = 1;
    for(i = 0; i < (n-2); ++i)
    {
        c  = a + b;
        printf("\t%d",c);
        a = b;
        b = c;
    }
}
int main()
{
    int no;
    printf("Enter a number:");
    scanf("%d",&no);
    printf("0\t1");
    factorial(no);
    printf("\nThank you.\n");
}