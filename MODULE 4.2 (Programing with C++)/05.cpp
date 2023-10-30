/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */
#include<iostream>
using namespace std;
class cricketer{
	protected:
	int runs;
	float av_run;
	string best_per;
	public:
	void member(){
	    cout<<"Enter total runs:- ";
	    cin>>runs;
	    cout<<"Average runs:- ";
	    cin>>av_run;
	    cout<<"Best performance:-";
	    cin>>best_per;
	}
};
class batsman:public cricketer{
	public:
	void display(){
		av_run=runs/2;
		cout<<"Average runs:-"<<av_run;
	}
};
int main()
{
	batsman s1;
	s1.member();
	s1.display();
	return 0;
}
