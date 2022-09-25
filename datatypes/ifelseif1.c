#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0)
        printf("the number %d is Neutral.\n",n);
    else if(n>0)
        printf("the number %d is Positive.\n",n);
    else
        printf("the number %d is Negative.\n",n);
    printf("Thank you.\n");
}
