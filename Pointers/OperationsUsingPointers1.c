#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c,*pa,*pb,*pc,flag,n;
    pa=&a;
    pb=&b;
    pc=&c;
    do
    {
    printf("Enter 2 numbers:");
    scanf("%d %d",pa,pb);
    printf("Press 1 for Addition,2 for Subtraction,3 for Multiplication,4 for Division,5 fo Modulus:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        *pc = *pa + *pb;
        printf("Addition of %d and %d is %d.\n",a,b,c);
        break;
        case 2:
        c = a - b;
        printf("Subtraction of %d and %d is %d.\n",*pa,*pb,*pc);
        break;
        case 3:
        *pc = *pa * *pb;
        printf("Multiplication of %d and %d is %d.\n",a,b,c);
        break;
        case 4:
        *pc = *pa / *pb;
        printf("Division of %d and %d is %d.\n",*pa,b,c);
        break;
        case 5:
        *pc = *pa % *pb;
        printf("Modulus of %d and %d is %d.\n",a,*pb,c);
        default :
        printf("Invalid operation number.\n");
    }
    printf("Press 1 to Continue, 0 to Exit:");
    scanf("%d",&flag);
    system("cls");
    }while(flag);
    printf("Thank you.\n");
}