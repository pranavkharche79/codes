#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int Amt=20000;
	int ROI=6;
	int N=3;
	int T=7;
	//int Total;
	
	float Interest = Amt *((pow((1+ (ROI / N * 100 )), (N * T ))));
	//fa = P * pow((1 + ( R / (N * 100) )), ( N * T ));
	
	int Total = Amt + Interest;
	
	cout<<"Final Amt afte interest is : "<<Total;
	
	
}
