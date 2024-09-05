/*
A+  for marks between 90-100 percentage
A   grade for marks between 80-89 percentage
B   grade for marks between 70-79 percentage
C   grade for marks between 60-69 percentage
D   grade for marks less than 60 percentage
*/

// using if else if
#include<stdio.h>

int main()
{
    int mathematics, chemistry, physics, english, computer;
    float grade;

    printf("\nEnter marks for MATHEMATICS: ");
    scanf("%d", &mathematics);
    printf("\nEnter marks for CHEMISTRY: ");
    scanf("%d", &chemistry);
    printf("\nEnter marks for PHYSICS: ");
    scanf("%d", &physics);
    printf("\nEnter marks for ENGLISH: ");
    scanf("%d", &english);
    printf("\nEnter marks for COMPUTER: ");
    scanf("%d", &computer);

    grade= (mathematics+chemistry+physics+english+computer)*100/500;

    if (grade>=90 && grade <=100)
    {
        printf("\n Your grade is: A+");
    }
   else if (grade>=80 && grade <90)
    {
        printf("\n Your grade is: A");
    }
    else if (grade>=70 && grade <80)
    {
        printf("\n Your grade is: B");
    }
    else if (grade>=60 && grade <70)
    {
        printf("\n Your grade is: C");
    }
    else if (grade>=0 && grade <60)
    {
        printf("\n Your grade is: D");
    }
    else
    {
        printf("\n Your grade is invalid.");
    }


}