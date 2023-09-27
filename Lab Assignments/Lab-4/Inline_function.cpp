#include<iostream>
using namespace std;

inline int cube(int s)
{
	return s*s*s;
}

int main()
{
	int s,ans;
	cout<<"Enter the number to print it's cube:"<<endl;
	cin>>s;
	ans=cube(s);
	cout<<"cube = "<<ans<<endl;
}
