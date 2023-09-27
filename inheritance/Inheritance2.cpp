#include<iostream>
using namespace std;

class A{
	
	int a;
	
	public:
	A(){
		cout<<"In default constructor of class A. "<<endl;
		
	}
	A(int a){
		cout<<"Parameterized constructor of class A. "<<endl;
		this->a=10;
	
	}
	void display(){
		cout<<"Display in class A " <<endl;
		cout<<"Value of a: "<<a<<endl;
	}
};

class B: public A{
	
	int b;
	public:
		
	B():A(){
		cout<<"In default constructor of class B"<<endl;
	}
	
	B(int b):A(10){
		
		cout<<"Parameterized constructor of class B "<<endl;
		
	}
	void show(){
		display();  
		cout<<"In display of class B."<<endl;
	}
};
int main(){
	
	B bobj;  // Default constructor of Class B is called which automatically calls the default constructor of parent class A

	B(20);
	bobj.show();
	return 0;
}
