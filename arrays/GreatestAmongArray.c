#include<stdio.h>
int main()
{
    int arr[5],i,max = 0;
    printf("Enter 5 numbers:");
    for(i = 0; i < 5; ++i)
        scanf("%d",&arr[i]);
    max = arr[0];
    for(i = 0; i < 5; ++i)
    {
        if(arr[i] > max)
        {
            max = arr[i]; 
        }
    }
    printf("Greatest among the 5 numbers is %d.\n",max);
}