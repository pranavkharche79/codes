#include<iostream>
using namespace std;
class complex{
	int real, img;
	public:
		static int count;
		complex(int, int){
			cout<<"Default is revoked"<<endl;
			real = 5;
			img = 10;
			count++;
		}
		complex(){
			cout<<"Default is revoked"<<endl;
			real = 5;
			img = 10;
			count++;
		}
		static int getcnt(){
			return count;
		}
};
int complex :: count=0;


int main(){
	
	
	complex c1;
	complex c2(10,30);
	complex c3(45,78);
	//cout<<"Number of object created : "<<complex::getcnt();
	cout<<"Number of object created : "<<c1.getcnt();
	
	
	return 0;
}
