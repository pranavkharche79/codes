#include<iostream>
using namespace std;

int main(){
	
	
	int num;
	cout<<"Enter the number upto which you want to print the fibonacci series: "<<endl;
	cin>>num;
	int n1=0, n2=1;
	cout<<n1<<" "<<n2<<" ";
	
	
	int n3;
	int i=2;
	while(i < num){
		n3=n2+n1;
		cout<<n3<<" ";
			n1=n2;
			n2=n3;
	
		i++;
	}
	return 0;
}
