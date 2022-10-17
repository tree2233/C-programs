#include<stdio.h>
#include<string.h>
void main()
{
    char str[5][30];
    int i;
    printf("Enter five names:");
    for(i=0;i<5;++i)
        scanf("%s",str[i]);
    printf("The length of each string is:\n");
    for(i=0;i<5;++i)
        printf("Length of string %d: %d.\n",i,strlen(str[i]));
    printf("\nThank you.\n");
}
