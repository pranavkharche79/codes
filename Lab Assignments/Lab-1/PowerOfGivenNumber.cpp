#include<iostream>
using namespace std;

int main()
{
	int exp,num,power=1;

	num=2;
	exp=3;
	
	for(int i=0;i<exp;i++)
	{
		 power = num * power; 
	}
	
	cout<<"Power of Given Number is "<<power;
}
