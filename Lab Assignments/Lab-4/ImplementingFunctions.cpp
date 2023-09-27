#include <iostream>
using namespace std;
void function1();
int function2(int, int);
int function2(int, int, int);
void function3(int *, int *);

class Functions
{
public:
	Functions()
	{
		cout<<"Inside Constructor";
	}
    void funct()
    {
        cout << "Calling Fuction by creating object\n";
    }
    static void funct1()
    {
        cout << "Static function\n";
    }
    void funct2() const
    {
        cout << "Constant function\n";
    }
};

int main()
{
    cout<<"Type of Functions : \n";
    int a = 10, b = 20, c = 30;
    function1();
    function2(a, b);
    function2(a, b, c);
    function3(&a, &b);

    
    Functions f;
    f.funct();
    f.funct1();
    f.funct2();
    Functions* f1=new Functions();
    f1->funct1();
}
void function1()
{
    cout << "No argument function\n";
}
int function2(int a, int b)
{
    cout << "Parameterized function with return type\n";
    return a + b;
}
int function2(int a, int b, int c)
{
    cout << "Function overloading\n";
    return a + b + c;
}
void function3(int *a, int *b)
{
    cout << "Pass by reference function\n";
    int temp = *a;
    *a = *b;
    *b = temp;
}
