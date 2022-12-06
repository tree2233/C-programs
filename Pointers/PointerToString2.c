#include<stdio.h>
void main()
{
    char str1[20], str2[50], *p;
    printf("Enter your name :");
    p=&str1[0];
    gets(p);
    printf("Enter your address :");
    gets(str2);
    printf("Hello %s.\n",p);
    p=str2;
    printf("Your address is %s.\n",p);
    printf("Thank you.\n");
}