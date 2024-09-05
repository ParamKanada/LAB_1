// [#include <stdio.h>
//int main()
//{
  //  printf("What is your BASE SALARY? \n");
    //float BS= scanf("%f", &BS);
    //printf("What is your HOUSE RENT ALLOWANCES?\n");
    //float HRA= scanf("%f", &HRA);
    //printf("What are your OTHER ALLOWANCES?\n");
    //float OA= scanf("%f", &OA);

    //float GS= BS+HRA+OA;
    //printf("\n Your gross salary is= Rs. %f", GS);
    //return 0;
//}

//mistake [chat-gpt]
//There are a few issues in your C code. scanf doesn't return the value that was input; instead,
//it returns the number of inputs successfully read.
//You should not assign the result of scanf to your variables like you did with 'BS', 'HRA', and 'OA'.


#include <stdio.h>
int main()
{
    float BS,HRA,OA,GS;         //base salary, house rent allowances, other allowances, gross salary

    printf("What is your BASE SALARY? \n");
    scanf("%f", &BS);
    printf("What is your HOUSE RENT ALLOWANCES?\n");
    scanf("%f", &HRA); 
    printf("What are your OTHER ALLOWANCES?\n");
    scanf("%f", &OA);

    GS= BS+HRA+OA;
    printf("\n Your gross salary is= Rs. %.2f", GS);
    return 0;
}

//changes made:
//1. Removed assigning 'scanf' to the variables and used it correctly
//to store the input values directly into 'BS', 'HRA', and 'OA'.
//2. adjusted the format specifier in 'printf' for the gross salary to display 
//up to 2 decimal places ('%.2f').