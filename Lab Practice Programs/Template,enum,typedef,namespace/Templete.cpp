#include<iostream>
using namespace std;

template <class X>
void swap1(X& a,X& b){
	X temp=a;
	a=b;
	b=temp;
}
template <class X>
void sort1(X& num)
{
	for(int i=0;i<sizeof(num);i++)
	{
		for(int j=0;i<(sizeof(num)-i)-1;j++)
		{
			if(num[j]>num[j+1])
			{
				int temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
}
template <class T,class T1>
class A
{
	T a;
	T b;
	public:
		A(T a,T b)
		{
			this->a=a;
			this->b=b;
		}
		void display(){
			cout<<a<<"\t"<<b<<endl;
		}
};
int main(){
	
//	A<int,float> a1(5,2.2);
//	a1.display();
//	
//	cout<<"a\t"<<"b\n"<<endl;
//	int a=5,b=7;
//	cout<<"Before Swapping :"<<endl;
//	cout<<a<<"\t"<<b<<endl;
//	swap1(a,b);
//	cout<<"After Swapping :"<<endl;
//	cout<<a<<"\t"<<b<<endl;

	int num[5]={5,7,5,2,8};
	sort1(num);
	 
	for(int i=0;i<5;i++){
		cout<<i<<endl;
		cout<<num[i]<<endl;
	}
}
