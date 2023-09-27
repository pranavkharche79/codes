#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,2,3,14,5};
	int max=a[0];
	for(int i=1;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	
	cout<<"max element in an array = "<<max<<endl;
}
