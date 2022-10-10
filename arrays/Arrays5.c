#include<stdio.h>
void main()
{
    int arr1[5]={10,24,-42,0,60},arr2[5],i;
    printf("Elements in array 1 are:\n");
    for(i=0;i<5;++i)
        printf("arr1[%d]=%d.\n",i,arr1[i]);
    for(i=0;i<5;++i)
        arr2[i]=arr1[i];
    printf("\nCopy of Elements of array 1 in array 2 are:\n");
    printf("Elements in array 2 are:\n");
    for(i=0;i<5;++i)
        printf("arr2[%d]=%d.\n",i,arr2[i]);
    arr2[0]=10;
    arr2[1]=20;
    arr2[2]=30;
    arr2[3]=40;
    arr2[4]=50;
    printf("\nNew Elements in array 2 are:\n");
    for(i=0;i<5;++i)
        printf("arr2[%d]=%d.\n",i,arr2[i]);
    printf("\nThank you.\n");
}
