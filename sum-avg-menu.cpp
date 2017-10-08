#include<iostream>
using namespace std;
class menu{
	public:
	double a[100];
	int n,i;
	void read(){
		for(i=0;i<n;i++)
			cin >> a[i];
	}
	void sum(){
		double sum=0;
		for(i=0;i<n;i++)
			sum=sum+a[i];
		cout << "SUM : "<< sum;
	}
	void avg(){
		double sum=0;
		for(i=0;i<n;i++)
			sum=sum+a[i];
		cout << "AVG : "<< sum/n;
	}
	void smallest(){
		double s=a[0];
		for(i=1;i<n;i++){
			if(s>a[i]){
				s=a[i];
			}
		}
		cout << "SMALLEST : "<< s;
	}
	void biggest(){
		double b=a[0];
		for(i=1;i<n;i++){
			if(b<a[i]){
				b=a[i];
			}
		}
		cout << "BIGGEST : "<< b;
	}
};
int main(){
	int n;
	menu x;
	cout << "Enter the number of inputs : ";
	cin >> x.n;
	cout << "Enter the values : \n";
	x.read();
	while(1){
	cout << "\nEnter you response :\n1.Sum\n2.Average\n3.Smallest\n4.Biggest\n5.Exit\n";
	cin >> n;
	switch(n){
		case 1:
			x.sum();
			break;
		case 2:
			x.avg();
			break;
		case 3:
			x.smallest();
			break;
		case 4:
			x.biggest();
			break;
	}
	if(n==5)
		break;
}
}
