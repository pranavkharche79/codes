#include<iostream>
using namespace std;
int main(){
	static int initial = 5;
	
	for(int row = 1; row <= 5; row++){
		for(int col=initial; col>0; col--){
			cout<<"*"<<" ";
		}
		initial--;
		cout<<endl;
	}
}
