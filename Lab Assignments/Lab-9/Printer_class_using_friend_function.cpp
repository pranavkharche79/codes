#include<iostream>
using namespace std;

class Printer
{
	int Printer_price;
	public:
		Printer()
		{
			Printer_price=1000;
		}
		Printer(int Printer_price)
		{
			this->Printer_price=Printer_price;
		}
		void display()
		{
			cout<<"inside display of printer class"<<endl;
			cout<<"price of printer = "<<Printer_price<<endl;
		}
		
		//friend void accessData(Printer&);
};
/*
void accessData(Printer& po)
{
	cout<<"inside friend function"<<endl;
	po.display();
}
*/

class Scanner:public Printer
{
	int Scanner_price;
	public:
		Scanner()
		{
			Scanner_price = 5000;
		}
		Scanner(int Scanner_price)
		{
			this->Scanner_price=Scanner_price;
		}
		void display()
		{
			Printer::display();
			cout<<"inside display of Scanner class"<<endl;
			cout<<"Price of Scanner = "<<Scanner_price<<endl;
		}
		friend void accessData(Scanner&);
};

void accessData(Scanner& po)
{
	cout<<"inside friend function"<<endl;
	po.display();
}



int main()
{
	//Printer p(1000);
//	accessData(p);
	
	Scanner s(2000);
	accessData(s);
	
}
