/*
PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL
CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.
*/

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c>=65 && c<=90)
    printf("\nCAPITAL LETTER");

    else if(c>=97 && c<=122)
    printf("\nSMALL LETTER");

    else if(c>=48 && c<=57)
    printf("\nDIGIT");

    else
    printf("\nSPECIAL SYMBOL");
    
    return 0;
}