//to convert given time in format of days, hour, minutes, seconds to total seconds

#include <stdio.h>
void main()
{
    int days, hours, minutes, seconds;  //variable declaration

    printf("Enter time:");
    printf("\n Days: ");
    scanf("%d", &days);
    printf("\n Hours: ");
    scanf("%d", &hours);
    printf("\n Minutes: ");
    scanf("%d", &minutes);
    printf("\n Seconds: ");
    scanf("%d", &seconds);

    int total_sec = (days*24*60*60)+(hours*60*60)+(minutes*60)+seconds; //calculation

    printf("\n total seconds= %d seconds", total_sec);
}