#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>


using namespace std;

int foo(int* ptr) {
	(*ptr)++;
	return *ptr + 1;
}

int bar(int n) {
	n++;
	return n + 1;
}

int main() {
	int num = 7;
	int* p = &num;

	//*
	int b = foo(p);
	cout << num << endl;
	cout << b << endl;
	//*/

	/*
	int b = bar(num);
	cout << num << endl;
	cout << b << endl;
	//*/

	int* r = nullptr;
	r = new int[num];

	for (int i = 0; i < num; i++) {
		r[i] = i;
		*(r + i) = r[i] + i;
	}

	for (int i = 0; i < num; i++) {
		cout << *(r + i) << ", ";
	}
	cout << r << endl;
	cout << &r << endl;
}

