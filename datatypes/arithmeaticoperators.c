#include<stdio.h>
void main()
{
    int v1=17,v2=6,op1,op2,op3,op4,op5;
    printf("Arithmetic operations:\n");
    op1=v1+v2;
    op2=v1-v2;
    op3=v1*v2;
    op4=v1/v2;
    op5=v1%v2;
    printf("Addition of %d and %d is %d.\n",v1,v2,op1);
    printf("Subtraction of %d and %d is %d.\n",v1,v2,op2);
    printf("Multiplication of %d and %d is %d.\n",v1,v2,op3);
    printf("Division of %d and %d is %d.\n",v1,v2,op4);
    printf("Modulus of %d and %d is %d.\n",v1,v2,op5);
    printf("Thank you.\n");
}
