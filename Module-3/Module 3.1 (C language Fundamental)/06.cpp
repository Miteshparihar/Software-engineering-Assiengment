/*
  WAP to convert years into days and days into years
*/
#include<Stdio.h>
int main()
{
    float year,days;
	printf("Enter Years :- ");
	scanf("%f",&year);
	days=365*year;
	printf("%f days in %f year",days,year);
	printf("\nEnter days :- ");
	scanf("%f",&days);
	year=days/365;
	printf("%f days in %f year",days,year);
	return 0;
}
