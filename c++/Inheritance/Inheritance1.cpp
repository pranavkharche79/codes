#include<iostream>
using namespace std;

class A{
	
	public:
	A(){
		cout<<"In class of A: "<<endl;
		
	}
	void show(){
		cout<<"This is class A " <<endl;
	}
};

class B: public A{
	
	public:
	B(){
		cout<<"In class of B"<<endl;
	}
	void show(){
	
		cout<<"This is class B."<<endl;
			A::show();  
	}
};
int main(){
	
	B bobj;
	bobj.show();
	
	return 0;
}
