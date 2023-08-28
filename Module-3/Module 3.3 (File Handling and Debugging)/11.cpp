//WAP to show difference between Structure and Union. 
#include<stdio.h>
#include<string.h>
struct student{
	int rollno;  // 4 byte
	char name[100];// 100 byte
	float per;// 4 byte
};
union student_1 {
	int roollno;
	char name [100];
	float per;
};
int main()
{
	struct student s1= {1,"Mitesh",80};
	union student_1 u1;
	printf("%d %s %f",s1.rollno,s1.name,s1.per);
	u1.roollno=5;
	printf("\n %d",u1.roollno);
	strcpy(u1.name,"Mitesh");
	printf("%s",u1.name);
	u1.per=90;
	printf("%f",u1.per);
	
	printf("\n %d size of structure",sizeof(s1));// total size 
		printf("\n %d size of union",sizeof(u1));// maximum size obtained 
	return 0;
}
