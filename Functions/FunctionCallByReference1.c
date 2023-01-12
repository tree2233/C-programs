#include<stdio.h>
void swapping(int *no1,int *no2)
{
  /*  *no1 = *no1 + *no2;
    *no2 = *no1 - *no2;
    *no1 = *no1 - *no2;*/
    *no2 = *no1 + *no2 - (*no1 = *no2);
}
void main()
{
    int n1,n2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&n1,&n2);
    printf("\nNumbers before swapping, n1 = %d, n2 = %d.\n",n1,n2);
    swapping(&n1,&n2);
    printf("\nNumbers after swapping, n1 : %d, n2 : %d.\n",n1,n2);
    printf("Thank you.\n");
}