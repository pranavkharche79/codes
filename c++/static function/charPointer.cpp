#include<iostream>
using namespace std;
#include<string.h>

int main(){
	
	char* names[5]={"Rahim","Mohan","Tachna","Mohit","Sham"};
	cout<<"printing 1st individual character of each string"<<endl;
	for(int i=0; i <= 5; i++){
		int x=strlen(names[i]);
		
		cout<<*names[i]<<endl;
			
		for(int j=0;j<x; j++){
			cout<<*(*(names+i)+j);
		
	}
		
		
		
		
//		cout<<names[i]<<"       ";
//		cout<<*(names+i);
//		cout<<*(names+i);
		
		int j=0;
		cout<<"Printing the string character by character"<<endl;
		for(	int j=0;j<=5; j++){
			cout<<*(*(names+i)+j);
		
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
