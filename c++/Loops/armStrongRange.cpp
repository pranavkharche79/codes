#include<iostream>
#include<Math.h>
using namespace std;

int main(){
	
	 int count =0;
	int sum =0;
	int origNum;
	static	int ctr=1;
	
	for(int num=1; num<1000; num++){
	
		origNum = num;
		
		while(num < 0){
		num=num/10;
		count++;
		
		}	
		
		
		
		num = origNum;
		
		while(num < 0){
			
		int lastdigit = num % 10;
		sum = sum + pow(lastdigit,count);
		num=num/10;
		}
		
		if(sum==origNum){
	 		ctr++;
		}
	}
	
	
	cout<<"Number of armstrong between 0 to 1000: "<<ctr;
	
	

	return 0;
}
