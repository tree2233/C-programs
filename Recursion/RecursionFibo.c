#include<stdio.h>
int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void main()
{
    int no,i;
    printf("Enter a number:");
    scanf("%d",&no);
    i = no;
    for(no = 0; no < i; ++no)
    {
        printf("\t%d",fibonacci(no));
    }
    printf("\nThank you\n");
}
