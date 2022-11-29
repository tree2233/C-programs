#include<stdio.h>
void main()
{
    char c='A',*ptrC;
    int i=11,*ptrI;
    double d=11.2022,*ptrD;
    ptrC=&c;
    ptrD=&d;
    ptrI=&i;
    printf("Default initial values of variables:\n");
    printf("Character variable c = %c.\n",c);
    printf("Character pointer variable *ptrC = %c.\n",*ptrC);
    printf("Integer variable i = %d.\n",i);
    printf("Integer pointer variable *ptrI = %d.\n",*ptrI);
    printf("Double variable d = %lf.\n",d);
    printf("Double pointer variable *ptrD = %lf.\n",*ptrD); 

    printf("\nSize of memory allocated to variables:n");
    printf("Character variable c = %d bytes.\n",sizeof(c));
    printf("Character pinter variable ptrC = %d bytes.\n",sizeof(ptrC));
    printf("\nInteger variable i = %d bytes.\n",sizeof(i));
    printf("Integer pointer variable ptrI = %d bytes.\n",sizeof(ptrI));
    printf("\nDouble variable d = %d bytes.\n",sizeof(d));
    printf("Double pointer variable ptrD = %d bytes.\n",sizeof(ptrD));
    printf("Thank you.\n");
}