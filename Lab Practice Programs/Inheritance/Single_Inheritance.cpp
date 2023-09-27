#include<iostream>
using namespace std;


class A
{
	public:
		A()
		{
			cout<<"inside default of A"<<endl;
		}
		
		void display()
		{
			cout<<"inside display of A"<<endl;
		}
};



class B:public A
{
	public:
		B()
		{
			cout<<"inside default of B"<<endl;
		}
		
		void display()
		{
			A::display();
			cout<<"inside display of B"<<endl;
		}
};


int main()
{
	B bobj;
	bobj.display();
	
	return 0;
}
