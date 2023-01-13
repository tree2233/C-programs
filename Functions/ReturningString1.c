#include<stdio.h>
int* greaterNo(int *p1,int *p2)
{
    if (*p1 > *p2)
        return p1;
    else
        return p2; 
}
void main()
{
    int v1,v2,*max;
    printf("Enter 2 numbers:");
    scanf("%d %d",&v1,&v2);
    max = greaterNo(&v1,&v2);
    printf("\nGreater value among %d and %d is %d.\n",v1,v2,*max);
    printf("Thnak you.\n");
}