#include<iostream>
using namespace std;

int main(){
	



		
		for(int nums = 2; nums < 1000; nums++){
				int count =0;
			for(int i=2; i < nums; i++){
				
				if(nums % i == 0){
					count=1;
					

				}
			
			}
	static	int ctr =0;
			
			if(ctr < 25){
				if(count==0){
				cout<<nums<<" ";
				ctr++;
				}
			}
			
		}
	
	
	

	
	return 0;
}
