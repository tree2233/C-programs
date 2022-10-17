#include<stdio.h>
struct student
{
    int rollNo;
    float per;
};
void main()
{
  struct student s={101,96.6};
  printf("Students details are:\n");
  printf("Roll No : %d , Percentage : %.2f%%.\n",s.rollNo,s.per);
  printf("Thank you.\n");
}
