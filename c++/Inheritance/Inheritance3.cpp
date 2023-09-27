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
		this->a=a;
	
	}
	void show(){
		cout<<"Display in class A " <<endl;
		cout<<"Value of a: "<<this->a<<endl;
	}
};

class B: public A{
	
	int b;
	public:
		
	B(){
		cout<<"In default constructor of class B"<<endl;
	}
	
	B(int b):A(10){
		
		cout<<"Parameterized constructor of class B "<<endl;
		this->b=b;
	}
	
};
int main(){
	
	

	B  bobj(20);   //Parameterized constructor
	bobj.show();   // Class B don't have show function. So class B search show() function in it's parent class.
	return 0;
}
