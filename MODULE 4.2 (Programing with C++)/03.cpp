//Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
class cncl{
	int no1,no2,total;
	public:
	inline void mul()
	{
		total=no1*no2;
		cout<<"multiplication is :- "<<total;
	}
	inline void get(){
		cout<<"Enter no1 :- ";
		cin>>no1;
		cout<<"Enter no2 :- ";
		cin>>no2;
	}
};
int main()
{
  cncl s1 ;
  s1.get();
  s1.mul();
}
