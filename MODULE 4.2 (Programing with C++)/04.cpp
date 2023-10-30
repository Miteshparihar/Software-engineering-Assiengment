//Write a program of Addition, Subtraction, Division, Multiplication using constructor. 
#include<iostream>
using namespace std;
class add{                  // class 
	int no1,no2,total;
	public:
	add(){
	   	total=no1+no2;    // constructor 
	   	cout<<"Addition is :- "<<total;
	   }
};
class sub{                  // class 
	int no1,no2,total;
	public:
	sub(){
	   	total=no1-no2;    // constructor 
	   	cout<<"Substraction is :- "<<total;
	   }
};
class mul{                  // class 
	int no1,no2,total;
	public:
	mul(){
	   	total=no1*no2;    // constructor 
	   	cout<<"Multiplication is :- "<<total;
	   }
};
class div{                  // class 
	int no1,no2,total;
	public:
	div(){
	   	total=no1/no2;    // constructor 
	   	cout<<"Division is :- "<<total;
	   }
};
class mod{                  // class 
	int no1,no2,total;
    public:
	mod(){
	   	total=no1%no2;   
	   	cout<<"Modulo is :- "<<total;
	  } // constructor 
};
	void get(){
		int no1,no2,total;
		cout<<"Enter no1:- ";
		cin>>no1;
		cout<<"Enter no2:- ";
		cin>>no2;
	}
int main(){
	int choice;
	cout<<"<<<<<<<<<<<<<<< Calculation table <<<<<<<<<<<<<<<\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod";
	cout<<"\nEnter your choice :-";
	cin>>choice;
	switch(choice){
		case 1:
		    get();
			add s1;
			break;
		case 2:
			get();
			sub s2;
			break;
	}
	return 0;
}
