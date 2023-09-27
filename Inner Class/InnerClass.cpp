#include<iostream>
using namespace std;

class A{
	
	int a;
	public:
		
		//Class B inside the class A
		
	class B{
	
	int b;
	public:
	void show(){ 
		cout<<"In display of class B."<<endl;
		}
	};
	
};


int main(){
	
	
	A::B ob;
	
	ob.show();
	
	return 0;
}









//	B(){
//		cout<<"In default constructor of class B"<<endl;
//	}
//	
//	B(int b){
//		
//		cout<<"Parameterized constructor of class B "<<endl;
//		
//	}

//	public:
//	A(){
//		cout<<"In default constructor of class A. "<<endl;
//		
//	}
//	A(int a){
//		cout<<"Parameterized constructor of class A. "<<endl;
//		this->a=10;
//	
//	}
	
