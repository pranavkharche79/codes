#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary()
		{
			return 0;
		}
};
employee::employee(int i)
{
	cout<<"in para of employee\n";
	id=i;
}
class salesManager:public wageemployee
{
	int sales,comm;
	public:
		salesManager();
		salesManager(int,int,int,int,int);
		void display();
		int findsalary();
}
salesManager::salesManager(int i, int h, int r,int s, int c):wageemployee(i,h,r)
{
	coput<<"in para of sales manager\n";
	sales=s;
	comm=c;
}
void salesManager::display()
{
	wageemployee::display();
}
class wageemployee:public employee
{
	int hrs,rate;
	public:
		wageemployee();
		wageemployee(int,int,int);
		void display();
		int findsalary();
};
wageemployee::wageemployee(int i,int h,int r):employee(i)
{
	cout<<"in para of wage\n";
	hrs=h;
	rate=r;
}
void wageemployee::display()
{
	employee::display();
	
}
int main(){
	salesManager *sm=new salesManager(10,500,456,35,50);
	sm->display();
	return 0;
}
