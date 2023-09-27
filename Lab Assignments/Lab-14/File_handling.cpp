/* Write a single file handling program in c++ to reading and writing data on a file.*/

#include<iostream>
#include<fstream>

using namespace std;
main()
{
	int rno,fee;
	char name[50];

	cout<<"Enter the Roll Number:";
	cin>>rno;
	
	cout<<"\nEnter the Name:";
	cin>>name;
	
	cout<<"\nEnter the Fee:";
	cin>>fee;

	ofstream fout("d:/student.doc");

	fout<<rno;
	cout<<"\t"<<name<<"\t"<<fee; 

	fout.close();

	ifstream fin("d:/student.doc");

	fin>>rno>>name>>fee; 

	fin.close();

	cout<<endl<<"Roll no = "<<rno;
	cout<<"Name = "<<name;
	cout<<"\t"<<fee;

	return 0;
}

