#include<stdio.h>
void print();
void main()
{
    printf("The main() function started.\n");
    print();
    printf("Hello from the main() function.\n");
    print();
    printf("Exiting from main() function.\n");
}
void print()
{
    printf("\nHello from my function.\n");
    return;
}