#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number;
	cout << "Enter Number: ";
	cin >> numbers;
	cout << setw(4) << " ";
	for (int i = 1; i <= numbers; i++) {
		cout << setw(4) << i;
	}
	cout << endl;

	for (int i = 1; i <= numbers; ++i) {
		cout << setw(4) << i;
		for (int j = 1; j <= numbers; ++j) {
			cout << setw(4) << i * j;
		}
		cout << endl;
	}
	return 0;
}