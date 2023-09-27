#include<iostream>
using namespace std;

int main()
{
	
//	for(int row = 1; row <= 5; row++){
//		
//		for(int col=5; col<; col--){
//			cout<<"*"<<" ";
//		}
//		
//		cout<<endl;
//	}
for(int row=1; row <=5; row++){
		for(int col=1; col<=row; col++){
			cout<<col%2<<" ";
		}
		cout<<endl;
}


	return 0;
}
