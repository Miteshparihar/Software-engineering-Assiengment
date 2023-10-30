/*
  Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance) 
*/
#include<iostream>
using namespace std;
class student{
	protected:
	  int roll_no;
	public:
		void roll(){
		   cout<<"Enter your roll_no :-";
		   cin>>roll_no;
		}
};
class test:public student{
	protected:
	int eng_marks,maths_marks,total;
	public:
		void marks()
		{
			cout<<"Enter english marks:- ";
			cin>>eng_marks;
			cout<<"Enter maths marks:- ";
			cin>>maths_marks;
		}
};
class result:public test{
	public:
		void rslt(){
			cout<<"Roll_no is :- "<<roll_no;
			total=eng_marks+maths_marks;
			cout<<"\nTotal marks is :- "<<total;
		}
};
int main()
{
	result s1;
	s1.roll();
	s1.marks();
	s1.rslt();
	return 0;
}
