#include<stdio.h>
struct Date
{
    int date;
    char month[20];
    int year;
};
void display(struct Date d)
{
    printf("%d-%s-%d \n",d.date,d.month,d.year);
}
void main()
{
    struct Date d1,d2;
    printf("Enter your date of birth, in dd,mmmm,yyyy format:");
    scanf("%d %s %d",&d1.date,d1.month,&d1.year);
    printf("Enter Current date, in dd,mmmm,yyyy format:");
    scanf("%d %s %d",&d2.date,d2.month,&d2.year);
    printf("\nCurrent date:");
    display(d2);
    printf("\nYour date of birth:");
    display(d1);
    printf("\nThnak you.\n");
}
