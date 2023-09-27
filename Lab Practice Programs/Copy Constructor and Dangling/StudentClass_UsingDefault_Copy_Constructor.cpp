#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	int roll;
	char *ptr;
	float fee;
	
	public:	
		Student(int,char*,float);
		void show();
};

Student :: Student(int roll,char* name,float fee)
{
	this->roll=roll;
	int len= strlen(name);
	ptr= new char[len+1];
	strcpy(ptr,name);
	this->fee=fee;
}

void Student :: show()
{
	cout<<ptr<<" with roll no "<< roll << "have to pay "<<fee<<endl<<endl;
}

int main()
{
	Student s(1,"Tejas",20000.00);
	s.show();
	
	cout<<endl<<endl<<"After Copying the date using compiler default Copy Constructor : "<<endl;
	Student s1(s);
	s1.show();
	
	Student s2(60,"Prathamesh",20000.00);
	s2.show();
	
	cout<<endl<<endl<<"After Copying the date using compiler default Copy Constructor : "<<endl;
	Student s3(s2);
	s3.show();
	
	
}
