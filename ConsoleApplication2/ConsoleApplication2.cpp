#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>

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


void printVector(vector<int> items) {
	for (int j = 0; j < items.size(); j++) {
		cout << items[j] << ", ";
	}
	cout << endl;
}


int main() {

	int array[20] = { 4,5,6,45,65,12 };
	vector<int> list = { 4,5,6,45,65,12 };

	//vector<int> list(100);
	//list[67] = 12;

	for (int i = 0; i < 10; i++)
	{
		list.push_back(i);
		array[i + 5] = i;
	}

	printVector(list);
	
	int first = (list.size() > 0 ? list[0] : -1);
	
	list.erase(list.begin() + 0);
	printVector(list);

	int last = list[list.size() - 1];
	list.pop_back();
	printVector(list);

	int acc = 0; 
	for (int j = 0; j < list.size(); j++) {
		acc += list[j];
	}
	//cout<< endl << acc;

	cout << "First: " << first << endl;
	cout << "Last: " << last << endl;
}

