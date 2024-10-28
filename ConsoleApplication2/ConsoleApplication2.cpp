#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int d = 6;

int foo(int a) {
	int b = a;
	static int c = 0;
	c += b;
	b *= 11;
	d *= b;
	return c;
}



int main() {
	cout << "d: " << d << endl;

	int num = foo(5); cout << "num: " << num << endl;
	num = foo(5); cout << "num: " << num << endl;
	num = foo(5); cout << "num: " << num << endl;
	num = foo(5); cout << "num: " << num << endl;
	
	cout << "d: " << d << endl;

}

