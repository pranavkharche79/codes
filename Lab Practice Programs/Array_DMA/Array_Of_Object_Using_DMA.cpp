#include<iostream>

using namespace std;

class Complex{
	
	int real,img;
	
	public:
		Complex()
		{
			real=img=5;
		}
		
		void put()
		{
			cout<<"Enter Real and Imaginary : ";
			cin>>real>>img;
		}
		void get()
		{
			cout<<"Complex Number is "<<real<<"+"<<img<<"i"<<endl;
		}
};

int main()
{
	int n;
	cout<<"Enter the number of objects you want to create : ";
	cin>>n;
	Complex* ptr= new Complex[n];
	
	for(int i=0;i<n;i++)
	{
		ptr[i].put();
	}
	
	
	for(int i=0;i<n;i++)
	{
		ptr[i].get();
	}
	
	delete[] ptr;
}
