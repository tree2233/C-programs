#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50]="C Programming Language",str2[50];
    printf("String 1= %s.\n",str1);
    printf("String 2= %s.\n",str2);
    strcpy(str2,str1);
    printf("Copy of string 1 in string 2 = %s.\n",str2);
    strcpy(str1,"String Copy Function");
    printf("After assigning a new string to string 1 = %s.\n",str1);
    printf("Thank you.\n");
}
