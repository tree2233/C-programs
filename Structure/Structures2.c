#include<stdio.h>
void main()
{
    struct student
    {
        int rollNo;
        float per;
    }s;
    printf("Enter students details:\n");
    printf("Roll No : ");
    scanf("%d",&s.rollNo);
    printf("Percentage : ");
    scanf("%f",&s.per);
    printf("\nStudents details are:\n");
    printf("Roll No : %d, Percentage: %.2f%%.\n",s.rollNo,s.per);
    printf("Thank you.\n");
}
