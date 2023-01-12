#include<stdio.h>
struct Time
{
    int hrs,mins;
};
typedef struct Time time;
void display(time t)
{
    printf("%d:%d",t.hrs,t.mins);    
}
void sum(time t1,time t2)
{
    time ts;
    ts.hrs = t1.hrs + t2.hrs;
    ts.mins = t1.mins + t2.mins;
    ts.hrs += (ts.mins/60);
    ts.mins %= 60;
    printf("\n Sum of ");
    display(t1);
    printf(" and ");
    display(t2);
    printf(" is ");
    display(ts);
}
void main()
{
    time obj1 = {3,45};
    time obj2 = {2,30};
    sum(obj1,obj2);
    printf("\nEnter a time, in hh mm format:") ;
    scanf("%d %d",&obj1.hrs,&obj1.mins);
    printf("\nEnter another time, in hh mm format:");
    scanf("%d %d",&obj2.hrs,&obj2.mins);
    sum(obj1,obj2);
    printf("\nThank you.\n");
}