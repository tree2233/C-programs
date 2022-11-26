#include<stdio.h>
void main()
{
    char c='A',*ptrC;
    int i=24,*ptrI;
    double d=11.2022,*ptrD;
    ptrC=&c;
    ptrI=&i;
    ptrD=&d;
    printf("Default initial values of variables:\n");
    printf("Character variable c = %c.\n",c);
    printf("Character pointer variable *ptrC = %c.\n",*ptrC);
    printf("Integer variable i = %d.\n",i);
    printf("Integer pointer variable *ptrI = %d.\n",*ptrI);
    printf("Double variable c = %c.\n",d);
    printf("Double pointer variable *ptrD = %lf.\n",*ptrD);
    *ptrC='D';
    *ptrI=31;
    *ptrD=3.14;
    printf("\nAfter assigning new values to variables,using their pointers:\n");
    printf("Character variable c = %c.\n",c);
    printf("Character pointer variable *ptrC = %c.\n",*ptrC);
    printf("Integer variable i = %d.\n",i);
    printf("Integer pointer variable *ptrI = %d.\n",*ptrI);
    printf("Double variable c = %c.\n",d);
    printf("Double pointer variable *ptrD = %lf.\n",*ptrD);
    printf("Thank you.\n");
}
