#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	int a[size];
	int a1[size];
	
	cout<<"Enter the elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<size;i++)
	{
		a1[i]= a[i];
	}
	
	cout<<"Elements of Another array after copying are : ";
	for(int i=0;i<size;i++)
	{
		cout<<"\t"<<a1[i];
	}
	
	
	
	
}
