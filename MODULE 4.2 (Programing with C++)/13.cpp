/*
Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
? Rectangle: Area * breadth
? Triangle: ½ *Area* breadth
? Circle: Pi * Area *Area
*/
#include <iostream>
using namespace std;
int area(int area,int bredth){
     return area*bredth;
};
int area(int area,double bredth){
	return 0.5*area*bredth;
}
int area (double area,double are)
{
	return 3.14*area*area ;
}
int main()
{
	cout<<"Area of rectangle is :- "<<area(10,20);
	cout<<"\nArea of triangle is :- "<<area(50,23.0);
	cout<<"\nArea of circle is :- "<<area(10.0,20.0);
	return 0;
}
