//This program shows us 9that the union can take one value at a time,we cannot access more than one value at once.
#include<stdio.h>
union Demo
{
    int a;
    float b;
    char c;
};
void main()
{
    union Demo d1={6};
    union Demo d2={20,11.2022,'N'};
    union Demo d3={2022.11};
    printf("Union object members default initial values:\n");
    printf("d1.a=%d, d1.b=%g, d1.c=%c.\n",d1.a,d1.b,d1.c);
    printf("d2.a=%d, d2.b=%g, d2.c=%c.\n",d2.a,d2.b,d2.c);
    printf("d3.a=%d, d3.b=%g, d3.c=%c.\n",d3.a,d3.b,d3.c);
    printf("Thank you.\n");
}
