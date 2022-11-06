#include<stdio.h>
#include<string.h>
struct Date
{
    int date;
    char month[10];
    int year;
};
struct Stud
{
    int rollNo;
    char name[20];
    struct Date dob;
    char email[30];
};
void main()
{
    struct Stud s1={101,"Atharva Kanaki",{11,"January",2005},"atharvak053@gmail.com"};
    struct Stud s2;

    printf("Size of memory allocated to struct Date =%d bytes.\n",sizeof(struct Date));
    printf("Size of memory allocated to struct Stud =%d bytes.\n",sizeof(struct Stud));

    s2.rollNo=102;
    strcpy(s2.name,"Sairaj kakade");
    s2.dob.date=24;
    strcpy(s2.dob.month,"September");
    s2.dob.year=2004;
    strcpy(s2.email,"sairaj@gmail.com");

    printf("\nStudent details are:\n");
    printf("Student 1:\n");
    printf("Roll No: %d\n Name: %s.\n DOB: %d-%s-%d.\n Email: %s.\n",s1.rollNo,s1.name,s1.dob.date,s1.dob.month,s1.dob.year,s1.email);
    printf("\nStudent 2:\n");
    printf("Roll No: %d\n Name: %s.\n DOB: %d-%s-%d.\n Email: %s.\n",s2.rollNo,s2.name,s2.dob.date,s2.dob.month,s2.dob.year,s2.email);
    printf("Thank you.\n");
}
