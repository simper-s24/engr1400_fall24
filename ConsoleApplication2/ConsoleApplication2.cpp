#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


void foo() {
	char choice = 'r';
}


int main() {

	char choice;

	int list[] = { 56,8,7,8,4,2,4,5,6 };


	bool isRunning = true;
	while (isRunning) {
		cout << "What do you want to do: ";
		cin >> choice;

		bool first = true;

		switch (choice) {
		case 'A':
		case 'a':
			cout << "You typed an a" << endl;
			break;
		case 'd':
			cout << "You typed a d" << endl;
			foo();
			break;
		case '3':
			int accumulator;
			for (int i = 0; i < 9; i++) {
				accumulator = i;
				cout << list[i];
				if (i != 9 - 1) {
					cout << ", ";
				}
			}
			cout << accumulator;
			cout << endl;
			break;
		case 'q':
			cout << "You typed a q" << endl;
			isRunning = false;
			break;
		default:
			cout << "I don't know that command" << endl;
			break;
		}
	}

	/*
	bool isEndOfAlphabet = choice >= 's' && choice <= 'w';

	if (choice == 'a' || choice == 'A')
		cout << "You type 'a' or 'A'" << endl;
	else if (choice == 1)
		cout << "You typed a 1" << endl;
	else if (choice == 2)
		cout << "You typed a 2" << endl;
	else if (choice == 3)
		cout << "You typed a 3" << endl;
	else if (isEndOfAlphabet)
		cout << "You typed an 's' to 'w'" << endl;
	else
		cout << "I don't know that command" << endl;
	//*/
}

