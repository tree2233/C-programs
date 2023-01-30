#include<stdio.h>
int reverse(int n)
{
    int remainder,rev = 0;
    while ( n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    return rev;
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The reversed number is %d.\n",reverse(num));
    printf("Thank you.\n");
}