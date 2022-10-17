#include<stdio.h>
struct Distance
{
    int feet;
    float inches;
} ;
void main()
{
    struct Distance d1;
    struct Distance d2;
    printf("Enter dimensions of a room:\n");
    printf("Length (in feet and inches) :");
    scanf("%d %g",&d1.feet,&d1.inches);
    printf("Width (in feet and inches) :");
    scanf("%d %g",&d2.feet,&d2.inches);
    printf("\nLength and Width of room : %d'%g\" X %d'%g\".\n",d1.feet,d1.inches,d2.feet,d2.inches);
    printf("Thank you.\n");
}
