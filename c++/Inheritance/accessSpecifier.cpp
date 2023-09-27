#include<iostream>
using namespace std;

 
class A{

public:
int a =           
10;
  
int c = 30;
  
int b = 20;
  
 
//      public: 
//      int b=20;
//      
//      protected:
//              int c=30;
    
//      public:
//              void show(){
//                      cout<<"Value of a: "<<a<<" Value of b: "<<b<<" Value of c: "<<c<<endl;
//              }
};


 
class B:protected A{

 
public:
void display ()
  {
    
 
cout << "Value a: " << a << endl;
    
cout << " Value : b " << b << endl;
    
cout << " Value : c " << c << endl;

} 
};


 
class C:private B{

public:
void Cshow ()
  {
    

cout << "Value a: " << a << endl;
    
cout << " Value : b " << b << endl;
    
cout << " Value : c " << c << endl;

} 
};


class D:public C{

public:
void dshow (){
    
cout << "Value a: " << a << endl;
    
cout << " Value : b " << b << endl;
    
cout << " Value : c " << c << endl;

    } 
} ;
 
int main ()
{
  
//      
//      B bobj;
//      bobj.display();
    
     C cobj;
     cobj.Cshow();
// D d;
// d.dshow();
    
return 0;

}

