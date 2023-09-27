#include<iostream>
using namespace std;

class Complex{
	
	int a;
	public:
		
		void getValue(){
			cout<<"Enter the value:" <<endl;
			cin>>a;
		}
		void putValue(){
			cout<<"value = "<<a<<endl;
		}
		
};

int main(){
	int n;
	cout<<"Enter number of objects you want to create: "<<endl;
	cin>>n;

	Complex* ptr=new Complex[n];
	
	for(int i=0; i < n; i++){
		ptr[i].getValue();
	}
	
	
	for(int i=0; i < n; i++){
		
		ptr[i].putValue();
	}
	
	
	
}
