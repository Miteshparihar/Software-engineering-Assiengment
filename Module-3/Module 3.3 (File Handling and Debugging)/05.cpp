/*
    WAP to take two Array input from user and sort them in ascending or
    descending order as per user’s choice 
*/
#include<stdio.h>
int main()
{
	int number[100],n,i,j,temp;
	printf("how many elements you want to enter?");
	scanf("%d",&n);
	printf("enter elements:- "); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	printf("before assending order array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",number[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]>number[j]) // Accending order and change condition number[i]<number[j] so this is decending
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
		}	
		printf("\nafter assending order array is:");
		for(i=0;i<n;i++)
	{
		printf("%d",number[i]);
	}

		
		
		
	return 0;
}
