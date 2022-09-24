#include<stdio.h>
void main()
{
    int n,ans,cnt;
    printf("Enter number of Even numbers to print:");
    scanf("%d",&n);
    cnt=0;
    while(cnt<n)
    {
        ans=2*cnt;
        printf(" %d \n",ans);
        ++cnt;
    }
    printf("Thank you.\n");
}
