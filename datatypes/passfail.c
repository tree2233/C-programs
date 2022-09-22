#include<stdio.h>
void main()
{
    float f;
    printf("Enter your percentage:");
    scanf("%g",&f);
    if(f>=40)
        printf("You have PASSED the examination with %g%%.\n",f);
    else
        printf("You have FAILED the examination with %g%%.\n",f);
    printf("Thank you.\n");
}
