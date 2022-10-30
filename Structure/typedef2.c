#include<stdio.h>
struct Vehicle
{
    char name[20];
    int cc;
    float price;
};
void main()
{
    struct Vehicle c1={"Audi A6",2000,85.0};
    typedef struct Vehicle Car;
    typedef struct Vehicle Bike;
    Car c2={"Lamborghini",3000,250.5};
    Bike b1;
    printf("Enter your bike details:\n");
    printf("Bike company and model:");
    gets(b1.name);
    printf("Engine Cubic Capacity:");
    scanf("%d",&b1.cc);
    printf("Price(in Lakhs):");
    scanf("%f",&b1.price);
    printf("\n My car collection:\n");
    printf("First Car:\n");
    printf("Name & Model : %s.\n", c1.name);
    printf("Engine : %dCC\nPrice (in Lakhs) Rs : %.2f/-\n", c1.cc, c1.price);
    printf("\nSecond Car:\n");
    printf("Name & Model : %s.\n", c2.name);
    printf("Engine : %dCC\nPrice (in Lakhs) Rs : %.2f/-\n", c2.cc, c2.price);
    printf("\nMy Bike:\n");
    printf("Name & Model : %s.\n", b1.name);
    printf("Engine : %dCC\nPrice (in Lakhs) Rs : %.2f/-\n", b1.cc, b1.price);
    printf("Thank you.\n");
}
