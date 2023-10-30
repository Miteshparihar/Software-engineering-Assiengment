/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
#include<iostream>
using namespace std;
int mathematic (int no1,int no2)
{
	return no1+no2;
}
int mathematic (double no1,double no2)
{
	return no1-no2;
}
int mathematic (int no1,double no2)
{
	return no1*no2;
}
int mathematic(double no1,int no2)
{
	return no1/no2;
}
int main()
{
	cout<<"The Addition is:- "<<mathematic(10,20);
	cout<<"\nThe Substraction is :- "<<mathematic(50.0,23.0);
	cout<<"\nThe Multiplication is :- "<<mathematic(10,20.0);
	cout<<"\nThe Division is:-  "<<mathematic (35.0,20);
	return 0;
}




