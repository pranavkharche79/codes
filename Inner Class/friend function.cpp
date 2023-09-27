#include<iostream>
using namespace std;

class A{
	
	int local;
	
	public:
	A(){
		cout<<"In default constructor of class A. "<<endl;
		
	}
	A(int a){
		cout<<"Parameterized constructor of class A. "<<endl;
		local = a;
	
	}
	
	friend void display();
};
void display(){
	{
		A obj;
		cout<<"Display in class A " <<endl;
		cout<<"Value of a: "<<obj.local<<endl;
	}
}

class B: public A{
	
	int b;
	public:
		
	B():A(){
		cout<<"In default constructor of class B"<<endl;
	}
	
	B(int b):A(b){
		
		cout<<"Parameterized constructor of class B "<<endl;
		
	}
	friend void display();
	void show(){
	 	A::display();
		cout<<"In display of class B."<<endl;
	}
};
int main(){
	
	B bobj(20);  // Default constructor of Class B is called which automatically calls the default constructor of parent class A
//	display(bobj);	
	
//	B(20);
	bobj.show();
//	
//	A obj;
	
	return 0;
}
