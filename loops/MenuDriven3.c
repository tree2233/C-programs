#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,ans,cnt,flag;
    do
    {
        printf("Enter a number:");
        scanf("%d",&n);
        for(cnt=1;cnt<11;++cnt)
        {
            ans=n*cnt;
            printf("%d X %d =%d\n",n,cnt,ans);
        }
        printf("To Continue press 1,to Exit press 0:");
        scanf("%d",&flag);
        system("cls");
    }while(flag);
    printf("Thank you.\n");
}
