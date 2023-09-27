#include<iostream>
using namespace std;
class date{
	int dd,mm,yy;
	public:
	date(int, int,int);
	date(date& );
	void show();
};
void date::show()
{
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
date :: date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
	
}
date::date(date& new_d) //18,12,23
{
	int v;
	cout<<"Enter the another date: "<<endl;
	cin>>v;
	
	dd=v;
	mm=new_d.mm;
	yy=new_d.yy;
	
	
}


int main(){
	date d(18,12,23);
	date d1(d);
	d.show();
	d1.show();
	
	
	return 0;
}
