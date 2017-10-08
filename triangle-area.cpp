#include<iostream>
using namespace std;
class triangle{
	public:
	float b,h,area;
	void get(){
		cout<<"Enter the base and height of triangle : \n";
		cin>>b>>h;
	}
	void triarea(){
		area=b*h/2;
		cout<<area;
	}
};
int main(){
	triangle tri;
	tri.get();
	tri.triarea();
}
