#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20]="Good";
    char str2[20]="Morning";
    printf("String 1 = %s.\n",str1);
    printf("String 2 = %s.\n",str2);
    strcat(str1,str2);
    printf("After strcat(str1,str2):\n");
    printf("String 1 = %s.\n",str1);
    printf("String 2 = %s.\n",str2);
    printf("Thank you.\n");
}
