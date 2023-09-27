#include<iostream>
using namespace std;

class Complex{
	
static	int real, img;
	public:
		Complex(){
			real=5;
			img=6;
			
		}
		static void show(){
			cout<<"No argument function called: "<<endl;
		}
		
		static void show(int a,int b){
			cout<<"parameterized static function called"<<endl;
		}
};int Complex::real,img;

int main(){
	
	Complex::show();
	
	return 0;
}
