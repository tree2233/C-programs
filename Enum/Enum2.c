#include<stdio.h>
enum boolean{FALSE,TRUE};
void main()
{
    enum boolean f=FALSE;
    enum boolean t;
    printf("Default initial values:\n");
    printf("f = %d, t = %d.\n",f,t);
    t=TRUE;
    if(t)
        printf("The if condition got TRUE value.\n");
    else
        printf("The if condition got FALSE value.\n");
    printf("Thank you.\n");
}
