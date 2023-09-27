#include<iostream>
using namespace std;

class table
{
	
	public:
	void printline()
	{
	int i=0;	
	while(i!=10)
	{

		cout<<"*";
		i++;
	}
	}
};

int main()
{
    table t1;
	t1.printline();
	cout<<"Called 2nd time = ";
	t1.printline();
}
