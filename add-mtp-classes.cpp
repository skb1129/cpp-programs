#include<iostream>
using namespace std;
class skb{
	public:
		float a[100],res;
		int i,n;
		void input(){
			cout << "Enter the number of inputs : ";
			cin >> n;
			for(i=0;i<n;i++)
				cin >> a[i];
		}
		void add(skb o){
			res=0;
			for(i=0;i<o.n;i++)
				res=res+o.a[i];
		}
		void mtp(skb &o){
			res=1;
			for(i=0;i<o.n;i++)
				res=res*o.a[i];
		}
		void mtp(skb *o){
			res=1;
			for(i=0;i<o->n;i++)
				res=res*o->a[i];
		}
};
int main(){
	skb o1,o2,o3,o4;
	o1.input();
	o2.add(o1);
	cout << o2.res << '\n';
	o3.mtp(o1);
	cout << o3.res << '\n';
	o4.mtp(&o1);
	cout << o4.res;
	return 0;	
}
