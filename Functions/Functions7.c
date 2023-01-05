#include<stdio.h>
void square(int no);
void cube(int n);
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    square(num);
    cube(num);
    printf("Thank you.\n");
}
void square(int no)
{
    int sq;
    sq = no * no;
    printf("The Square of %d is %d.\n",no,sq);
    return;
}
void cube(int n)
{
    printf("The Cube of %d is %d.\n",n,(n*n*n));
}
