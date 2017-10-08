#include<iostream>
using namespace std;
class Shape{
	public:
		double x,y;
		void getdata(){
			cin>>x>>y;
		}
		virtual void displayArea()=0;
};
class Triangle:public Shape{
	public:
		void displayArea(){
			cout<<"Area:"<<x*y/2<<endl;
		}
};
class Rectangle:public Shape{
	public:
		void displayArea(){
			cout<<"Area:"<<x*y<<endl;
		}
};
int main(){
	Triangle t1;
	Rectangle r1;
	t1.getdata();
	t1.displayArea();
	r1.getdata();
	r1.displayArea();
}
