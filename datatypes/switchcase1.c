#include<stdio.h>
void main()
{
    int s1,s2,s3,s4,s5,p1,p2;
    printf("Enter your marks:");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    p1=s1+s2+s3+s4+s5;
    p2=p1/5;
    printf("you have obtained %d percentage.\n",p2);
    switch(p2)
    {
    case 70 ... 100:
        printf("Have passed with First class Distinction.\n");
        break;
    case 60 ... 69:
        printf("Have passed with First class.\n");
        break;
    case 50 ... 59:
        printf("Have passed with Second class.\n");
        break;
    case 40 ... 49:
        printf("Have passed with Pass class.\n");
        break;
    case 0 ... 39:
        printf("Have have failed the examination.\n");
        break;
    }
    printf("Thank you.\n");
}
