#include<stdio.h>
void main()
{
    float marks[5] = {0.0},*ptr,tot,per;
    int i;
    ptr = marks;
    printf("Enter 5 subjects marks:");
    for(i=0; i<5; ++i)
       scanf("%f",ptr++);
    printf("Marks obtained are:\n");
    for(ptr=marks,tot=0.0,i=0; i<5; ++i)
    {
        printf("%g\t",*ptr);
        tot+=*(ptr++);
    }
    printf("\nTotal marks obtained are:%g.\n",tot);
    per = (tot/500)*100;
    printf("Percentage gained are:%.2f%%.\n",per);
    printf("Thank you.\n");
}