#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	
	if(argc>1)
	{
		cout<<"command line argument provided"<<endl;
	
		for(int i=1;i<argc;i++)
		{
			cout<<"argument"<<i<<" : "<<argv[i];
		}
	}
	else 
	{
		cout<<"No commandLine arguments Provided ";
	}
	
	return 0;
}
