#include<stdio.h>
void main()
{
    int marks[5],i,tot,per;
    printf("Enter marks of 5 sub:");
    scanf("%d %d %d %d %d" ,&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
    tot=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    per=tot/5;
    printf("Total marks obtained:%d\n",tot);
    printf("Percentage Obtained:%d%%\n",per);
    printf("Thank you.\n");
}
