#include<stdio.h>
struct student
{
    int rollNo;
    float per;
};
void main()
{
    struct student stud;
    printf("Size of \"struct student\" data type is %d bytes.\n",sizeof(struct student));
    printf("Size of memory allocated to object \"stud\" of \"struct student\" data type is %d bytes.\n",sizeof(stud));
    printf("Thank you.\n");
}
