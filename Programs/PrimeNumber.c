#include<stdio.h>
int main()
{
    int flag = 1,no,i;
    printf("Enter a number:");
    scanf("%d",&no);
    if(no == 1 || no == 0)
    {
        printf("The number %d is neither prime nor composite.\n",no);
        flag = 0;
    }
    for(i = 2; i < (no/2); ++i)
    {
        if(no % i == 0)
        {
            printf("The number %d is not a PRIME number.\n",no);
            flag = 0;
        }
    }
    if(flag == 1)
    {
        printf("The number %d is a PRIME number.\n",no);
    }
    printf("Thank you.\n");
}