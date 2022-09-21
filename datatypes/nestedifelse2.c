#include<stdio.h>
void main()
{
    int a;
    printf("Enter Month number:");
    scanf("%d",&a);
    if(a>=1 && a<=12)
    {
        if(a==1)
        printf("current month is January.\n");
        else if(a==2)
        printf("current month is February.\n");
        else if(a==3)
        printf("current month is March.\n");
        else if(a==4)
        printf("current month is April.\n");
        else if(a==5)
        printf("current month is May.\n");
        else if(a==6)
        printf("current month is June.\n");
        else if(a==7)
        printf("current month is July.\n");
        else if(a==8)
        printf("current month is August.\n");
        else if(a==9)
        printf("current month is September.\n");
        else if(a==10)
        printf("current month is October.\n");
        else if(a==11)
        printf("current month is November.\n");
        else
        printf("current month is December.\n");
    }
    else
    printf("Invalid Month number.\n");
    printf("Thank you.\n");
}
