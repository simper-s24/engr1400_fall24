#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>


using namespace std;

int foo(vector<int> list2) {
	int sum = 0;
	for (int i = 0; i < list2.size(); i++)
		sum += list2[i];
	cout << "list2 address: " << &list2  << endl;
	return sum;
}

int bar(vector<int>* pv) {
	int sum = 0;
	cout << "*pv address: " << &pv << "; target address: " << pv << endl;
	for (int i = 0; i < (*pv).size(); i++)
		sum += (*pv)[i];
	return sum;
}

void MemoryLeak() {
	int size = 1000000;
	int* ptr = nullptr;
	for (int i = 0; i < size; i++)
	{
		ptr = new int[size];
	}
}

int main() {

	MemoryLeak();

	vector<int> list;
	vector<int>* ptr = nullptr;
	ptr = &list;

	list.push_back(7);
	list.push_back(73);
	
	cout << "list address: " << &list << endl;
	cout << "*ptr address: " << &ptr << "; target address: " << ptr << endl;

	foo(list);
	bar(ptr);

}

