#include<stdio.h>

int main()
{
    float m1,m2,m3,m4, m5;
    printf("Enter the marks of 5 subjects \n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4 ,&m5);
    float percentage= (m1+m2+m3+m4+m5)*100/500;
    printf("The percentage is= %f", percentage);
   return 0; 
}
