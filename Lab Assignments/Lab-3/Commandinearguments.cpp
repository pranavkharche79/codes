#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	
	if(argc>1)
	{
		cout<<"CMD Argument is present"<<endl;
	
		for(int i=1;i<argc;i++)
		{
			cout<<"argument"<<i<<" : "<<argv[i];
		}
	}
	else 
	{
		cout<<"CMD Argument is not present ";
	}
	
	return 0;
}
