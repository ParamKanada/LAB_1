//program to convert temperature from farenheit to celsius

 #include <stdio.h>

int main()
{
    float farenheit,celsius;
    printf("Please enter the temperature in farenhite to be converted in celcius\n ");
    scanf("%f", &farenheit);
    celsius=(5/9)*(farenheit-32);
    printf("\n Temperature in celsius is= %.2f", celsius,"*C" );
    return 0;
}