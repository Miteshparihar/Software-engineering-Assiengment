/*
Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) 
*/
#include<iostream>
using namespace std;
class person{
	protected:
	int age;
	string name;
};
class student{
	protected:
		float percentage;
};
class teacher:public person,public student{
	int salary;
	public:
	 	void member(){
	 	   cout<<"<<<<<<<<<<<<<<< Write <<<<<<<<<<<<<<<<<<<\n" ;
		   cout<<"Enter name :-";
		   cin>>name;
		   cout<<"\nEnter age:- ";
		   cin>>age;
		   cout<<"\nEnter percentage:-";
		   cin>>percentage;
		   cout<<"\nEnter salary:- ";
		   cin>>salary;
		   cout<<"\n<<<<<<<<<<<<<<< Read <<<<<<<<<<<<<<<<<<";
		   cout<<"\nYour name is :- "<<name;
		   cout<<"\nYour age is :- "<<age;
		   cout<<"\nYour percentage is :- "<<percentage;
		   cout<<"\nYour salary is :- "<<salary;
		}
};
int main(){
	teacher s1;
	s1.member();
	return 0;
}
