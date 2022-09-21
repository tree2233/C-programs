#include<stdio.h>
void main()
{
    float p;
     printf("Enter your percentage:",p);
    scanf("%g",&p);
    if(p>=0 && p<=100)
    {
        if(p>=70)
            printf("you passed with First Class Distinction.\n");
        else if(p>=60 && p<70)
            printf("you passed with First Class.\n");
        else if(p>=50 && p<60)
            printf("you passed with Second Class.\n");
        else if(p>=40 && p<50)
            printf("you passed with Pass Class.\n");
        else
            printf("You have Failed the examination.\n");
    }
    else
            printf("Invalid percentage.\n");
    printf("Thank you.\n");
}
