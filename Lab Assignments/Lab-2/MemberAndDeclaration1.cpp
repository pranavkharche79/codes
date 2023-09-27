//"	Declare members and implement in your programs.

#include<iostream>
using namespace std;
class Addition{
	int a,b;
	public:
		Addition(){
			cout<<"Non Parameterized Constructor Invoked!!";
		}
		Addition(int x,int y){
			a=x;
			b=y;
		}
		int add() const{
			cout<<"Constant function invoked";
			return a+b;
		}
		int add(){
			cout<<"Static function invoked";
			return a+b;
		}
};
int main(){
	int a,b;
	cout<<"Enter value of a and b"<<endl;
	cin>>a>>b;
	
	Addition a1;
	cout<<a1.add();
	
	const Addition a2;
	cout<<a2.add();
}

