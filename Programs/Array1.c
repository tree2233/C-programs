#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter 10 numbers:");
    for(i = 0; i < 10; ++i)
        scanf(" %d",&arr[i]);
    for(i = 9;i >= 0; --i)
        printf("%d\t",arr[i]);
}