#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>


using namespace std;

struct Point {
	int x;
	int y;
};

struct Point3d {
	Point flat;
	int z;
};

struct IntList {
	int data[6];
};


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

	Point here = { 1,2 };
	Point there;
	there.x = 7;
	there.y = 12;

	Point3d space;
	space.flat.x = 37;
	space.z = 62;

	vector<Point> points;
	vector<string> names = { "Cooper", "Kenyon" };

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
	
	int first = (list.size() > 0 ? list.at(0) : -1);
	
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

