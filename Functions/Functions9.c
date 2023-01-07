#include<stdio.h>
int min(int no1, int no2)
{
    int m;
    if(no1 < no2)
        m = no1;
    else
        m = no2;
    return m;
}
int max(int n1, int n2)
{
    return n1 > n2 ? n1 : n2;
}
float avg(int n1, int n2)
{
    return (n1 + n2)/2.0;
}
void main()
{
    int var1,var2,op;
    printf("Enter 2 numbers:");
    scanf("%d %d",&var1,&var2);
    op = max(var1,var2);
    printf("Maximaum value among %d and %d is %d.\n",var1,var2,op);
    op = min(var1,var2);
    printf("Minimum value among %d and %d is %d.\n",var1,var2,op);
    printf("Average value of %d and %d is %g.\n",var1,var2,avg(var1,var2));
    printf("Thank you.\n");
}