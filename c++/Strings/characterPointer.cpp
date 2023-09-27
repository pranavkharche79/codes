#include<iostream>
using namespace std;

int main(){
	
	char a= 'X';
	char* b= &a;
	char** c= &b;
	
	cout<<"value of a: "<<a<<endl;
	cout<<"value of a: "<<*b<<endl;
	cout<<"size of a: "<<sizeof(a)<<endl;
	cout<<" size of a in terms of b is "<<sizeof(*b)<<endl;
	cout<<"size of b is : "<<sizeof(b);
	cout<<"size of c is : "<<sizeof(c);
	cout<<"size of **c is : "<<sizeof(**c);
	cout<<"size of A is:"<<sizeof(&b)<<"  "<<&b<<"  "<<(&b-a);
	
	
	return 0;
}
