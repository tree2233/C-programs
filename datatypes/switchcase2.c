#include<stdio.h>
void main()
{
    int a;
    printf("Enter Month number:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
         printf("current month is January.\n");
         break;
        case 2:
         printf("current month is February.\n");
         break;
        case 3:
         printf("current month is March.\n");
         break;
        case 4:
         printf("current month is April.\n");
         break;
        case 5:
         printf("current month is May.\n");
         break;
        case 6:
         printf("current month is June.\n");
         break;
        case 7:
         printf("current month is July.\n");
         break;
        case 8:
         printf("current month is August.\n");
         break;
        case 9:
         printf("current month is September.\n");
         break;
        case 10:
         printf("current month is October.\n");
         break;
        case 11:
         printf("current month is November.\n");
         break;
        case 12:
         printf("current month is December.\n");
         break;
        default:
         printf("Invalid Month number.\n");
         break;
    }
    printf("Thank you.\n");
}
