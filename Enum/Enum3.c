#include<stdio.h>
#include<stdlib.h>
enum weekDay{Monday=1,Tuesday=2,Wednesday=3,Thursday=4,Friday=5,Saturday=6,Sunday=7};
void main()
{
    enum weekDay w;
    int flag;
    do
    {
    printf("Enter a valid Weekday number:");
    scanf("%d",&w);
    switch(w)
    {
    case 1:
        printf("You have selected \"Monday\".\n");
        break;
    case 2:
        printf("You have selected \"Tuesday\".\n");
        break;
    case 3:
        printf("You have selected \"Wednesday\".\n");
        break;
    case 4:
        printf("You have selected \"Thursday\".\n");
        break;
    case 5:
        printf("You have selected \"Friday\".\n");
        break;
    case 6:
        printf("You have selected \"Saturday\".\n");
        break;
    case 7:
        printf("You have selected \"Sunday\".\n");
        break;
    default:
        printf("Invalid weekday number.\n");
    }
    printf("Press 1 to Continue,0 to Exit:");
    scanf(" %d",&flag);
    system("cls");
    }while(flag);
    printf("Thank you.\n");
}
