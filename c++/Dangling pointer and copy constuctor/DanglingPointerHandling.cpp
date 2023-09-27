#include<iostream>
#include<string.h>

using namespace std;

class string1{
	int len;
	char* ptr;
	
	public:
		void stringdisplay();
		string1(char*);
		string1(string1&);
		~string1();
};

//Displaying length and string

void string1::stringdisplay(){
	cout<<"len is : "<<len<<endl;
	cout<<"string is: "<<ptr<<endl;
}

//constructor which takes string by reference
string1::string1(char* sptr){
	
	len = strlen(sptr);
	ptr= new char[len+1];
	strcpy(ptr,sptr);
}

// Destructor declaration

string1::~string1(){
	cout<<"Destrctor is called. "<<endl;
	if(ptr)
	delete[] ptr;
	ptr=NULL;
}

string1::string1(string1& c){  // It will also works if we take c2 same as that of the object name
	len=c.len;
	ptr=new char[len+1];
	strcpy(ptr,c.ptr);
	

}

int main(){
	string1 c2("rahul");
	c2.stringdisplay();
	{
		string1 c3(c2);  //This will calls the user defined copy constructor
		c3.stringdisplay();
		c3.~string1();
	}
	c2.stringdisplay();
	
	
	
	return 0;
}
