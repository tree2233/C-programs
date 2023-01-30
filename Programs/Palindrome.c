#include<stdio.h>
int main()
{
    int num,rev = 0,temp = 0,i;
    printf("Enter a number:");
    scanf("%d",&num);
    i = num;
    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    temp = rev;
    if(temp == i)
        printf("The number %d is a PALINDROME number.\n",i);
    if(temp != i)
        printf("The number %d is NOT a PALINDROME number.\n",i);
        printf("Thank you.\n");
}