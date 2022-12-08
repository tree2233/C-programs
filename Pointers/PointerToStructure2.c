#include<stdio.h>
struct Distance
{
  int feet;
  float inches;
};
void main()
{
  struct Distance len,bre;
  struct Distance *ptr;
  ptr = &len;
  printf("Enter length of room (in feet and inches):");
  scanf("%d %f",&ptr->feet,&ptr->inches);
  ptr = &bre;
  printf("Enter breadth of room (in feet and inches):");
  scanf("%d %f",&(*ptr).feet,&(*ptr).inches);
  ptr = &len;
  printf("Room length is %d\' and %g\".\n",(*ptr).feet,(*ptr).inches);
  ptr = &bre;
  printf("Room breadth is %d\' and %g\".\n",(*ptr).feet,(*ptr).inches);
  printf("Thank you.\n");
}