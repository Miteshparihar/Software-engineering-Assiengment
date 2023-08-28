/*
  WAP to print Fibonacci series up to given numbers
*/
#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3=n1+n2,i;
	printf("fibonacci series is : %d %d %d ",n1,n2,n3);
	for (i=0;i<10-3;i++)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d ",n3);
	}
	return 0;
}
