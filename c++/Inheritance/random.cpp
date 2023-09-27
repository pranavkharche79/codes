#include<iostream>
using namespace std;
const float pi = 3.142f;

class Shape{
    public:
    // char arr[5]={"Red","Yellow","Blue","Green"};
    int thickness;
    virtual void area(){
        
    }
    
    
};

//circle
class Circle:public Shape{
    public:
    int radius;
    
    
    Circle(){
        cout<<"Enter the radius"<<endl;
        cin>>radius;
        cout<<"Area of circle : " <<pi*radius*radius<<endl;
    }
    
};


//rectangle
class Rectangle: public Shape{
    
    public:
    int length,breadth;
    
    Rectangle(){
        cout<<"Enter the length: "<<endl;
        cout<<"Enter the breadth: "<<endl;
        cin>>length;
        cin>>breadth;
    
        cout<<"Area of Rectangle : " <<length*breadth<<endl;
    }
    
};


//ellipse
class Ellipse:public Shape{
    public:
    int a,b;
    
    Ellipse(){
        cout<<" length of semi-major axis of an ellipse : "<<endl;
        cout<<"length of semi-minor axis of an ellipse:"<<endl;
        cin>>a;
        cin>>b;
        cout<<"Area of ellipse: "<<pi*a*b<<endl;
    }
   
};


//square
class Square:public Shape{
    public:
    int side;
    
    
    
    Square(){
        cout<<"Enter the side: "<<endl;
    
        cin>>side;
        cout<<"Area of Square : " <<side*side<<endl;
    }
};


//line 
class Line: public Shape{
    
    public:
    int a,b;
    
    Line(){
        cout<<"Enter start point:"<<endl;
        cin>>a;
        cout<<"Enter end point: "<<endl;
        cin>>b;
        cout<<"("<<a<<","<<b<<")"<<endl;
    }
    
    
};

int main(){
    
    
    int choice;
    int size;
    cout<<"Enter number of shape you want to create: "<<endl;
    cin>>size;
    cout<<"Enter the shape number  you want to choose: 1)circle 2) rectangle 3) ellipse 4) Square 5) Line"<<endl;
    cin>>choice;
   
     
    switch(choice){
        case 1:{
            cout<<"You choose shape: Circle"<<endl;
             Circle c1;
            break;
        }
            
           
            // ptr=&c1;
        case 2:
        {
            cout<<"You choose shape: Rectangle"<<endl;
          Rectangle r1;
            break;  
        }
            
            // ptr=&r1;
        case 3:
        {
            cout<<"You choose shape : Ellipse"<<endl;
         Ellipse e1;
            break;   
        }
            
            // ptr=&c1;
        case 4:
        {
            cout<<"You choose shape: Square"<<endl;
         Square s1;
            break;   
        }
            
            // ptr=&c1;
        case 5:
        {
            cout<<"You choose shape: Line"<<endl;
            Line l1;
            break; 
        }
           
            // ptr=&c1;
        default:
        cout<<"Invalid number"<<endl;
        break;
    
    }
    
        
        
     
    
    return 0;
}
