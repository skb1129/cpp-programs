#include<iostream>
using namespace std;
class num{
	int x,y;
	public:
		num(){
			x=0;
			y=0;
		}
		void get(){
			cin>>x>>y;
		}
		void show(){
			cout<<x<<endl<<y;
		}
		num operator+(num obj){
			num res;
			res.x=x+obj.x;
			res.y=y+obj.y;
			return res;
		}
		num operator*(num obj){
			num res;
			res.x=x*obj.x;
			res.y=y*obj.y;
			return res;
		}
		num operator/(num obj){
			num res;
			res.x=x/obj.x;
			res.y=y/obj.y;
			return res;
		}
		num operator-(num obj){
			num res;
			res.x=x-obj.x;
			res.y=y-obj.y;
			return res;
		}
};
int main(){
	num c1,c2,c3,res;
	c1.get();
	c2.get();
	c3.get();
	res=(c1*c3+c2)/(c1-c2);
	res.show();
	return 0;
}
