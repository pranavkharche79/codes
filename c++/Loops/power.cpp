#include<iostream>
using namespace std;
int main(){
	
	
	int exponent;
	int base;
	cout<<"Enter the exponent: "<<endl;
	cin>>exponent;
	cout<<"Enter the base: "<<endl;
	cin>>base;
	
	int pow=1;

	while(exponent != 0){
		pow=pow*base;
		--exponent;
	}
	cout<<"Power of entered number is: "<<pow<<endl;
}
