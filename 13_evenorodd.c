// to check whether a numer is even or odd
// modulus returns the remainder in division 
#include <stdio.h>
void main()
{
    int a;
    printf ("enter a number\n ");
    scanf("%d", &a);
    if (a%2 == 0)
    printf("even");
    else
    printf("odd");
}