#include<stdio.h>
struct
{
    int date;
    int month;
    int year;
}dob,ad;
void main()
{
    printf("Enter your date of birth(in date,month year format):");
    scanf("%d %d %d",&dob.date,&dob.month,&dob.year);
    printf("Enter your date of addmission(in date,month year format):");
    scanf("%d %d %d",&ad.date,&ad.month,&ad.year);
    printf("Your date of birth :%d-%d-%d.\n",dob.date,dob.month,dob.year);
    printf("Your date of addmission :%d-%d-%d.\n",ad.date,ad.month,ad.year);
    printf("Thank you.\n");
}
