#include<stdio.h>
int main()
{
    int arr[10],i,sum;
    printf("Enter 10 numbers:");
    for(i = 0; i < 10; ++i)
        scanf(" %d",&arr[i]);
    for(i = 0; i < 10; ++i)
    {
        sum += arr[i];
    }
    printf("The sum of all 10 numbers is %d.\n",sum);
}