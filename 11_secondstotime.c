// converting given number of seconds in to format "_days _hours _minutes _seconds"
// good use of modulas operator

#include <stdio.h>

void main()
{
    int seconds, hours, minutes, days;

    printf("enter seconds: ");
    scanf("%d", &seconds);

    days=seconds/(60*60*24);
    seconds%=60*60*24; //removed seconds of full days
    hours= seconds/(60*60);
    seconds%=60*60; //removed seconds from full days and full hours
    minutes= seconds/60;
    seconds%=60; //removed seconds from full days, full hours and full minutes

     printf("\n Time is: %d Days %d hours %d minutes %d seconds", days, hours, minutes, seconds);

}