/*
    WAP to print factorial of given number
*/
#include<stdio.h>
int main()
{
	int no=5,i,factorial=1;
	for(i=1;i<=no;i++)
	{
		factorial=factorial*i;
	}
	printf("%d",factorial);
	return 0;
}
