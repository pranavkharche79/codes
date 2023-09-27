#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string.h>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
 
using namespace std;
 
 class Employee{
	int id;
	char name[1050];
	public:
		Employee(){
			
		}
		Employee(int id,char name[]){
			this->id=id;
			strcpy(this->name,name);
		}
		void display(){
			cout<<"Employee id : "<<id<<endl;
			cout<<"Employee name : "<<name<<endl;
		}
};
int main()
{
	
	fstream file1;
	file1.open("linux_command.txt",ios::app);
	Employee *emp;	
	emp = new Employee(101,"tejas");

	if(file1== NULL)
	{
		cout<<"File not found";
	}
	else{	
	
		file1.write((char*)emp,sizeof(emp));
		file1.close();
		
		file1.open("linux_command.txt",ios::app);
		file1.read((char*)emp,sizeof(emp));
		file1.close();
	}
	

}
