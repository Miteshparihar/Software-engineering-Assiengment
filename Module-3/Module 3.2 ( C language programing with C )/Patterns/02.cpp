/*
    A
	B C
	D E F
	G H I J
	K L M N O
*/

#include<stdio.h>
int main()
{
	int i,j;
	char chrr='A';
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",chrr++);
		}
		printf("\n");
	}
	return 0;
}
