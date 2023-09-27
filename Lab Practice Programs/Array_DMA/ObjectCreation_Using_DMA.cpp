#include<iostream>

using namespace std;

class Complex{
	
	int real,img;
	
	public:
		Complex()
		{
			real=img=5;
		}
		
		Complex(int r,int img)
		{
			real=r;
			this->img=img;
		}
		
		void display()
		{
			cout<<"Complex Number is "<<real<<"+"<<img<<"i"<<endl;
		}
};

int main()
{
	Complex* ptr= new Complex();
	ptr->display();
	
	Complex* ptr1= new Complex(10,20);
	ptr1->display();
	
}
