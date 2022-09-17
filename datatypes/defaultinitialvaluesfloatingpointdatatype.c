#include<stdio.h>
void main ()
{
    float f;
    double d;
    long double l;
    printf("Default initial values of floating point datatype:\n");
    printf("f=%f.\n d=%lf.\n l=%Lf\n",f,d,l);
    f=3.14;
    d=17.2022;
    l=123456789.987654321;
    printf("After the setting values of floating point datatype:\n");
    printf("f=%f.\n d=%lf.\n l=%Lf\n",f,d,l);
    printf("Thank You");
}
