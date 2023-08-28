/*
Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) 
*/
#include<stdio.h>
int main()
{
	int a,b,Total;
	a=100;
	b=50;
	Total=a+b;
	printf("Addition = %d",Total);
	Total=a-b;
	printf("\nSubstraction = %d",Total);
	Total=a*b;
	printf("\nMultiplication = %d",Total);
	Total=a/b;
	printf("\nDivision = %d",Total);
	Total=a%b;
	printf("\nModulo = %d",Total);
	return 0;
}
