#include<iostream>
using namespace std;

class user_date{
	
	int dd,mm,yy;
	
	public:
	
	 void getDate(){
	 	cout<<"Enter the date: "<<endl;
	 	cin>>dd;
	 
		 	
	 }
	 void getMonth(){
	 	cout<<"Enter the month: "<<endl;
	 	cin>>mm;
	 	
	 }
	 void getYear (){
	 		cout<<"Enter the year: "<<endl;
	 		cin>>yy;
	 		
	 }
	 void setDate(int date){
	
	 	dd=date;
	 }
		 
	void setMonth(int month){
			cout<<"set another month:"<<endl;
			cin>>month;
	 	mm=month;
	 }	 
	 void setYear(int year){
	 		cout<<"set another year:"<<endl;
	 		cin>>year;
	 	yy=year;
	 }

void display(){
	 	
	 	
	 	cout<<"You have entered the date is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	 }
	 
	 };
int main(){
	user_date u1;
	int date,month,year;
	u1.getDate();
	
    u1.getMonth();
	u1.getYear();
    
    
	u1.display();

		cout<<"set another date:"<<endl;
	 	cin>>date;
	 u1.setDate(date);
	 u1.display();
	
	return 0;
}
