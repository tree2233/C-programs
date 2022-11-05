#include<stdio.h>
#include<string.h>
struct Vehicle
{
    char name[20];
    int cc;
    float price;
};
void main()
{
    struct Vehicle cars[3];
    int i;
    printf("Size of struct Vehicle cars[3] array = %d bytes.\n",sizeof(cars));
    printf("Enter 3 cars details:\n");
    for(i=0;i<3;++i)
    {
        printf("Enter details of Car %d :\n",(i+1));
        printf("Car Name: ");
        fflush(stdin);
        gets(cars[i].name);
        fflush(stdin);
        printf("Car Engine Cubic Capacity (CC) :");
        scanf("%d", &cars[i].cc);
        printf("Car Price (in Lakh) Rs :");
        scanf("%f", &cars[i].price);
    }
    for(i=0;i<3;++i)
    {
        printf("Details of car %d:\n",(i+1));
        printf("Name :%s ,Engine cc :%d ,Price(in Lakh) Rs :%.2f/-\n",cars[i].name,cars[i].cc,cars[i].price);
    }
    printf("Thank you.\n");
}
