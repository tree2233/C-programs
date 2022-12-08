#include<stdio.h>
struct Distance
{
  int feet;
  float inches;
};
void main()
{
  struct Distance d;
  struct Distance *p;
  p = &d;
  printf("Enter your Height (in feet and inches):");
  scanf("%d %f",&d.feet,&d.inches);
  printf("Your height is %d\' %g\".\n",p->feet,p->inches);
  printf("Thank you.\n");
}