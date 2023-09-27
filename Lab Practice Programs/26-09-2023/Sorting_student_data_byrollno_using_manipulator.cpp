#include<iostream>
#include<iomanip>
using namespace std;

class Date
{
	int dd;
	int mm;
	int yy;
	public:
		void putDate()
		{
			cout<<"Enter the DOB in formate of dd/mm/yy: "<<endl;
			cout<<"dd = ";
			cin>>dd;
			cout<<"mm = ";
			cin>>mm;
			cout<<"yy = ";
			cin>>yy;	
		}
		
		void getDate()
		{
			//cout<<"\tDOB = "<<dd<<"/"<<mm<<"/"<<yy<<setw(10);
			cout<<"\t"<<dd<<"/"<<mm<<"/"<<yy<<setw(10);
		}
};

class Student
{
	int roll_no;
	char name[25];
	Date d1;
	
	public:
		void putStudent()
		{
			cout<<"Enter name of the student = ";
			cin>>name;
			cout<<"Enter roll no = ";
			cin>>roll_no;
			d1.putDate();
		}
		
		void getStudent()
		{
			static int sr=1;
			
			cout<<endl;
			//cout<<sr++<<setw(10)<<"Roll no = "<<roll_no<<setw(5);
			cout<<sr++<<" "<<setw(10)<<roll_no<<setw(5);
			d1.getDate();
		//	cout<<"\tName = "<<name;
			cout<<"\t"<<name;
			
		}
		
		void putroll_no(int roll_no)
		{
			this->roll_no=roll_no;
		}
		
		int getroll_no()
		{
			return this->roll_no;
		}
};


int main()
{
	Student s1[10];
	int s;
	cout<<"Enter the number of students = ";
	cin>>s;
	
	int i;
	for(i=0;i<s;i++)
	{
		s1[i].putStudent();
		cout<<endl;
	}
	
	cout<<"Before sorting according to roll number :"<<endl;
	cout<<"Srn."<<"    Roll no"<<"\t\t   DOB"<<"\t\t\t Name";
	for(i=0;i<s;i++)
	{
		s1[i].getStudent();
	}
	cout<<endl;
	

	Student temp;
	int j;
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(s1[i].getroll_no()>s1[j].getroll_no())
			{
				temp=s1[i];
				s1[i]=s1[j];
				s1[j]=temp;
			}
		}
	}
	
	cout<<endl;
	cout<<"After sorting according to roll number :"<<endl;
	cout<<"Srn."<<"    Roll no"<<"\t\t   DOB"<<"\t\t\t Name";
	for(i=0;i<s;i++)
	{
		s1[i].getStudent();
	}
	
}







