#include<stdio.h>
void main()
{
    int name[20];
    int i;
    name[0]='A';
    name[1]='T';
    name[2]='H';
    name[3]='A';
    name[4]='R';
    name[5]='V';
    name[6]='A';
    name[7]='\0';
    for(i=0 ; name[i] != '\0'; ++i)
        printf("%c",name[i]);
    printf("\nThank you.\n");
}
