#include<stdio.h>
#include<string.h>
void main()
{
    char str[5][30];
    int i;
    printf("Enter five names:");
    for(i=0;i<5;++i)
        scanf("%s",str[i]);
    printf("The Reverse of each string is:\n");
    for(i=0;i<5;++i)
        printf("Reverse of string %d: %s.\n",i,strrev(str[i]));
    printf("\nThank you.\n");
}
