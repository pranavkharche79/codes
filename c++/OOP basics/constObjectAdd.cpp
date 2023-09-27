#include<iostream>
using namespace std;

class Complex{
	
	int a;
	public:
		Complex(){
			a=5;
		}
		int add(int a){
			this->a = this->a+a;
			return this->a;
		}
};

int main(){
	Complex c1;
	cout<<"Output: "<<c1.add(10)<<endl;
}
