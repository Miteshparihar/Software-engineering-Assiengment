//Write a program to find the max number from given two numbers using friend function 
#include<iostream>
using namespace std;
class maxi{
	int a,b;
	public:
		void get(){
			cout<<"Enter no of a :- ";
			cin>>a;
			cout<<"Enter no of b :- ";
			cin>>b;
		}
		friend void com(maxi);
};
void com(maxi a1){
	if(a1.a>a1.b){
		cout<<a1.a<<"max number";
	}
	else{
		cout<<a1.b<<"max number";
	}
}
int main()
{
	maxi obj;
	obj.get();
	com(obj);
	return 0;
}
