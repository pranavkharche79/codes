#include<iostream>
using namespace std;


class employee{
	int id;
	public:
		
	employee();
	employee(int);
	void display();
	
virtual  int findSalary();



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
int employee::findSalary(){
    return 0;
}

class wageEmployee:public employee{
	int hrs, rate;
	public:
		wageEmployee();
		wageEmployee(int, int, int);
		void display();
		virtual int findSalary();
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
int wageEmployee::findSalary(){ 
	             
    cout<<"wageemp sale= "<< hrs*rate;
    return hrs*rate;
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
	wageEmployee::findSalary();
	return (wageEmployee::findSalary())+sales*comm;
	
}

 
int main(){

//	employee e1;
//	employee* ptr= &e1;
//	cout<<ptr->findSalary()<<endl;
	
	
//	
//	cout<<ptr->findSalary()<<endl;
	
	salesManager sm1(101,2,54,345,5);
   employee* ptr=&sm1;
	cout<<ptr->findSalary()<<endl;
//	wageEmployee we;
//	cout<<sm1.findSalary();
//	
//	ptr=&we;
//	cout<<ptr->findSalary();
	
	return 0;
}
