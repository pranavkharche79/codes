#include<iostream>
using namespace std;

class complex
{
	int real,img;
	public:
		static int cnt;
	public:
		complex()
		{
			real=5;
			img=2;
			//u=23;
			cnt++;
					
		}
	    complex(int r,int i)
	    {
	    	cout<<"parametrized constructor";
	    	this->real = r;
	    	this->img  = i;
	    	cnt++;
		}
		
		static int getcnt()
		{
		
		return cnt;
	}
};
int complex::cnt=0;



int main()
{
	complex c1;
	complex c2(10,20);
	cout<<complex::getcnt();
	cout<<"size of obj"<<sizeof(c1);
	//cout<<complex::cnt;
	
return 0;	
	
}
	
	
	

