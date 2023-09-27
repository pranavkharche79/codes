#include<iostream>
using namespace std;
#include<string.h>

class String1
{
	int len;
	char *ptr;
	
	public:
	
	String1(char *ch);
	String1(char ch,int len);
	String1(int len);
	String1();
	void show();
	
};

String1 :: String1(char *ch)
{
	int len;
	len=strlen(ch);
	this->len=len;
	ptr=new char[this->len+1];
	strcpy(ptr,ch);
}

String1 :: String1(char ch, int len)
{
	int i;
	this->len= len;
	ptr= new char(this->len+1);
	
	for(i=0;i<this->len;i++)
	{
		ptr[i]= ch;
		cout<<ch;
	}
	ptr[i]='\0';
	
}

String1 :: String1(int i)
{
	this->len=i;
	ptr=new char[len+1];
	cout<<endl<<"enter the name of 5 letters"<<endl;
	cin>>ptr;
}

String1 :: String1()
{
	cout<<"Inside Last function ";
	int len;
	cout<<"Enter the length : ";
	cin>>len;
	
	this->len =len;
	char ch[len+1];
	cout<<"Enter the string : ";
	cin>>ch;
	
	ptr= new char [len+1];
	strcpy(ptr,ch);
	
}

void String1 :: show()
{	
	cout<<endl<<"length of string = "<<len<<endl;
	cout<<"string = "<<ptr<<endl;
}
	
int main()
{
	int n;
	
	String1 *s1 = new String1("iet");
	s1->show();
	
	String1 *s2 = new String1('*',50);
	
	cout<<endl<<"Enter the size of String : ";
	cin>>n;
	String1 *s3 = new String1(n);
	s3->show();
	
	String1 *s4 = new String1;
	s4->show();
	
	//delete[] s1,s2,s3,s4;
}
