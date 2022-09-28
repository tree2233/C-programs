#include<stdio.h>
void main()
{
    int cnt;
    printf("Numbers divisible by 7 from 1 to 100 are:\n");
    for(cnt=1;cnt<=200;++cnt)
    {
      if(cnt%7==0)
       printf(" %d ",cnt);
    }
    printf("\nThank you.\n");
}
