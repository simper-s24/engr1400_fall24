#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;




int main() {


	ifstream file;
	ofstream output;

	file.open("class.txt");
	output.open("teacher.txt");

	string name;

	int i = 1;
	//while (getline(file, name)) {
	while (file >> name) {
		
		cout << "Person " << i << ": " << name << endl;

		output << name << ", ";
		i++;
	}
	output << endl << "End of file" << endl;

	file.close();
	output.close();

	int list[] = {5,4,5,6,7,8,88778,87,5};

	

}

