#include<stdio.h>
void main()
{
    int i=17,j;
    char c='S',d;
    float f=15.9,g;
    printf("Postfix Increment operator:\n");
    printf("Integer variables:\n");
    printf("i=%d ,j=%d\n",i,j);
    i++;
    printf("After i++,i=%d\n",i);
    j=i++;
    printf("After j=i++,i=%d and j=%d.\n",i,j);
    printf("Postfix increment in the printf(),i++=%d.\n",i++);
    printf("After postfix increment in the printf(),i=%d.\n",i);

    printf("\nCharacter variables:\n");
    printf("c=%c, d=%c\n",c,d);
    c++;
    printf("After c++,c=%c\n",c);
    d=c++;
    printf("After d=c++,c=%c and d=%c.\n",c,d);
    printf("Postfix increment in the printf(),c++=%c\n",c++);
    printf("After postfix increment in the printf(),c=%c.\n",c);

    printf("\nFloating point variable:\n");
    printf("f=%g ,g=%g",f,g);
    f++;
    printf("After f++,f=%g.\n",f);
    g=f++;
    printf("After g=f++,f=%g,g=%g\n",f,g);
    printf("Postfix increment in the printf(),f++=%g.\n",f++);
    printf("After postfix increment in the printf(),f=%g.\n",f);
}
