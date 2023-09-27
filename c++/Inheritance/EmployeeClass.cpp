#include<iostream>
using namespace std;

class employee{
	int id;
	public:
		
	employee();
	employee(int);
	void display();
};
employee::employee(int i){
	cout<<"In parameterized of employee: "<<endl;
	id=i;
}
employee::employee(){
	cout<<"In default of employee: "<<endl;
	id=0;
}
void employee::display(){
	cout<<"id of employee is: "<<id<<endl;
}


class wageEmployee:public employee{
	int hrs, rate;
	public:
		wageEmployee();
		wageEmployee(int, int, int);
		void display();
};
wageEmployee::wageEmployee(){
	cout<<"In default of wageEmployee: "<<endl;
	hrs=0;
	rate =0;
}
wageEmployee::wageEmployee(int i, int h, int r):employee(i){
	
	cout<<"In parameter of wageEmployee: "<<endl;
	hrs=h;
	rate = r;
}
void wageEmployee::display(){
	employee::display();
	cout<<"hrs: "<<hrs<<"rate: "<<rate<<endl;
}

class salesManager: public wageEmployee{
		int sales, comm;
		public: 
			salesManager();
			salesManager(int,int,int,int,int);
			void display();
			int findSalary();
			
};
salesManager::salesManager(int i,int r,int h,int s,int c):wageEmployee(i,h,r){
	cout<<"Sales is parameterized constuctor: "<<endl;
	sales=s;
	comm=c;
}
salesManager::salesManager(){
	cout<<"In default of salesmanager:  "<<endl;
	sales=comm=0;
}
void salesManager::display(){
	wageEmployee::display();
	cout<<"Sales: "<<sales<<"commision: "<<comm<<endl;
	
}

int salesManager::findSalary(){
	return findSalary()+sales*comm;
}


int main(){
	salesManager* sm = new salesManager(101,10,500,2000,1);
	sm->display();
	if(sm){
		delete[]  sm;
	}
	
	return 0;
}
