#include<iostream>
using namespace std;
int main(){
	int oddSum=0;
		int evenSum=0;
	for(int i=1; i < 51; i++){
		
		
		if(i % 2 ==0){
			evenSum+=i;
			
		}
		else{
			oddSum+=i;
		}
	}
	cout<<"Sum of even number upto 50 is: "<<evenSum<<endl;
	cout<<"Sum of odd number upto 50 is : "<<oddSum<<endl;
	return 0;
}
