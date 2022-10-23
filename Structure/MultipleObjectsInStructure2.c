#include<stdio.h>
struct Laptop
{
    char model[20];
    char proc[20];
    int ram;
    int rom;
    float mrp;
};
void main()
{
    struct Laptop l1,l2;
    printf("Enter details for 1st Laptop:\n");
    printf("Laptop brand and model:");
    gets(l1.model);
    printf("Processor:");
    gets(l1.proc);
    printf("RAM(in GB) :");
    scanf("%d",&l1.ram);
    printf("ROM(in GB) :");
    scanf("%d",&l1.rom);
    printf("MRP (in Rs) :");
    scanf("%f",&l1.mrp);
    fflush(stdin);

    printf("Enter details for 2nd Laptop:\n");
    printf("Laptop brand and model:");
    gets(l2.model);
    printf("Processor:");
    gets(l2.proc);
    printf("RAM(in GB) :");
    scanf("%d",&l2.ram);
    printf("ROM(in GB) :");
    scanf("%d",&l2.rom);
    printf("MRP (in Rs) :");
    scanf("%f",&l2.mrp);
    fflush(stdin);

    printf("\nLaptop details are :\n");
    printf("1st Laptops:\n Brand and Model :%s.\n",l1.model);
    printf("Processor :%s.\nRAM :%dGb.\nROM :%dGB.\nMRP :%.2f/-.\n",l1.proc,l1.ram,l1.rom,l1.mrp);

    printf("2nd Laptops:\n Brand and Model :%s.\n",l2.model);
    printf("Processor :%s.\nRAM :%dGb.\nROM :%dGB.\nMRP :%.2f/-.\n",l2.proc,l2.ram,l2.rom,l2.mrp);

    printf("\nMemory size allocated to object l1 = %d bytes.\n",sizeof(l1));
    printf("Location of object l1 = %x.\n",&l1);

    printf("\nMemory size allocated to object l2 = %d bytes.\n",sizeof(l2));
    printf("Location of object l1 = %x.\n",&l2);

    printf("Thank you.\n");
}
