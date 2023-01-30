#include<stdio.h>
int main()
{
    int num,temp,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(temp = num; num != 0; num = num / 10)
    {
        printf("%d",(num % 10));
    }
    printf("\nThank you.\n");
}