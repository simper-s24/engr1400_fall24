#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;




int main() {

	ifstream file;
	
	file.open("Class.txt");

	string name;

	int i = 1;
	//while (getline(file, name)) {
	while (file >> name) {
		
		cout << "Person " << i << ": " << name << endl;

		i++;
	}

}

