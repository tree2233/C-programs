#include<stdio.h>
union Demo
{
    int a;
    float b;
    char c;
};
void main()
{
    union Demo d;
    d.a=6;
    printf("Union's int member is in use,with value= %d.\n",d.a);
    d.b=11.2022;
    printf("Union's float member is in use,with value= %g.\n",d.b);
    d.c='U';
    printf("Union's char member is in use,with value= %c.\n",d.c);
    printf("Size of memory allocated to union Demo's object d= %d bytes.\n",sizeof(d));
    printf("Thank you.\n");
}
