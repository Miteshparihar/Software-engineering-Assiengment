#include<stdio.h>
int main()
{
	int i,j, num_1[2][2],num_2[2][2],Multiplication[2][2];
	printf("Enter 4 values of 1st array : - ");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&num_1[i][j]);
		}
	}
	printf("1st array:-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",num_1[i][j]);
		}
			printf("\n");
	}
	printf("Enter 4 values of 2nd array : - ");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&num_2[i][j]);
		}
	}
	printf("2nd array:-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",num_2[i][j]);
		}
			printf("\n");
	}
	printf("Multiplication of  1st array and 2nd array ;\n");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			Multiplication[i][j]=num_1[i][j]*num_2[i][j];
		}
	}
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		  printf("%d\t",Multiplication[i][j]);
		}
		printf("\n");
	}
	return 0;
}
