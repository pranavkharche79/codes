#include<iostream>
using namespace std;
int main(){
	
	int amount,rate,period;
	
	cout<<"Enter the principal amount: "<<endl;
	cin>>amount;
	cout<<"Enter the rate of interest: "<<endl;
	cin>>rate;
	cout<<"Enter the time period: "<<endl;
	cin>>period;
	
	int result = amount*(1+(rate/period));
	
	int finalResult =result*rate ;
	cout<<"compound interest = "<<finalResult-amount;
	 return 0;
}
