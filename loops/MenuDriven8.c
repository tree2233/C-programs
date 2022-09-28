#include<stdio.h>
#include<stdlib.h>
void main()
{
    int cnt,n,flag;
    do
    {
        printf("Enter a number:");
        scanf("%d",&n);
        printf("Even numbers from n to 0 are:");
        for(cnt=n;cnt>0;--cnt)
        {
            if(cnt%2==0)
                printf(" %d ",cnt);
        }
        printf("\nTo Continue press 1,0 for Exit:");
        scanf("%d",&flag);
        system("cls");
    }while(flag);
    printf("\nThank you.\n");
}
