#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A()
		{
			cout<<"inside default of A"<<endl;
		}
		
		A(int a)
		{
			cout<<"inside para. of A"<<endl;
			this->a=a;
		}
		
		void display()
		{
			cout<<"inside display of A"<<endl;
			cout<<" a = "<<a<<endl;
		}
};

class B:public A
{
	int b;
	public:
		B()
		{
			cout<<"inside dafault of B"<<endl;
		}
		
		B(int p ,int q):A(p)
		{
			cout<<"inside para of B"<<endl;
			this->b=q;
		}
		
		void display()
		{
			A::display();
			cout<<"inside display of B"<<endl;
			cout<<" b = "<<b<<endl;
		}
};

int main()
{
	B b;
	B bobj(10,20);
	bobj.display();
	
	cout<<"size of bobj = "<<sizeof(bobj)<<endl;
}
