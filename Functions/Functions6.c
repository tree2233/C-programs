#include<stdio.h>
int square();
void main()
{
    int sq;
    sq = square();
    printf("Square = %d.\n",sq);
    printf("Thank you.\n");
}
int square()
{
    int no,s;
    printf("Enter a number:");
    scanf("%d",&no);
    s = no * no;
    return s;
}