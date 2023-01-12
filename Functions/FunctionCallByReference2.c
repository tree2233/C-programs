#include<stdio.h>
void multiplyBy10(int no1,int *no2)
{
    printf("\nValues inside the multiplyBy10():\n");
    printf("no1 : %d,*no2 : %d.\n",no1,*no2);
    no1 *= 10;
    *no2 *= 10;
    printf("Values inside the multiplyBy10(),after multiplying by 10:\n");
    printf("no1 : %d, *no2 = %d.\n",no1,*no2);
    return; 
}
void main()
{
    int no1,no2,*ptr;
    ptr =  &no2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&no1,ptr);
    printf("\n Values inside the main():\n");
    printf("no1 : %d,no2 : %d.\n",no1,no2);
    multiplyBy10(no1,ptr);
    printf("\n Values after returning from the inside the multiplyBy10(), inside the main():\n");
    printf("no1 : %d,no2 : %d.\n",no1,no2);
    printf("Thank you.\n");
}
