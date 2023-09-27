#include<iostream>
using namespace std;

float division (int a,int b)
{
	if(b==0)
	{
		throw "Attempt to divide by zero! (not allowed)";
	}
	return (a/b);
}

int main()
{
	int i=25;
	int j;
	float k;
	try
	{
		cout<<"enter the value of j"<<endl;
		cin>>j;
		k=division(i,j);
		cout<<"value of K = "<<k<<endl;
	}catch(char const *e)
	{
		cout<<e<<endl;
	}
	cout<<"End of main function:"<<endl;
	
	return 0;
}
