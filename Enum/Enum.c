#include<stdio.h>
enum Langs{CProg,CPP,Python,Java,CSharpNET};
void main()
{
    enum Langs l1;
    l1=CProg;
    printf("The enum object l1 has value CProg.Compiler allocates value as %d.\n",l1);
    l1=Java;
    printf("The enum object l1 has value Java.Compiler allocates value as %d.\n",l1);
    l1=CSharpNET;
    printf("The enum object l1 has value CSharpNET.Compiler allocates value as %d.\n",l1);
    l1=Python;
    printf("The enum object l1 has value Python.Compiler allocates value as %d.\n",l1);
    l1=CPP;
    printf("The enum object l1 has value CPP.Compiler allocates value as %d.\n",l1);
    printf("Thank you.\n");
}
