#include<iostream>
using namespace std;

class Complex{
	int real,img;
	public:
		void display(){
			cout<<"The complex number is: "<<real<<"+" <<img<<"i"<<endl;
		}
		void getData(int r,int i){
			cout<<"Enter the real part: "<<endl;
			cin>>r;
			cout<<"Enter the imaginary part: "<<endl;
			cin>>i;
			
			real = r;
			img = i;
		}
};
int main(){
	Complex c1;
	int real1,img1;
	c1.getData(real1,img1);
	c1.display();
	return 0;
}
