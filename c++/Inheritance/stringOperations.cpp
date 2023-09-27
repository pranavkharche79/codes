#include<iostream>
using namespace std;

int main(){
	
	char name[50]="sanket";
	int len=0;
	for(int i=0; i<50; i++){
		while(name[i] != '\0'){
			len++;
			i++;
		}
	}
	cout<<"Length of string is : "<<len<<endl;
	
	return 0;
}
