#include<stdio.h>
#include<stdlib.h>
void main()
{
    int tot,per,i,marks[5],flag;
    do
    {
        printf("Enter marks of 5 subjects:");
        for(i=0,tot=0;i<5;++i)
        {
          scanf("%d",&marks[i]);
          tot+=marks[i];
        }
        tot=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
        per=tot/5;
        printf("Total marks obtained:%d\n",tot);
        printf("Percentage Obtained:%d%%\n",per);
        printf("\nTo Continue Press 1,0 to Exit:");
        scanf("%d",&flag);
        system("cls");
    }while(flag);
     printf("Thank you.\n");
}
