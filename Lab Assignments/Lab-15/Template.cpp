#include<iostream>
using namespace std;
template <class T>


T add(T&a ,T&b)
{
	T result = a+b;
	return result;
}

int main()
{
	int i=5,j=10;
	cout<<"Addition using template = "<<add(i,j);
	return 0;
}
