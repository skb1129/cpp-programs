#include<iostream>
using namespace std;
template<class T>
class Array{
	T *arr;
	int size;
	public:
		Array(int n){
			arr=new T[n];
			size=n;
		}
		void read(){
			for(int i=0;i<size;i++)
				cin>>arr[i];
		}
		void print();
};
template<class T>
void Array<T> :: print(){
	for(int i=0;i<size;i++)
	cout<<arr[i];
}
int main(){
	Array <int> A(5);
	A.read();
	A.print();
	Array <char> B(5);
	B.read();
	B.print();
}
