#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int max_number = 10;
	cout << setw(4) << " ";
	for (int i = 1; i <= max_number; i++) {
		cout << setw(4) << i;
	}
	cout << endl;

	for (int i = 1; i <= max_number; ++i) {
		cout << setw(4) << i;
		for (int j = 1; j <= max_number; ++j) {
			cout << setw(4) << i * j;
		}
		cout << endl;
	}
	return 0;
}