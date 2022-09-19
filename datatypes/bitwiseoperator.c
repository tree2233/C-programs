#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    printf("\nBitwise AND(&):\n");
    printf("%d & %d=%d",a,b,(a&b));
    printf("\nBitwise OR(|):\n");
    printf("%d | %d=%d\n",a,b,(a|b));
    printf("Bitwise ExOR(^):\n");
    printf("%d ^ %d=%d\n",a,b,(a^b));
    printf("Bitwise left shift(<<):\n");
    printf("%d<<3=%d\n",a,(a<<3));
    printf("%d<<4=%d\n",b,(b<<4));
    printf("Bitwise right shift(>>):\n");
    printf("%d>>2=%d\n",a,(a>>2));
    printf("%d>>4=%d\n",b,(b>>4));
    printf("Bitwise NOT(~):\n");
    printf("~%d=%d\n",a,(~a));
    printf("~%d=%d\n",b,(~b));
}
