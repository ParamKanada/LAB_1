#include<stdio.h>

int main()

{
	float principle,rate,time,SI;
	printf("Enter principle,rate,time \n");
	scanf("%f %f %f", &principle, &rate, &time );
	SI=principle*rate*time/100;
	printf ("SI= %f", SI);
	return 0;
}