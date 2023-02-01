#include<stdio.h>
int main()
{
    int arr[10],i,num,flag = 1;
    printf("Enter 10 numbers:");
    for(i = 0; i < 10; ++i)
        scanf(" %d",&arr[i]);
    printf("Enter a number to search in input:");
    scanf("%d",&num);
    for(i = 0; i < 10; ++i)
    {
        if(num == arr[i])
        {
            flag = 0;
            printf("The number %d is present in array.\n",num);
            break;
        }
    }
    if(flag == 1)
        printf("The number %d is NOT present in array.\n",num);
}