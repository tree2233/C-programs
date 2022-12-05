#include<stdio.h>
void main()
{
    int a[5] = {10,20,30,40,50}, i, *ptr;
    ptr = a;
    printf("Elements and their address of the array \"a\" are:\n");
    for(i=0; i<5; ++i)
        printf("&a[%d] = %x, a[%d] = %d.\n",i,&a[i],i,a[i]);
    printf("Elements and their address using pointer \"ptr\" are:\n");
    for(i=0; i<5; ++i)
        printf("(ptr + %d) = %x, *(ptr + %d) = %d.\n",i,(ptr + i),i,*(ptr + i));
    printf("Thank you.\n");
}
