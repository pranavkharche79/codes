#include<iostream>
using namespace std;

class  Date
{
	int day;
	int month;
	int year;
	public:
		Date()
		{
			day=1;
			month=1;
			year=1000;
		}
		
		Date(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		
		void display()
		{
			cout<<"Inside display function of class Date:"<<endl;
			cout<<"Date = "<<day<<"-"<<month<<"-"<<year<<endl;
		}
};


			
		class Employee
		{
			int id;
			int salary;
			Date  dobj;
			public:
				Employee()
				{
					id=0;
					salary=0;
	          		dobj=Date();
				}
				
				Employee(int d,int m,int y,int i,int s):dobj(d,m,y)
				{
					id=i;
					salary=s;
				}
				
				void display()
				{
					cout<<"Inside display function of Employee class:"<<endl;
					cout<<"Id = "<<id;
					cout<<" and salary = "<<salary<<endl;
					dobj.display();
				}
		};

int main()
{
	Employee e1(11,5,2000,12,50000);
	e1.display();
}
