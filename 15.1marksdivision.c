// grading using switch case statement
// nice logical program for switch case

#include <stdio.h>
int main()
    {
        int grade, mathematics,physics,chemistry,english,computer;
      
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


        grade = (mathematics+chemistry+physics+english+computer)/50;// WHY? because, lets say for one 
                                                                    // subject 96 marks divide by 10 
                                                                    //with int type wil return 9 which means A+ grade
                                                                    // now do it for 5 subjects by applying logic
       
        switch(grade)
        {
            case 9: 
            printf("\nA+ grade");
            break;
            case 8:
            printf("\nA grade");
            break;
            case 7:
            printf("\nB grade");
            break;
            case 6:
            printf("\nC grade");
            break;
            case 5:
            printf("\nD grade");
            break;
            case 4:
            printf("\nD grade");
            break;
            case 3:
            printf("\nD grade");
            break;
            case 2:
            printf("\nD grade");
            break;
            case 1:
            printf("\nD grade");
            break;
            default:
            printf("\n INVALID grade");
        }
        return 0;
    }
