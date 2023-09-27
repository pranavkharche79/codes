#include<iostream>
using namespace std;

class demo
{
	int a;
	int b;
	
	public:
	
	static void print(int i)
	{
		cout<<" i = "<<i<<endl;
	}
	
	static void print(int i,int j)
	{
		cout<<" i = "<<i<<" j = "<<j<<endl;
		//cout<<j;
	}	
};

int main()
{
	demo d;
	static int a=1;
	static int b=2;
	d.print(a);
	d.print(a,b);
}




