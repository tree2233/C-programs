#include<stdio.h>
void main()
{
    int i,ans,cnt;
    printf("Enter a number:");
    scanf("%d",&i);
    cnt=1;
    while(cnt<11)
    {
        ans=i*cnt;
        printf("%d x %d = %d\n ",i,cnt,ans);
        ++cnt;
    }
    printf("Thank you.\n");
}
