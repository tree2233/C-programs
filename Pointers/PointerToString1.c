#include<stdio.h>
void main()
{
    char str[20], *pStr;
    pStr = str;
    printf("Enter your name :");
    scanf("%[^\n]s",pStr);
    printf("Hello %s.\n",pStr);
    printf("Thank you.\n");
}