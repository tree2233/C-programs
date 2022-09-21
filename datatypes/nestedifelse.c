#include<stdio.h>
void main()
{
    int a;
    printf("Enter week day number:");
    scanf("%d",&a);
    if(a>=1 && a<=7)
    {
        if(a==1)
        printf("Today is Monday.\n");
        else if(a==2)
        printf("Today is Tuesday.\n");
        else if(a==3)
        printf("Today is Wednesday.\n");
        else if(a==4)
        printf("Today is Thursday.\n");
        else if(a==5)
        printf("Today is Friday.\n");
        else if(a==6)
        printf("Today is Saturday.\n");
        else
        printf("Today is Sunday.\n");
    }
    else
    printf("Invalid day number.\n");
    printf("Thank you.\n");
}
