#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Enter the Table number to print : ";
	cin>>num;
	int i=1;
	while(i!=11)
	{
		cout<<num<<" * "<<i<<" is "<<num*i<<endl;
		i++;
	}	
	
}
