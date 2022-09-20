#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter a alphabet:\n");
scanf("%c",&c);
if(c<=90)
printf("The alphabet %c is capital.\n",c);
else
printf("The alphabet %c is small.\n",c);
printf("Thank you.\n");
getch();
}