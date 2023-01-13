#include<stdio.h>
struct Dist
{
    int feet;
    float inches;
};
void showDist(struct Dist d)
{
    printf("%d\' %g\"",d.feet,d.inches);
}
struct Dist sumDist(struct Dist d1,struct Dist d2)
{
    struct Dist d3;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    if(d3.inches >= 12.0)
    {
        d3.feet++;
        d3.inches -= 12.0;
    }
    return d3;
};
void main()
{
    struct Dist dist1,dist2,distSum;
    printf("Enter feet and inches for 1st distance:");
    scanf("%d %g",&dist1.feet,&dist1.inches);
    printf("Enter feet and inches for 2nd distance:");
    scanf("%d %g",&dist2.feet,&dist2.inches);
    printf("\nFirst Distance:");
    showDist(dist1);
    printf("\nSecond Distance:");
    showDist(dist2);
    distSum = sumDist(dist1,dist2);
    printf("\nSum of 2 Distances :");
    showDist(distSum);
    printf("\nThank you.\n");
}