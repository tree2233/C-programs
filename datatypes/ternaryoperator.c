#include<stdio.h>
void main()
{
    int n1,n2,n;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    n=n1>n2?n1:n2;
    printf("Max value=%d.\n",n);
    n=n1<n2?n1:n2;
    printf("Min value=%d.\n",n);
    printf("Thank you.\n");
}
