/*
   WAP to find number is even or odd using ternary operator
*/
#include<stdio.h>
int main()
{
	int user;
	printf("Enter number and check even or odd :- ");
	scanf("%d",&user);
	if(user%2==0)
	{
		printf("This is a even number");
	}
	else
	{
		printf("This is a odd number ");
	}
	return 0;
}
