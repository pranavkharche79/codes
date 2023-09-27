#include<iostream>
using namespace std;
int fun();
int main(){
	
	fun();
	fun();
	fun();
	cout<<"count is: "<<fun();
	return 0;
}
int fun(){
	static int count =0;
	count++;
	return count;
}
//
//#include<iostream>
//using namespace std;
//int fun();
//int main(){
//	
//	fun();
//	fun();
//	fun();
//	cout<<"count is: "<<fun();
//	return 0;
//}
//int fun(){
//	int count =0;
//	count++;
//	return count;
//}
