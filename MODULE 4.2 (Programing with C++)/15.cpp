//Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;
class swap_num{
	int a,b;
	public:
		void get()
		{
			cout<<"Enter value of a:- ";
			cin>>a;
			cout<<"Enter value of b:- ";
			cin>>b;
		}
		friend void sp(swap_num a1);
};
void sp(swap_num a1){
	a1.a=a1.a+a1.b;
	a1.b=a1.a-a1.b;
	a1.a=a1.a-a1.b;
	cout<<"a is :- "<<a1.a;
	cout<<"b is :- "<<a1.b;
}
int main()
{
	swap_num obj;
	obj.get();
	sp(obj);
	return 0;
}
