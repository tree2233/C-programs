#include<stdio.h>
#define SIZE 20
int* greaterNo(int *a,int s)
{
    int i,*max;
    max = a;
    for(i=0; i<s; ++i)
        if(*(a + i) > *max)
            max = a + i;
    return max;
}
void main()
{
    int a[SIZE],i,s,*ptr;
    printf("Enter count of elements:");
    scanf("%d",&s);
    printf("Enter %d elements:\n",s);
    for(i=0; i<s; ++i)
        scanf("%d",&a[i]);
    ptr = greaterNo(&a[0],s);
    printf("Greater value among all %d elements is %d.\n",s,*ptr);
    printf("Thank you.\n");
}