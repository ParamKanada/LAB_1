// to calculate area of triangle

#include <stdio.h>

void main()
{
    float a ,b ,area;

    printf("enter altitude and base of triangle \n");
    scanf("%f %f",&a ,&b);
    
    area = 0.5*a*b;

    printf("area of triangle is= %.2f", area);

}