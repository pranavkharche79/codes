#include<iostream>
using namespace std;


class Shape{
		
		public:
			virtual int area(){
				return 0;
			}
		
		
};

class Square: public Shape{
	int size;
		public:
			Square(int a){
				size=a;
			}
		int area();
		
};
int Square::area(){
	return size*size;
}

class Rectangle: public Shape{
	int len, bre;
	
	public:
		Rectangle(int a,int b){
			len = a;
			bre=b;
			
		}
		int  area();
		
	
};
int  Rectangle::area(){
	
			return len*bre;
	}
 
 
int main(){
	
	Shape* ptr=new Square(5);
	cout<<"Area of square : "<<ptr->area()<<endl;
	
	ptr=new Rectangle(5,3);
	cout<<"Area of rectangle: "<<ptr->area();
	
	
	
	
	return 0;
}
