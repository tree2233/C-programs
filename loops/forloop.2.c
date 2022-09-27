#include<stdio.h>
void main()
{
    int n,ans,cnt;
    printf("Enter a number:");
    scanf("%d",&n);
    for(cnt=1;cnt<11;++cnt)
    {
        ans=n*cnt;
        printf("%d X %d =%d\n",n,cnt,ans);
    }
    printf("Thank you.\n");
}
