#include<iostream>
#include<string.h>
using namespace std;

class string1
{
	int len;
	char *ptr;
	
	public:
		string1(char *);
		void display();
		string1(string1 &);
		~string1();
};

void string1::display()
{
	cout<<"length = "<<len<<endl;
	cout<<"string = "<<ptr<<endl;
}

string1::string1(char *p)
{
	len=strlen(p);
	ptr=new char[len+1];
	strcpy(ptr,p);
}
string1 :: ~string1()
{
	cout<<"Destructor is called "<<endl;
	if(ptr)
	delete[] ptr;
	ptr=NULL;
}

string1::string1(string1 &s)
{
	len= s.len;
	ptr = new char[len+1];
	strcpy(ptr,s.ptr);
}

int main()
{
	string1 s("prathamesh");
	s.display();
	{
		string1 s1(s);
		s1.display();
		cout<<"After User Defined Destructor "<<endl;
	}
	cout<<endl<<"After Dangling Point Recovery :"<<endl;
	s.display();
	
	cout<<endl;
}

