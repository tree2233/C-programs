#include<stdio.h>
void main()
{
    int n,ans,cnt;
    printf("Enter number of odd numbers to print:");
    scanf("%d",&n);
    cnt=0;
    while(cnt<n)
    {
        ans=2*cnt+1;
        printf(" %d \n",ans);
        ++cnt;
    }
    printf("Thank you.\n");
}
