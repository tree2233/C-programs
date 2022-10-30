#include<stdio.h>
struct Dist
{
    int feet;
    float inches;
} ;
void main()
{
    typedef struct Dist d;
    d d1={10,9.5};
    d d2;
    printf("Default initial values :\n");
    printf("Distance 1 = %d\'%g\".\n",d1.feet,d1.inches);
    printf("Distance 2 = %d\'%g\".\n",d2.feet,d2.inches);
    d2=d1;
    printf("\nAfter assigning object d1 to d2 :\n");
    printf("Distance 1 = %d\'%g\".\n",d1.feet,d1.inches);
    printf("Distance 2 = %d\'%g\".\n",d2.feet,d2.inches);
    printf("\nEnter a new distance(in feet and inches) :\n");
    scanf("%d %f",&d1.feet,&d1.inches);
    printf("\nAfter accepting new input values in object d1 :\n");
    printf("Distance 1 = %d\'%g\".\n",d1.feet,d1.inches);
    printf("Distance 2 = %d\'%g\".\n",d2.feet,d2.inches);
    printf("Thank you.\n");
}
