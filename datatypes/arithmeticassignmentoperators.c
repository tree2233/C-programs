#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("\nValues of variables:a=%d,b=%d.\n",a,b);
    a+=b;
    printf("Addition assignment:a=%d,b=%d.\n",a,b);
    a-=b;
    printf("Subtraction assignment:a=%d,b=%d.\n",a,b);
    b*=a;
    printf("Multiplication assignment:a=%d,b=%d.\n",a,b);
    b/=a;
    printf("Division assignment:a=%d,b=%d.\n",a,b);
    a%=a;
    printf("Modulus assignment:a=%d,b=%d.\n",a,b);
    printf("Thank you.\n");
}
