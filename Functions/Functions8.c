#include<stdio.h>
void add(int no1, int no2);
void sub(int n1,int n2);
void mul(int a,int b);
void div(int x,int y);
void mod(int n,  int d);
void main()
{
    int num1,num2,option;
    printf("Arithmetic Operations:\n");
    do
    {
        printf("Enter two numbers:");
        scanf("%d %d",&num1,&num2);
        add(num1,num2);
        sub(num1,num2);
        mul(num1,num2);
        div(num1,num2);
        mod(num1,num2);
        printf("Press 1 to Continue ,0 to Exit:");
        scanf("%d",&option);
    }while(option);
    printf("Thank you.\n");
} 
void add(int no1,int no2)
{
    printf("Addition of %d and %d is %d.\n",no1,no2,(no1 + no2));
}
void sub(int n1,int n2)
{
    printf("Subtraction of %d and %d is %d.\n",n1,n2,(n1 - n2));
}
void mul(int a,int b)
{
    printf("Multiplication of %d and %d is %d.\n",a,b,(a * b));
}
void div(int x,int y)
{
    printf("Division of %d and %d is %d.\n",x,y,(x / y));
}
void mod(int n,int d)
{
    printf("Modulus of %d and %d is %d.\n",n,d,(n % d));
}