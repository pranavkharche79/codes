#include<iostream>
using namespace std;
int main(){
	
	int city[7][2];
	
	for(int i=1; i <=7; i++){
		for(int j=1; j <=2; j++){
			cout<<"Enter the temperature of both the city not:"<< j<<" on day: "<<i<<endl;
			cin>>city[i][j];
		}
		cout<<endl;
	}
		for(int i=1; i <=7; i++){
		for(int j=1; j <= 2; j++){
			cout<<city[i][j]<<"   ";
			
		}
		cout<<endl;
	}
	return 0;
}
