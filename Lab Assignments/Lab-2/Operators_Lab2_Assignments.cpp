// CPP Program to demonstrate the Binary Operators
#include <iostream>
using namespace std;

void Arithmetic();
void Relational();
void Logical();
void Bitwise();

int main()
{

	Arithmetic();
	
	Relational();
	
	Logical();
	
	Bitwise();

	return 0;
}

	void Arithmetic()
	{
		// 	Arithmetic_Operators
	int a = 8, b = 3;

	// Addition operator
	cout << "a + b = " << (a + b) << endl;

	// Subtraction operator
	cout << "a - b = " << (a - b) << endl;

	// Multiplication operator
	cout << "a * b = " << (a * b) << endl;

	// Division operator
	cout << "a / b = " << (a / b) << endl;

	// Modulo operator
	cout << "a % b = " << (a % b) << endl;
	

		
	}
	
	void Relational()
	{
		// 	Relational Operator
	
	int a = 6, b = 4;

	// Equal to operator
	cout << "a == b is " << (a == b) << endl;

	// Greater than operator
	cout << "a > b is " << (a > b) << endl;

	// Greater than or Equal to operator
	cout << "a >= b is " << (a >= b) << endl;

	// Lesser than operator
	cout << "a < b is " << (a < b) << endl;

	// Lesser than or Equal to operator
	cout << "a <= b is " << (a <= b) << endl;

	// true
	cout << "a != b is " << (a != b) << endl;

	}
	
	void Logical()	
	{
		//Logical Operators

	int a = 6, b = 4;

// 	Logical AND operator

	cout << "a && b is " << (a && b) << endl;

	// Logical OR operator
	cout << "a ! b is " << (a > b) << endl;

	// Logical NOT operator
	cout << "!b is " << (!b) << endl;
	
	 		
	}
	
	void Bitwise()
	{
			
//	Bitwise Operators


	int a = 6, b = 4;

	// Binary AND operator
	cout << "a & b is " << (a & b) << endl;

	// Binary OR operator
	cout << "a | b is " << (a | b) << endl;

	// Binary XOR operator
	cout << "a ^ b is " << (a ^ b) << endl;

	// Left Shift operator
	cout << "a<<1 is " << (a << 1) << endl;

	// Right Shift operator
	cout << "a>>1 is " << (a >> 1) << endl;

	// One’s Complement operator
	cout << "~(a) is " << ~(a) << endl;
		
		
	}
	
	


