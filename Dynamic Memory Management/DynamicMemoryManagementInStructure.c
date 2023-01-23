#include<stdio.h>
#include<stdlib.h>
struct Stud
{
    int rollNo;
    char name[20];
    float per;
};
int main()
{
    struct Stud *ptrS;
    ptrS = (struct Stud*)malloc(sizeof(struct Stud));
    if(ptrS)
    {
        printf("Enter Student Details:\n");
        printf("Roll no :");
        scanf("%d",&ptrS->rollNo);
        printf("Name :");
        scanf(" %[^\n]s",ptrS->name);
        printf("Percentage :");
        scanf("%f",&ptrS->per);
        printf("\nStudent Details are:\n");
        printf("Roll No : %d.\n",ptrS->rollNo);
        printf("Name : %s.\n",ptrS->name);
        printf("Percentage : %.2f%%.\n",ptrS->per);
    }
    else
        printf("Unable to allocate memory dynamically.\n");
    free(ptrS);
    printf("Thank you.\n");
}