#include<iostream>
using namespace std;

class Complex{
	public:
		void show()const
		{
			cout<<"bye"<<endl;
			
		}
		void show()
		{
			cout<<"hello"<<endl;
		}
};

int main(){
	Complex c1;  // Non constant object gives higher priority to non constant function than constant function
	c1.show();
		Complex const c2;
		c2.show();  // constant object doesn't call the non constant function
	
}
