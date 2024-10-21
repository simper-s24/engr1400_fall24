#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


void foo() {
	char choice = 'r';
	int sandwich = 57;
}


int main() {

	//sandwich++;
	
	for (int index = 0; index < 5; index++)
		cout << index << " ";
	//cout << index << " ";
	cout << endl;

	cout << "How many points in each game?\n";
	int list[100];
	int i = 0;
	do  {
		cin >> list[i];
		i++;
	} while (list[i - 1] > 0);
	list[i - 1] = -1;

	i = 0;
	int acc = 0;
	while (list[i] != -1) {
		acc += list[i];
		i++;
	}
	cout << "Total points: " << acc;
}

