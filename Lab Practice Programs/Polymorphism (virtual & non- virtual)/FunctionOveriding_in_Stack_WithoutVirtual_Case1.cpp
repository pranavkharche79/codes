#include<iostream>
using namespace std;

class Employee
{
	int id;
	
	public:
		Employee();
		Employee(int);
		void display();
		int findSalary();
};

Employee :: Employee()
{
	cout<<"Inside Employee Default Constructor"<<endl;
}

Employee :: Employee(int i)
{
	cout<<"Inside Employee Parameterised Constructor "<<endl;
	id=i;
}
void Employee::display() 
{
	cout<<"Employee ID is : "<<id<<endl;
}

int Employee::findSalary()
{
	return 0;
}

class wageEmployee : public Employee
{
	int hrs,rate;
	
	public:
		wageEmployee();
		wageEmployee(int,int,int);
		int findSalary();
		void display();
	
};

wageEmployee::wageEmployee()
{
	cout<<"Inside Wage Employee Default Constructor "<<endl<<endl;
}

wageEmployee::wageEmployee(int id,int hrs,int rate):Employee(id)
{
	cout<<"Inside Wage Employee Para Constructor"<<endl;
	this->hrs=hrs;
	this->rate=rate;

}
int wageEmployee::findSalary()
{
	return 1;
}
void wageEmployee::display() 
{
	Employee::display();
	cout<<"HRS are "<<hrs<<endl;
	cout<<" Rate is "<<rate<<endl;
}

class salesManager:public wageEmployee
{
	int sales,comm;
	
	public:
		salesManager();
		salesManager(int,int,int,int,int);
		int findSalary();
		void display();
	
};

salesManager :: salesManager()
{
	cout<<"Inside Default constructor of Sales Manager"<<endl;
	sales=0;
	comm=0;
}

salesManager :: salesManager(int id,int hrs,int rate,int sales,int comm): wageEmployee(id,hrs,rate)
{
	cout<<"Inside Paramerterised constructor of Sales Manager"<<endl;
	this->sales=sales;
	this->comm= comm;
}

int salesManager :: findSalary()
{
	return 2;
}

void salesManager :: display()
{
	wageEmployee :: display();
	cout<<"SALES of an employee : "<<sales<<endl;
	cout<<"Commission of an employee : "<<comm<<endl;
}

int main()
{
	Employee *ptr;
	Employee e1;
	ptr = &e1;
	
	cout<<"The Salary is : "<<ptr->findSalary()<<endl;
	
	wageEmployee we1;
	ptr= &we1;
	
	cout<<"The Salary is : "<<ptr->findSalary()<<endl;
	
	salesManager se1;
	ptr= &se1;
	
	cout<<"The Salary is : "<<ptr->findSalary();
}

/*

	salesManager sm1;
//	salesManager* sm = new salesManager(101,10,500,2000,1);
	salesManager* sm = new salesManager(100,1000,500,2000,100);
	sm->display();
	
	cout<<"Salary is "<<sm->findSalary();
	
	if(sm)
	delete sm;
*/
