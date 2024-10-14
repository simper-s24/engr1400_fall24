#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
	double housecost = 2500000.0;
	double rate = 0.056555454;


	cout << " Rate   Total Interest" << endl;
	for (double i = 0; i < 0.1;i = i + 0.01) {
		cout << setprecision(2) << fixed;
		cout << setw(6) << (rate + i) * 100 << "% " << setw(13) << (rate + i) * housecost * 30 << endl;
	}

}

