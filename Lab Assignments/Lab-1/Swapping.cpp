#include<iostream>
using namespace std;

int main()
{
	int a=10,b=20;
	int temp;
	
	cout<<"Before Swapping Number are : "<<a<<b<<endl;
	temp= a;
	a=b;
	b=temp;
	
	cout<<"After Swapping Number are : "<<a<<b;
}
