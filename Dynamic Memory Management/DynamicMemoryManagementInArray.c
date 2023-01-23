#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,no,i,sum;
    printf("Enter number of elements you want to input:");
    scanf("%d",&no);
    ptr = (int*)calloc(no,sizeof(int));
    if(ptr)
    {
        printf("Enter %d elements:",no);
        for(i = 0,sum = 0; i < no; ++i)
        {
            scanf("%d",(ptr + i));
            sum += *(ptr + i);
        }
        printf("\nEntered %d elements are:\n",no);
        for(i = 0; i < no; ++i)
            printf(" %d ",*(ptr + i));
        printf("\nSum of all %d elements is %d.\n",no,sum);
    }
    else
        printf("Unable to allocate memory dynamically.\n");
    free(ptr);
    printf("Thank you.\n");
}