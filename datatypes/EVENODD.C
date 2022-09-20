#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a number:\n");
scanf("%d",a);
if(a%=0)
printf("The number %d is EVEN number.\n",a);
else
printf("The numver %d is ODD number.\n",a);
getch();
}