#include<iostream>
using namespace std;
class A
{

	public:
		A()
		{
			cout<<"Inside constructor of class A"<<endl;
		}
		
};

class B : public A
{
	public:
		B()
		{
			cout<<"Inside constructor of B"<<endl;
		}
		
};

class C: public A
{
	
	public:
		C()
		{
			cout<<"Inside constructor of C"<<endl;
		}
	
		
};
int main()
{
	B b1;
	C c1;
	
}
