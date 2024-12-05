#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;
const int SIZE = 7;

void printArray(int list[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << ", ";
	}
	cout << endl;
}

int main() {

	//int list[SIZE] = { 42, 87, 3, 14, -1, 105, 2 };
	int list[SIZE] = { 105, -1, 2, 3, 14, 42, 87, };

	cout << "0: ";
	printArray(list, SIZE);

	for (int j = 0; j < SIZE; j++)
	{
		for (int i = 0; i < SIZE - j - 1; i++)
		{
			if (list[i] > list[i + 1]) {
				int temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}
		}
		cout << j << ": ";
		printArray(list, SIZE);
	}

}

