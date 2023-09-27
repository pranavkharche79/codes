//Typedef for enum
#include<iostream>
using namespace std;

typedef enum day {sunday=1,monday,tuesday,wednesday,thursday,friday,satarday}d;



int main()
{
	enum day a1=sunday;
	
	d a2=thursday;
	d a3=satarday;
	
	cout<<"a1 =  "<<a1<<endl;
	cout<<"a2 =  "<<a2<<endl;
	cout<<"a3 =  "<<a3<<endl;
	
}
