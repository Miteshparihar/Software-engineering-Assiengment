/*Write a program of structure employee that provides the following
information -print and display empno, empname, address and age */
#include<stdio.h>
struct employ{
	  int  no;
	  char name[100];
	  char address[100];
	  int  age;
};
int main()
{
	struct employ s1;
	printf("Enter ID :-");
	scanf("\n%d",&s1.no);
	printf("\nEnter name :-");
	scanf("\n%s",&s1.name);
	printf("\nEnter address :-");
	scanf("\n%s",&s1.address);
	printf("\nEnter age :-");
	scanf("\n%d",&s1.age);
	printf("\nYour ID is %d",s1.no);
	printf("\nYour name is %s",s1.name);
	printf("\nyour address is  %s",s1.address);
	printf("\nyour age is %d",s1.age);
	return 0;
}
