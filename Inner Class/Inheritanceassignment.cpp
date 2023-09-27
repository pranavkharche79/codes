#include<iostream>
using namespace std;

class A{
	
	int a;
	
	public:
	A(){
		cout<<"In default constructor of class A. "<<endl;
		
	}
	~A(){
		cout<<"Destructor of class A. "<<endl;
	}
	
	
};


class B:public A{
	
	int b;
	public:
		
	B(){
		cout<<"In default constructor of class B"<<endl;
	}
	
	~B(){
		
		cout<<"Destructor of class B "<<endl;
		
	}
//	void show(){ 
//		cout<<"In display of class B."<<endl;
//	}
};

class C: public A{
	int c;
	public:
		
	C(){
		cout<<"In default constructor of class C"<<endl;
	}
	
	~C(){
		
		cout<<"Destructor of class C "<<endl;
		
	}
//	void show(){
//		display();  
//		cout<<"In display of class C."<<endl;
//	}
};
int main(){
	
	
	B bobj;
	C cobj;
	
	return 0;
}
