#include<iostream>
using namespace std;
#include<string.h>

class Address
{
	char name[30];
	int house_no;
	char city[15];
	char state[15];
	
	public:
		Address()
		{
			name="Prathamesh_Nale";
			house_no=8876;
			city="Phaltan";
			state="Maharashtra";
		}
		
		Address(char * name,int house_no,char *city,char* state)
		{
			strcpy(this->name,name);
			this->house_no=house_no;
			strcpy(this->city,city);
			strcpy(this->state,state);
		}
		
		void display()
		{
			cout<<"!! Infor of student !!"<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"House number = "<<house_no<<endl;
			cout<<"City name = "<<city<<endl;
			cout<<"State name = "<<state<<endl;
		}
};


class student
{
	int roll_no;
	int marks[5];
	float avg;
	Address addr;
	
	public:
		student()
		{
			roll_no=88;
			marks[0]=48;
			marks[1]=48;
			marks[2]=48;
			marks[3]=48;
			marks[4]=48;
			avg=0.0f;
			addr=Address();
		}
		
		
		student(int roll_no,int* marks1,char *name,int house_no,char *city,char *state):addr(name,house_no,city,state)
		{
			this->roll_no=roll_no;
			int i=0;
			for(i;i<5;i++)
			{
				marks[i]=marks1[i];
			}
		}
		
		float average()
		{
			int i=0,sum=0;
			for(i;i<5;i++)
			{
				sum=sum+marks[i];
			}
			avg=(float)sum/5;
			return avg;
		}
		void display()
		{
			addr.display();
			cout<<"Roll number = "<<roll_no<<endl;
			cout<<"Marks of 5 subjects = ";
			int i=0;
			for(i;i<5;i++)
			{
				cout<<marks[i]<<"\t";
			}
			cout<<endl;
			cout<<"Average = "<<average()<<endl;
		}
};


int main()
{
	int arr[5]={45,38,44,42,36};
	student s1(76,arr,"Nale_prathamesh",46,"phaltan","maharashtra");
	s1.display();
	
	return 0;
}
