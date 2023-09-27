#include<iostream>
using namespace std;
int main(){
	int fact=1;
	int num;
	cout<<"Enter the number which you want to find factorial: "<<endl;
	cin>>num;
	int i=1;
	while(i<=num){
		fact = fact*i;
		i++;
	}
	cout<<"Factorial of the entered the number is: "<<fact<<endl;
}
