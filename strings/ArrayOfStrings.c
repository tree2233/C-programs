#include<stdio.h>
void main()
{
    char strArr[5][20];
    int i;
    printf("Enter 5 names:");
    for(i=0;i<5;++i)
    gets(strArr[i]);
    printf("Five names entered are:\n");
    for(i=0;i<5;++i)
        puts(strArr[i]);
    printf("Thank you.\n");
}
