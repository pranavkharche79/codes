#include<iostream>
using namespace std;

class student{

	int id;
	public:
		
	string name;
	
	string add;
	
	void nameDeclare(){
		cout<<"Enter your name"<<endl;
		getline(cin,name);
//		cin>>name;
		cout<<"Your name is: "<<name<<endl;
		
	}
	void userID(){
	cout<<"enter your roll no."<<endl;
	cin>>id;
	cout<<"your roll no. is:"<<id<<endl;
}
};

int main(){
	student obj;
	obj.nameDeclare();
	obj.userID();
	return 0;
}
