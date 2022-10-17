#include<stdio.h>
struct height
{
    int feet;
    float inches;
};
void main()
{
    struct height d = {5,8.5};
    printf("Height of a person:%d feet and %.2f inches.\n",d.feet,d.inches);
    printf("Enter your height(in feet and inches) : ");
    scanf("%d %f",&d.feet,&d.inches);
    printf("Your height is : %d feet and %g inches.\n",d.feet,d.inches);
    printf("Thank you.\n");
}
