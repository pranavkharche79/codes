#include<iostream>
using namespace std;

void swap(int &, int &);

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"befor swap"<<a<<" "<<b<<endl;
	swap(a,b);
		cout<<"befor swap"<<a<<" "<<b<<endl;
	
}
void swap(int &p,int &q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	
}

