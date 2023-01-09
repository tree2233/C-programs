#include<stdio.h>
int stringLength(char str[])
{
    int len;
    for(len=0; str[len] != '\0'; ++len);
    return len;
}
void main()
{
    int s[20];
    printf("Enter your name :");
    gets(s);
    printf("String = \"%s\", Length = %d characters.\n",s,stringLength(s));
    printf("Thank you.\n");
}