#include<stdio.h>
void main()
{
    struct student
    {
        int rollNo;
        float per;
    };
    struct student s;
    s.rollNo = 101;
    s.per = 97.5;
    printf("Students details are:\n");
    printf("Roll No : %d, Percentage: %.2f%%.\n",s.rollNo,s.per);
    printf("Thank you.\n");
}
