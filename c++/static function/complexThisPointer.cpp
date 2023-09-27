#include<iostream>
using namespace std;
class complex{
	int r;
	int i;
	public:
		void comp(int r,int i){
			this->r=r;
			this->i=i;
		}
		void display(){
			cout<<"complex no is:"<<r<<"+"<<i<<"i";
		}
};





int main(){
	complex c1;
	c1.comp(10,50);
	c1.display();
	
}
