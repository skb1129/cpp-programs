#include<iostream>
using namespace std;
class num{
	int a[100]={0},i,n;
	friend main();
	public:
		void get(){
			cout<<"Enter the number of inputs : ";
			cin>>n;
			cout<<"Enter the numbers : \n";
			for(i=0;i<n;i++){
				cin>>a[i];
			}
		}
		void put(){
			cout<<"Result :";
			for(i=0;i<n;i++){
				cout<<'\n'<<a[i];
			}
		}
		num operator+(num &obj){
			num res;
			for(i=0;i<((obj.n<n) ? n: obj.n);i++){
				res.a[i]=a[i]+obj.a[i];
			}
			return res;
		}
};
int main(){
	num o1,o2,o3;
	o1.get();
	o2.get();
	o3=o1+o2;
	o3.n=(o1.n>o2.n) ? o1.n: o2.n;
	o3.put();
}
