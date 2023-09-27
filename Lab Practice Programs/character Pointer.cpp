#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char * ptr[7]={"prathamesh","rushikesh","Arjun","Vishvanath","prajwal","sourabh","ram"};
	
	int arr[7];
	int i,j;
	for(i=0;i<7;i++)
	{
		arr[i]=*(ptr[i]);
	}
	
	for(i=0;i<7;i++)
	{
		int l=strlen(ptr[i]);
		for(j=0;j<l;j++)
		{
			cout<<*(*(ptr+i)+j);
		}
		cout<<endl;
	}
}
