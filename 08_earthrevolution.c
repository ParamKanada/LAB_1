// program to convert period of revolution, i.e. 31558150 into days, hours and minutes.

#include <stdio.h>
void main()

{
    printf(" FUN FACT!\nEARTH takes precisely 31558150 seconds to complete one revolution around the SUN");

    float minutes, hours, days;

    minutes = 31558150/60;
    hours= minutes/60;
    days= hours/24;

    printf ("\n In terms of\n days: %.3f\n hours: %.3f\n minutes: %.3f", days, hours, minutes);
}