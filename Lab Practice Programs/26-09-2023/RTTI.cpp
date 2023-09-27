#include<iostream>
using namespace std;

class Employee
{
	int eid;
	public:
		Employee()
		{
			eid=5;
		}
		Employee(int eid)
		{
			this->eid=eid;
		}
		virtual void display()
		{
			cout<<"Inside display function of class Employee:"<<endl;
			cout<<"Employee Id = "<<eid<<endl;
		}
};

class wageEmployee:public Employee
{
	int wid;
	public:
		wageEmployee()
		{
			wid=10;
		}	
		
		wageEmployee(int wid)
		{
			this->wid=wid;
		}
		
		void display()
		{
			Employee::display();
			cout<<"Inside display function of class wageEmployee"<<endl;
			cout<<"WageEmplyee id = "<<wid<<endl;
		}
};


int main()
{
	Employee* eptr=new wageEmployee;
	wageEmployee* wptr=dynamic_cast<wageEmployee*> (eptr);
	
	if(wptr!=NULL)
	{
		wptr->display();
	}
	else
	{
		cout<<"Cannot case  Employee* to wageEmployee* :"<<endl;
	}
	
	return 0;
}
