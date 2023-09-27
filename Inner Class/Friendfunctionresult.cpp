#include<iostream>
using namespace std;

class Student{
	
	int m1,m2,m3,sum;
	public:
	Student(int a, int b,int c){
//		cout<<"In parameterized constructor of class Student. "<<endl;
		m1=a;
		m2=b;
		m3=c;		
	}
	virtual float Sportmarks(){
		sum= m1+m2+m3;
		return sum;
	}	
};

//Class sport
class Sport{
	
	int s1;
	public:
		
	Sport(int c){
//		cout<<"In parameterized constructor of class Sport: "<<endl;
		s1=c;
		
	}
	virtual float Sportmarks(){
		return s1;
	}	
};


//Class Result

class Result: public Student,Sport{
	int c;
	public:
		
	Result(int,int,int,int);
	virtual float Sportmarks();

};
Result::Result(int a,int m1,int m2,int m3):Student(m1,m2,m3),Sport(a){
	
}
float Result::Sportmarks(){
	return (Student::Sportmarks()/3);
}



//Main function

int main(){
	
	Result* ptr=new Result(1,25,56,70);
	cout<<"Average: "<<ptr->Sportmarks();
	
	return 0;
}
