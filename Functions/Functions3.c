#include<stdio.h>
#include<stdlib.h>
void circle()
{
    float radius;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    printf("The Area of cirle of radius %g is %g.\n",radius,(3.14*radius*radius));
}
void triangle()
{
    float h,b;
    printf("Enter Height and Base of triangle:");
    scanf("%f %f",&h,&b);
    printf("The area of tri9angle of Height %g and Base %g is %g.\n",h,b,(0.5*h*b));
}
void rectangle();
void square();
void main()
{
    int flag1,flag2;
    do
    {
        printf("Press 1 for area of Circle,2 for area of Triangle,3 for area of Square,4 for area of Rectangle:");
        scanf("%d",&flag1);
        switch(flag1)
        {
            case 1:
                circle();
                break;
            case 2:
                triangle();
                break;
            case 3:
                square();
                break;
            case 4:
                rectangle();
                break;
            default :
                printf("Invalid number.\n");
        }
        printf("Press 1 to Continue, 0 to Exit:");
        scanf("%d",&flag2); 
        system("cls");
        
    }while(flag2);
    printf("Thank you.\n");
}
void square()
{
    float s;
    printf("Enter side of a Square:");
    scanf("%f",&s);
    printf("The area of square of side %g is %g.\n",s,(s*s));
}
void rectangle()
{
    float l,b;
    printf("Enter Length and Breadth of rectangle:");
    scanf("%f %f",&l,&b);
    printf("The area of rectangle of length %g and breadth %g is %g.\n",l,b,(l*b));
}