#include<iostream>
using namespace std;
  
int main()
{
	int s;
	cout<<"enter the nubmer of subject "<<endl;
	cin>>s;
	int s1;
	cout<<"enter the size of the character of the name "<<endl;
	cin>>s1;
	
	int * ptr=new int[s];
	
	char* name=new char[s1+1];
	
	float avg;
	
	int i=0,sum=0;
	
	cout<<"enter the marks"<<endl;
	for(i=0;i<s;i++)
	{
		cin>>ptr[i];
		sum = sum +*(ptr+i);
	}
	
	cout<<"enter the num "<<endl;
	cin>>name;
	
	avg = (float)sum/s;
	
	cout<<"name = "<<name<<" and average "<<avg<<endl;
	
	delete[] name;
	delete[] ptr;
}
