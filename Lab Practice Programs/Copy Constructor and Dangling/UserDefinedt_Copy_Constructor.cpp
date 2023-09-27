#include<iostream>
using namespace std;
class Date
{
	int dd,mm,yy;
	public:	
		Date(int,int,int);
		void show();
		Date(Date &d);
};

Date :: Date(int dd,int mm,int yy)
{
	this->dd=dd;
	this->mm=mm;
	this->yy=yy;
}

void Date :: show()
{
	cout<<"The Date is : ";
	cout<<dd<<"/"<<mm<<"/"<<yy;
}

Date :: Date(Date &d)
{
	this->dd= d.dd;
	this->mm= d.mm;
	this->yy= d.yy;
	
}

int main()
{
	Date d(30,10,2000);
	d.show();
	
	cout<<endl<<endl<<"After Copying the date using User Defined Copy Constructor : "<<endl;
	Date d1(d);
	d1.show();
	
	
}
