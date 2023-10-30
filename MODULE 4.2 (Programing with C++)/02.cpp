//Define a class to represent a bank account.
#include<iostream>
using namespace std;
class member{
	 string name;
	 int account_number;
	 string account_type;
	 float balance_amount;
	 public:
	 void assign()
	 {
	 	cout<<"Name of the depositer :- ";
	 	cin>>name;
	 	cout<<"Account number :- ";
	 	cin>>account_number;
	 	cout<<"Type of Account  :- ";
	 	cin>>account_type;
	 	cout<<"Balance amount in the account   :- ";
	 	cin>>balance_amount;
	 }
	 void deposit()
	 {
	 	int dp_amt;
	 	cout<<"Enter deposit amount:-";
	 	cin>>dp_amt;
	 	balance_amount=dp_amt+balance_amount;
	 }
	 void withdraw()
	 {
	 	 int wi_dr,after_wit_total;
	 	 cout<<"Enter amount to withdraw:- ";
	 	 cin>>wi_dr;
	 	 if(wi_dr>balance_amount){
	 	 	cout<<"Invalid sufficiant balance";
		  }
		  else{
		  	balance_amount=balance_amount-wi_dr;
		  }
	 	 
	 }
	 void display()
	 {
	 	cout<<"\nDepositer name is :- "<<name;
	 	cout<<"\nTotal amount is :-"<<balance_amount;
	 }
};
int main()
{
	member s;
	s.assign();
	s.deposit();
	s.withdraw();
	s.display();
	return 0;
}
