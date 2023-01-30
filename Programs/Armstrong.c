#include<stdio.h>
int main()
{
    int no,i,temp,sum = 0;
    printf("Enter a number:");
    scanf("%d",&no);
    for(temp = no; no != 0;no = no / 10)
    {
        i = no % 10;
        sum =sum + (i*i*i);
    }
    if(sum == temp)
        printf("The number %d is a ARMSTRONG number.\n",temp);
    if(sum != temp)
        printf("The number %d is NOT a ARMSTRONG number.\n",temp);
}