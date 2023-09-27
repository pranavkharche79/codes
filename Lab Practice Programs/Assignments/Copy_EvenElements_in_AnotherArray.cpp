#include<iostream>
using namespace std;

int main()
{
	int size,count_Even=0,count_Odd=0;
	cout<<"Enter size of array : ";
	cin>>size;
	int a[size];
	int a1[size];
	int a2[size];
	
	cout<<"Enter the elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0,j=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			a1[count_Even]=a[i];
			count_Even++;
		}
		
		else
		{
			a2[count_Odd]=a[i];
			count_Odd++;	
		}
		
	}
	
	cout<<endl<<"Elements of Even array after copying are : ";
	for(int i=0;i<count_Even;i++)
	{
		cout<<"\t"<<a1[i];
	}
	
	cout<<endl<<"Elements of Odd array after copying are : ";
	for(int i=0;i<count_Odd;i++)
	{
		cout<<"\t"<<a2[i];
	}	
	
}

