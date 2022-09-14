#include<stdio.h>
void main()
{
    short s;
    int i;
    long l;
    printf("Default Initial values of Integer Data type:\n");
    printf("s=%d\n int=%d\n long=%ld\n",s,i,l);               //Default Initial values are always garbage values
    s=14;
    i=2022;
    l=123456789;
    printf("After the values of Integer Data type:\n");
    printf("s=%d\n int=%d\n long=%ld\n",s,i,l);
    printf("Thank You.\n");
}
