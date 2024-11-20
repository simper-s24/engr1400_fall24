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

	cout << "num: " << num << "; address : " << &num << endl;
	cout << "*p: " << p << "; address : " << &p << "; target value: " << *p <<  endl;

	//*
	int b = foo(p);
	cout << num << endl;
	cout << b << endl;
	//*/

	//*
	int b1 = bar(num);
	cout << num << endl;
	cout << b1 << endl;
	//*/
	cout << "b: " << b << "; address : " << &b << endl;
	cout << "b1: " << b1 << "; address : " << &b1 << endl;


	/*int* r = nullptr;
	r = new int[num];

	for (int i = 0; i < num; i++) {
		r[i] = i;
		*(r + i) = r[i] + i;
	}

	for (int i = 0; i < num; i++) {
		cout << *(r + i) << ", ";
	}
	cout << endl;
	cout << r << endl;
	cout << &r << endl;*/
}

