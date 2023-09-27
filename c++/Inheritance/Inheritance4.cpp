#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(){
			cout<<"Default constructor of class A: "<<endl;
		}
		A(int);
		void show();
	
	
};

A::A(int p){
	cout<<p<<endl;
}
void A::show(){
	cout<<"In show function of class A: "<<endl;
}

class B: public A{
	int b;
	public:
		B(){
			cout<<"In default constructor of Class B: "<<endl;
		}
		B(int,int);
		void show();
		
};
B::B:A(int p);
 B::B(int p,int q){
 	
// 	a=p;   ---> We can't access the private member of the parent class through it's child class. So to solve this problem we use base class initilization list
 	
	 b=q;
 }
 void B::show(){
 	cout<<"In show function of class B: "<<endl;
 	cout<<"Value of b: "<<b<<endl;
 	
 } 




int main(){
	
	B bobj(10,20);
	
	bobj.show();
	
	return 0;
}
