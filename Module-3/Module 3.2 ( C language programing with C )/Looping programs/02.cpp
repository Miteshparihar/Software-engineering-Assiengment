/*
  2. WAP to take 10 no. Input from user and find out …
      How many Even numbers are there 
	  How many odd numbers are there  
*/
#include<stdio.h>
int main()
{
	int user,i,even=0,odd=0;
    printf("Enter 10 numbers:\n");
	for(i=1;i<=10;i++)
	{
		printf("Enter no. %d = ",i);
	    scanf("%d",&user);
	if(i%2==0){
			even++;
		}
    else{
			odd++;
		}
	}
	
	printf("\nTotal even numbers is %d",even);
	printf("\nTotal odd numbers is %d",odd);

	return 0;
}
