/*
   WAP to find factorial using recursion
*/
#include<stdio.h>
int fact(int a);
int main()
{
	int n;
	printf("Enter number:- ");
	scanf("%d",&n);
	int result=fact(n);
	printf("%d is a factorial of %d",result,n);
	return 0;
}
int fact(int a)
{
	if(a>0)
	{
		return a*fact(a-1);
	}
	else
	{
		return 1;
	}
}
