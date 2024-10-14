#include <iostream>
#include<string>

using namespace std;

void ArraySearch(int data[], int count, int target);

int main() {
	
	int i = 45;
	cout << "i = " << i << endl;
	double d = i;
	cout << "d = " << d << endl;

	int a = 12;
	int b = 5;

	cout << static_cast<double>(a) / b << endl;




	double f = 10 / 4;

	int j = '5';

	int count = 10;
	int input[] = {3, 4, 76, 43, 101, 5, 1, 0, 7, 12};

	ArraySearch(input, count, 34);
	ArraySearch(input, count, 12);
	ArraySearch(input, count, 56);


	string value = "this is what we do";

	//getline(cin, value);

	for (int i = 0; i < value.size(); i++) {
		if (value[i] > 'a' && value[i] < 'm') {
			cout << value[i];
		}
	}
}

void ArraySearch(int data[], int count, int target)
{
}
