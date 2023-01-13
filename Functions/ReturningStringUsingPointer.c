#include<stdio.h>
void upperCase(char str1[],char *ptr)
{
    int i;
    for(i=0; str1[i] != '\0'; ++i)
    {
        if(str1[i] >= 97 && str1[i] <= 122)
            *(ptr + i) = str1[i] - 32;
        else
            *(ptr + i) = str1[i];
    }
    *(ptr + i) = '\0';
}
void main()
{
    char s1[20],s2[20];
    printf("Enter your name:");
    gets(s1);
    printf("Your name : %s.\n",s1);
    upperCase(s1,s2);
    printf("Your name in uppercase letters: %s.\n",s2);
    printf("Thank you.\n");
}