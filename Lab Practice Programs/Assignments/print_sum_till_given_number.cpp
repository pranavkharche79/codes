#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,i=1;
	cout<<"enter the number to find sum till that number:"<<endl;
	cin>>num;
	
	while(i<=num)
	{
		sum=sum+i;// sum+=i;
		++i;
	}
	cout<<"sum = "<<sum<<endl;
}
