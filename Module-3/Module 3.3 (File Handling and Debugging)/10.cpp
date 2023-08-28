/*
Write a program of structure for five employee that provides the following
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
	int n=5,i;
	printf("Enter 5 employ details ;");
	for(i=0;i<n;i++){
	printf("\nEnter detail %d \n",i+1);
	printf("\nEnter ID :-");
	scanf("\n%d",&s1.no);
	printf("\nEnter name :-");
	scanf("\n%s",&s1.name);
	printf("\nEnter address :-");
	scanf("\n%s",&s1.address);
	printf("\nEnter age :-");
	scanf("\n%d",&s1.age);
}

  for(i=0;i<n;i++){
    printf("\ndetails of student %d\n",i+1);
    printf("%d is ID /n%s is name \n%s is Address\n%d is Age",s1[i].no,s1[i].name,s1[i].address,s1[i].age);   
}
	return 0;
}
