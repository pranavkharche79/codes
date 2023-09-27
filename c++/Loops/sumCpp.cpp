#include<iostream>
using namespace std;
int main(){
	int m1;
	int sum=0;
	for (int i=1;i<=5;i++){
		cout<<"Enter the "<<i<<"th number :  "<<endl;
		cin>>m1;
		sum=sum+m1;
	}
	int avg=sum/5;
	cout<<"average of mark is :"<<avg;
	
	return 0;
	
}
