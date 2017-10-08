#include <iostream>
using namespace std;

double division(double a, double b) {
	if( b == 0 ) {
		throw "Division by zero condition!";
	}
	else if(b<0) {
		throw 1;
	}
	return (a/b);
}

int main () {
	double x;
	double y;
	double z;
	cin>>x>>y;
	try {
		z = division(x, y);
		cout << z << endl;
	}
	catch (const char* msg) {
		cerr << msg;
	}
	catch (...) {
		cerr << "ERROR Negative Denominator";
	}
	return 0;
}
