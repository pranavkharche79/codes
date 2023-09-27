#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A()
		{
			cout<<"Inside parameterless constructor of class A"<<endl;
			a=54;
		}
		A(int a)
		{
			cout<<"Inside parameterized constructor of class A"<<endl;
			this->a=a;
		}
};


class B:public A
{
	int b;
	public:
		B()
		{
			cout<<"Inside parameterless constructor of class B"<<endl;
			b=55;
		}
		B(int b)
		{
			cout<<"Inside parameterized constructor of class B"<<endl;
			this->b=b;
		}
		
};


class C:public A
{
	int c;
	public:
		C()
		{
			cout<<"Inside parameterless constructor of class C"<<endl;
			c=15;
		}
		C(int c)
		{
			cout<<"Inside parameterized constructor of class C"<<endl;
			this->c=c;
		}
		
};



class D:public B,public C
{
	int d;
	public:
		D()
		{
			cout<<"Inside parameterless constructor of class D"<<endl;
			d=10;
		}
		D(int d)
		{
			cout<<"Inside parameterized constructor of class D"<<endl;
			this->d=d;
		}
		
};



int main()
{
	D d1;
	
	return 0;
}


