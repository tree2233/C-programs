#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,s1,s2,s3,s4,s5,p,n,option;
    do
    {
    printf("Enter your marks in Physics,Chemistry,Maths,Biology and English:");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    n=s1+s2+s3+s4+s5;
    p=n/5;
    printf("You have obtained %d%%.\n");
    switch(p)
    {
       case 70 ... 100 :
          printf("You have passed with First Class Distinction.\n");
          break;
       case 60 ... 69 :
          printf("You have passed with First Class.\n");
          break;
       case 50 ... 59 :
          printf("You have passed with Second Class.\n");
          break;
       case 40 ... 49 :
          printf("You have passed with Pass Class.\n");
          break;
       default :
          printf("You have Failed the Examination.\n");
          break;
      }
    printf("Press 1 to Continue,0 to Exit:");
    scanf("%d",&option);
    system("cls");
    }while(option);
    printf("Thank you.\n");
}
