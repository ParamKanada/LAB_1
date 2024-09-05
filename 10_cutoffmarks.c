// to calculate cutoff marks of a student through a given formula

#include <stdio.h>
void main()
{
    int M,P,C,E; //maths, physcs, chemistry, entrance exam
    float CM; //cutoff marks

    printf("enter marks in MATHEMATICS\n");
    scanf("%d", &M);
     printf("enter marks in PHYSICS \n");
    scanf("%d", &P);
     printf("enter marks in CHEMISTRY\n");
    scanf("%d", &C);
     printf("enter marks in ENTRANCE EXAM\n");
    scanf("%d", &E);

    CM=((M+P+C)/2)+E;
    printf("\n cutoff marks are= %.1f", CM);
}