//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator{
	int no1,no2,total;
	public:
	void add()
	{
		total= no1+no2;
		cout<<"Addition is :- "<<total;
	}
	void sub(){
		total=no1-no2;
		cout<<"Substraction is :- "<<total;
	}
	void mul()
	{
		total=no1*no2;
		cout<<"Multiplicaton is :- "<<total;
	}
	void div(){
		total=no1/no2;
		cout<<"Division is :- "<<total;
	}
	void modulo()
	{
		total=no1%no2;
		cout<<"Modulo is :- "<<total;
	}
	void get(){
		cout<<"Enter no1:- ";
		cin>>no1;
		cout<<"Enter no2:- ";
		cin>>no2;
	}
};
int main()
{
	calculator s1;
	int choice;
	cout<<"<<<<<<<<<<<< Calculation table <<<<<<<<<<<<<<<<<\n1. Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulo ";
	cout<<"\nEnter your choice :- ";
	cin>>choice;
	switch(choice){
		case 1:
	       s1.get();
	       s1.add();
	       break;
	    case 2:
	    	s1.get();
	    	s1.sub();
	    	break;
	    case 3:
	    	s1.get();
	    	s1.mul();
	    	break;
	    case 4:
	    	s1.get();
	    	s1.div();
	    	break;
	    case 5:
	    	s1.get();
	    	s1.modulo();
	    	break;
	}
	return 0;
}
