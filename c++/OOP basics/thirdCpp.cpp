#include<iostream>
using namespace std;

int main(){
	int a=10;
	int b= 20;
	
	cout<<"Value of a and b before swapping was : a= " <<a<<" & b= "<<b<<endl;
	swap(a,b);
	
	cout<<"Value of a and b after swapping was : a= " <<a<<" & b= "<<b;
	
	
	
	
	return 0;
}

void swap(int& p, int& q){
	
	int temp = p;
	p=q;
	q=temp;
	
}
