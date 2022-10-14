#include<stdio.h>
void main()
{
    char name[20]="Atharva";
    char institute[20]="INTELLISE IT";
    char address[]="369,Sakhar Peth,Solapur";
    printf("Memory Allocated to name is %d.\n",sizeof(name));
    printf("Memory Allocated to institute is %d.\n",sizeof(institute));
    printf("Memory Allocated to address is %d.\n",sizeof(address));
    printf("Thank you.\n");
}
