#include<iostream>
#include<string.h>
using namespace std;

class string1{
	int len;
	char* ptr;
	
	public:
		void stringdisplay();
		string1(char* );
		~string1();
};

void string1::stringdisplay(){
	cout<<"length is: "<<len<<endl;
	cout<<"string is: "<<ptr<<endl;
}

//parameterized constructor used to copy the len and string

string1::string1(char* sptr){
	
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}

//Destructor 
string1::~string1(){
	cout<<"Destructor is called. "<<endl;
	if(ptr)
	delete[] ptr;
	ptr=NULL;
}

int main(){
	
	string1 c2("rahul");
	c2.stringdisplay();
{
	string1 c3(c2);  // This will call the default copy constructor
	c3.stringdisplay();
	c3.~string1();
}
c2.stringdisplay();
	
	
	return 0;
}
