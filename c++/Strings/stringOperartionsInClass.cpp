#include<iostream>
#include<string.h>
using namespace std;


class string1{
	int len;
	char* ptr;
	public:
		string1();
		string1(char, int);
		string1(char*);
		string1(int);
		
		void show();
};


	string1::string1(){
	int len;
	cout<<"Enter the length: "<<endl;
	cin>>len;
	char ch[len+1];
	this->len=len;
//	len=x;
	ptr=new char[this->len+1];
	cout<<"Enter the string : "<<endl;
	cin>>ch;
	strcpy(ptr,ch);
}


string1::string1(char* ch){
	
	len=strlen(ch);
	ptr=new char[len+1];
	strcpy(ptr,ch);
	
}

string1::string1(int x) {
	len=x;
	ptr=new char[len+1];
	char ch[len+1];
	cout<<"Enter the string of length: "<<len<<endl;
	cin>>ch;
	strcpy(ptr,ch);
	
}



  string1::string1(char ch,int x){
	
	len=x;
	int i;
	ptr=new char[len+1];

	for(i=0; i < len; i++){
		ptr[i]=ch;
	   
	}
	ptr[i]='\0';
}


void string1::show(){
	cout<<"String is:  "<<len<<endl;
	cout<<"String is: "<<ptr<<endl;
}
int main(){
	
	
	cout<<"This object takes the user defined length and string at runtime: "<<endl<<endl;
	string1 s1;
	s1.show();
	
	cout<<"Printing 50 stars(*) in a line: ";
	string1 s2('*',50);
 	s2.show();


	cout<<endl<<endl<<"This object takes string of fix length : ";
	string1 s4(6);
	s4.show();
	
	
	cout<<"This takes the hard code string and prints the length: "<<endl<<endl;
	string1 s3("CDAC");
	s3.show();
	
	

	return 0;
}
