#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,cnt,ans,flag;
    do
    {
        printf("Enter a number:");
        scanf("%d",&n);
        for(cnt==n;cnt>=0;--cnt)
        {
            ans=2*cnt;
            printf(" %d ",ans);
        }
        printf("\nTo Continue press 1,to Exit press 0:");
        scanf("%d",&flag);
        system("cls");
    }while(flag);
    printf("Thank you.\n");
}
