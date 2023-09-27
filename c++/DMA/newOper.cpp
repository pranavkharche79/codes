#include<iostream>
using namespace std;
int main(){
	int no_subject,no_char;
	
	cout<<"Enter the number of subject you want to store: "<<endl;
	cin>>no_subject;
	cout<<"Enter the number of character: "<<endl;
	cin>>no_char;
	
	
	int* sub = new int[no_subject];
	
	char* name = new char[no_char];
	cout<<"Enter the name: "<<endl;
	cin>>name;
	
	int sum=0;
	for(int i=0; i < no_subject; i++){
		cout<<"Enter marks: "<<endl;
		cin>> sub[i];
		sum=sum+sub[i];
	}

	
	float avg = sum / no_subject;
	
	cout<<"Name is : "<<name<<"  Average is: "<<avg;
	delete[] name;
	delete[] sub;
	 return 0;
}
