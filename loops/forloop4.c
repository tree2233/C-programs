#include<stdio.h>
void main()
{
    int n,cnt;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Odd numbers from n to 0 are:");
    for(cnt=n;cnt>0;--cnt)
    {
        if(cnt%2)
        printf(" %d ",cnt);
    }
    printf("\nThank you.\n");
}
