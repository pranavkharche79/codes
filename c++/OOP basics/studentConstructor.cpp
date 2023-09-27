#include<iostream>
using namespace std;
class student{
	int roll;
	 char name[10] ;
	int id;
	public:
		student(){
			roll=10;
			name[10]="sanket";
			id=14;
		}
		student(int r,const char n[10],int i){
		 roll=r;
		 name[10]=n[10];
		 id=i;
		
		}
		void display(){
			cout<<"student roll number is: "<<roll<<" name is:"<<name<<" id is : "<<id;
		}
};
int main(){
	student s1;
	s1();
	s1(12,"bhupesh",123);
	s1.display();
	
}
