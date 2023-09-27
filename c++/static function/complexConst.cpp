#include<iostream>
using namespace std;
class complex{
	int real;
	int img;
	public:
		complex(int real ,int img ){
			this->real=real;
			this->img=img;
		}
//		void getData(int real,int img){
////			cin>>"enter real\n">>real;
////			cin>>"enter img\n">>img;
	//	}
		void display(){
			cout<<"real is"<<real<<"   img is : "<<img;
		}
};
int main(){
//	complex c1;
	c1.complex(12,78);
//	c1.getData(12,13);
	c1.display();
}
