#include<stdio.h>
void main()
{
    char str[50],*ptr;
    int i;
    ptr = str;
    printf("Enter your college name :\n");
    scanf("%[^\n]s",ptr);
    printf("Your College name is :");
    /*for(i=0; str[i] != '\0'; ++i)
         printf("%c",str[i]);*/
    //OR
    /*for(i=0; *(ptr+i) != '\0';++i)
         printf("%c",*(ptr+r));*/
    //OR
    for(i=0; ptr[i] != '\0';++i)
        printf("%c",ptr[i]);
    printf("\nThank you.\n");
 }