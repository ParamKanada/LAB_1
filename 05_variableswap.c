// program to swap two given variables using third variable

#include <stdio.h>
void main()
{
    int a1,a2,a3;

    printf("Enter first number a1= \n");
    scanf("%d", &a1);
    printf("enter second number a2= \n");
    scanf("%d", &a2);
    a3=a1;
    a1=a2;
    a2=a3;

    printf("The swapped variables are\n first number= %d\n second number= %d",a1, a2);
}