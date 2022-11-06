#include<stdio.h>
union DemoU
{
    int a;
    float b;
    char c;
};
struct DemoS
{
    int a;
    float b;
    char c;
};
void main()
{
    union DemoU u;
    struct DemoS s;
    printf("Size allocated to union's DemoU's object u= %d bytes.\n",sizeof(u));
    printf("Size allocated to struct's DemoS's object s= %d bytes.\n",sizeof(s));
    u.a=60;
    u.b=123.456;
    u.c='U';
    printf("\nUnion's member's values are:\n");
    printf("u.a=%d, u.b=%g, u.c=%c\n",u.a,u.b,u.c);
    s.a=30;
    s.b=456.123;
    s.c='S';
    printf("\nStructure's member's values are:\n");
    printf("s.a=%d, s.b=%g, s.c=%c\n",s.a,s.b,s.c);
    printf("Thank you.\n");
}
