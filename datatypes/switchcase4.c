#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    switch(a==0)
    {
       case 1:
          printf("The number %d is a Neutral number.\n",a);
          break;
    }
    switch(a>0)
    {
       case 1:
          printf("The number %d is a Positive number.\n",a);
          break;
    }
    switch(a<0)
    {
       case 1:
          printf("The number %d is a Negative number.\n",a);
          break;
    }
    printf("Thank you.\n");
}
