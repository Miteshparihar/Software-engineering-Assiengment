/*
    WAP to make addition, Subtraction and multiplication of two matrix using
     2-D Array 
*/
#include<stdio.h>
int main()
{
//	Multiplication array===================================================
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
	
//	Addition Array===========================================================
/*int i,j,num[2][2],num1[2][2],result[2][2];
	printf("Enter 4 values for 1st array\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	printf("Enter 4 values for 2nd array\n");
		for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	}
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=num[i][j]+num1[i][j];
		}
	}
	printf("Addition of two array\n");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
*/
// Substraction ============================================================
/*int i,j,num[2][2],num1[2][2],result[2][2];
	printf("Enter 4 values for 1st array\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	printf("Enter 4 values for 2nd array\n");
		for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	}
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=num[i][j]-num1[i][j];
		}
	}
	printf("Substraction of two array\n");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
*/

	return 0;
}
