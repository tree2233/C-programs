#include<stdio.h>
int main()
{
    int i;
    float arr[10],sum;
    float avg;
    printf("Enter 10 numbers:");
    for(i = 0; i < 10; ++i)
        scanf(" %f",&arr[i]);
    for(i = 0; i < 10; ++i)
    {
        sum += arr[i];
    }
    avg = sum / 10;
    printf("The average of all 10 numbers is %.1f and sum is %.1f.\n",avg,sum);
}