#include<iostream>
using namespace std;


int main() {
int a;
int b;

//int a_org=a;
//int b_org=b;

cout<<"enter the number of which you want swapping\n";
cin>>a>>b;
//pass by address
swapAdd(a,b);
//
cout<<"swap of the numbers are"<<"first number: "<<a<<"second number: "<<b;

//  swapVal(a_org,b_org);

//cout<<"swap of the numbers are"<<"first number: "<<a_org<<"second number: "<<b_org;


return 0;
}
//pass by address
void swapAdd(int* p,int* q){
	int temp=*p;
	*p=*q;
	*q=temp;
}

//pass by value
void swapVal(int p,int q){
	int temp=p;
	p=q;
	q=temp;
}
//pass by refernce


