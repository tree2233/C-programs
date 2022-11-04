#include<stdio.h>
#include<string.h>
struct student
{
    int rollNo;
    char name[20];
    float marks[5];
    float per;
};
void main()
{
    struct student s1,s2;
    float tot;
    int i;
    printf("Size of struct student object = %d bytes.\n",sizeof(struct student));
    s1.rollNo=101;
    strcpy(s1.name,"Sairaj Kakade");
    s1.marks[0]=100;
    s1.marks[1]=100;
    s1.marks[2]=100;
    s1.marks[3]=100;
    s1.marks[4]=100;
    tot=s1.marks[0]+s1.marks[1]+s1.marks[2]+s1.marks[3]+s1.marks[4];
    s1.per=tot/5;
    printf("Enter details of student:\n");
    printf("Roll No:");
    scanf("%d",&s2.rollNo);
    printf("Name:");
    fflush(stdin);
    gets(s2.name);
    printf("Marks in 5 subjects :");
    for(i=0,tot=0.0; i < 5; ++i)
    {
        scanf("%f",&s2.marks[i]);
        tot+=s2.marks[i];
    }
    s2.per=tot/5;
    printf("\nStudent Details are:\n");
    printf("Student 1:\n");
    printf("Roll No:%d.\n Name:%s.\n Percentage:%.2f%%.\n",s1.rollNo,s1.name,s1.per);
    printf("Student 2;\n");
    printf("Roll No:%d.\n Name:%s.\n Percentage:%.2f%%.\n",s2.rollNo,s2.name,s2.per);
    printf("Thank you.\n");
}
