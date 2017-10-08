#include<iostream>
using namespace std;
class A{
	public:
		void f1(){
			cout<<"f1 of A"<<endl;
		}
		void f2(){
			cout<<"f2 of A"<<endl;
		}
};
class B:public A{
	public:
		void f1(){
			cout<<"f1 of B"<<endl;
		}
		void f2(){
			cout<<"f2 of B"<<endl;
		}
};
int main(){
	A obj1, *ptr1;
	ptr1=&obj1;
	ptr1->f1();
	ptr1->f2();
	cout<<endl;
	B obj2, *ptr2;
	ptr1=&obj2;
	ptr1->f1();
	ptr1->f2();
	cout<<endl;
	ptr2=&obj2;
	ptr2->f1();
	ptr2->f2();
	cout<<endl;
	obj1.f1();
	obj1.f2();
	cout<<endl;
	obj2.A::f1();
	obj2.A::f2();
}
