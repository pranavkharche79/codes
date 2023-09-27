//Write a program to implement inner class in C++




#include<iostream>
using namespace std;


class Employee
{
	int eid;
	public:
		
		class salesEmployee
		{
			int sid;
			public:
				salesEmployee()
				{
					sid=10;
				}
				salesEmployee(int sid)
				{
					this->sid=sid;
				}
				void display()
				{
					cout<<"inside display of inner class salesEmployee"<<endl;
					cout<<"salesEmployee id = "<<sid<<endl;
				}
		};
		
		void display()
		{
			cout<<"inside the outer class of display function"<<endl;
		}
		
		
};


int main()
{
	Employee e;
	e.display();
    Employee::salesEmployee se1;
    se1.display();
	
	
	return 0;
}
