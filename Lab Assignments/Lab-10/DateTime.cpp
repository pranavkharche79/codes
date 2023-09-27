//"	Write Date and Time classes that allow you to add, subtract, read and print simple dates in dd/mm/yyyy and time in hh:mm:ss formats. Use function overloading in your program.
#include<iostream>
using namespace std;

class Date1{
	int dd,mm,yyyy;
	public:
		Date1(int dd,int mm,int yyyy){
			this->dd=dd;
			this->mm=mm;
			this->yyyy=yyyy;
		}
		friend Date1 operator+(int value,Date1 & d);
		friend Date1 operator-(int value,Date1 & d);
		void display(){
			cout<<"Date : "<<dd<<" : "<<mm<<" : "<<yyyy<<endl;
		}
};
Date1 operator+(int value,Date1 & d){
	d.dd+=value;
	d.mm+=value;
	d.yyyy+=value;
	return d;
}
Date1 operator-(int value,Date1 & d){
	d.dd-=value;
	d.mm-=value;
	d.yyyy-=value;
	return d;
}

class Time1{
	int hrs,min,ss;
	public:
		Time1(int hrs,int min,int ss){
			this->hrs=hrs;
			this->min=min;
			this->ss=ss;
		}
		friend Time1 operator+(int value,Time1 & d);
		friend Time1 operator-(int value,Time1 & d);
		void display(){
			cout<<"Time : "<<hrs<<" : "<<min<<" : "<<ss<<endl;
		}
};
Time1 operator+(int value,Time1 & d){
	d.hrs+=value;
	d.min+=value;
	d.ss+=value;
	return d;
}
Time1 operator-(int value,Time1 & d){
	d.hrs-=value;
	d.min-=value;
	d.ss-=value;
	return d;
}
int main(){
	Date1 d1(23,9,2023);
	d1.display();
	
	Date1 d2=2+d1;
	d2.display();
	
	Date1 d3=5-d1;
	d3.display();
	
	Time1 t1(23,50,30);
	t1.display();
	
	Time1 t2=2+t1;
	t2.display();
	
	Time1 t3=5-t1;
	t3.display();
}
