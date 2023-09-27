#include<iostream>
using namespace std;

float division(int x,int y){
	
	if(y==0){
		throw "Attempted to divided by zero: ";
	}
	return (x/y);
}


int main(){
	int i=25;
	int j;
	float k;
	try{
		cout<<"Enter value of j: "<<endl;
		cin>>j;
		k=division(i,j);
		cout<<"Value of K : "<<k;
	}
	catch(char e){
		cout<<e<<endl;
	}
	
	return 0;
}
