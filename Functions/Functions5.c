#include<stdio.h>
void primeNo();
void main()
{
    int flag;
    do
    {
        primeNo();
        printf("\nPress 1 to Continue, 0 to Exit:");
        scanf("%d",&flag);
    }while(flag);
    printf("Thank you.\n");
}
void primeNo()
{
    int no,cnt;
    printf("Enter a number:");
    scanf("%d",&no);
    for(cnt = 2; cnt <= no/2; ++cnt)
    {
        if(no % cnt == 0)
        {
            printf("Number %d is NOt a Prime Number.\n",no);
            return;
        }
    }
    printf("Number %d is a Prime Number.\n",no);
}