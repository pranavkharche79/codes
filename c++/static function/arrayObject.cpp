#include<iostream>
using namespace std;
class student{
	int roll ;
	int mob;
	int fees;
	 public:
	 void getData(){
	 	cin>>roll;
	 	cout<<"entered rollno."<<roll;
	 	cin>>mob;
	 	cout<<"entered mob."<<mob;
	 }
	
	 };
int main(){
	student s[10];
	for (int i=0;i<10;i++){
	s[i].getData();
	}

	
	
	
	
	 }
