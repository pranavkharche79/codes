#include<iostream>
using namespace std;
class Student
{
	int roll;
	int m1,m2;
	
	public:
		Student(int roll,int m1,int m2)
		{
			this->roll=roll;
			this->m1=m1;
			this->m2=m2;
		}
	
};

class Sports 
{
	int sport_Marks;
	
	public:
		Sports(int Sport_Marks)
		{
			sport_Marks= Sport_Marks;
		}
};

class Result: public Student,public Sports
{
	float avg;
	int sum;
	
	public:
		Result(int roll,int m1,int m2,int sport_Marks): Student(roll,m1,m2),Sports(sport_Marks)
		{
			sum= m1+m2+sport_Marks;
			avg= float(sum)/4;
			
			cout<<"Student with roll no "<<roll<<" has average of "<<avg;
		
		}	
	
		
};
int main()
{
	Result R(1,98,95,71);
	
}
